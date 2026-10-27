// Function : free_static_shapers
// Namespace: 
// Entry    : 00417cf0
// Prototype: undefined free_static_shapers(void)
// Body     : 00417cf0 - 00417d1d


/* WARNING: Removing unreachable block (ram,0x00417d01) */
/* free_static_shapers() */

void free_static_shapers(void)

{
  undefined1 *__ptr;
  
  __ptr = static_shapers;
  if (static_shapers != (undefined1 *)0x0) {
    LOCK();
    static_shapers = (undefined1 *)0x0;
    UNLOCK();
    if (__ptr != &_hb_all_shapers) {
      free(__ptr);
      return;
    }
  }
  return;
}


