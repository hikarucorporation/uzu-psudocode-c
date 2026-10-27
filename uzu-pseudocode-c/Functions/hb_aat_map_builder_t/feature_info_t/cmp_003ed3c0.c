// Function : cmp
// Namespace: hb_aat_map_builder_t:feature_info_t
// Entry    : 003ed3c0
// Prototype: uint cmp(int * param_1, int * param_2)
// Body     : 003ed3c0 - 003ed408


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_aat_map_builder_t::feature_info_t::cmp(void const*, void const*) */

uint __cdecl hb_aat_map_builder_t::feature_info_t::cmp(int *param_1,int *param_2)

{
  uint uVar1;
  
  if (*param_1 != *param_2) {
    return (uint)(*param_2 <= *param_1) * 2 - 1;
  }
  if ((char)param_1[2] == '\0') {
    if (1 < (uint)(param_2[1] ^ param_1[1])) {
      return (uint)(param_2[1] <= param_1[1]) * 2 - 1;
    }
  }
  uVar1 = 0xffffffff;
  if ((uint)param_2[3] <= (uint)param_1[3]) {
    uVar1 = (uint)((uint)param_2[3] < (uint)param_1[3]);
  }
  return uVar1;
}


