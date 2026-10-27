// Function : sanitize
// Namespace: AAT:feat
// Entry    : 003ebd00
// Prototype: undefined8 sanitize(feat * this, long param_1)
// Body     : 003ebd00 - 003ebdf0


/* AAT::feat::sanitize(hb_sanitize_context_t*) const */

undefined8 __thiscall AAT::feat::sanitize(feat *this,long param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  int iVar6;
  feat *pfVar7;
  ulong uVar8;
  feat *pfVar9;
  long lVar10;
  ulong uVar11;
  
  pfVar7 = this + 0xc;
  if ((((ulong)((long)pfVar7 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) &&
      (*(short *)this == 0x100)) &&
     ((ulong)((long)pfVar7 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18))) {
    uVar1 = *(ushort *)(this + 4);
    uVar5 = uVar1 << 8 | uVar1 >> 8;
    uVar8 = (ulong)uVar5;
    uVar3 = (uint)uVar5 * 0xc;
    if ((uVar3 <= (uint)(*(int *)(param_1 + 0x10) - (int)pfVar7)) &&
       (iVar6 = *(int *)(param_1 + 0x1c) + (uint)uVar5 * -0xc, *(int *)(param_1 + 0x1c) = iVar6,
       0 < iVar6)) {
      if (uVar1 != 0) {
        lVar10 = *(long *)(param_1 + 8);
        uVar11 = (ulong)*(uint *)(param_1 + 0x18);
        pfVar7 = this + 0x10;
        pfVar9 = this + 0x18;
        do {
          if (uVar11 < (ulong)((long)pfVar9 - lVar10)) {
            return 0;
          }
          uVar2 = *(uint *)pfVar7;
          lVar10 = *(long *)(param_1 + 8);
          uVar11 = (ulong)*(uint *)(param_1 + 0x18);
          if (uVar11 < (ulong)((long)(this + (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 |
                                              (uVar2 & 0xff00) << 8 | uVar2 << 0x18)) - lVar10)) {
            return 0;
          }
          uVar4 = (uint)(ushort)(*(ushort *)(pfVar7 + -2) << 8 | *(ushort *)(pfVar7 + -2) >> 8);
          if ((uint)(*(int *)(param_1 + 0x10) -
                    (int)(this + (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                                 uVar2 << 0x18))) < uVar4 * 4) {
            return 0;
          }
          iVar6 = *(int *)(param_1 + 0x1c) + uVar4 * -4;
          *(int *)(param_1 + 0x1c) = iVar6;
          if (iVar6 < 1) {
            return 0;
          }
          pfVar7 = pfVar7 + 0xc;
          pfVar9 = pfVar9 + 0xc;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      return CONCAT71((uint7)(uint3)(uVar3 >> 8),1);
    }
  }
  return 0;
}


