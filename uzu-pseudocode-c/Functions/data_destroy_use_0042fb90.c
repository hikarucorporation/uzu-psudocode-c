// Function : data_destroy_use
// Namespace: 
// Entry    : 0042fb90
// Prototype: undefined data_destroy_use(void * param_1)
// Body     : 0042fb90 - 0042fc15


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* data_destroy_use(void*) */

void __cdecl data_destroy_use(void *param_1)

{
  void *__ptr;
  uint *__ptr_00;
  ulong uVar1;
  
  __ptr = *(void **)((long)param_1 + 8);
  if (__ptr != (void *)0x0) {
    __ptr_00 = *(uint **)((long)__ptr + 0x20);
    if ((__ptr_00 != (uint *)0x0) && (*__ptr_00 != 0)) {
      uVar1 = 0;
      do {
        if (*(long *)(__ptr_00 + uVar1 * 2 + 10) != 0) {
          free(*(void **)(__ptr_00 + uVar1 * 2 + 0x18));
          if ((char)__ptr_00[1] != '\0') {
            free(*(void **)(__ptr_00 + uVar1 * 2 + 10));
          }
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < *__ptr_00);
      free(__ptr_00);
    }
    free(__ptr);
  }
  free(param_1);
  return;
}


