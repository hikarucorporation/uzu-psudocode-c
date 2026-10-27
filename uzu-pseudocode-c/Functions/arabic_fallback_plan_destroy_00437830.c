// Function : arabic_fallback_plan_destroy
// Namespace: 
// Entry    : 00437830
// Prototype: undefined arabic_fallback_plan_destroy(uint * param_1)
// Body     : 00437830 - 00437897


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* arabic_fallback_plan_destroy(arabic_fallback_plan_t*) */

void __cdecl arabic_fallback_plan_destroy(uint *param_1)

{
  ulong uVar1;
  
  if ((param_1 == (uint *)0x0) || (*param_1 == 0)) {
    return;
  }
  uVar1 = 0;
  do {
    if (*(long *)(param_1 + uVar1 * 2 + 10) != 0) {
      free(*(void **)(param_1 + uVar1 * 2 + 0x18));
      if ((char)param_1[1] != '\0') {
        free(*(void **)(param_1 + uVar1 * 2 + 10));
      }
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < *param_1);
  free(param_1);
  return;
}


