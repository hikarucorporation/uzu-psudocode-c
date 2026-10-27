// Function : data_destroy_arabic
// Namespace: 
// Entry    : 00434000
// Prototype: undefined data_destroy_arabic(void * param_1)
// Body     : 00434000 - 00434065


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* data_destroy_arabic(void*) */

void __cdecl data_destroy_arabic(void *param_1)

{
  uint *__ptr;
  ulong uVar1;
  
  __ptr = *(uint **)((long)param_1 + 0x20);
  if ((__ptr != (uint *)0x0) && (*__ptr != 0)) {
    uVar1 = 0;
    do {
      if (*(long *)(__ptr + uVar1 * 2 + 10) != 0) {
        free(*(void **)(__ptr + uVar1 * 2 + 0x18));
        if ((char)__ptr[1] != '\0') {
          free(*(void **)(__ptr + uVar1 * 2 + 10));
        }
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


