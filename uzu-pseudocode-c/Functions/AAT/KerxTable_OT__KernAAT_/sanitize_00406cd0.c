// Function : sanitize
// Namespace: AAT:KerxTable_OT__KernAAT_
// Entry    : 00406cd0
// Prototype: undefined1[16] sanitize(uint * param_1, long param_2, StateTable<AAT::ObsoleteTypes,void> * param_3, undefined8 param_4, undefined8 param_5)
// Body     : 00406cd0 - 004071fe


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* AAT::KerxTable<OT::KernAAT>::sanitize(hb_sanitize_context_t*) const */

undefined1  [16] __cdecl
AAT::KerxTable<OT::KernAAT>::sanitize
          (uint *param_1,long param_2,StateTable<AAT::ObsoleteTypes,void> *param_3,
          undefined8 param_4,undefined8 param_5)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  StateTable<AAT::ObsoleteTypes,void> *pSVar5;
  StateTable<AAT::ObsoleteTypes,void> *pSVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  uint uVar12;
  StateTable<AAT::ObsoleteTypes,void> *pSVar13;
  StateTable<AAT::ObsoleteTypes,void> *pSVar14;
  uint uVar15;
  undefined1 auVar16 [16];
  
  if ((ulong)((long)param_1 + (4 - *(long *)(param_2 + 8))) <= (ulong)*(uint *)(param_2 + 0x18)) {
    uVar3 = *param_1;
    uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
    if (0xffff < uVar3) {
      lVar11 = *(long *)(param_2 + 8);
      param_3 = (StateTable<AAT::ObsoleteTypes,void> *)((long)param_1 + (8 - lVar11));
      pSVar5 = (StateTable<AAT::ObsoleteTypes,void> *)(ulong)*(uint *)(param_2 + 0x18);
      if (param_3 <= pSVar5) {
        pSVar13 = (StateTable<AAT::ObsoleteTypes,void> *)(param_1 + 2);
        uVar1 = param_1[1];
        uVar9 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
        if (uVar1 != 0) {
          uVar3 = 1;
          if (1 < uVar9) {
            uVar3 = uVar9;
          }
          param_3 = (StateTable<AAT::ObsoleteTypes,void> *)(ulong)(uVar9 - 1);
          uVar15 = 0;
LAB_00406db5:
          pSVar14 = pSVar13 + 8;
          if (pSVar14 + -lVar11 <= pSVar5) {
            param_3 = *(StateTable<AAT::ObsoleteTypes,void> **)(*(long *)(param_2 + 0x30) + 0x10);
            *(StateTable<AAT::ObsoleteTypes,void> **)(param_2 + 8) = param_3;
            uVar12 = *(uint *)(*(long *)(param_2 + 0x30) + 0x18);
            uVar4 = (ulong)uVar12;
            pSVar5 = param_3 + uVar4;
            *(StateTable<AAT::ObsoleteTypes,void> **)(param_2 + 0x10) = pSVar5;
            *(uint *)(param_2 + 0x18) = uVar12;
            if (uVar15 < uVar9 - 1) {
              uVar4 = (long)pSVar5 - (long)pSVar13;
              if ((pSVar13 < param_3) || (pSVar5 < pSVar13 || uVar4 == 0)) {
                *(undefined8 *)(param_2 + 8) = 0;
                *(undefined8 *)(param_2 + 0x10) = 0;
                *(undefined4 *)(param_2 + 0x18) = 0;
                uVar4 = 0;
                param_3 = (StateTable<AAT::ObsoleteTypes,void> *)0x0;
              }
              else {
                *(StateTable<AAT::ObsoleteTypes,void> **)(param_2 + 8) = pSVar13;
                uVar12 = *(uint *)pSVar13;
                uVar8 = (ulong)(uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                               uVar12 << 0x18);
                if (uVar8 < uVar4) {
                  uVar4 = uVar8;
                }
                *(StateTable<AAT::ObsoleteTypes,void> **)(param_2 + 0x10) = pSVar13 + uVar4;
                *(int *)(param_2 + 0x18) = (int)uVar4;
                uVar4 = uVar4 & 0xffffffff;
                param_3 = pSVar13;
              }
            }
            if (uVar4 < (ulong)((long)pSVar14 - (long)param_3)) goto LAB_004070e5;
            uVar12 = *(uint *)pSVar13;
            uVar12 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                     uVar12 << 0x18;
            if (uVar12 < 8) goto LAB_004070e5;
            param_3 = *(StateTable<AAT::ObsoleteTypes,void> **)(param_2 + 8);
            pSVar6 = pSVar13 + -(long)param_3;
            pSVar5 = (StateTable<AAT::ObsoleteTypes,void> *)(ulong)*(uint *)(param_2 + 0x18);
            if (((pSVar5 < pSVar6) || ((uint)(*(int *)(param_2 + 0x10) - (int)pSVar13) < uVar12)) ||
               (iVar10 = *(int *)(param_2 + 0x1c) - uVar12, *(int *)(param_2 + 0x1c) = iVar10,
               iVar10 < 1)) goto LAB_004070e5;
            switch(pSVar13[5]) {
            case (StateTable<AAT::ObsoleteTypes,void>)0x0:
              if (pSVar6 + 0x10 <= pSVar5) {
                param_3 = (StateTable<AAT::ObsoleteTypes,void> *)(ulong)*(uint *)(param_2 + 0x18);
                if (pSVar13 + 0x10 + -*(long *)(param_2 + 8) <= param_3) {
                  uVar12 = (uint)(ushort)(*(ushort *)(pSVar13 + 8) << 8 |
                                         *(ushort *)(pSVar13 + 8) >> 8);
                  uVar7 = *(int *)(param_2 + 0x10) - (int)(pSVar13 + 0x10);
                  param_3 = (StateTable<AAT::ObsoleteTypes,void> *)(ulong)uVar7;
                  if (uVar12 * 6 <= uVar7) {
                    iVar10 = *(int *)(param_2 + 0x1c) + uVar12 * -6;
                    *(int *)(param_2 + 0x1c) = iVar10;
                    goto joined_r0x00406d7c;
                  }
                }
              }
              break;
            case (StateTable<AAT::ObsoleteTypes,void>)0x1:
              if (pSVar6 + 0x12 <= pSVar5) {
                    /* try { // try from 00406f16 to 00406f1d has its CatchHandler @ 004071ff */
                auVar16 = StateTable<AAT::ObsoleteTypes,void>::sanitize(pSVar14,param_2,param_3);
                param_3 = auVar16._8_8_;
                if (auVar16[0] != '\0') goto switchD_00406eaa_default;
              }
              break;
            case (StateTable<AAT::ObsoleteTypes,void>)0x2:
              param_3 = pSVar6 + 0x10;
              if ((param_3 <= pSVar5) && (pSVar6 + 0xc <= pSVar5)) {
                uVar4 = (ulong)(ushort)(*(ushort *)(pSVar13 + 10) << 8 |
                                       *(ushort *)(pSVar13 + 10) >> 8);
                param_3 = pSVar13 + uVar4 + 4;
                if ((ulong)((long)param_3 - *(long *)(param_2 + 8)) <=
                    (ulong)*(uint *)(param_2 + 0x18)) {
                  if ((param_3 + -*(long *)(param_2 + 8) <=
                       (StateTable<AAT::ObsoleteTypes,void> *)(ulong)*(uint *)(param_2 + 0x18)) &&
                     (uVar12 = (uint)(ushort)(*(ushort *)(pSVar13 + uVar4 + 2) << 8 |
                                             *(ushort *)(pSVar13 + uVar4 + 2) >> 8),
                     uVar12 * 2 <= (uint)(*(int *)(param_2 + 0x10) - (int)param_3))) {
                    uVar12 = *(int *)(param_2 + 0x1c) + uVar12 * -2;
                    param_3 = (StateTable<AAT::ObsoleteTypes,void> *)(ulong)uVar12;
                    *(uint *)(param_2 + 0x1c) = uVar12;
                    if ((0 < (int)uVar12) &&
                       (param_3 = pSVar13 + (0xe - *(long *)(param_2 + 8)),
                       param_3 <=
                       (StateTable<AAT::ObsoleteTypes,void> *)(ulong)*(uint *)(param_2 + 0x18))) {
                      uVar4 = (ulong)(ushort)(*(ushort *)(pSVar13 + 0xc) << 8 |
                                             *(ushort *)(pSVar13 + 0xc) >> 8);
                      pSVar5 = pSVar13 + uVar4 + 4;
                      param_3 = pSVar5 + -*(long *)(param_2 + 8);
                      if ((param_3 <=
                           (StateTable<AAT::ObsoleteTypes,void> *)(ulong)*(uint *)(param_2 + 0x18))
                         && (param_3 = pSVar5 + -*(long *)(param_2 + 8),
                            param_3 <=
                            (StateTable<AAT::ObsoleteTypes,void> *)(ulong)*(uint *)(param_2 + 0x18))
                         ) {
                        uVar12 = (uint)(ushort)(*(ushort *)(pSVar13 + uVar4 + 2) << 8 |
                                               *(ushort *)(pSVar13 + uVar4 + 2) >> 8);
                        uVar7 = *(int *)(param_2 + 0x10) - (int)pSVar5;
                        param_3 = (StateTable<AAT::ObsoleteTypes,void> *)(ulong)uVar7;
                        if ((uVar12 * 2 <= uVar7) &&
                           (((iVar10 = *(int *)(param_2 + 0x1c) + uVar12 * -2,
                             *(int *)(param_2 + 0x1c) = iVar10, 0 < iVar10 &&
                             ((ulong)((long)pSVar13 - *(long *)(param_2 + 8)) <=
                              (ulong)*(uint *)(param_2 + 0x18))) &&
                            (uVar12 = (uint)(ushort)(*(ushort *)(pSVar13 + 0xe) << 8 |
                                                    *(ushort *)(pSVar13 + 0xe) >> 8),
                            uVar12 <= (uint)(*(int *)(param_2 + 0x10) - (int)pSVar13)))))
                        goto LAB_00406d70;
                      }
                    }
                  }
                }
              }
              break;
            case (StateTable<AAT::ObsoleteTypes,void>)0x3:
              pSVar14 = pSVar13 + 0xe;
              if ((pSVar14 + -(long)param_3 <= pSVar5) &&
                 (param_3 = (StateTable<AAT::ObsoleteTypes,void> *)(ulong)*(uint *)(param_2 + 0x18),
                 pSVar14 + -*(long *)(param_2 + 8) <= param_3)) {
                uVar12 = (uint)(byte)pSVar13[0xc] * (uint)(byte)pSVar13[0xb] +
                         ((uint)(ushort)(*(ushort *)(pSVar13 + 8) << 8 |
                                        *(ushort *)(pSVar13 + 8) >> 8) + (uint)(byte)pSVar13[10]) *
                         2;
                uVar7 = *(int *)(param_2 + 0x10) - (int)pSVar14;
                param_3 = (StateTable<AAT::ObsoleteTypes,void> *)(ulong)uVar7;
                if (uVar12 <= uVar7) {
LAB_00406d70:
                  iVar10 = *(int *)(param_2 + 0x1c) - uVar12;
                  *(int *)(param_2 + 0x1c) = iVar10;
joined_r0x00406d7c:
                  if (0 < iVar10) goto switchD_00406eaa_default;
                }
              }
              break;
            default:
              goto switchD_00406eaa_default;
            }
LAB_004070e5:
            lVar11 = *(long *)(*(long *)(param_2 + 0x30) + 0x10);
            *(long *)(param_2 + 8) = lVar11;
            uVar3 = *(uint *)(*(long *)(param_2 + 0x30) + 0x18);
            *(ulong *)(param_2 + 0x10) = lVar11 + (ulong)uVar3;
            *(uint *)(param_2 + 0x18) = uVar3;
          }
          goto LAB_004070ff;
        }
        goto LAB_00407115;
      }
    }
  }
  goto LAB_004070ff;
