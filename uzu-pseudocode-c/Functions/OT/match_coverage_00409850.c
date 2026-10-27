// Function : match_coverage
// Namespace: OT
// Entry    : 00409850
// Prototype: undefined8 match_coverage(uint * param_1, ushort param_2, long param_3)
// Body     : 00409850 - 00409876


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* OT::match_coverage(hb_glyph_info_t&, unsigned int, void const*) */

undefined8 __cdecl OT::match_coverage(uint *param_1,ushort param_2,long param_3)

{
  uint uVar1;
  undefined4 extraout_var;
  Coverage *this;
  
  if (param_2 == 0) {
    this = (Coverage *)&_hb_NullPool;
  }
  else {
    this = (Coverage *)(param_3 + (ulong)param_2);
  }
  uVar1 = Layout::Common::Coverage::get_coverage(this,*param_1);
  return CONCAT71((int7)(CONCAT44(extraout_var,uVar1) >> 8),uVar1 != 0xffffffff);
}


