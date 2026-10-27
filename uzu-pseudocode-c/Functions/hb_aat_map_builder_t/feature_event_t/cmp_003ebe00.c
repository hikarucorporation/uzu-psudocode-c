// Function : cmp
// Namespace: hb_aat_map_builder_t:feature_event_t
// Entry    : 003ebe00
// Prototype: uint cmp(uint * param_1, uint * param_2)
// Body     : 003ebe00 - 003ebe6d


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_aat_map_builder_t::feature_event_t::cmp(void const*, void const*) */

uint __cdecl hb_aat_map_builder_t::feature_event_t::cmp(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = 0xffffffff;
  if (*param_2 <= *param_1) {
    if (*param_2 < *param_1) {
      return 1;
    }
    if (((byte)param_2[1] <= (byte)param_1[1]) && (uVar1 = 1, (byte)param_1[1] <= (byte)param_2[1]))
    {
      if (param_1[2] != param_2[2]) {
        return (uint)((int)param_2[2] <= (int)param_1[2]) * 2 - 1;
      }
      if ((char)param_1[4] == '\0') {
        if (1 < (param_2[3] ^ param_1[3])) {
          return (uint)((int)param_2[3] <= (int)param_1[3]) * 2 - 1;
        }
      }
      uVar1 = 0xffffffff;
      if (param_2[5] <= param_1[5]) {
        uVar1 = (uint)(param_2[5] < param_1[5]);
      }
      return uVar1;
    }
  }
  return uVar1;
}


