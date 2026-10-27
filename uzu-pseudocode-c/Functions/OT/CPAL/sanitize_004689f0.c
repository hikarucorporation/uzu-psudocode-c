// Function : sanitize
// Namespace: OT:CPAL
// Entry    : 004689f0
// Prototype: undefined4 sanitize(CPAL * this, long param_1)
// Body     : 004689f0 - 00468b62


/* OT::CPAL::sanitize(hb_sanitize_context_t*) const */

undefined4 __thiscall OT::CPAL::sanitize(CPAL *this,long param_1)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  CPAL *pCVar9;
  
  if ((CPAL *)(ulong)*(uint *)(param_1 + 0x18) < this + (0xc - *(long *)(param_1 + 8))) {
    return 0;
  }
  uVar2 = *(uint *)(this + 8);
  if ((ulong)((long)(this + (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                            uVar2 << 0x18)) - *(long *)(param_1 + 8)) <=
      (ulong)*(uint *)(param_1 + 0x18)) {
    uVar6 = (uint)(ushort)(*(ushort *)(this + 6) << 8 | *(ushort *)(this + 6) >> 8);
    iVar8 = (int)*(undefined8 *)(param_1 + 0x10);
    if (uVar6 * 4 <=
        (uint)(iVar8 - (int)(this + (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8
                                    | uVar2 << 0x18)))) {
      iVar7 = *(int *)(param_1 + 0x1c) + uVar6 * -4;
      *(int *)(param_1 + 0x1c) = iVar7;
      if (0 < iVar7) {
        if ((ulong)((long)(this + 0xc) - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)
           ) {
          uVar6 = (uint)(ushort)(*(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8);
          uVar2 = uVar6 * 2;
          if (uVar2 <= (uint)(iVar8 - (int)(this + 0xc))) {
            iVar8 = iVar7 + uVar6 * -2;
            *(int *)(param_1 + 0x1c) = iVar8;
            if (iVar8 == 0 || iVar7 < (int)uVar2) {
              return 0;
            }
            if (*(short *)this == 0) {
              return 1;
            }
            uVar5 = *(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8;
            lVar3 = *(long *)(param_1 + 8);
            pCVar9 = (CPAL *)(ulong)*(uint *)(param_1 + 0x18);
            if (pCVar9 < this + (ulong)uVar5 * 2 + 0xc + (0xc - lVar3)) {
              return 0;
            }
            uVar1 = *(ushort *)(this + 2);
            uVar2 = *(uint *)(this + (ulong)uVar5 * 2 + 0xc);
            if (uVar2 != 0) {
              if (pCVar9 < this + (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                                  uVar2 << 0x18) + -lVar3) {
                return 0;
              }
              if ((uint)(*(int *)(param_1 + 0x10) -
                        (int)(this + (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 |
                                      (uVar2 & 0xff00) << 8 | uVar2 << 0x18))) < (uint)uVar5 * 4) {
                return 0;
              }
              iVar8 = *(int *)(param_1 + 0x1c) + (uint)uVar5 * -4;
              *(int *)(param_1 + 0x1c) = iVar8;
              if (iVar8 < 1) {
                return 0;
              }
            }
            uVar2 = *(uint *)(this + (ulong)uVar5 * 2 + 0x10);
            if (uVar2 != 0) {
              if (pCVar9 < this + (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                                  uVar2 << 0x18) + -lVar3) {
                return 0;
              }
              if ((uint)(*(int *)(param_1 + 0x10) -
                        (int)(this + (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 |
                                      (uVar2 & 0xff00) << 8 | uVar2 << 0x18))) < (uint)uVar5 * 2) {
                return 0;
              }
              iVar8 = *(int *)(param_1 + 0x1c) + (uint)uVar5 * -2;
              *(int *)(param_1 + 0x1c) = iVar8;
              if (iVar8 < 1) {
                return 0;
              }
            }
            uVar2 = *(uint *)(this + (ulong)uVar5 * 2 + 0x14);
            if (uVar2 == 0) {
              return 1;
            }
            if (pCVar9 < this + (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                                uVar2 << 0x18) + -lVar3) {
              return 0;
            }
            uVar4 = (uint)(ushort)(uVar1 << 8 | uVar1 >> 8);
            uVar6 = uVar4 * 2;
            if ((uint)(*(int *)(param_1 + 0x10) -
                      (int)(this + (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8
                                   | uVar2 << 0x18))) < uVar6) {
              return 0;
            }
            iVar8 = *(int *)(param_1 + 0x1c) + uVar4 * -2;
            *(int *)(param_1 + 0x1c) = iVar8;
            return CONCAT31((int3)(uVar6 >> 8),0 < iVar8);
          }
        }
        return 0;
      }
    }
  }
  return 0;
}


