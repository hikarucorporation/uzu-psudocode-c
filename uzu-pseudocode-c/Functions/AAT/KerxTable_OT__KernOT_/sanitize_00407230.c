// Function : sanitize
// Namespace: AAT:KerxTable_OT__KernOT_
// Entry    : 00407230
// Prototype: undefined1[16] sanitize(KerxTable<OT::KernOT> * this, long param_1, StateTable<AAT::ObsoleteTypes,void> * param_2)
// Body     : 00407230 - 0040774d


/* AAT::KerxTable<OT::KernOT>::sanitize(hb_sanitize_context_t*) const */

undefined1  [16] __thiscall
AAT::KerxTable<OT::KernOT>::sanitize
          (KerxTable<OT::KernOT> *this,long param_1,StateTable<AAT::ObsoleteTypes,void> *param_2)

{
  ushort uVar1;
  ushort uVar2;
  StateTable<AAT::ObsoleteTypes,void> *pSVar3;
  ulong uVar4;
  undefined8 uVar5;
  StateTable<AAT::ObsoleteTypes,void> *pSVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  int iVar11;
  ushort uVar12;
  StateTable<AAT::ObsoleteTypes,void> *pSVar13;
  uint uVar14;
  uint uVar15;
  StateTable<AAT::ObsoleteTypes,void> *pSVar16;
  undefined1 auVar17 [16];
  
  if (this + (2 - *(long *)(param_1 + 8)) <=
      (KerxTable<OT::KernOT> *)(ulong)*(uint *)(param_1 + 0x18)) {
    lVar7 = *(long *)(param_1 + 8);
    param_2 = (StateTable<AAT::ObsoleteTypes,void> *)(ulong)*(uint *)(param_1 + 0x18);
    if ((StateTable<AAT::ObsoleteTypes,void> *)(this + (4 - lVar7)) <= param_2) {
      pSVar16 = (StateTable<AAT::ObsoleteTypes,void> *)(this + 4);
      uVar1 = *(ushort *)(this + 2);
      uVar2 = uVar1 << 8 | uVar1 >> 8;
      pSVar3 = (StateTable<AAT::ObsoleteTypes,void> *)(ulong)uVar2;
      if (uVar1 != 0) {
        uVar14 = 1;
        if (1 < uVar2) {
          uVar14 = (uint)uVar2;
        }
        uVar15 = 0;
LAB_0040730b:
        pSVar3 = pSVar16 + 6;
        if (pSVar3 + -lVar7 <= param_2) {
          param_2 = *(StateTable<AAT::ObsoleteTypes,void> **)(*(long *)(param_1 + 0x30) + 0x10);
          *(StateTable<AAT::ObsoleteTypes,void> **)(param_1 + 8) = param_2;
          uVar8 = *(uint *)(*(long *)(param_1 + 0x30) + 0x18);
          uVar4 = (ulong)uVar8;
          pSVar13 = param_2 + uVar4;
          *(StateTable<AAT::ObsoleteTypes,void> **)(param_1 + 0x10) = pSVar13;
          *(uint *)(param_1 + 0x18) = uVar8;
          if (uVar15 < uVar2 - 1) {
            uVar4 = (long)pSVar13 - (long)pSVar16;
            if ((pSVar16 < param_2) || (pSVar13 < pSVar16 || uVar4 == 0)) {
              *(undefined8 *)(param_1 + 8) = 0;
              *(undefined8 *)(param_1 + 0x10) = 0;
              *(undefined4 *)(param_1 + 0x18) = 0;
              uVar4 = 0;
              param_2 = (StateTable<AAT::ObsoleteTypes,void> *)0x0;
            }
            else {
              *(StateTable<AAT::ObsoleteTypes,void> **)(param_1 + 8) = pSVar16;
              uVar10 = (ulong)(ushort)(*(ushort *)(pSVar16 + 2) << 8 | *(ushort *)(pSVar16 + 2) >> 8
                                      );
              if (uVar10 < uVar4) {
                uVar4 = uVar10;
              }
              *(StateTable<AAT::ObsoleteTypes,void> **)(param_1 + 0x10) = pSVar16 + uVar4;
              *(int *)(param_1 + 0x18) = (int)uVar4;
              uVar4 = uVar4 & 0xffffffff;
              param_2 = pSVar16;
            }
          }
          if ((uVar4 < (ulong)((long)pSVar3 - (long)param_2)) ||
             (uVar12 = *(ushort *)(pSVar16 + 2) << 8 | *(ushort *)(pSVar16 + 2) >> 8, uVar12 < 6))
          goto LAB_0040763b;
          param_2 = *(StateTable<AAT::ObsoleteTypes,void> **)(param_1 + 8);
          pSVar6 = pSVar16 + -(long)param_2;
          pSVar13 = (StateTable<AAT::ObsoleteTypes,void> *)(ulong)*(uint *)(param_1 + 0x18);
          if (pSVar13 < pSVar6) goto LAB_0040763b;
          if (((uint)(*(int *)(param_1 + 0x10) - (int)pSVar16) < (uint)uVar12) ||
             (iVar11 = *(int *)(param_1 + 0x1c) - (uint)uVar12, *(int *)(param_1 + 0x1c) = iVar11,
             iVar11 < 1)) goto LAB_0040763b;
          switch(pSVar16[4]) {
          case (StateTable<AAT::ObsoleteTypes,void>)0x0:
            if (pSVar6 + 0xe <= pSVar13) {
              param_2 = (StateTable<AAT::ObsoleteTypes,void> *)(ulong)*(uint *)(param_1 + 0x18);
              if (pSVar16 + 0xe + -*(long *)(param_1 + 8) <= param_2) {
                uVar8 = (uint)(ushort)(*(ushort *)(pSVar16 + 6) << 8 | *(ushort *)(pSVar16 + 6) >> 8
                                      );
                uVar9 = *(int *)(param_1 + 0x10) - (int)(pSVar16 + 0xe);
                param_2 = (StateTable<AAT::ObsoleteTypes,void> *)(ulong)uVar9;
                if (uVar8 * 6 <= uVar9) {
                  iVar11 = *(int *)(param_1 + 0x1c) + uVar8 * -6;
                  *(int *)(param_1 + 0x1c) = iVar11;
                  goto joined_r0x004072cc;
                }
              }
            }
            break;
          case (StateTable<AAT::ObsoleteTypes,void>)0x1:
            if (pSVar6 + 0x10 <= pSVar13) {
                    /* try { // try from 00407474 to 0040747b has its CatchHandler @ 0040774e */
              auVar17 = StateTable<AAT::ObsoleteTypes,void>::sanitize(pSVar3,param_1,param_2);
              param_2 = auVar17._8_8_;
              if (auVar17[0] != '\0') goto switchD_0040740a_default;
            }
            break;
          case (StateTable<AAT::ObsoleteTypes,void>)0x2:
            param_2 = pSVar6 + 0xe;
            if ((param_2 <= pSVar13) && (pSVar6 + 10 <= pSVar13)) {
              uVar4 = (ulong)(ushort)(*(ushort *)(pSVar16 + 8) << 8 | *(ushort *)(pSVar16 + 8) >> 8)
              ;
              param_2 = pSVar16 + uVar4 + 4;
              if ((ulong)((long)param_2 - *(long *)(param_1 + 8)) <=
                  (ulong)*(uint *)(param_1 + 0x18)) {
                if ((param_2 + -*(long *)(param_1 + 8) <=
                     (StateTable<AAT::ObsoleteTypes,void> *)(ulong)*(uint *)(param_1 + 0x18)) &&
                   (uVar8 = (uint)(ushort)(*(ushort *)(pSVar16 + uVar4 + 2) << 8 |
                                          *(ushort *)(pSVar16 + uVar4 + 2) >> 8),
                   uVar8 * 2 <= (uint)(*(int *)(param_1 + 0x10) - (int)param_2))) {
                  uVar8 = *(int *)(param_1 + 0x1c) + uVar8 * -2;
                  param_2 = (StateTable<AAT::ObsoleteTypes,void> *)(ulong)uVar8;
                  *(uint *)(param_1 + 0x1c) = uVar8;
                  if ((0 < (int)uVar8) &&
                     (param_2 = pSVar16 + (0xc - *(long *)(param_1 + 8)),
                     param_2 <=
                     (StateTable<AAT::ObsoleteTypes,void> *)(ulong)*(uint *)(param_1 + 0x18))) {
                    uVar4 = (ulong)(ushort)(*(ushort *)(pSVar16 + 10) << 8 |
                                           *(ushort *)(pSVar16 + 10) >> 8);
                    pSVar3 = pSVar16 + uVar4 + 4;
                    param_2 = pSVar3 + -*(long *)(param_1 + 8);
                    if ((param_2 <=
                         (StateTable<AAT::ObsoleteTypes,void> *)(ulong)*(uint *)(param_1 + 0x18)) &&
                       (param_2 = pSVar3 + -*(long *)(param_1 + 8),
                       param_2 <=
                       (StateTable<AAT::ObsoleteTypes,void> *)(ulong)*(uint *)(param_1 + 0x18))) {
                      uVar8 = (uint)(ushort)(*(ushort *)(pSVar16 + uVar4 + 2) << 8 |
                                            *(ushort *)(pSVar16 + uVar4 + 2) >> 8);
                      uVar9 = *(int *)(param_1 + 0x10) - (int)pSVar3;
                      param_2 = (StateTable<AAT::ObsoleteTypes,void> *)(ulong)uVar9;
                      if ((uVar8 * 2 <= uVar9) &&
                         (((iVar11 = *(int *)(param_1 + 0x1c) + uVar8 * -2,
                           *(int *)(param_1 + 0x1c) = iVar11, 0 < iVar11 &&
                           ((ulong)((long)pSVar16 - *(long *)(param_1 + 8)) <=
                            (ulong)*(uint *)(param_1 + 0x18))) &&
                          (uVar8 = (uint)(ushort)(*(ushort *)(pSVar16 + 0xc) << 8 |
                                                 *(ushort *)(pSVar16 + 0xc) >> 8),
                          uVar8 <= (uint)(*(int *)(param_1 + 0x10) - (int)pSVar16)))))
                      goto LAB_004072c0;
                    }
                  }
                }
              }
            }
            break;
          case (StateTable<AAT::ObsoleteTypes,void>)0x3:
            pSVar3 = pSVar16 + 0xc;
            if ((pSVar3 + -(long)param_2 <= pSVar13) &&
               (param_2 = (StateTable<AAT::ObsoleteTypes,void> *)(ulong)*(uint *)(param_1 + 0x18),
               pSVar3 + -*(long *)(param_1 + 8) <= param_2)) {
              uVar8 = (uint)(byte)pSVar16[10] * (uint)(byte)pSVar16[9] +
                      ((uint)(ushort)(*(ushort *)(pSVar16 + 6) << 8 | *(ushort *)(pSVar16 + 6) >> 8)
                      + (uint)(byte)pSVar16[8]) * 2;
              uVar9 = *(int *)(param_1 + 0x10) - (int)pSVar3;
              param_2 = (StateTable<AAT::ObsoleteTypes,void> *)(ulong)uVar9;
              if (uVar8 <= uVar9) {
LAB_004072c0:
                iVar11 = *(int *)(param_1 + 0x1c) - uVar8;
                *(int *)(param_1 + 0x1c) = iVar11;
joined_r0x004072cc:
                if (0 < iVar11) goto switchD_0040740a_default;
              }
            }
            break;
          default:
            goto switchD_0040740a_default;
          }
LAB_0040763b:
          lVar7 = *(long *)(*(long *)(param_1 + 0x30) + 0x10);
          *(long *)(param_1 + 8) = lVar7;
          uVar14 = *(uint *)(*(long *)(param_1 + 0x30) + 0x18);
          *(ulong *)(param_1 + 0x10) = lVar7 + (ulong)uVar14;
          *(uint *)(param_1 + 0x18) = uVar14;
        }
        goto LAB_00407655;
      }
LAB_0040765c:
      uVar5 = CONCAT71((int7)((ulong)pSVar3 >> 8),1);
      if ((ushort)(*(ushort *)this << 8 | *(ushort *)this >> 8) < 3) goto LAB_0040773f;
      if (((pSVar16 + -lVar7 <= param_2) &&
          ((uint)uVar2 * 4 <= (uint)(*(int *)(param_1 + 0x10) - (int)pSVar16))) &&
         (iVar11 = *(int *)(param_1 + 0x1c) + (uint)uVar2 * -4, *(int *)(param_1 + 0x1c) = iVar11,
         0 < iVar11)) {
        if (uVar1 != 0) {
          uVar14 = *(int *)(param_1 + 0x38) + 7U >> 3;
          pSVar13 = (StateTable<AAT::ObsoleteTypes,void> *)0x0;
          pSVar3 = pSVar16;
          do {
            pSVar3 = pSVar3 + 4;
            uVar15 = *(uint *)(pSVar16 + (long)pSVar13 * 4);
            if (1 < (uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 |
                    uVar15 << 0x18) + 1) {
              if (param_2 < pSVar3 + -lVar7) goto LAB_00407655;
              uVar15 = *(uint *)(pSVar16 + (long)pSVar13 * 4);
              lVar7 = *(long *)(param_1 + 8);
              param_2 = (StateTable<AAT::ObsoleteTypes,void> *)(ulong)*(uint *)(param_1 + 0x18);
              if (((param_2 < pSVar16 + (uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 |
                                         (uVar15 & 0xff00) << 8 | uVar15 << 0x18) + -lVar7) ||
                  ((uint)(*(int *)(param_1 + 0x10) -
                         (int)(pSVar16 +
                              (uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 |
                              uVar15 << 0x18))) < uVar14)) ||
                 (iVar11 = *(int *)(param_1 + 0x1c) - uVar14, *(int *)(param_1 + 0x1c) = iVar11,
                 iVar11 < 1)) goto LAB_00407655;
            }
            pSVar13 = pSVar13 + 1;
          } while ((StateTable<AAT::ObsoleteTypes,void> *)(ulong)uVar2 != pSVar13);
        }
        goto LAB_0040773f;
      }
    }
  }
LAB_00407655:
  uVar5 = 0;
LAB_0040773f:
  auVar17._8_8_ = param_2;
  auVar17._0_8_ = uVar5;
  return auVar17;
switchD_0040740a_default:
  pSVar16 = pSVar16 + (ushort)(*(ushort *)(pSVar16 + 2) << 8 | *(ushort *)(pSVar16 + 2) >> 8);
  lVar7 = *(long *)(*(long *)(param_1 + 0x30) + 0x10);
  *(long *)(param_1 + 8) = lVar7;
  uVar8 = *(uint *)(*(long *)(param_1 + 0x30) + 0x18);
  param_2 = (StateTable<AAT::ObsoleteTypes,void> *)(ulong)uVar8;
  pSVar3 = param_2 + lVar7;
  *(StateTable<AAT::ObsoleteTypes,void> **)(param_1 + 0x10) = pSVar3;
  *(uint *)(param_1 + 0x18) = uVar8;
  uVar15 = uVar15 + 1;
  if (uVar14 == uVar15) goto LAB_0040765c;
  goto LAB_0040730b;
}


