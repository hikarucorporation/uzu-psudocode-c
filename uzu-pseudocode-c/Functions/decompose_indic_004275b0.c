// Function : decompose_indic
// Namespace: 
// Entry    : 004275b0
// Prototype: bool decompose_indic(long param_1, int param_2, int * param_3, undefined4 * param_4)
// Body     : 004275b0 - 004275f0


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* decompose_indic(hb_ot_shape_normalize_context_t const*, unsigned int, unsigned int*, unsigned
   int*) */

bool __cdecl decompose_indic(long param_1,int param_2,int *param_3,undefined4 *param_4)

{
  long lVar1;
  int iVar2;
  
  if (((param_2 - 0x9dcU < 2) || (param_2 == 0x931)) || (param_2 == 0xb94)) {
    return false;
  }
  lVar1 = *(long *)(param_1 + 0x18);
  *param_3 = param_2;
  *param_4 = 0;
  iVar2 = (**(code **)(lVar1 + 0x48))();
  return iVar2 != 0;
}


