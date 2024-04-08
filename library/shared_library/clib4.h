#ifndef _CLIB4_H
#define _CLIB4_H

#include <proto/dos.h>
#include <proto/exec.h>

#include <setjmp.h>
#include "map.h"
#include "uuid.h"
#include "ipc_headers.h"

#define RESOURCE_NAME "clib4.resource"

extern int setjmp_spe(jmp_buf);
extern void longjmp_spe(jmp_buf, int);
extern void longjmp_altivec(jmp_buf, int);
extern int  setjmp_altivec(jmp_buf);
extern void siglongjmp_spe(sigjmp_buf, int);
extern int __sigsetjmp_spe(struct __jmp_buf_tag, int);
extern void _longjmp_spe(struct __jmp_buf_tag, int);
extern int _setjmp_spe(struct __jmp_buf_tag);                                                                                                 /* 1796 */

struct Clib4Resource {
    struct Library          resource;       /* must be first */
    uint32                  size;           /* for struct validation only */
    struct SignalSemaphore  semaphore;      /* for list arbitration */
    struct hashmap         *sysv_children;  /* list of sysv parent nodes */
    struct hashmap         *children;       /* list of spawned processes */
    struct hashmap         *uxSocketsMap;
    struct _clib4          *fallbackClib;
    /* SysVIPC fields */
    int locked;
    struct
    {
        struct IPCIdKeyMap keymap;
        uint32 totshm, shmmax;
    } shmcx;
    struct
    {
        struct IPCIdKeyMap keymap;
        uint32 qsizemax;
    } msgcx;
    struct
    {
        struct IPCIdKeyMap keymap;
    } semcx;
    uint32 altivec;
    uint32 cpufamily;
};

struct Clib4Node {
    uint32           pid;  /* the process PID */
    uint32           pPid; /* the process Parent PID */
    char             uuid[UUID4_LEN + 1];
    /* SysVIPC fields */
    struct UndoInfo *undo;
    int32            errNo;
};

struct Clib4Process {
    uint32  pid;       /* the process PID */
    uint32  pPid;      /* the process Parent PID */
    uint32  status;    /* the status of process */
};

struct Clib4Base {
    struct Library libNode;
    uint16 pad;
    BPTR SegList;
};

int libReserved(void);
uint32 libRelease(struct LibraryManagerInterface *Self);
uint32 libObtain(struct LibraryManagerInterface *Self);
struct Clib4Base *libOpen(struct LibraryManagerInterface *Self, uint32 version);
struct Clib4Base *libInit(struct Clib4Base *libBase, BPTR seglist, struct ExecIFace *const iexec);
BPTR libExpunge(struct LibraryManagerInterface *Self);

static void _start_ctors(void (*__CTOR_LIST__[])(void));
static void _start_dtors(void (*__DTOR_LIST__[])(void));
static void closeLibraries();

int library_start(char *argstr,
                  int arglen,
                  int (*start_main)(int, char **),
                  void (*__EXT_CTOR_LIST__[])(void),
                  void (*__EXT_DTOR_LIST__[])(void));

int32 _start(STRPTR args,
             int32 arglen,
             struct ExecBase *sysbase);

extern int _main(char *argstr,
                 int arglen,
                 int (*start_main)(int, char **),
                 void (*__EXT_CTOR_LIST__[])(void),
                 void (*__EXT_DTOR_LIST__[])(void));


#endif