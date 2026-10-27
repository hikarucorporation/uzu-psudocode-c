// Function : cmp
// Namespace: hb_ot_map_builder_t:feature_info_t
// Entry    : 0041d770
// Prototype: uint cmp(uint * param_1, uint * param_2)
// Body     : 0041d770 - 0041d795


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_ot_map_builder_t::feature_info_t::cmp(void const*, void const*) */

uint __cdecl hb_ot_map_builder_t::feature_info_t::cmp(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  if (*param_1 != *param_2) {
    return (uint)(*param_2 <= *param_1) * 2 - 1;
  }
  uVar1 = 0xffffffff;
  if (param_2[1] <= param_1[1]) {
    uVar1 = (uint)(param_2[1] < param_1[1]);
  }
  return uVar1;
}


