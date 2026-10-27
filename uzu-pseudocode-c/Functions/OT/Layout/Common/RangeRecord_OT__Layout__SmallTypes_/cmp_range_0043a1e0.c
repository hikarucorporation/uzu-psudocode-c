// Function : cmp_range
// Namespace: OT:Layout:Common:RangeRecord_OT__Layout__SmallTypes_
// Entry    : 0043a1e0
// Prototype: ulong cmp_range(ushort * param_1, ushort * param_2)
// Body     : 0043a1e0 - 0043a23d


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* OT::Layout::Common::RangeRecord<OT::Layout::SmallTypes>::cmp_range(void const*, void const*) */

ulong __cdecl
OT::Layout::Common::RangeRecord<OT::Layout::SmallTypes>::cmp_range(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ulong uVar2;
  ushort uVar3;
  
  uVar1 = *param_1 << 8 | *param_1 >> 8;
  uVar3 = *param_2 << 8 | *param_2 >> 8;
  if (uVar1 < uVar3) {
    return 0xffffffff;
  }
  uVar2 = 1;
  if (uVar1 <= uVar3) {
    uVar1 = param_1[1] << 8 | param_1[1] >> 8;
    uVar3 = param_2[1] << 8 | param_2[1] >> 8;
    if (uVar1 < uVar3) {
      return 0xffffffff;
    }
    if (uVar1 <= uVar3) {
      uVar1 = param_1[2] << 8 | param_1[2] >> 8;
      uVar3 = param_2[2] << 8 | param_2[2] >> 8;
      uVar2 = 0xffffffff;
      if (uVar3 <= uVar1) {
        uVar2 = (ulong)(uVar3 < uVar1);
      }
    }
  }
  return uVar2;
}


