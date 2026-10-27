// Function : free_langs
// Namespace: 
// Entry    : 003da8f0
// Prototype: undefined free_langs(void)
// Body     : 003da8f0 - 003da933


/* WARNING: Removing unreachable block (ram,0x003da900) */
/* free_langs() */

void free_langs(void)

{
  undefined8 *puVar1;
  undefined8 *__ptr;
  
  __ptr = langs;
  LOCK();
  langs = (undefined8 *)0x0;
  UNLOCK();
  while (__ptr != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*__ptr;
    free((void *)__ptr[1]);
    free(__ptr);
    __ptr = puVar1;
  }
  return;
}


