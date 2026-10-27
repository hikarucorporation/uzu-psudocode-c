// Function : cmp
// Namespace: hb_ot_map_t:lookup_map_t
// Entry    : 0041df60
// Prototype: ulong cmp(ushort * param_1, ushort * param_2)
// Body     : 0041df60 - 0041df73


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_ot_map_t::lookup_map_t::cmp(void const*, void const*) */

ulong __cdecl hb_ot_map_t::lookup_map_t::cmp(ushort *param_1,ushort *param_2)

{
  ulong uVar1;
  
  uVar1 = 0xffffffff;
  if (*param_2 <= *param_1) {
    uVar1 = (ulong)(*param_2 < *param_1);
  }
  return uVar1;
}