switchD_00406eaa_default:
  uVar12 = *(uint *)pSVar13;
  pSVar13 = pSVar13 + (uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                      uVar12 << 0x18);
  lVar11 = *(long *)(*(long *)(param_2 + 0x30) + 0x10);
  *(long *)(param_2 + 8) = lVar11;
  uVar12 = *(uint *)(*(long *)(param_2 + 0x30) + 0x18);
  pSVar5 = (StateTable<AAT::ObsoleteTypes,void> *)(ulong)uVar12;
  *(StateTable<AAT::ObsoleteTypes,void> **)(param_2 + 0x10) = pSVar5 + lVar11;
  *(uint *)(param_2 + 0x18) = uVar12;
  uVar15 = uVar15 + 1;
  if (uVar3 == uVar15) goto LAB_00407107;
  goto LAB_00406db5;
LAB_00407107:
  uVar3 = *param_1;
  uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
LAB_00407115:
  uVar4 = CONCAT71((int7)((ulong)param_5 >> 8),1);
  if (uVar3 < 0x30000) goto LAB_004071ed;
  lVar2 = (long)(ulong)uVar9 * 4;
  uVar15 = (uint)((ulong)lVar2 >> 0x20);
  param_3 = (StateTable<AAT::ObsoleteTypes,void> *)(ulong)uVar15;
  uVar3 = (uint)lVar2;
  if (((uVar15 == 0) && (param_3 = pSVar13 + -lVar11, param_3 <= pSVar5)) &&
     (uVar15 = *(int *)(param_2 + 0x10) - (int)pSVar13,
     param_3 = (StateTable<AAT::ObsoleteTypes,void> *)(ulong)uVar15, uVar3 <= uVar15)) {
    uVar3 = *(int *)(param_2 + 0x1c) - uVar3;
    param_3 = (StateTable<AAT::ObsoleteTypes,void> *)(ulong)uVar3;
    *(uint *)(param_2 + 0x1c) = uVar3;
    if (0 < (int)uVar3) {
      if (uVar1 != 0) {
        uVar3 = *(int *)(param_2 + 0x38) + 7U >> 3;
        param_3 = (StateTable<AAT::ObsoleteTypes,void> *)0x0;
        pSVar14 = pSVar13;
        do {
          pSVar14 = pSVar14 + 4;
          uVar1 = *(uint *)(pSVar13 + (long)param_3 * 4);
          if (1 < (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18)
                  + 1) {
            if (pSVar5 < pSVar14 + -lVar11) goto LAB_004070ff;
            uVar1 = *(uint *)(pSVar13 + (long)param_3 * 4);
            lVar11 = *(long *)(param_2 + 8);
            pSVar5 = (StateTable<AAT::ObsoleteTypes,void> *)(ulong)*(uint *)(param_2 + 0x18);
            if (((pSVar5 < pSVar13 + (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 |
                                      (uVar1 & 0xff00) << 8 | uVar1 << 0x18) + -lVar11) ||
                ((uint)(*(int *)(param_2 + 0x10) -
                       (int)(pSVar13 +
                            (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                            uVar1 << 0x18))) < uVar3)) ||
               (iVar10 = *(int *)(param_2 + 0x1c) - uVar3, *(int *)(param_2 + 0x1c) = iVar10,
               iVar10 < 1)) goto LAB_004070ff;
          }
          param_3 = param_3 + 1;
        } while ((StateTable<AAT::ObsoleteTypes,void> *)(ulong)uVar9 != param_3);
      }
      goto LAB_004071ed;
    }
  }
LAB_004070ff:
  uVar4 = 0;
LAB_004071ed:
  auVar16._0_8_ = uVar4 & 0xffffffff;
  auVar16._8_8_ = param_3;
  return auVar16;
}


