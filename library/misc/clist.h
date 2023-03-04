/*
 * $Id: misc_clist.h,v 1.0 2023-03-03 07:15:37 clib2devs Exp $
*/


#ifndef CLIST_H
#define CLIST_H

#include <features.h>

__BEGIN_DECLS

typedef struct CList {
    void * (* add)         (struct CList *l, void *o);            /* Add object to the end of a list */
    void * (* insert)      (struct CList *l, void *o, int n);     /* Insert object at position 'n' */
    void * (* replace)     (struct CList *l, void *o, int n);     /* Replace object at position 'n' */
    void   (* remove)      (struct CList *l, int n);              /* Remove object at position 'n' */
    void * (* at)          (struct CList *l, int n);              /* Get object at position 'n' */
    int    (* realloc)     (struct CList *l, int n);              /* Reallocate list to 'size' items */
    int    (* count)       (struct CList *l);                     /* Get list size in items */
    void * (* firstMatch)  (struct CList *l, const void *o, size_t shift, size_t size, int string);
    /* Returns object with first match of string or byte compare */
    void * (* lastMatch)   (struct CList *l, const void *o, size_t shift, size_t size, int string);
    /* Returns object with last match of string or byte compare */
    int    (* index)       (struct CList *l);                     /* Get index of previos search match */
    int    (* swap)        (struct CList *l, int a, int b);       /* Swap, replace two items with index a b */
    int    (* allocSize)   (struct CList *l);                     /* Get allocated size in items */
    size_t (* itemSize)    (struct CList *l);                     /* Get item size in bytes */
    void   (* print)       (struct CList *l, size_t shift, int n, const char *type);   /* Print list data */
    void   (* clear)       (struct CList *l);                     /* Clear list */
    void   (* free)        (struct CList *l);                     /* Destroy struct CList and all data */
    void  *priv;           /* NOT FOR USE, private data */
} CList;

CList  *CList_init(size_t objSize); /* Set list object size in bytes */
void   *cListAdd(CList *l, void *o);
int     cListAllocSize(CList *l);
void   *cListAt(CList *l, int n);
void    cListClear(CList *l);
int     cListCount(CList *l);
void   *cListFirstMatch(CList *l, const void *o, size_t shift, size_t size, int string);
void    cListFree(CList *l);
int     cListIndex(CList *l);
void   *cListInsert(CList *l, void *o, int n);
size_t  cListItemSize(CList *l);
void   *cListLastMatch(struct CList *l, const void *o, size_t shift, size_t size, int string);
void    cListPrint(CList *l, size_t shift, int n, const char *type);
int     cListRealloc(CList *l, int n);
void    cListRemove(CList *l, int n);
void   *cListReplace(CList *l, void *o, int n);
int     cListSwap(CList *l, int a, int b);

__END_DECLS

#endif /* CLIST_H */