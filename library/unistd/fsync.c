/*
 * $Id: unistd_fsync.c,v 1.8 2006-01-08 12:04:27 clib2devs Exp $
*/

#ifndef _UNISTD_HEADERS_H
#include "unistd_headers.h"
#endif /* _UNISTD_HEADERS_H */

/* fsync() flushes all pending data and metadata on a file descriptor.
   The original source code was contributed by Peter Bengtsson. */

int
fsync(int file_descriptor) {
    struct fd *fd;
    int result = ERROR;

    ENTER();

    SHOWVALUE(file_descriptor);

    __check_abort();

    assert(file_descriptor >= 0 && file_descriptor < __num_fd);
    assert(__fd[file_descriptor] != NULL);
    assert(FLAG_IS_SET(__fd[file_descriptor]->fd_Flags, FDF_IN_USE));

    __stdio_lock();

    fd = __get_file_descriptor(file_descriptor);
    if (fd == NULL) {
        __set_errno(EBADF);
        goto out;
    }

    __fd_lock(fd);

    if (__sync_fd(fd, 1) < 0) /* flush everything */
        goto out;

    result = OK;

out:

    __fd_unlock(fd);
    __stdio_unlock();

    RETURN(result);
    return (result);
}
