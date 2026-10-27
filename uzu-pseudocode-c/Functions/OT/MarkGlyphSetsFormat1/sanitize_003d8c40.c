// Function : sanitize
// Namespace: OT:MarkGlyphSetsFormat1
// Entry    : 003d8c40
// Prototype: ulong sanitize(MarkGlyphSetsFormat1 * this, long param_1)
// Body     : 003d8c40 - 003d8d46


/* OT::MarkGlyphSetsFormat1::sanitize(hb_sanitize_context_t*) const */

ulong __thiscall OT::MarkGlyphSetsFormat1::sanitize(MarkGlyphSetsFormat1 *this,long param_1)

{
  MarkGlyphSetsFormat1 *pMVar1;
  uint uVar2;
  ushort uVar3;
  ulong uVar4;
  ushort uVar5;
  int iVar6;
  long lVar7;
  undefined8 unaff_R15;
  ulong uVar8;
  
  pMVar1 = this + 4;
  if (((((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pMVar1 - *(long *)(param_1 + 8))) ||
       ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pMVar1 - *(long *)(param_1 + 8)))) ||
      (uVar2 = (uint)(ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8),
      (uint)(*(int *)(param_1 + 0x10) - (int)pMVar1) < uVar2 * 4)) ||
     (iVar6 = *(int *)(param_1 + 0x1c) + uVar2 * -4, *(int *)(param_1 + 0x1c) = iVar6, iVar6 < 1)) {
LAB_003d8d32:
    uVar8 = 0;
  }
  else {
    uVar5 = *(ushort *)(this + 2);
    uVar8 = CONCAT71((int7)((ulong)unaff_R15 >> 8),1);
    if (uVar5 != 0) {
      uVar3 = uVar5 << 8 | uVar5 >> 8;
      uVar5 = 1;
      if (1 < uVar3) {
        uVar5 = uVar3;
      }
      lVar7 = 0;
      do {
        if ((MarkGlyphSetsFormat1 *)(ulong)*(uint *)(param_1 + 0x18) <
            this + ((lVar7 + 8) - *(long *)(param_1 + 8))) goto LAB_003d8d32;
        uVar2 = *(uint *)(this + lVar7 + 4);
        if (uVar2 != 0) {
          uVar4 = hb_sanitize_context_t::_dispatch<OT::Layout::Common::Coverage>
                            (param_1,(ushort *)
                                     (this + (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 |
                                              (uVar2 & 0xff00) << 8 | uVar2 << 0x18)));
          if ((char)uVar4 == '\0') {
            if ((0x1f < *(uint *)(param_1 + 0x2c)) ||
               (*(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1,
               *(char *)(param_1 + 0x28) == '\0')) goto LAB_003d8d32;
            *(undefined4 *)(this + lVar7 + 4) = 0;
          }
        }
        lVar7 = lVar7 + 4;
      } while ((ulong)uVar5 * 4 != lVar7);
    }
  }
  return uVar8 & 0xffffffff;
}


