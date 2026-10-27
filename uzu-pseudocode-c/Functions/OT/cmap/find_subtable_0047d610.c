// Function : find_subtable
// Namespace: OT:cmap
// Entry    : 0047d610
// Prototype: long find_subtable(long param_1, ushort param_2, ushort param_3)
// Body     : 0047d610 - 0047d679


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* OT::cmap::find_subtable(unsigned int, unsigned int) const */

long __cdecl OT::cmap::find_subtable(long param_1,ushort param_2,ushort param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined4 *puVar5;
  bool bVar6;
  uint local_14;
  ushort local_10;
  ushort local_e;
  
  local_10 = param_2 << 8 | param_2 >> 8;
  local_e = param_3 << 8 | param_3 >> 8;
  uVar2 = hb_sorted_array_t<OT::EncodingRecord_const>::bsearch_impl<OT::EncodingRecord>
                    (param_1 + 4,
                     (uint)(ushort)(*(ushort *)(param_1 + 2) << 8 | *(ushort *)(param_1 + 2) >> 8),
                     &local_10,&local_14);
  uVar4 = (ulong)local_14;
  bVar6 = (char)uVar2 == '\0';
  if (bVar6) {
    uVar4 = 0;
  }
  puVar5 = &_hb_NullPool;
  if (!bVar6) {
    puVar5 = (undefined4 *)(param_1 + 4 + uVar4 * 8);
  }
  uVar1 = puVar5[1];
  lVar3 = (ulong)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18) +
          param_1;
  if (uVar1 == 0) {
    lVar3 = 0;
  }
  return lVar3;
}


