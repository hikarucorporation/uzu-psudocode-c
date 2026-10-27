// Function : decompose_khmer
// Namespace: 
// Entry    : 00423e50
// Prototype: bool decompose_khmer(long param_1, undefined4 param_2, undefined4 * param_3, undefined4 * param_4)
// Body     : 00423e50 - 00423ed8


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* decompose_khmer(hb_ot_shape_normalize_context_t const*, unsigned int, unsigned int*, unsigned
   int*) */

bool __cdecl
decompose_khmer(long param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  long lVar1;
  int iVar2;
  
  switch(param_2) {
  case 0x17be:
    *param_3 = 0x17c1;
    *param_4 = 0x17be;
    return true;
  case 0x17bf:
    *param_3 = 0x17c1;
    *param_4 = 0x17bf;
    return true;
  case 0x17c0:
    *param_3 = 0x17c1;
    *param_4 = 0x17c0;
    return true;
  default:
    lVar1 = *(long *)(param_1 + 0x18);
    *param_3 = param_2;
    *param_4 = 0;
    iVar2 = (**(code **)(lVar1 + 0x48))();
    return iVar2 != 0;
  case 0x17c4:
    *param_3 = 0x17c1;
    *param_4 = 0x17c4;
    return true;
  case 0x17c5:
    *param_3 = 0x17c1;
    *param_4 = 0x17c5;
    return true;
  }
}


