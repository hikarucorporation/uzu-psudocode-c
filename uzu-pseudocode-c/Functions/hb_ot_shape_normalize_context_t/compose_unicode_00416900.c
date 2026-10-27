// Function : compose_unicode
// Namespace: hb_ot_shape_normalize_context_t
// Entry    : 00416900
// Prototype: bool compose_unicode(long param_1, int param_2, int param_3, undefined4 * param_4)
// Body     : 00416900 - 00416925


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_ot_shape_normalize_context_t::compose_unicode(hb_ot_shape_normalize_context_t const*, unsigned
   int, unsigned int, unsigned int*) */

bool __cdecl
hb_ot_shape_normalize_context_t::compose_unicode
          (long param_1,int param_2,int param_3,undefined4 *param_4)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *param_4 = 0;
  bVar3 = false;
  if ((param_2 != 0) && (param_3 != 0)) {
    iVar2 = (**(code **)(lVar1 + 0x40))();
    bVar3 = iVar2 != 0;
  }
  return bVar3;
}


