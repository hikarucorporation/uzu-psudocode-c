// Function : sanitize
// Namespace: OT:CBLC
// Entry    : 0046e780
// Prototype: undefined8 sanitize(CBLC * this, long param_1)
// Body     : 0046e780 - 0046ea7d


/* OT::CBLC::sanitize(hb_sanitize_context_t*) const */

undefined8 __thiscall OT::CBLC::sanitize(CBLC *this,long param_1)

{
  CBLC *pCVar1;
  uint uVar2;
  long lVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  CBLC *pCVar12;
  ushort uVar13;
  long lVar14;
  CBLC *pCVar15;
  ulong uVar16;
  CBLC *pCVar17;
  ulong uVar18;
  uint uVar19;
  bool bVar20;
  
  pCVar1 = this + 8;
  if ((((ulong)((long)pCVar1 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) &&
      ((*(ushort *)this & 0xfeff) == 0x200)) &&
     (this + (8 - *(long *)(param_1 + 8)) <= (CBLC *)(ulong)*(uint *)(param_1 + 0x18))) {
    uVar10 = *(uint *)(this + 4);
    uVar16 = (ulong)(uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                    uVar10 << 0x18) * 0x30;
    uVar8 = uVar16 & 0xffffffff;
    if ((((int)(uVar16 >> 0x20) == 0) &&
        ((ulong)((long)pCVar1 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18))) &&
       (((uint)uVar16 <= (uint)(*(int *)(param_1 + 0x10) - (int)pCVar1) &&
        (iVar9 = *(int *)(param_1 + 0x1c) - (uint)uVar16, *(int *)(param_1 + 0x1c) = iVar9,
        0 < iVar9)))) {
      uVar10 = *(uint *)(this + 4);
      if (uVar10 != 0) {
        uVar5 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18;
        uVar10 = 1;
        if (1 < uVar5) {
          uVar10 = uVar5;
        }
        uVar8 = *(ulong *)(param_1 + 8);
        pCVar12 = (CBLC *)(ulong)*(uint *)(param_1 + 0x18);
        uVar19 = 0;
        bVar20 = true;
        do {
          lVar14 = (ulong)uVar19 * 0x30;
          if (pCVar12 < this + lVar14 + 8 + (0x30 - uVar8)) {
            return 0;
          }
          if ((CBLC *)(ulong)*(uint *)(param_1 + 0x18) <
              this + (lVar14 - *(long *)(param_1 + 8)) + 0xc) {
            return 0;
          }
          uVar7 = *(uint *)(this + lVar14 + 0x10);
          uVar11 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
          lVar3 = (ulong)uVar11 * 8;
          uVar6 = (uint)lVar3;
          if ((int)((ulong)lVar3 >> 0x20) != 0) {
            return 0;
          }
          uVar2 = *(uint *)(this + lVar14 + 8);
          uVar16 = (ulong)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                          uVar2 << 0x18);
          pCVar12 = this + uVar16;
          if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pCVar12 - *(long *)(param_1 + 8))) {
            return 0;
          }
          if ((uint)(*(int *)(param_1 + 0x10) - (int)pCVar12) < uVar6) {
            return 0;
          }
          iVar9 = *(int *)(param_1 + 0x1c) - uVar6;
          *(int *)(param_1 + 0x1c) = iVar9;
          if (iVar9 < 1) {
            return 0;
          }
          if (uVar7 != 0) {
            pCVar17 = pCVar1 + uVar16;
            uVar18 = 0;
            do {
              uVar8 = (long)pCVar17 - *(long *)(param_1 + 8);
              if (*(uint *)(param_1 + 0x18) < uVar8) goto LAB_0046ea66;
              uVar4 = *(ushort *)(this + uVar18 * 8 + uVar16) << 8 |
                      *(ushort *)(this + uVar18 * 8 + uVar16) >> 8;
              uVar8 = (ulong)uVar4;
              uVar13 = *(ushort *)(this + uVar18 * 8 + uVar16 + 2) << 8 |
                       *(ushort *)(this + uVar18 * 8 + uVar16 + 2) >> 8;
              if ((uVar13 < uVar4) ||
                 ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pCVar17 - *(long *)(param_1 + 8))
                 )) goto LAB_0046ea66;
              uVar7 = *(uint *)(this + uVar18 * 8 + uVar16 + 4);
              if (uVar7 == 0) goto LAB_0046e918;
              uVar8 = (ulong)(uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
                             uVar7 << 0x18);
              pCVar15 = pCVar12 + uVar8 + 8;
              if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pCVar15 - *(long *)(param_1 + 8))
                 ) {
LAB_0046e98e:
                uVar7 = *(uint *)(param_1 + 0x2c);
                uVar8 = (ulong)uVar7;
                if (0x1f < uVar7) goto LAB_0046ea66;
                uVar8 = (ulong)(uVar7 + 1);
                *(uint *)(param_1 + 0x2c) = uVar7 + 1;
                if (*(char *)(param_1 + 0x28) == '\0') goto LAB_0046ea66;
                *(undefined4 *)(this + uVar18 * 8 + uVar16 + 4) = 0;
              }
              else {
                iVar9 = (uint)uVar13 - (uint)uVar4;
                uVar4 = *(ushort *)(pCVar12 + uVar8) << 8 | *(ushort *)(pCVar12 + uVar8) >> 8;
                if (uVar4 == 3) {
                  if ((ulong)((long)pCVar15 - *(long *)(param_1 + 8)) <=
                      (ulong)*(uint *)(param_1 + 0x18)) {
                    uVar6 = iVar9 + 2;
                    uVar7 = uVar6 * 2;
                    if (!CARRY4(uVar6,uVar6)) goto LAB_0046ea06;
                  }
                  goto LAB_0046e98e;
                }
                if (uVar4 == 1) {
                  if (((ulong)((long)pCVar15 - *(long *)(param_1 + 8)) <=
                       (ulong)*(uint *)(param_1 + 0x18)) &&
                     (lVar3 = (ulong)(iVar9 + 2) * 4, uVar7 = (uint)lVar3,
                     (int)((ulong)lVar3 >> 0x20) == 0)) {
LAB_0046ea06:
                    if ((uVar7 <= (uint)(*(int *)(param_1 + 0x10) - (int)pCVar15)) &&
                       (iVar9 = *(int *)(param_1 + 0x1c) - uVar7, *(int *)(param_1 + 0x1c) = iVar9,
                       0 < iVar9)) goto LAB_0046e918;
                  }
                  goto LAB_0046e98e;
                }
              }
LAB_0046e918:
              uVar18 = uVar18 + 1;
              pCVar17 = pCVar17 + 8;
            } while (uVar11 != uVar18);
          }
          uVar8 = *(ulong *)(param_1 + 8);
          pCVar12 = (CBLC *)(ulong)*(uint *)(param_1 + 0x18);
          if ((pCVar12 < this + (lVar14 - uVar8) + 0x24) ||
             (pCVar12 < this + (lVar14 - uVar8) + 0x30)) {
LAB_0046ea66:
            if (bVar20) {
              return 0;
            }
            break;
          }
          uVar19 = uVar19 + 1;
          bVar20 = uVar19 < uVar5;
        } while (uVar19 != uVar10);
      }
      return CONCAT71((int7)(uVar8 >> 8),1);
    }
  }
  return 0;
}


