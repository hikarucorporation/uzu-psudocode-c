// Function : sanitize
// Namespace: AAT:SubtableGlyphCoverage
// Entry    : 003dbd20
// Prototype: undefined8 sanitize(SubtableGlyphCoverage * this, long param_1, uint param_2)
// Body     : 003dbd20 - 003dbdf2


/* AAT::SubtableGlyphCoverage::sanitize(hb_sanitize_context_t*, unsigned int) const */

undefined8 __thiscall
AAT::SubtableGlyphCoverage::sanitize(SubtableGlyphCoverage *this,long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  SubtableGlyphCoverage *pSVar7;
  
  lVar2 = (ulong)param_2 * 4;
  if ((int)((ulong)lVar2 >> 0x20) == 0) {
    lVar6 = *(long *)(param_1 + 8);
    pSVar7 = (SubtableGlyphCoverage *)(ulong)*(uint *)(param_1 + 0x18);
    if (((this + -lVar6 <= pSVar7) && ((uint)lVar2 <= (uint)(*(int *)(param_1 + 0x10) - (int)this)))
       && (iVar3 = *(int *)(param_1 + 0x1c) - (uint)lVar2, *(int *)(param_1 + 0x1c) = iVar3,
          0 < iVar3)) {
      if (param_2 != 0) {
        uVar5 = *(int *)(param_1 + 0x38) + 7U >> 3;
        lVar4 = 0;
        do {
          uVar1 = *(uint *)(this + lVar4);
          if (1 < (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18)
                  + 1) {
            if (pSVar7 < this + ((lVar4 + 4) - lVar6)) {
              return 0;
            }
            uVar1 = *(uint *)(this + lVar4);
            lVar6 = *(long *)(param_1 + 8);
            pSVar7 = (SubtableGlyphCoverage *)(ulong)*(uint *)(param_1 + 0x18);
            if (pSVar7 < this + (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                                uVar1 << 0x18) + -lVar6) {
              return 0;
            }
            if ((uint)(*(int *)(param_1 + 0x10) -
                      (int)(this + (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8
                                   | uVar1 << 0x18))) < uVar5) {
              return 0;
            }
            iVar3 = *(int *)(param_1 + 0x1c) - uVar5;
            *(int *)(param_1 + 0x1c) = iVar3;
            if (iVar3 < 1) {
              return 0;
            }
          }
          lVar4 = lVar4 + 4;
        } while ((ulong)param_2 * 4 != lVar4);
      }
      return CONCAT71((uint7)((ulong)lVar2 >> 8) & 0xffffff,1);
    }
  }
  return 0;
}


