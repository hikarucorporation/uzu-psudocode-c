// Function : sanitize
// Namespace: OT:FeatureVariations
// Entry    : 003d48f0
// Prototype: undefined8 sanitize(FeatureVariations * this, long param_1)
// Body     : 003d48f0 - 003d4cd0


/* OT::FeatureVariations::sanitize(hb_sanitize_context_t*) const */

undefined8 __thiscall OT::FeatureVariations::sanitize(FeatureVariations *this,long param_1)

{
  FeatureVariations *pFVar1;
  FeatureVariations *pFVar2;
  FeatureVariations *pFVar3;
  ushort uVar4;
  FeatureVariations *pFVar5;
  ulong uVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  FeatureVariations *pFVar10;
  ulong uVar11;
  FeatureVariations *pFVar12;
  long lVar13;
  
  if (((this + (4 - *(long *)(param_1 + 8)) <= (FeatureVariations *)(ulong)*(uint *)(param_1 + 0x18)
       ) && (*(short *)this == 0x100)) &&
     (this + (8 - *(long *)(param_1 + 8)) <= (FeatureVariations *)(ulong)*(uint *)(param_1 + 0x18)))
  {
    uVar9 = *(uint *)(this + 4);
    lVar13 = (ulong)(uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18
                    ) * 8;
    if ((((int)((ulong)lVar13 >> 0x20) == 0) &&
        (pFVar1 = this + 8,
        (ulong)((long)pFVar1 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18))) &&
       (((uint)lVar13 <= (uint)(*(int *)(param_1 + 0x10) - (int)pFVar1) &&
        (iVar8 = *(int *)(param_1 + 0x1c) - (uint)lVar13, *(int *)(param_1 + 0x1c) = iVar8,
        0 < iVar8)))) {
      uVar9 = *(uint *)(this + 4);
      if (uVar9 == 0) {
        return CONCAT71((uint7)((ulong)lVar13 >> 8) & 0xffffff,1);
      }
      uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
      pFVar10 = (FeatureVariations *)(ulong)uVar9;
      if (uVar9 < 2) {
        pFVar10 = (FeatureVariations *)0x1;
      }
      pFVar12 = (FeatureVariations *)0x0;
      while (this + ((long)pFVar12 * 8 - *(long *)(param_1 + 8)) + 0xc <=
             (FeatureVariations *)(ulong)*(uint *)(param_1 + 0x18)) {
        uVar9 = *(uint *)(this + (long)pFVar12 * 8 + 8);
        if (uVar9 != 0) {
          uVar11 = (ulong)(uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                          uVar9 << 0x18);
          pFVar5 = this + uVar11 + 2;
          if (((ulong)((long)pFVar5 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18))
             && ((ulong)((long)pFVar5 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18))
             ) {
            pFVar2 = this + uVar11;
            uVar9 = (uint)(ushort)(*(ushort *)pFVar2 << 8 | *(ushort *)pFVar2 >> 8);
            if ((uVar9 * 4 <= (uint)(*(int *)(param_1 + 0x10) - (int)pFVar5)) &&
               (iVar8 = *(int *)(param_1 + 0x1c) + uVar9 * -4, *(int *)(param_1 + 0x1c) = iVar8,
               0 < iVar8)) {
              uVar7 = *(ushort *)pFVar2;
              if (uVar7 != 0) {
                uVar4 = uVar7 << 8 | uVar7 >> 8;
                uVar7 = 1;
                if (1 < uVar4) {
                  uVar7 = uVar4;
                }
                lVar13 = 0;
                do {
                  if ((FeatureVariations *)(ulong)*(uint *)(param_1 + 0x18) <
                      this + ((lVar13 + uVar11 + 6) - *(long *)(param_1 + 8))) goto LAB_003d4b14;
                  uVar9 = *(uint *)(this + lVar13 + uVar11 + 2);
                  if ((uVar9 != 0) &&
                     (uVar6 = Condition::sanitize((Condition *)
                                                  (pFVar2 + (uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8
                                                             | (uVar9 & 0xff00) << 8 | uVar9 << 0x18
                                                            )),param_1), (char)uVar6 == '\0')) {
                    if (0x1f < *(uint *)(param_1 + 0x2c)) {
                      return 0;
                    }
                    uVar9 = *(uint *)(param_1 + 0x2c) + 1;
                    *(uint *)(param_1 + 0x2c) = uVar9;
                    if (*(char *)(param_1 + 0x28) == '\0') goto LAB_003d4b17;
                    *(undefined4 *)(this + lVar13 + uVar11 + 2) = 0;
                  }
                  lVar13 = lVar13 + 4;
                } while ((ulong)uVar7 * 4 != lVar13);
              }
              goto LAB_003d4b50;
            }
          }
LAB_003d4b14:
          uVar9 = *(uint *)(param_1 + 0x2c);
LAB_003d4b17:
          if (0x1f < uVar9) {
            return 0;
          }
          *(uint *)(param_1 + 0x2c) = uVar9 + 1;
          if (*(char *)(param_1 + 0x28) == '\0') {
            return 0;
          }
          *(undefined4 *)(this + (long)pFVar12 * 8 + 8) = 0;
        }
LAB_003d4b50:
        if ((FeatureVariations *)(ulong)*(uint *)(param_1 + 0x18) <
            this + ((long)pFVar12 * 8 - *(long *)(param_1 + 8)) + 0x10) {
          return 0;
        }
        uVar9 = *(uint *)(this + (long)pFVar12 * 8 + 0xc);
        pFVar5 = pFVar12;
        if (uVar9 != 0) {
          uVar11 = (ulong)(uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                          uVar9 << 0x18);
          pFVar5 = this + uVar11 + 4;
          if ((((((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pFVar5 - *(long *)(param_1 + 8)))
                || (pFVar2 = this + uVar11, *(short *)pFVar2 != 0x100)) ||
               (pFVar3 = pFVar2 + 6,
               (ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pFVar3 - *(long *)(param_1 + 8))))
              || (((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)pFVar3 - *(long *)(param_1 + 8))
                  || (uVar9 = (uint)(ushort)(*(ushort *)pFVar5 << 8 | *(ushort *)pFVar5 >> 8),
                     (uint)(*(int *)(param_1 + 0x10) - (int)pFVar3) < uVar9 * 6)))) ||
             (iVar8 = *(int *)(param_1 + 0x1c) + uVar9 * -6, *(int *)(param_1 + 0x1c) = iVar8,
             iVar8 < 1)) {
LAB_003d4b99:
            uVar9 = *(uint *)(param_1 + 0x2c);
LAB_003d4b9c:
            if (0x1f < uVar9) {
              return 0;
            }
            *(uint *)(param_1 + 0x2c) = uVar9 + 1;
            if (*(char *)(param_1 + 0x28) == '\0') {
              return 0;
            }
            *(undefined4 *)(this + (long)pFVar12 * 8 + 0xc) = 0;
            pFVar5 = pFVar12;
          }
          else {
            uVar7 = *(ushort *)pFVar5;
            pFVar5 = (FeatureVariations *)(ulong)uVar7;
            if (uVar7 != 0) {
              uVar4 = uVar7 << 8 | uVar7 >> 8;
              uVar7 = 1;
              if (1 < uVar4) {
                uVar7 = uVar4;
              }
              lVar13 = 0;
              do {
                pFVar5 = this + ((lVar13 + uVar11 + 0xc) - *(long *)(param_1 + 8));
                if (((FeatureVariations *)(ulong)*(uint *)(param_1 + 0x18) < pFVar5) ||
                   ((FeatureVariations *)(ulong)*(uint *)(param_1 + 0x18) < pFVar5))
                goto LAB_003d4b99;
                uVar9 = *(uint *)(pFVar1 + lVar13 + uVar11);
                if ((uVar9 != 0) &&
                   (pFVar5 = (FeatureVariations *)
                             Feature::sanitize((Feature *)
                                               (pFVar2 + (uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 |
                                                          (uVar9 & 0xff00) << 8 | uVar9 << 0x18)),
                                               param_1,(uint *)0x0), (char)pFVar5 == '\0')) {
                  if (0x1f < *(uint *)(param_1 + 0x2c)) {
                    return 0;
                  }
                  uVar9 = *(uint *)(param_1 + 0x2c) + 1;
                  pFVar5 = (FeatureVariations *)(ulong)uVar9;
                  *(uint *)(param_1 + 0x2c) = uVar9;
                  if (*(char *)(param_1 + 0x28) == '\0') goto LAB_003d4b9c;
                  *(undefined4 *)(pFVar1 + lVar13 + uVar11) = 0;
                }
                lVar13 = lVar13 + 6;
              } while ((ulong)uVar7 * 6 != lVar13);
            }
          }
        }
        pFVar12 = pFVar12 + 1;
        if (pFVar12 == pFVar10) {
          return CONCAT71((int7)((ulong)pFVar5 >> 8),1);
        }
      }
    }
  }
  return 0;
}


