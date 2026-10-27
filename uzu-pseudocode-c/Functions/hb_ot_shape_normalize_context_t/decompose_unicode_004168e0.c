// Function : decompose_unicode
// Namespace: hb_ot_shape_normalize_context_t
// Entry    : 004168e0
// Prototype: bool decompose_unicode(long param_1, undefined4 param_2, undefined4 * param_3, undefined4 * param_4)
// Body     : 004168e0 - 004168fd


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_ot_shape_normalize_context_t::decompose_unicode(hb_ot_shape_normalize_context_t const*,
   unsigned int, unsigned int*, unsigned int*) */

bool __cdecl
hb_ot_shape_normalize_context_t::decompose_unicode
          (long param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  long lVar1;
  int iVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *param_3 = param_2;
  *param_4 = 0;
  iVar2 = (**(code **)(lVar1 + 0x48))();
  return iVar2 != 0;
}


