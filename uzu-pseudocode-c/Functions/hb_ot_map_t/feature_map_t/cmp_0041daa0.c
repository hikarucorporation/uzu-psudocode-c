// Function : cmp
// Namespace: hb_ot_map_t:feature_map_t
// Entry    : 0041daa0
// Prototype: ulong cmp(uint * param_1, uint * param_2)
// Body     : 0041daa0 - 0041dab1


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_ot_map_t::feature_map_t::cmp(void const*, void const*) */

ulong __cdecl hb_ot_map_t::feature_map_t::cmp(uint *param_1,uint *param_2)

{
  ulong uVar1;
  
  uVar1 = 0xffffffff;
  if (*param_2 <= *param_1) {
    uVar1 = (ulong)(*param_2 < *param_1);
  }
  return uVar1;
}


