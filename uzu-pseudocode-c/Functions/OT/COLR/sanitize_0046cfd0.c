// Function : sanitize
// Namespace: OT:COLR
// Entry    : 0046cfd0
// Prototype: ulong sanitize(COLR * this, long param_1)
// Body     : 0046cfd0 - 0046d584


/* OT::COLR::sanitize(hb_sanitize_context_t*) const */

ulong __thiscall OT::COLR::sanitize(COLR *this,long param_1)

{
  COLR *pCVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  COLR *extraout_RDX;
  COLR *extraout_RDX_00;
  long lVar9;
  int iVar10;
  int iVar11;
  COLR *pCVar12;
  COLR *pCVar13;
  COLR *pCVar14;
  COLR *pCVar15;
  long lVar16;
  
  pCVar14 = this + 0xe;
  if ((ulong)((long)pCVar14 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) {
    uVar3 = *(uint *)(this + 4);
    if ((ulong)((long)(this + (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                              uVar3 << 0x18)) - *(long *)(param_1 + 8)) <=
        (ulong)*(uint *)(param_1 + 0x18)) {
      uVar8 = (uint)(ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8);
      iVar11 = (int)*(undefined8 *)(param_1 + 0x10);
      if (uVar8 * 6 <=
          (uint)(iVar11 - (int)(this + (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 |
                                        (uVar3 & 0xff00) << 8 | uVar3 << 0x18)))) {
        iVar10 = *(int *)(param_1 + 0x1c) + uVar8 * -6;
        *(int *)(param_1 + 0x1c) = iVar10;
        if (0 < iVar10) {
          uVar3 = *(uint *)(this + 8);
          pCVar15 = (COLR *)0x0;
          if ((ulong)*(uint *)(param_1 + 0x18) <
              (ulong)((long)(this + (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8
                                    | uVar3 << 0x18)) - *(long *)(param_1 + 8))) goto LAB_0046d573;
          uVar8 = (uint)(ushort)(*(ushort *)(this + 0xc) << 8 | *(ushort *)(this + 0xc) >> 8);
          uVar2 = uVar8 * 4;
          if ((uint)(iVar11 - (int)(this + (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 |
                                            (uVar3 & 0xff00) << 8 | uVar3 << 0x18))) < uVar2)
          goto LAB_0046d573;
          iVar11 = iVar10 + uVar8 * -4;
          *(int *)(param_1 + 0x1c) = iVar11;
          if (iVar11 != 0 && (int)uVar2 <= iVar10) {
            pCVar15 = (COLR *)0x1;
            if (*(short *)this == 0) goto LAB_0046d573;
            if (this + (0x12 - *(long *)(param_1 + 8)) <= (COLR *)(ulong)*(uint *)(param_1 + 0x18))
            {
              uVar3 = *(uint *)(this + 0xe);
              if (uVar3 != 0) {
                uVar6 = (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                               uVar3 << 0x18);
                pCVar12 = this + uVar6 + 4;
                if ((ulong)((long)pCVar12 - *(long *)(param_1 + 8)) <=
                    (ulong)*(uint *)(param_1 + 0x18)) {
                  pCVar13 = this + uVar6;
                  uVar3 = *(uint *)pCVar13;
                  lVar16 = (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                                  uVar3 << 0x18) * 6;
                  uVar3 = (uint)lVar16;
                  if (((((int)((ulong)lVar16 >> 0x20) == 0) &&
                       ((ulong)((long)pCVar12 - *(long *)(param_1 + 8)) <=
                        (ulong)*(uint *)(param_1 + 0x18))) &&
                      (uVar3 <= (uint)(*(int *)(param_1 + 0x10) - (int)pCVar12))) &&
                     (iVar11 = *(int *)(param_1 + 0x1c) - uVar3, *(int *)(param_1 + 0x1c) = iVar11,
                     0 < iVar11)) {
                    uVar3 = *(uint *)pCVar13;
                    if (uVar3 != 0) {
                      uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                              uVar3 << 0x18;
                      uVar7 = 1;
                      if (1 < uVar3) {
                        uVar7 = (ulong)uVar3;
                      }
                      pCVar15 = pCVar14 + (uVar6 - 4);
                      lVar16 = 0;
                      do {
                        if (((COLR *)(ulong)*(uint *)(param_1 + 0x18) <
                             pCVar15 + (lVar16 - *(long *)(param_1 + 8))) ||
                           ((COLR *)(ulong)*(uint *)(param_1 + 0x18) <
                            pCVar15 + (lVar16 - *(long *)(param_1 + 8)))) goto LAB_0046d1ca;
                        uVar3 = *(uint *)(this + lVar16 + uVar6 + 6);
                        if (uVar3 != 0) {
                          if ((*(int *)(param_1 + 0x24) < 0x40) &&
                             (iVar11 = *(int *)(param_1 + 0x24) + 1,
                             *(int *)(param_1 + 0x24) = iVar11, iVar11 != 0)) {
                            uVar4 = Paint::dispatch<hb_sanitize_context_t>
                                              ((Paint *)(pCVar13 +
                                                        (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 |
                                                         (uVar3 & 0xff00) << 8 | uVar3 << 0x18)),
                                               param_1);
                            *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
                            if ((char)uVar4 != '\0') goto LAB_0046d160;
                          }
                          if ((0x1f < *(uint *)(param_1 + 0x2c)) ||
                             (*(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1,
                             *(char *)(param_1 + 0x28) == '\0')) goto LAB_0046d1ca;
                          *(undefined4 *)(this + lVar16 + uVar6 + 6) = 0;
                        }
LAB_0046d160:
                        lVar16 = lVar16 + 6;
                      } while (uVar7 * 6 != lVar16);
                    }
                    goto LAB_0046d1ef;
                  }
                }
LAB_0046d1ca:
                if ((0x1f < *(uint *)(param_1 + 0x2c)) ||
                   (*(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1,
                   *(char *)(param_1 + 0x28) == '\0')) goto LAB_0046d570;
                *(undefined4 *)(this + 0xe) = 0;
              }
LAB_0046d1ef:
              pCVar12 = (COLR *)(ulong)*(uint *)(param_1 + 0x18);
              if (this + (0x16 - *(long *)(param_1 + 8)) <= pCVar12) {
                uVar3 = *(uint *)(this + 0x12);
                if (uVar3 != 0) {
                  uVar6 = (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                                 uVar3 << 0x18);
                  pCVar13 = this + uVar6 + 4;
                  pCVar12 = (COLR *)(ulong)*(uint *)(param_1 + 0x18);
                  if (pCVar13 + -*(long *)(param_1 + 8) <= pCVar12) {
                    pCVar1 = this + uVar6;
                    uVar3 = *(uint *)pCVar1;
                    lVar16 = (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8
                                    | uVar3 << 0x18) * 4;
                    uVar8 = (uint)((ulong)lVar16 >> 0x20);
                    pCVar12 = (COLR *)(ulong)uVar8;
                    uVar3 = (uint)lVar16;
                    if (((uVar8 == 0) &&
                        (pCVar12 = pCVar13 + -*(long *)(param_1 + 8),
                        pCVar12 <= (COLR *)(ulong)*(uint *)(param_1 + 0x18))) &&
                       (uVar8 = *(int *)(param_1 + 0x10) - (int)pCVar13,
                       pCVar12 = (COLR *)(ulong)uVar8, uVar3 <= uVar8)) {
                      uVar3 = *(int *)(param_1 + 0x1c) - uVar3;
                      pCVar12 = (COLR *)(ulong)uVar3;
                      *(uint *)(param_1 + 0x1c) = uVar3;
                      if (0 < (int)uVar3) {
                        uVar3 = *(uint *)pCVar1;
                        if (uVar3 != 0) {
                          uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                                  uVar3 << 0x18;
                          uVar7 = 1;
                          if (1 < uVar3) {
                            uVar7 = (ulong)uVar3;
                          }
                          pCVar15 = (COLR *)(uVar7 * 4);
                          pCVar13 = (COLR *)0x0;
                          do {
                            if ((ulong)*(uint *)(param_1 + 0x18) <
                                (ulong)((long)(pCVar13 + (long)(this + uVar6 + 8)) -
                                       *(long *)(param_1 + 8))) goto LAB_0046d318;
                            uVar3 = *(uint *)(this + uVar6 + 4 + (long)pCVar13);
                            if (uVar3 != 0) {
                              if ((*(int *)(param_1 + 0x24) < 0x40) &&
                                 (iVar11 = *(int *)(param_1 + 0x24) + 1,
                                 *(int *)(param_1 + 0x24) = iVar11, iVar11 != 0)) {
                                uVar7 = Paint::dispatch<hb_sanitize_context_t>
                                                  ((Paint *)(pCVar1 + (uVar3 >> 0x18 |
                                                                       (uVar3 & 0xff0000) >> 8 |
                                                                       (uVar3 & 0xff00) << 8 |
                                                                      uVar3 << 0x18)),param_1);
                                *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
                                pCVar12 = extraout_RDX;
                                if ((char)uVar7 != '\0') goto LAB_0046d2b0;
                              }
                              if ((0x1f < *(uint *)(param_1 + 0x2c)) ||
                                 (*(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1,
                                 *(char *)(param_1 + 0x28) == '\0')) goto LAB_0046d318;
                              *(undefined4 *)(this + uVar6 + 4 + (long)pCVar13) = 0;
                            }
LAB_0046d2b0:
                            pCVar13 = pCVar13 + 4;
                          } while (pCVar15 != pCVar13);
                        }
                        goto LAB_0046d33d;
                      }
                    }
                  }
LAB_0046d318:
                  if ((0x1f < *(uint *)(param_1 + 0x2c)) ||
                     (*(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1,
                     *(char *)(param_1 + 0x28) == '\0')) goto LAB_0046d570;
                  *(undefined4 *)(this + 0x12) = 0;
                }
LAB_0046d33d:
                if (this + (0x1a - *(long *)(param_1 + 8)) <=
                    (COLR *)(ulong)*(uint *)(param_1 + 0x18)) {
                  uVar3 = *(uint *)(this + 0x16);
                  pCVar15 = (COLR *)CONCAT71((int7)((ulong)pCVar15 >> 8),1);
                  if (uVar3 != 0) {
                    uVar6 = (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8
                                   | uVar3 << 0x18);
                    pCVar13 = this + uVar6 + 5;
                    if ((ulong)((long)pCVar13 - *(long *)(param_1 + 8)) <=
                        (ulong)*(uint *)(param_1 + 0x18)) {
                      uVar3 = *(uint *)(this + uVar6 + 1);
                      lVar16 = (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 |
                                       (uVar3 & 0xff00) << 8 | uVar3 << 0x18) * 7;
                      uVar8 = (uint)((ulong)lVar16 >> 0x20);
                      pCVar12 = (COLR *)(ulong)uVar8;
                      uVar3 = (uint)lVar16;
                      if ((((uVar8 == 0) &&
                           (pCVar12 = pCVar13 + -*(long *)(param_1 + 8),
                           pCVar12 <= (COLR *)(ulong)*(uint *)(param_1 + 0x18))) &&
                          (uVar3 <= (uint)(*(int *)(param_1 + 0x10) - (int)pCVar13))) &&
                         (iVar11 = *(int *)(param_1 + 0x1c) - uVar3,
                         *(int *)(param_1 + 0x1c) = iVar11, 0 < iVar11)) {
                        uVar3 = *(uint *)(this + uVar6 + 1);
                        if (uVar3 != 0) {
                          uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                                  uVar3 << 0x18;
                          uVar7 = 1;
                          if (1 < uVar3) {
                            uVar7 = (ulong)uVar3;
                          }
                          pCVar12 = this + uVar6 + 0xb;
                          pCVar14 = this + uVar6 + 0xc;
                          lVar16 = 0;
                          do {
                            if (((COLR *)(ulong)*(uint *)(param_1 + 0x18) <
                                 pCVar14 + (lVar16 - *(long *)(param_1 + 8))) ||
                               ((COLR *)(ulong)*(uint *)(param_1 + 0x18) <
                                pCVar14 + (lVar16 - *(long *)(param_1 + 8)))) goto LAB_0046d37e;
                            if ((this[lVar16 + uVar6 + 10] != (COLR)0x0 ||
                                this[lVar16 + uVar6 + 9] != (COLR)0x0) ||
                                pCVar12[lVar16] != (COLR)0x0) {
                              pCVar13 = this + ((ulong)(byte)this[lVar16 + uVar6 + 10] << 8 |
                                                (ulong)(byte)this[lVar16 + uVar6 + 9] << 0x10 |
                                               (ulong)(byte)pCVar12[lVar16]) + uVar6;
                              if (pCVar13 + (1 - *(long *)(param_1 + 8)) <=
                                  (COLR *)(ulong)*(uint *)(param_1 + 0x18)) {
                                if (*pCVar13 == (COLR)0x1) {
                                  lVar9 = (long)pCVar13 - *(long *)(param_1 + 8);
                                  uVar4 = (ulong)*(uint *)(param_1 + 0x18);
                                }
                                else {
                                  if (*pCVar13 != (COLR)0x2) goto LAB_0046d4c9;
                                  lVar9 = (long)pCVar13 - *(long *)(param_1 + 8);
                                  uVar4 = (ulong)*(uint *)(param_1 + 0x18);
                                  if (uVar4 < lVar9 + 0xdU) goto LAB_0046d4a2;
                                }
                                if (lVar9 + 9U <= uVar4) goto LAB_0046d4c9;
                              }
LAB_0046d4a2:
                              if ((0x1f < *(uint *)(param_1 + 0x2c)) ||
                                 (*(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1,
                                 *(char *)(param_1 + 0x28) == '\0')) goto LAB_0046d37e;
                              *(undefined2 *)(this + lVar16 + uVar6 + 9) = 0;
                              pCVar12[lVar16] = (COLR)0x0;
                            }
LAB_0046d4c9:
                            lVar16 = lVar16 + 7;
                          } while (uVar7 * 7 != lVar16);
                        }
                        goto LAB_0046d4d6;
                      }
                    }
LAB_0046d37e:
                    if ((0x1f < *(uint *)(param_1 + 0x2c)) ||
                       (*(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1,
                       *(char *)(param_1 + 0x28) == '\0')) goto LAB_0046d570;
                    *(undefined4 *)(this + 0x16) = 0;
                  }
LAB_0046d4d6:
                  if (this + (0x1e - *(long *)(param_1 + 8)) <=
                      (COLR *)(ulong)*(uint *)(param_1 + 0x18)) {
                    uVar3 = *(uint *)(this + 0x1a);
                    if ((uVar3 != 0) &&
                       (uVar5 = DeltaSetIndexMap::sanitize
                                          ((DeltaSetIndexMap *)
                                           (this + (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 |
                                                    (uVar3 & 0xff00) << 8 | uVar3 << 0x18)),param_1)
                       , pCVar12 = extraout_RDX_00, (char)uVar5 == '\0')) {
                      if ((0x1f < *(uint *)(param_1 + 0x2c)) ||
                         (*(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1,
                         *(char *)(param_1 + 0x28) == '\0')) goto LAB_0046d570;
                      *(undefined4 *)(this + 0x1a) = 0;
                    }
                    if (this + (0x22 - *(long *)(param_1 + 8)) <=
                        (COLR *)(ulong)*(uint *)(param_1 + 0x18)) {
                      uVar3 = *(uint *)(this + 0x1e);
                      if ((uVar3 == 0) ||
                         (uVar6 = ItemVariationStore::sanitize
                                            ((short *)(this + (uVar3 >> 0x18 |
                                                               (uVar3 & 0xff0000) >> 8 |
                                                               (uVar3 & 0xff00) << 8 | uVar3 << 0x18
                                                              )),param_1,pCVar12,
                                             (COLR *)(ulong)*(uint *)(param_1 + 0x18),pCVar14),
                         (char)uVar6 != '\0')) goto LAB_0046d573;
                      if ((*(uint *)(param_1 + 0x2c) < 0x20) &&
                         (*(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1,
                         *(char *)(param_1 + 0x28) != '\0')) {
                        *(undefined4 *)(this + 0x1e) = 0;
                        goto LAB_0046d573;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0046d570:
  pCVar15 = (COLR *)0x0;
LAB_0046d573:
  return (ulong)pCVar15 & 0xffffffff;
}


