// Function : indexAtPosition
// Namespace: juce:TextEditor
// Entry    : 00270f60
// Prototype: ulong indexAtPosition(float param_1, float param_2, TextEditor * this)
// Body     : 00270f60 - 00271526


/* juce::TextEditor::indexAtPosition(float, float) const */

ulong __thiscall juce::TextEditor::indexAtPosition(float param_1,float param_2,TextEditor *this)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  bool bVar4;
  ParagraphStorage *pPVar5;
  int *piVar6;
  ParagraphStorage *pPVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  float *pfVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  float *pfVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  int *piVar24;
  float fVar25;
  float fVar26;
  
  fVar25 = 0.0;
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  lVar23 = *(long *)(this + 0x330);
  lVar1 = *(long *)(lVar23 + 0x80);
  piVar2 = *(int **)(lVar23 + 0x68);
  piVar6 = piVar2;
  piVar24 = piVar2;
  if (*(int **)(lVar23 + 0x70) != piVar2) {
    lVar23 = 0;
    fVar26 = 0.0;
    do {
      pPVar7 = *(ParagraphStorage **)(lVar1 + (lVar23 >> 1));
      if (pPVar7[0x54] == (ParagraphStorage)0x0) {
        pPVar5 = ParagraphStorage::getShapedText(pPVar7);
        lVar21 = *(long *)pPVar5;
        if (*(long *)(lVar21 + 0x150) == *(long *)(lVar21 + 0x158)) {
          fVar25 = 0.0;
        }
        else {
          fVar25 = *(float *)(*(long *)(lVar21 + 0x170) + -8);
        }
        *(float *)(pPVar7 + 0x50) = fVar25;
        pPVar7[0x54] = (ParagraphStorage)0x1;
      }
      else {
        fVar25 = *(float *)(pPVar7 + 0x50);
      }
      fVar25 = fVar25 + fVar26;
      if ((fVar26 <= param_2) && (param_2 < fVar25)) {
        piVar24 = (int *)(lVar23 + (long)piVar2);
        if (piVar24 == *(int **)(*(long *)(this + 0x330) + 0x70)) goto LAB_0027124f;
        goto LAB_00271064;
      }
      if (param_2 < fVar26) {
        return 0;
      }
      piVar6 = *(int **)(*(long *)(this + 0x330) + 0x70);
      lVar21 = lVar23 + 0x10;
      lVar23 = lVar23 + 0x10;
      fVar26 = fVar25;
    } while ((int *)((long)piVar2 + lVar21) != piVar6);
    piVar24 = (int *)(lVar23 + (long)piVar2);
  }
  fVar26 = fVar25;
  if (piVar24 == piVar6) {
LAB_0027124f:
                    /* WARNING: Could not recover jumptable at 0x00271262. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar10 = (**(code **)(*(long *)this + 0x50))(this);
    return uVar10;
  }
LAB_00271064:
  pPVar7 = ParagraphStorage::getShapedText
                     (*(ParagraphStorage **)(lVar1 + ((long)piVar24 - (long)piVar2 >> 1)));
  lVar23 = *(long *)pPVar7;
  lVar1 = *(long *)(lVar23 + 0x88);
  lVar21 = *(long *)(lVar23 + 0x90) - lVar1;
  if (lVar21 == 0) {
    lVar23 = 0;
    goto LAB_00271516;
  }
  lVar21 = lVar21 >> 5;
  plVar20 = *(long **)(lVar23 + 0x150);
  uVar10 = *(long *)(lVar23 + 0x158) - (long)plVar20;
  plVar19 = plVar20;
  if (uVar10 == 0) {
LAB_0027110b:
    if (plVar19 != (long *)((uVar10 & 0xfffffffffffffff0) + (long)plVar20)) {
      lVar11 = *plVar19;
      lVar8 = *(long *)(*(long *)(lVar23 + 0x148) + 8);
      lVar16 = *(long *)(*(long *)(lVar23 + 0x148) + 0x10) - lVar8 >> 5;
      if (lVar16 < 0) {
        lVar16 = 0;
      }
      lVar22 = 0;
      if (-1 < lVar11) {
        lVar22 = lVar11;
      }
      lVar3 = plVar19[1];
      if (lVar3 <= lVar16) {
        lVar16 = lVar3;
      }
      lVar17 = lVar16 - lVar22;
      if (lVar17 == 0 || lVar16 < lVar22) {
        lVar17 = 0;
      }
      lVar16 = lVar3;
      if (lVar17 != 0) {
        pfVar14 = (float *)(lVar8 + lVar22 * 0x20);
        pfVar18 = pfVar14 + lVar17 * 8;
        fVar25 = *(float *)(*(long *)(lVar23 + 0x168) + 8 +
                           ((long)plVar19 - (long)plVar20 >> 4) * 0x28);
        do {
          if (param_1 < *pfVar14 * DAT_005d9044 + fVar25) {
            if (lVar21 <= lVar11) goto LAB_002712f8;
            goto LAB_002711ce;
          }
          lVar16 = lVar11;
          if (*(char *)((long)pfVar14 + 0x1e) != '\0') break;
          fVar25 = fVar25 + *pfVar14;
          lVar11 = lVar11 + 1;
          pfVar14 = pfVar14 + 8;
          lVar16 = lVar3;
        } while (pfVar14 != pfVar18);
      }
      goto joined_r0x002714ce;
    }
    lVar11 = 0;
    if (lVar21 < 1) goto LAB_002712f8;
  }
  else {
    fVar25 = 0.0;
    lVar11 = 0;
    do {
      bVar4 = fVar25 <= param_2 - fVar26;
      fVar25 = *(float *)(*(long *)(lVar23 + 0x168) + 0x20 + (lVar11 >> 4) * 0x28);
      if ((bVar4) && (param_2 - fVar26 < fVar25)) {
        plVar19 = (long *)(lVar11 + (long)plVar20);
        goto LAB_0027110b;
      }
      lVar11 = lVar11 + 0x10;
      lVar16 = 0;
    } while (((long)uVar10 >> 4) * 0x10 != lVar11);
joined_r0x002714ce:
    lVar11 = lVar16;
    if (lVar21 <= lVar11) {
LAB_002712f8:
      lVar21 = lVar11 + -1;
      lVar8 = *(long *)(lVar1 + 0x10 + lVar21 * 0x20);
      plVar20 = *(long **)(lVar23 + 0x118);
      plVar19 = *(long **)(lVar23 + 0x120);
      uVar10 = (long)plVar19 - (long)plVar20;
      plVar9 = plVar20;
      if (0 < (long)uVar10) {
        uVar15 = uVar10 >> 4;
        do {
          uVar12 = uVar15 >> 1;
          uVar13 = uVar12;
          if (plVar9[uVar12 * 2 + 1] <= lVar8) {
            uVar13 = ~uVar12 + uVar15;
            plVar9 = plVar9 + uVar12 * 2 + 2;
          }
          uVar15 = uVar13;
        } while (0 < (long)uVar13);
      }
      lVar16 = *(long *)(lVar23 + 0x130);
      uVar15 = uVar10;
      if ((plVar9 != plVar19) && (*plVar9 <= lVar8)) {
        uVar15 = (long)plVar9 - (long)plVar20;
      }
      lVar23 = lVar8;
      if (*(char *)(lVar16 + 0x10 + ((long)uVar15 >> 4) * 0x18) != '\0') {
        plVar9 = plVar20;
        if (0 < (long)uVar10) {
          uVar15 = uVar10 >> 4;
          do {
            uVar12 = uVar15 >> 1;
            uVar13 = uVar12;
            if (plVar9[uVar12 * 2 + 1] <= lVar8) {
              uVar13 = ~uVar12 + uVar15;
              plVar9 = plVar9 + uVar12 * 2 + 2;
            }
            uVar15 = uVar13;
          } while (0 < (long)uVar13);
        }
        if ((plVar9 != plVar19) && (*plVar9 <= lVar8)) {
          uVar10 = (long)plVar9 - (long)plVar20;
        }
        lVar22 = (long)uVar10 >> 4;
        if (*(char *)(lVar16 + 0x10 + lVar22 * 0x18) == '\0') {
          plVar19 = (long *)(lVar1 + lVar21 * 0x20 + -0x10);
          do {
            lVar11 = lVar11 + -1;
            if (lVar11 <= *(long *)(lVar16 + lVar22 * 0x18)) goto LAB_00271507;
            lVar23 = *plVar19;
            plVar19 = plVar19 + -4;
          } while (lVar23 == lVar8);
        }
        else {
          plVar19 = (long *)(lVar1 + lVar11 * 0x20 + 0x10);
          do {
            lVar21 = lVar21 + 1;
            if (*(long *)(lVar16 + 8 + lVar22 * 0x18) <= lVar21) goto LAB_00271507;
            lVar23 = *plVar19;
            plVar19 = plVar19 + 4;
          } while (lVar23 == lVar8);
        }
      }
      goto LAB_00271516;
    }
  }
LAB_002711ce:
  lVar8 = lVar11 * 0x20;
  lVar21 = *(long *)(lVar1 + 0x10 + lVar8);
  plVar20 = *(long **)(lVar23 + 0x118);
  plVar19 = *(long **)(lVar23 + 0x120);
  uVar10 = (long)plVar19 - (long)plVar20;
  plVar9 = plVar20;
  if (0 < (long)uVar10) {
    uVar15 = uVar10 >> 4;
    do {
      uVar12 = uVar15 >> 1;
      uVar13 = uVar12;
      if (plVar9[uVar12 * 2 + 1] <= lVar21) {
        uVar13 = ~uVar12 + uVar15;
        plVar9 = plVar9 + uVar12 * 2 + 2;
      }
      uVar15 = uVar13;
    } while (0 < (long)uVar13);
  }
  lVar16 = *(long *)(lVar23 + 0x130);
  uVar15 = uVar10;
  if ((plVar9 != plVar19) && (*plVar9 <= lVar21)) {
    uVar15 = (long)plVar9 - (long)plVar20;
  }
  lVar23 = lVar21;
  if (*(char *)(lVar16 + 0x10 + ((long)uVar15 >> 4) * 0x18) == '\0') {
    plVar9 = plVar20;
    if (0 < (long)uVar10) {
      uVar15 = uVar10 >> 4;
      do {
        uVar12 = uVar15 >> 1;
        uVar13 = uVar12;
        if (plVar9[uVar12 * 2 + 1] <= lVar21) {
          uVar13 = ~uVar12 + uVar15;
          plVar9 = plVar9 + uVar12 * 2 + 2;
        }
        uVar15 = uVar13;
      } while (0 < (long)uVar13);
    }
    if ((plVar9 != plVar19) && (*plVar9 <= lVar21)) {
      uVar10 = (long)plVar9 - (long)plVar20;
    }
    lVar22 = (long)uVar10 >> 4;
    if (*(char *)(lVar16 + 0x10 + lVar22 * 0x18) == '\0') {
      lVar11 = lVar11 + 1;
      plVar19 = (long *)(lVar1 + lVar8 + -0x10);
      do {
        lVar11 = lVar11 + -1;
        if (lVar11 <= *(long *)(lVar16 + lVar22 * 0x18)) goto LAB_00271507;
        lVar23 = *plVar19;
        plVar19 = plVar19 + -4;
      } while (lVar23 == lVar21);
    }
    else {
      plVar19 = (long *)(lVar8 + lVar1 + 0x30);
      do {
        lVar11 = lVar11 + 1;
        if (*(long *)(lVar16 + 8 + lVar22 * 0x18) <= lVar11) goto LAB_00271507;
        lVar23 = *plVar19;
        plVar19 = plVar19 + 4;
      } while (lVar23 == lVar21);
    }
  }
LAB_00271516:
  return (ulong)(uint)((int)lVar23 + *piVar24);
LAB_00271507:
  lVar23 = plVar20[lVar22 * 2 + 1];
  goto LAB_00271516;
}


