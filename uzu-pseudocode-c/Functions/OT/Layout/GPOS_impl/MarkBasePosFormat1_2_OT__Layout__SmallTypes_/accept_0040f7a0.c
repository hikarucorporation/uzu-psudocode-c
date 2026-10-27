// Function : accept
// Namespace: OT:Layout:GPOS_impl:MarkBasePosFormat1_2_OT__Layout__SmallTypes_
// Entry    : 0040f7a0
// Prototype: ulong accept(long param_1, uint param_2)
// Body     : 0040f7a0 - 0040f818


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* OT::Layout::GPOS_impl::MarkBasePosFormat1_2<OT::Layout::SmallTypes>::accept(hb_buffer_t*,
   unsigned int) */

ulong __cdecl
OT::Layout::GPOS_impl::MarkBasePosFormat1_2<OT::Layout::SmallTypes>::accept
          (long param_1,uint param_2)

{
  byte bVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  
  uVar2 = CONCAT71((uint7)(uint3)(param_2 >> 8),1);
  if ((*(byte *)(param_1 + 0xc + (ulong)param_2 * 0x14) & 0x40) != 0) {
    bVar4 = *(byte *)(param_1 + (ulong)param_2 * 0x14 + 0xe);
    bVar3 = bVar4 & 0xf;
    if ((bVar4 & 0x10) != 0) {
      bVar3 = 0;
    }
    if ((((param_2 != 0) && (bVar3 != 0)) &&
        ((*(ushort *)(param_1 + 0xc + (ulong)(param_2 - 1) * 0x14) & 0x48) == 0x40)) &&
       (bVar1 = *(byte *)(param_1 + (ulong)(param_2 - 1) * 0x14 + 0xe), (bVar4 ^ bVar1) < 0x20)) {
      bVar4 = 1;
      if ((bVar1 & 0x10) == 0) {
        bVar4 = (bVar1 & 0xf) + 1;
      }
      uVar2 = (ulong)(bVar3 != bVar4);
    }
  }
  return uVar2;
}


