// Function : next
// Namespace: juce:PathFlatteningIterator
// Entry    : 002ed3c0
// Prototype: undefined8 next(PathFlatteningIterator * this)
// Body     : 002ed3c0 - 002ee1dd


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::PathFlatteningIterator::next() */

undefined8 __thiscall juce::PathFlatteningIterator::next(PathFlatteningIterator *this)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  float *__ptr;
  undefined7 uVar4;
  float *pfVar5;
  float *pfVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  uint uVar23;
  float local_38;
  float fStack_34;
  
  __ptr = *(float **)(this + 0x50);
  *(undefined8 *)this = *(undefined8 *)(this + 8);
  fVar20 = 0.0;
  fVar22 = 0.0;
  local_38 = 0.0;
  fStack_34 = 0.0;
  pfVar6 = *(float **)(this + 0x58);
  fVar17 = DAT_005de41c;
  uVar23 = _DAT_005d91c0;
  fVar19 = DAT_005d94c8;
LAB_002ed412:
  do {
    while (pfVar6 == __ptr) {
      pfVar6 = *(float **)(this + 0x38);
      if (pfVar6 == (float *)((long)*(int *)((long)*(long **)(this + 0x18) + 0xc) * 4 +
                             **(long **)(this + 0x18))) {
        return 0;
      }
      *(float **)(this + 0x38) = pfVar6 + 1;
      fVar9 = *pfVar6;
      pfVar5 = __ptr;
      if ((fVar9 == fVar17) && (!NAN(fVar9) && !NAN(fVar17))) goto LAB_002ed4ab;
      fVar11 = pfVar6[1];
      *(float *)(this + 8) = fVar11;
      *(float **)(this + 0x38) = pfVar6 + 3;
      fVar8 = pfVar6[2];
      *(float *)(this + 0xc) = fVar8;
      if ((fVar9 == DAT_005de3dc) && (!NAN(fVar9) && !NAN(DAT_005de3dc))) {
        *(float **)(this + 0x38) = pfVar6 + 5;
        fVar22 = (float)*(undefined8 *)(pfVar6 + 3);
        fVar20 = (float)((ulong)*(undefined8 *)(pfVar6 + 3) >> 0x20);
        if (this[0x4c] == (PathFlatteningIterator)0x0) {
          *(float *)(this + 8) =
               *(float *)(this + 0x20) * fVar11 + fVar8 * *(float *)(this + 0x24) +
               *(float *)(this + 0x28);
          *(float *)(this + 0xc) =
               fVar11 * *(float *)(this + 0x2c) + fVar8 * *(float *)(this + 0x30) +
               *(float *)(this + 0x34);
          fVar19 = *(float *)(this + 0x24) * fVar20;
          fVar20 = fVar22 * *(float *)(this + 0x2c) + *(float *)(this + 0x30) * fVar20 +
                   *(float *)(this + 0x34);
          fVar22 = fVar22 * *(float *)(this + 0x20) + fVar19 + *(float *)(this + 0x28);
          fVar19 = DAT_005d94c8;
        }
        else {
        }
        goto LAB_002ed720;
      }
      if ((fVar9 != DAT_005de3d4) || (NAN(fVar9) || NAN(DAT_005de3d4))) {
        fVar10 = fVar11;
        if (this[0x4c] == (PathFlatteningIterator)0x0) {
          fVar10 = *(float *)(this + 0x20) * fVar11 + *(float *)(this + 0x24) * fVar8 +
                   *(float *)(this + 0x28);
          *(float *)(this + 8) = fVar10;
          fVar8 = fVar11 * *(float *)(this + 0x2c) + fVar8 * *(float *)(this + 0x30) +
                  *(float *)(this + 0x34);
          *(float *)(this + 0xc) = fVar8;
        }
        goto LAB_002ed6fa;
      }
      fVar22 = (float)*(undefined8 *)(pfVar6 + 3);
      fVar20 = (float)((ulong)*(undefined8 *)(pfVar6 + 3) >> 0x20);
      *(float **)(this + 0x38) = pfVar6 + 7;
      local_38 = (float)*(undefined8 *)(pfVar6 + 5);
      fStack_34 = (float)((ulong)*(undefined8 *)(pfVar6 + 5) >> 0x20);
      if (this[0x4c] == (PathFlatteningIterator)0x0) {
        fVar17 = *(float *)(this + 0x20);
        fVar19 = *(float *)(this + 0x24);
        fVar9 = *(float *)(this + 0x28);
        *(float *)(this + 8) = fVar17 * fVar11 + fVar8 * fVar19 + fVar9;
        fVar10 = *(float *)(this + 0x2c);
        fVar12 = *(float *)(this + 0x30);
        fVar13 = *(float *)(this + 0x34);
        *(float *)(this + 0xc) = fVar11 * fVar10 + fVar8 * fVar12 + fVar13;
        fVar8 = fVar19 * fVar20;
        fVar20 = fVar22 * fVar10 + fVar12 * fVar20 + fVar13;
        fVar22 = fVar22 * fVar17 + fVar8 + fVar9;
        fVar10 = local_38 * fVar10;
        local_38 = local_38 * fVar17 + fVar19 * fStack_34 + fVar9;
        fStack_34 = fVar10 + fVar12 * fStack_34 + fVar13;
      }
LAB_002edb0c:
      uVar7 = (long)pfVar5 - (long)__ptr >> 2;
      lVar1 = *(long *)(this + 0x60);
      if (lVar1 - 0x10U <= uVar7) {
        *(long *)(this + 0x60) = lVar1 * 2;
        if (lVar1 << 3 == 0) {
          __ptr = (float *)0x0;
        }
        else {
          __ptr = realloc(__ptr,lVar1 << 3);
          uVar23 = _DAT_005d91c0;
        }
        *(float **)(this + 0x50) = __ptr;
        pfVar5 = __ptr + uVar7;
        *(float **)(this + 0x58) = pfVar5;
      }
      fVar17 = *(float *)(this + 8);
      fVar19 = *(float *)(this + 0xc);
      fVar9 = (fVar17 + *(float *)this) * _DAT_005d9920;
      fVar10 = (fVar17 + fVar22) * _UNK_005d9924;
      fVar8 = (fVar19 + *(float *)(this + 4)) * _DAT_005d9920;
      fVar11 = (fVar19 + fVar20) * _UNK_005d9924;
      fVar18 = (local_38 + fVar22) * DAT_005d9044;
      fVar15 = (fStack_34 + fVar20) * DAT_005d9044;
      fVar16 = (fVar9 + fVar10) * DAT_005d9044;
      fVar21 = (fVar8 + fVar11) * DAT_005d9044;
      fVar12 = (fVar18 + fVar10) * DAT_005d9044;
      fVar13 = (fVar15 + fVar11) * DAT_005d9044;
      bVar2 = true;
      if ((fVar16 - fVar17) * (fVar16 - fVar17) + (fVar21 - fVar19) * (fVar21 - fVar19) <=
          *(float *)(this + 0x40)) {
        bVar2 = *(float *)(this + 0x40) <
                (fVar12 - fVar22) * (fVar12 - fVar22) + (fVar13 - fVar20) * (fVar13 - fVar20);
      }
      fVar17 = (float)((uint)fVar16 & uVar23);
      if ((fVar17 != DAT_005d94c8) &&
         (fVar19 = (float)((uint)fVar9 & uVar23), fVar19 != DAT_005d94c8)) {
        fVar14 = (float)((uint)(fVar16 - fVar9) & uVar23);
        if (DAT_005d94cc < fVar14) {
          if (fVar19 <= fVar17) {
            fVar19 = fVar17;
          }
          if (fVar19 * DAT_005d94d0 < fVar14) goto LAB_002edccb;
        }
LAB_002edd28:
        fVar17 = (float)((uint)fVar21 & uVar23);
        if ((fVar17 == DAT_005d94c8) ||
           (fVar19 = (float)((uint)fVar8 & uVar23), fVar19 == DAT_005d94c8)) {
          if ((fVar21 != fVar8) || (NAN(fVar21) || NAN(fVar8))) {
LAB_002edd7d:
            if ((fVar17 == DAT_005d94c8) ||
               (fVar19 = (float)((uint)fVar11 & uVar23), fVar19 == DAT_005d94c8)) {
              if ((fVar21 != fVar11) || (NAN(fVar21) || NAN(fVar11))) goto joined_r0x002ee08d;
            }
            else {
              fVar14 = (float)((uint)(fVar21 - fVar11) & uVar23);
              if (DAT_005d94cc < fVar14) {
                if (fVar19 <= fVar17) {
                  fVar19 = fVar17;
                }
                if (fVar19 * DAT_005d94d0 < fVar14) goto LAB_002ede7a;
              }
            }
          }
        }
        else {
          fVar14 = (float)((uint)(fVar21 - fVar8) & uVar23);
          if (DAT_005d94cc < fVar14) {
            if (fVar19 <= fVar17) {
              fVar19 = fVar17;
            }
            if (fVar19 * DAT_005d94d0 < fVar14) goto LAB_002edd7d;
          }
        }
        fVar17 = (float)((uint)fVar12 & uVar23);
        if ((fVar17 == DAT_005d94c8) ||
           (fVar19 = (float)((uint)fVar18 & uVar23), fVar19 == DAT_005d94c8)) {
          if ((fVar12 != fVar18) || (NAN(fVar12) || NAN(fVar18))) {
LAB_002ede33:
            if ((fVar17 == DAT_005d94c8) ||
               (fVar19 = (float)((uint)fVar10 & uVar23), fVar19 == DAT_005d94c8)) {
              if ((fVar12 != fVar10) || (NAN(fVar12) || NAN(fVar10))) goto joined_r0x002ee08d;
            }
            else {
              fVar10 = (float)((uint)(fVar12 - fVar10) & uVar23);
              if (DAT_005d94cc < fVar10) {
                if (fVar19 <= fVar17) {
                  fVar19 = fVar17;
                }
                if (fVar19 * DAT_005d94d0 < fVar10) goto LAB_002ede7a;
              }
            }
          }
        }
        else {
          fVar14 = (float)((uint)(fVar12 - fVar18) & uVar23);
          if (DAT_005d94cc < fVar14) {
            if (fVar19 <= fVar17) {
              fVar19 = fVar17;
            }
            if (fVar19 * DAT_005d94d0 < fVar14) goto LAB_002ede33;
          }
        }
        fVar17 = (float)((uint)fVar13 & uVar23);
        if ((fVar17 == DAT_005d94c8) ||
           (fVar19 = (float)((uint)fVar15 & uVar23), fVar19 == DAT_005d94c8)) {
          if ((fVar13 != fVar15) || (NAN(fVar13) || NAN(fVar15))) {
LAB_002edefb:
            if ((fVar17 == DAT_005d94c8) ||
               (fVar19 = (float)((uint)fVar11 & uVar23), fVar19 == DAT_005d94c8)) {
              bVar3 = fVar11 == fVar13;
            }
            else {
              fVar10 = (float)((uint)(fVar13 - fVar11) & uVar23);
              bVar3 = true;
              if (DAT_005d94cc < fVar10) {
                if (fVar19 <= fVar17) {
                  fVar19 = fVar17;
                }
                bVar3 = fVar10 <= fVar19 * DAT_005d94d0;
              }
            }
            if ((bool)(bVar2 & (bVar3 ^ 1U))) goto LAB_002edf67;
          }
        }
        else {
          fVar10 = (float)((uint)(fVar13 - fVar15) & uVar23);
          if (DAT_005d94cc < fVar10) {
            if (fVar19 <= fVar17) {
              fVar19 = fVar17;
            }
            if (fVar19 * DAT_005d94d0 < fVar10) goto LAB_002edefb;
          }
        }
        goto LAB_002edff1;
      }
      if ((fVar16 == fVar9) && (!NAN(fVar16) && !NAN(fVar9))) goto LAB_002edd28;
LAB_002edccb:
      if ((fVar17 == DAT_005d94c8) ||
         (fVar19 = (float)((uint)fVar10 & uVar23), fVar19 == DAT_005d94c8)) {
        if ((fVar16 == fVar10) && (!NAN(fVar16) && !NAN(fVar10))) goto LAB_002edd28;
joined_r0x002ee08d:
        if (!bVar2) goto LAB_002edff1;
LAB_002edf67:
        *pfVar5 = fStack_34;
        pfVar5[1] = local_38;
        pfVar5[2] = fVar15;
        pfVar5[3] = fVar18;
        pfVar5[4] = fVar13;
        pfVar5[5] = fVar12;
        pfVar5[6] = 100004.0;
        fVar17 = DAT_005d9044;
        pfVar5[7] = (fVar13 + fVar21) * DAT_005d9044;
        pfVar5[8] = (fVar12 + fVar16) * fVar17;
        pfVar5[9] = fVar21;
        pfVar5[10] = fVar16;
        pfVar5[0xb] = fVar8;
        pfVar5[0xc] = fVar9;
        pfVar6 = pfVar5 + 0xe;
        *(float **)(this + 0x58) = pfVar6;
        pfVar5[0xd] = 100004.0;
      }
      else {
        fVar14 = (float)((uint)(fVar16 - fVar10) & uVar23);
        if (fVar14 <= DAT_005d94cc) goto LAB_002edd28;
        if (fVar19 <= fVar17) {
          fVar19 = fVar17;
        }
        if (fVar14 <= fVar19 * DAT_005d94d0) goto LAB_002edd28;
LAB_002ede7a:
        if (bVar2) goto LAB_002edf67;
LAB_002edff1:
        *pfVar5 = fStack_34;
        pfVar5[1] = local_38;
        pfVar5[2] = 100001.0;
        pfVar5[3] = fVar13;
        pfVar5[4] = fVar12;
        pfVar5[5] = 100001.0;
        pfVar5[6] = fVar21;
        pfVar5[7] = fVar16;
        pfVar6 = pfVar5 + 9;
        *(float **)(this + 0x58) = pfVar6;
        pfVar5[8] = 100001.0;
      }
      fVar17 = DAT_005de41c;
      fVar19 = DAT_005d94c8;
    }
    *(float **)(this + 0x58) = pfVar6 + -1;
    fVar9 = pfVar6[-1];
    if ((fVar9 != fVar17) || (pfVar5 = pfVar6 + -1, !(!NAN(fVar9) && !NAN(fVar17)))) {
      fVar10 = pfVar6[-2];
      *(float *)(this + 8) = fVar10;
      pfVar5 = pfVar6 + -3;
      *(float **)(this + 0x58) = pfVar5;
      fVar8 = pfVar6[-3];
      *(float *)(this + 0xc) = fVar8;
      if ((fVar9 == DAT_005de3dc) && (!(NAN(fVar9) || NAN(DAT_005de3dc)))) {
        *(float **)(this + 0x58) = pfVar6 + -5;
        fVar20 = (float)*(undefined8 *)(pfVar6 + -5);
        fVar22 = (float)((ulong)*(undefined8 *)(pfVar6 + -5) >> 0x20);
        pfVar5 = pfVar6 + -5;
LAB_002ed720:
        uVar7 = (long)pfVar5 - (long)__ptr >> 2;
        lVar1 = *(long *)(this + 0x60);
        if (lVar1 - 10U <= uVar7) {
          *(long *)(this + 0x60) = lVar1 * 2;
          if (lVar1 << 3 == 0) {
            __ptr = (float *)0x0;
          }
          else {
            __ptr = realloc(__ptr,lVar1 << 3);
            fVar17 = DAT_005de41c;
            uVar23 = _DAT_005d91c0;
            fVar19 = DAT_005d94c8;
          }
          *(float **)(this + 0x50) = __ptr;
          pfVar5 = __ptr + uVar7;
          *(float **)(this + 0x58) = pfVar5;
        }
        fVar9 = *(float *)(this + 8);
        fVar10 = *(float *)(this + 0xc);
        fVar11 = (fVar9 + *(float *)this) * _DAT_005d9920;
        fVar12 = (fVar9 + fVar22) * _UNK_005d9924;
        fVar13 = (fVar10 + *(float *)(this + 4)) * _DAT_005d9920;
        fVar15 = (fVar10 + fVar20) * _UNK_005d9924;
        fVar18 = (fVar12 + fVar11) * DAT_005d9044;
        fVar8 = (fVar15 + fVar13) * DAT_005d9044;
        fVar21 = (float)((uint)fVar18 & uVar23);
        if ((fVar21 == fVar19) || (fVar16 = (float)((uint)fVar11 & uVar23), fVar16 == fVar19)) {
          if ((fVar18 == fVar11) && (!NAN(fVar18) && !NAN(fVar11))) goto LAB_002ed8c0;
LAB_002ed861:
          if ((fVar21 != DAT_005d94c8) &&
             (fVar19 = (float)((uint)fVar12 & uVar23), fVar19 != DAT_005d94c8)) {
            fVar16 = (float)((uint)(fVar18 - fVar12) & uVar23);
            if (DAT_005d94cc < fVar16) {
              if (fVar19 <= fVar21) {
                fVar19 = fVar21;
              }
              bVar2 = true;
              if (fVar19 * DAT_005d94d0 < fVar16) goto LAB_002ed979;
            }
            goto LAB_002ed8c0;
          }
          if ((fVar18 == fVar12) && (!NAN(fVar18) && !NAN(fVar12))) goto LAB_002ed8c0;
          bVar2 = true;
LAB_002ed979:
          if ((*(float *)(this + 0x40) <
               (fVar18 - fVar9) * (fVar18 - fVar9) + (fVar8 - fVar10) * (fVar8 - fVar10)) && (bVar2)
             ) {
            *pfVar5 = fVar20;
            pfVar5[1] = fVar22;
            pfVar5[2] = fVar15;
            pfVar5[3] = fVar12;
            pfVar5[4] = 100003.0;
            pfVar5[5] = fVar8;
            pfVar5[6] = fVar18;
            pfVar5[7] = fVar13;
            pfVar5[8] = fVar11;
            *(float **)(this + 0x58) = pfVar5 + 10;
            pfVar5[9] = 100003.0;
            pfVar6 = pfVar5 + 10;
            fVar19 = DAT_005d94c8;
            goto LAB_002ed412;
          }
        }
        else {
          fVar19 = (float)((uint)(fVar18 - fVar11) & uVar23);
          if (DAT_005d94cc < fVar19) {
            if (fVar16 <= fVar21) {
              fVar16 = fVar21;
            }
            if (fVar16 * DAT_005d94d0 < fVar19) goto LAB_002ed861;
          }
LAB_002ed8c0:
          fVar19 = (float)((uint)fVar8 & uVar23);
          if ((fVar19 == DAT_005d94c8) ||
             (fVar21 = (float)((uint)fVar13 & uVar23), fVar21 == DAT_005d94c8)) {
            if ((fVar8 != fVar13) || (NAN(fVar8) || NAN(fVar13))) {
LAB_002ed91d:
              if ((fVar19 == DAT_005d94c8) ||
                 (fVar21 = (float)((uint)fVar15 & uVar23), fVar21 == DAT_005d94c8)) {
                bVar2 = fVar8 == fVar15;
              }
              else {
                fVar16 = (float)((uint)(fVar8 - fVar15) & uVar23);
                bVar2 = true;
                if (DAT_005d94cc < fVar16) {
                  if (fVar21 <= fVar19) {
                    fVar21 = fVar19;
                  }
                  bVar2 = fVar16 <= fVar21 * DAT_005d94d0;
                }
              }
              bVar2 = (bool)(bVar2 ^ 1);
              goto LAB_002ed979;
            }
          }
          else {
            fVar16 = (float)((uint)(fVar8 - fVar13) & uVar23);
            if (DAT_005d94cc < fVar16) {
              if (fVar21 <= fVar19) {
                fVar21 = fVar19;
              }
              if (fVar21 * DAT_005d94d0 < fVar16) goto LAB_002ed91d;
            }
          }
        }
        *pfVar5 = fVar20;
        pfVar5[1] = fVar22;
        pfVar5[2] = 100001.0;
        pfVar5[3] = fVar8;
        pfVar5[4] = fVar18;
        *(float **)(this + 0x58) = pfVar5 + 6;
        pfVar5[5] = 100001.0;
        pfVar6 = pfVar5 + 6;
        fVar19 = DAT_005d94c8;
        goto LAB_002ed412;
      }
      if ((fVar9 == DAT_005de3d4) && (!(NAN(fVar9) || NAN(DAT_005de3d4)))) {
        fVar20 = (float)*(undefined8 *)(pfVar6 + -5);
        fVar22 = (float)((ulong)*(undefined8 *)(pfVar6 + -5) >> 0x20);
        *(float **)(this + 0x58) = pfVar6 + -7;
        fStack_34 = (float)*(undefined8 *)(pfVar6 + -7);
        local_38 = (float)((ulong)*(undefined8 *)(pfVar6 + -7) >> 0x20);
        pfVar5 = pfVar6 + -7;
        goto LAB_002edb0c;
      }
LAB_002ed6fa:
      if ((fVar9 == DAT_005de3d8) && (!NAN(fVar9) && !NAN(DAT_005de3d8))) {
        *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
        if ((((pfVar5 != __ptr) ||
             (pfVar6 = *(float **)(this + 0x38),
             pfVar6 == (float *)((long)*(int *)((long)*(long **)(this + 0x18) + 0xc) * 4 +
                                **(long **)(this + 0x18)))) || (*pfVar6 != DAT_005de41c)) ||
           (NAN(*pfVar6) || NAN(DAT_005de41c))) {
LAB_002ee0de:
          __ptr = (float *)0x0;
          this[0x10] = (PathFlatteningIterator)0x0;
        }
        else {
          fVar17 = *(float *)(this + 0x44);
          fVar19 = (float)((uint)fVar10 & uVar23);
          if ((fVar19 == DAT_005d94c8) ||
             (fVar22 = (float)((uint)fVar17 & uVar23), fVar22 == DAT_005d94c8)) {
            if ((fVar10 != fVar17) || (NAN(fVar10) || NAN(fVar17))) goto LAB_002ee0de;
          }
          else {
            fVar17 = (float)((uint)(fVar10 - fVar17) & _DAT_005d91c0);
            if (DAT_005d94cc < fVar17) {
              if (fVar22 <= fVar19) {
                fVar22 = fVar19;
              }
              if (fVar22 * DAT_005d94d0 < fVar17) goto LAB_002ee0de;
            }
          }
          fVar17 = *(float *)(this + 0x48);
          fVar19 = (float)((uint)fVar8 & uVar23);
          if ((fVar19 == DAT_005d94c8) ||
             (fVar22 = (float)(uVar23 & (uint)fVar17), fVar22 == DAT_005d94c8)) {
            __ptr = (float *)0x0;
            this[0x10] = (PathFlatteningIterator)(-(fVar8 == fVar17) & 1);
          }
          else {
            fVar17 = (float)((uint)(fVar8 - fVar17) & _DAT_005d91c0);
            uVar4 = (undefined7)((ulong)pfVar6 >> 8);
            __ptr = (float *)CONCAT71(uVar4,1);
            if (DAT_005d94cc < fVar17) {
              if (fVar22 <= fVar19) {
                fVar22 = fVar19;
              }
              __ptr = (float *)CONCAT71(uVar4,fVar17 <= fVar22 * DAT_005d94d0);
            }
            this[0x10] = SUB81(__ptr,0);
          }
        }
        goto LAB_002ee0c0;
      }
      if (fVar9 == DAT_005de3dc) {
        if (!NAN(fVar9) && !NAN(DAT_005de3dc)) goto LAB_002ed720;
      }
      if ((fVar9 == DAT_005de3d4) && (!(NAN(fVar9) || NAN(DAT_005de3d4)))) {
        goto LAB_002edb0c;
      }
      if ((fVar9 == fVar17) && (!NAN(fVar9) && !NAN(fVar17))) goto LAB_002ed4ab;
      *(undefined4 *)(this + 0x14) = 0xffffffff;
      *(float *)this = fVar10;
      *(float *)(this + 0x44) = fVar10;
      *(float *)(this + 4) = fVar8;
      *(float *)(this + 0x48) = fVar8;
      pfVar6 = pfVar5;
      goto LAB_002ed412;
    }
LAB_002ed4ab:
    fVar9 = *(float *)(this + 8);
    fVar10 = *(float *)(this + 0x44);
    fVar8 = (float)((uint)fVar9 & uVar23);
    if ((fVar8 == fVar19) || (fVar11 = (float)((uint)fVar10 & uVar23), fVar11 == fVar19)) {
      if ((fVar9 != fVar10) || (NAN(fVar9) || NAN(fVar10))) goto LAB_002ee098;
    }
    else {
      fVar12 = (float)((uint)(fVar9 - fVar10) & uVar23);
      if (DAT_005d94cc < fVar12) {
        if (fVar11 <= fVar8) {
          fVar11 = fVar8;
        }
        if (fVar11 * DAT_005d94d0 < fVar12) goto LAB_002ee098;
      }
    }
    fVar8 = *(float *)(this + 0xc);
    fVar11 = *(float *)(this + 0x48);
    fVar12 = (float)((uint)fVar8 & uVar23);
    pfVar6 = pfVar5;
    if ((fVar12 == fVar19) || (fVar13 = (float)((uint)fVar11 & uVar23), fVar13 == fVar19)) {
      if ((fVar8 != fVar11) || (NAN(fVar8) || NAN(fVar11))) goto LAB_002ee098;
    }
    else {
      fVar8 = (float)((uint)(fVar8 - fVar11) & uVar23);
      if (DAT_005d94cc < fVar8) {
        if (fVar13 <= fVar12) {
          fVar13 = fVar12;
        }
        if (fVar13 * DAT_005d94d0 < fVar8) {
LAB_002ee098:
          *(float *)this = fVar9;
          *(undefined4 *)(this + 4) = *(undefined4 *)(this + 0xc);
          *(float *)(this + 8) = fVar10;
          *(undefined4 *)(this + 0xc) = *(undefined4 *)(this + 0x48);
          this[0x10] = (PathFlatteningIterator)0x1;
LAB_002ee0c0:
          return CONCAT71((int7)((ulong)__ptr >> 8),1);
        }
      }
    }
  } while( true );
}


