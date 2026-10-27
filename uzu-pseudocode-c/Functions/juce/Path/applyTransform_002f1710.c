// Function : applyTransform
// Namespace: juce:Path
// Entry    : 002f1710
// Prototype: undefined applyTransform(Path * this, float * param_1)
// Body     : 002f1710 - 002f1b65


/* juce::Path::applyTransform(juce::AffineTransform const&) */

void __thiscall juce::Path::applyTransform(Path *this,float *param_1)

{
  Path *pPVar1;
  Path *pPVar2;
  Path *pPVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  Path *pPVar9;
  Path *pPVar10;
  Path *pPVar11;
  Path *pPVar12;
  float *pfVar13;
  Path *pPVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  fVar8 = DAT_005de3dc;
  fVar7 = DAT_005de3d8;
  fVar6 = DAT_005de3d4;
  fVar5 = DAT_005de3d0;
  if (0 < (long)*(int *)(this + 0xc)) {
    pPVar1 = this + 0x10;
    pfVar13 = *(float **)this;
    pfVar4 = pfVar13 + *(int *)(this + 0xc);
    pPVar2 = this + 0x14;
    pPVar3 = this + 0x18;
    pPVar14 = this + 0x1c;
    bVar15 = true;
    do {
      fVar16 = *pfVar13;
      pPVar12 = pPVar3;
      if ((fVar16 != fVar5) || (NAN(fVar16) || NAN(fVar5))) {
        if ((fVar16 == fVar7) && (!NAN(fVar16) && !NAN(fVar7))) {
          fVar16 = pfVar13[1];
          fVar17 = *param_1 * fVar16 + param_1[1] * pfVar13[2] + param_1[2];
          pfVar13[1] = fVar17;
          fVar16 = fVar16 * param_1[3] + pfVar13[2] * param_1[4] + param_1[5];
          pfVar13[2] = fVar16;
          pPVar11 = pPVar1;
          if ((fVar17 < *(float *)pPVar1) ||
             (pPVar11 = pPVar2, *(float *)pPVar2 <= fVar17 && fVar17 != *(float *)pPVar2)) {
            *(float *)pPVar11 = fVar17;
          }
LAB_002f188a:
          if (*(float *)pPVar3 <= fVar16) {
LAB_002f189b:
            pPVar12 = pPVar14;
            if (fVar16 < *(float *)pPVar14 || fVar16 == *(float *)pPVar14) goto LAB_002f1774;
          }
          goto LAB_002f1770;
        }
        if ((fVar16 != fVar8) || (NAN(fVar16) || NAN(fVar8))) {
          if ((fVar16 != fVar6) || (NAN(fVar16) || NAN(fVar6))) {
            pfVar13 = pfVar13 + 1;
          }
          else {
            fVar16 = pfVar13[3];
            fVar17 = pfVar13[5];
            fVar18 = pfVar13[1];
            fVar19 = *param_1 * fVar18 + param_1[1] * pfVar13[2] + param_1[2];
            pfVar13[1] = fVar19;
            fVar21 = fVar18 * param_1[3] + pfVar13[2] * param_1[4] + param_1[5];
            pfVar13[2] = fVar21;
            fVar18 = *param_1 * fVar16 + param_1[1] * pfVar13[4] + param_1[2];
            pfVar13[3] = fVar18;
            fVar20 = fVar16 * param_1[3] + pfVar13[4] * param_1[4] + param_1[5];
            pfVar13[4] = fVar20;
            fVar22 = *param_1 * fVar17 + param_1[1] * pfVar13[6] + param_1[2];
            pfVar13[5] = fVar22;
            fVar16 = fVar17 * param_1[3] + pfVar13[6] * param_1[4] + param_1[5];
            pfVar13[6] = fVar16;
            pPVar12 = pPVar1;
            if ((fVar19 < *(float *)pPVar1) ||
               (pPVar12 = pPVar2, *(float *)pPVar2 <= fVar19 && fVar19 != *(float *)pPVar2)) {
              *(float *)pPVar12 = fVar19;
            }
            pPVar12 = pPVar3;
            if ((fVar21 < *(float *)pPVar3) ||
               (pPVar12 = pPVar14, *(float *)pPVar14 <= fVar21 && fVar21 != *(float *)pPVar14)) {
              *(float *)pPVar12 = fVar21;
            }
            pPVar12 = pPVar1;
            if ((fVar18 < *(float *)pPVar1) ||
               (pPVar12 = pPVar2, *(float *)pPVar2 <= fVar18 && fVar18 != *(float *)pPVar2)) {
              *(float *)pPVar12 = fVar18;
            }
            pPVar12 = pPVar3;
            if ((fVar20 < *(float *)pPVar3) ||
               (pPVar12 = pPVar14, *(float *)pPVar14 <= fVar20 && fVar20 != *(float *)pPVar14)) {
              *(float *)pPVar12 = fVar20;
            }
            pPVar12 = pPVar1;
            if ((fVar22 < *(float *)pPVar1) ||
               (pPVar12 = pPVar2, *(float *)pPVar2 <= fVar22 && fVar22 != *(float *)pPVar2)) {
              *(float *)pPVar12 = fVar22;
            }
            pPVar12 = pPVar3;
            if ((fVar16 < *(float *)pPVar3) ||
               (pPVar12 = pPVar14, *(float *)pPVar14 <= fVar16 && fVar16 != *(float *)pPVar14)) {
              *(float *)pPVar12 = fVar16;
            }
            pfVar13 = pfVar13 + 7;
          }
          goto LAB_002f1778;
        }
        fVar16 = pfVar13[1];
        fVar19 = *param_1 * fVar16 + param_1[1] * pfVar13[2] + param_1[2];
        fVar17 = pfVar13[3];
        pfVar13[1] = fVar19;
        fVar16 = fVar16 * param_1[3] + pfVar13[2] * param_1[4] + param_1[5];
        pfVar13[2] = fVar16;
        fVar18 = *param_1 * fVar17 + param_1[1] * pfVar13[4] + param_1[2];
        pfVar13[3] = fVar18;
        fVar17 = fVar17 * param_1[3] + pfVar13[4] * param_1[4] + param_1[5];
        pfVar13[4] = fVar17;
        pPVar9 = pPVar1;
        pPVar11 = pPVar1;
        pPVar10 = pPVar3;
        if ((fVar19 < *(float *)pPVar1) ||
           (pPVar9 = pPVar2, *(float *)pPVar2 <= fVar19 && fVar19 != *(float *)pPVar2)) {
          *(float *)pPVar9 = fVar19;
          if (*(float *)pPVar3 <= fVar16) goto LAB_002f1986;
LAB_002f198e:
          *(float *)pPVar10 = fVar16;
          if (fVar18 < *(float *)pPVar1) goto LAB_002f19b5;
LAB_002f19ac:
          pPVar11 = pPVar2;
          if (*(float *)pPVar2 <= fVar18 && fVar18 != *(float *)pPVar2) goto LAB_002f19b5;
          if (*(float *)pPVar3 <= fVar17) goto LAB_002f19d5;
LAB_002f19dd:
          *(float *)pPVar12 = fVar17;
        }
        else {
          if (fVar16 < *(float *)pPVar3) goto LAB_002f198e;
LAB_002f1986:
          pPVar10 = pPVar14;
          if (*(float *)pPVar14 <= fVar16 && fVar16 != *(float *)pPVar14) goto LAB_002f198e;
          if (*(float *)pPVar1 <= fVar18) goto LAB_002f19ac;
LAB_002f19b5:
          *(float *)pPVar11 = fVar18;
          if (fVar17 < *(float *)pPVar3) goto LAB_002f19dd;
LAB_002f19d5:
          pPVar12 = pPVar14;
          if (*(float *)pPVar14 <= fVar17 && fVar17 != *(float *)pPVar14) goto LAB_002f19dd;
        }
        pfVar13 = pfVar13 + 5;
      }
      else {
        fVar16 = pfVar13[1];
        fVar17 = *param_1 * fVar16 + param_1[1] * pfVar13[2] + param_1[2];
        pfVar13[1] = fVar17;
        fVar16 = fVar16 * param_1[3] + pfVar13[2] * param_1[4] + param_1[5];
        pfVar13[2] = fVar16;
        if (bVar15) {
          *(float *)pPVar1 = fVar17;
          *(float *)(this + 0x14) = fVar17;
          *(float *)(this + 0x18) = fVar16;
          *(float *)(this + 0x1c) = fVar16;
          bVar15 = false;
        }
        else {
          pPVar11 = pPVar1;
          if ((*(float *)pPVar1 <= fVar17) &&
             (pPVar11 = pPVar2, fVar17 < *(float *)pPVar2 || fVar17 == *(float *)pPVar2))
          goto LAB_002f188a;
          *(float *)pPVar11 = fVar17;
          if (*(float *)pPVar3 <= fVar16) goto LAB_002f189b;
LAB_002f1770:
          *(float *)pPVar12 = fVar16;
        }
LAB_002f1774:
        pfVar13 = pfVar13 + 3;
      }
LAB_002f1778:
    } while (pfVar13 < pfVar4);
  }
  return;
}


