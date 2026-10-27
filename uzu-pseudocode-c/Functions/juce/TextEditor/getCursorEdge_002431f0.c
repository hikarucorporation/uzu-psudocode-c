// Function : getCursorEdge
// Namespace: juce:TextEditor
// Entry    : 002431f0
// Prototype: undefined8 getCursorEdge(TextEditor * this, long param_2, undefined8 param_3, undefined8 param_4, uint * param_5, ulong param_6)
// Body     : 002431f0 - 0024398e


/* juce::TextEditor::getCursorEdge(juce::TextEditor::CaretState const&) const */

undefined8 __thiscall
juce::TextEditor::getCursorEdge
          (TextEditor *this,long param_2,undefined8 param_3,undefined8 param_4,uint *param_5,
          ulong param_6)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  int iVar6;
  ParagraphStorage *pPVar7;
  ParagraphStorage *pPVar8;
  ParagraphStorage *pPVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 extraout_RDX;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  long lVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  float fVar22;
  float fVar23;
  float local_88;
  float local_78;
  long *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined1 local_48 [16];
  
  lVar21 = (long)*(int *)(param_2 + 8) + -1 + (ulong)(*(int *)(param_2 + 0xc) == 0);
  if (*(long *)(*(long *)(this + 0x330) + 0x80) == *(long *)(*(long *)(this + 0x330) + 0x88)) {
    iVar6 = *(int *)(*(long *)(this + 0x188) + 0x150) - *(int *)(this + 0x278);
    iVar5 = 3;
    if (3 < iVar6) {
      iVar5 = iVar6;
    }
    fVar22 = (float)(int)(iVar5 - 2U);
    if ((*(uint *)(this + 0x1a8) & 4) == 0) {
      local_88 = 0.0;
      if ((*(uint *)(this + 0x1a8) & 2) != 0) goto LAB_00243393;
    }
    else {
      fVar22 = fVar22 * DAT_005d9044;
LAB_00243393:
      if (fVar22 <= 0.0) {
        fVar22 = 0.0;
      }
      local_88 = fVar22;
    }
    if (*(float *)(*(SharedFontInternal **)(this + 0x288) + 100) <= 0.0) {
                    /* try { // try from 002433cc to 002433d0 has its CatchHandler @ 0024399f */
      Font::SharedFontInternal::getAscentDescent
                (*(SharedFontInternal **)(this + 0x288),(long *)(this + 0x288),param_3,
                 (ulong)(iVar5 - 2U),param_5,param_6);
    }
  }
  else {
    iVar5 = (**(code **)(*(long *)this + 0x50))(this);
    if ((int)lVar21 == iVar5) {
      iVar6 = *(int *)(*(long *)(this + 0x188) + 0x150) - *(int *)(this + 0x278);
      iVar5 = 3;
      if (3 < iVar6) {
        iVar5 = iVar6;
      }
      fVar22 = (float)(iVar5 + -2);
      lVar21 = *(long *)(*(long *)(this + 0x330) + 0x88);
      if ((*(uint *)(this + 0x1a8) & 4) == 0) {
        local_88 = 0.0;
        if ((*(uint *)(this + 0x1a8) & 2) != 0) goto LAB_0024343b;
      }
      else {
        fVar22 = fVar22 * DAT_005d9044;
LAB_0024343b:
        if (fVar22 <= 0.0) {
          fVar22 = 0.0;
        }
        local_88 = fVar22;
      }
      pPVar9 = *(ParagraphStorage **)(lVar21 + -8);
      lVar18 = *(long *)(pPVar9 + 0x30);
      lVar15 = *(long *)(lVar18 + 0x70) - *(long *)(lVar18 + 0x68);
      uVar14 = extraout_RDX;
      if (lVar15 == 0) {
        fVar22 = 0.0;
        if (pPVar9[0x54] == (ParagraphStorage)0x0) goto LAB_00243516;
LAB_00243504:
        fVar23 = *(float *)(pPVar9 + 0x50);
      }
      else {
        lVar18 = *(long *)(lVar18 + 0x80);
        lVar16 = (lVar15 >> 4) * 0x10;
        fVar22 = 0.0;
        lVar20 = 0;
        lVar15 = lVar21;
        do {
          while( true ) {
            pPVar8 = *(ParagraphStorage **)(lVar18 + (lVar20 >> 1));
            if (pPVar8 == pPVar9) goto LAB_002434f4;
            if (pPVar8[0x54] != (ParagraphStorage)0x0) break;
            pPVar7 = ParagraphStorage::getShapedText(pPVar8);
            lVar3 = *(long *)pPVar7;
            lVar15 = *(long *)(lVar3 + 0x150);
            if (lVar15 == *(long *)(lVar3 + 0x158)) {
              fVar23 = 0.0;
            }
            else {
              fVar23 = *(float *)(*(long *)(lVar3 + 0x170) + -8);
            }
            *(float *)(pPVar8 + 0x50) = fVar23;
            pPVar8[0x54] = (ParagraphStorage)0x1;
            fVar22 = fVar22 + fVar23;
            lVar20 = lVar20 + 0x10;
            uVar14 = extraout_RDX_00;
            if (lVar16 == lVar20) goto LAB_002434f4;
          }
          fVar22 = fVar22 + *(float *)(pPVar8 + 0x50);
          lVar20 = lVar20 + 0x10;
        } while (lVar16 != lVar20);
LAB_002434f4:
        pPVar9 = *(ParagraphStorage **)(lVar21 + -8);
        lVar21 = lVar15;
        if (pPVar9[0x54] != (ParagraphStorage)0x0) goto LAB_00243504;
LAB_00243516:
        pPVar8 = ParagraphStorage::getShapedText(pPVar9);
        lVar18 = *(long *)pPVar8;
        lVar21 = *(long *)(lVar18 + 0x150);
        if (lVar21 == *(long *)(lVar18 + 0x158)) {
          fVar23 = 0.0;
        }
        else {
          fVar23 = *(float *)(*(long *)(lVar18 + 0x170) + -8);
        }
        *(float *)(pPVar9 + 0x50) = fVar23;
        pPVar9[0x54] = (ParagraphStorage)0x1;
        uVar14 = extraout_RDX_01;
      }
      if (*(float *)(*(SharedFontInternal **)(this + 0x288) + 100) <= 0.0) {
                    /* try { // try from 00243588 to 0024358c has its CatchHandler @ 00243997 */
        Font::SharedFontInternal::getAscentDescent
                  (*(SharedFontInternal **)(this + 0x288),(long *)(this + 0x288),uVar14,lVar21,
                   param_5,param_6);
      }
      fVar22 = fVar22 + fVar23;
      goto LAB_0024372e;
    }
    iVar5 = *(int *)(param_2 + 0xc);
    lVar18 = *(long *)(this + 0x330);
    lVar15 = *(long *)(lVar18 + 0x80);
    plVar2 = *(long **)(lVar18 + 0x68);
    uVar10 = *(long *)(lVar18 + 0x70) - (long)plVar2;
    uVar13 = uVar10;
    plVar17 = plVar2;
    if (0x3f < (long)uVar10) {
      lVar18 = (uVar10 >> 6) + 1;
      uVar13 = ((long)uVar10 >> 4) << 4;
      do {
        if ((*plVar17 <= lVar21) && (lVar21 < plVar17[1])) goto LAB_002435cb;
        if ((plVar17[2] <= lVar21) && (lVar21 < plVar17[3])) {
          plVar17 = plVar17 + 2;
          goto LAB_002435cb;
        }
        if ((plVar17[4] <= lVar21) && (lVar21 < plVar17[5])) {
          plVar17 = plVar17 + 4;
          goto LAB_002435cb;
        }
        if ((plVar17[6] <= lVar21) && (lVar21 < plVar17[7])) {
          plVar17 = plVar17 + 6;
          goto LAB_002435cb;
        }
        plVar17 = plVar17 + 8;
        lVar18 = lVar18 + -1;
        uVar13 = uVar13 - 0x40;
      } while (1 < lVar18);
    }
    lVar18 = (long)uVar13 >> 4;
    if (lVar18 == 1) {
LAB_0024341b:
      if ((lVar21 < *plVar17) || (plVar17[1] <= lVar21)) {
LAB_0024342b:
        plVar17 = (long *)((uVar10 & 0xfffffffffffffff0) + (long)plVar2);
      }
    }
    else if (lVar18 == 2) {
LAB_00243407:
      if ((lVar21 < *plVar17) || (plVar17[1] <= lVar21)) {
        plVar17 = plVar17 + 2;
        goto LAB_0024341b;
      }
    }
    else {
      if (lVar18 != 3) goto LAB_0024342b;
      if ((lVar21 < *plVar17) || (plVar17[1] <= lVar21)) {
        plVar17 = plVar17 + 2;
        goto LAB_00243407;
      }
    }
LAB_002435cb:
    lVar18 = (long)plVar17 - (long)plVar2 >> 1;
    pPVar9 = ParagraphStorage::getShapedText(*(ParagraphStorage **)(lVar15 + lVar18));
    lVar18 = *(long *)(*(long *)(lVar15 + lVar18) + 0x20);
    local_68 = (long *)0x0;
    uStack_60 = (long *)0x0;
    local_58 = 0;
    lVar16 = lVar21 - lVar18;
    lVar18 = (lVar21 + 1) - lVar18;
    if (lVar18 <= lVar16) {
      lVar18 = lVar16;
    }
                    /* try { // try from 0024360f to 0024361e has its CatchHandler @ 002439a7 */
    detail::ShapedText::getGlyphRanges(*(long *)pPVar9,lVar16,lVar18,(long *)&local_68);
    if (local_68 == uStack_60) {
      uVar14 = extraout_RDX_02;
      if (local_68 != (long *)0x0) {
        operator_delete(local_68);
        uVar14 = extraout_RDX_04;
      }
    }
    else {
      lVar21 = *local_68;
      lVar18 = local_68[1];
      operator_delete(local_68);
      uVar14 = extraout_RDX_03;
      if (lVar21 != lVar18) {
        detail::ShapedText::getGlyphsBounds(&local_68,*(long *)pPVar9,lVar21,lVar18);
        if (uStack_60._4_4_ == 0) {
          local_78 = 0.0;
          local_88 = 0.0;
        }
        else {
          local_88 = (float)*local_68;
          local_78 = (float)local_68[1];
        }
        free(local_68);
        lVar18 = *(long *)pPVar9;
        plVar4 = *(long **)(lVar18 + 0x118);
        lVar16 = *(long *)(*(long *)(lVar18 + 0x88) + 0x10 + lVar21 * 0x20);
        uVar13 = (long)*(long **)(lVar18 + 0x120) - (long)plVar4;
        plVar19 = plVar4;
        if (0 < (long)uVar13) {
          uVar10 = uVar13 >> 4;
          do {
            uVar11 = uVar10 >> 1;
            uVar12 = uVar11;
            if (plVar19[uVar11 * 2 + 1] <= lVar16) {
              uVar12 = ~uVar11 + uVar10;
              plVar19 = plVar19 + uVar11 * 2 + 2;
            }
            uVar10 = uVar12;
          } while (0 < (long)uVar12);
        }
        if ((plVar19 != *(long **)(lVar18 + 0x120)) && (*plVar19 <= lVar16)) {
          uVar13 = (long)plVar19 - (long)plVar4;
        }
        cVar1 = *(char *)(*(long *)(lVar18 + 0x130) + 0x10 + ((long)uVar13 >> 4) * 0x18);
        if (iVar5 == 0) {
          if (cVar1 == '\0') goto LAB_0024380b;
        }
        else if (cVar1 != '\0') {
LAB_0024380b:
          local_88 = local_88 + local_78;
        }
        plVar4 = *(long **)(lVar18 + 0x150);
        uVar13 = (long)*(long **)(lVar18 + 0x158) - (long)plVar4;
        plVar19 = plVar4;
        if (0 < (long)uVar13) {
          uVar10 = uVar13 >> 4;
          do {
            uVar11 = uVar10 >> 1;
            uVar12 = uVar11;
            if (plVar19[uVar11 * 2 + 1] <= lVar21) {
              uVar12 = ~uVar11 + uVar10;
              plVar19 = plVar19 + uVar11 * 2 + 2;
            }
            uVar10 = uVar12;
          } while (0 < (long)uVar12);
        }
        if ((plVar19 != *(long **)(lVar18 + 0x158)) && (*plVar19 <= lVar21)) {
          uVar13 = (long)plVar19 - (long)plVar4;
        }
        local_48 = ZEXT416((uint)(*(float *)(*(long *)(lVar18 + 0x168) + 0xc +
                                            ((long)uVar13 >> 4) * 0x28) -
                                 *(float *)(*(long *)(lVar18 + 0x168) + 0x10 +
                                           ((long)uVar13 >> 4) * 0x28)));
        pPVar9 = *(ParagraphStorage **)(lVar15 + ((long)plVar17 - (long)plVar2 >> 4) * 8);
        lVar21 = *(long *)(pPVar9 + 0x30);
        lVar18 = *(long *)(lVar21 + 0x70) - *(long *)(lVar21 + 0x68);
        if (lVar18 == 0) {
          fVar22 = 0.0;
        }
        else {
          lVar21 = *(long *)(lVar21 + 0x80);
          fVar22 = 0.0;
          lVar15 = 0;
          do {
            pPVar8 = *(ParagraphStorage **)(lVar21 + (lVar15 >> 1));
            if (pPVar8 == pPVar9) break;
            if (pPVar8[0x54] == (ParagraphStorage)0x0) {
              pPVar7 = ParagraphStorage::getShapedText(pPVar8);
              lVar16 = *(long *)pPVar7;
              if (*(long *)(lVar16 + 0x150) == *(long *)(lVar16 + 0x158)) {
                fVar23 = 0.0;
              }
              else {
                fVar23 = *(float *)(*(long *)(lVar16 + 0x170) + -8);
              }
              *(float *)(pPVar8 + 0x50) = fVar23;
              pPVar8[0x54] = (ParagraphStorage)0x1;
            }
            else {
              fVar23 = *(float *)(pPVar8 + 0x50);
            }
            fVar22 = fVar22 + fVar23;
            lVar15 = lVar15 + 0x10;
          } while ((lVar18 >> 4) * 0x10 != lVar15);
        }
        fVar22 = (float)local_48._0_4_ + fVar22;
        goto LAB_0024372e;
      }
    }
    iVar6 = *(int *)(*(long *)(this + 0x188) + 0x150) - *(int *)(this + 0x278);
    iVar5 = 3;
    if (3 < iVar6) {
      iVar5 = iVar6;
    }
    fVar22 = (float)(int)(iVar5 - 2U);
    if ((*(uint *)(this + 0x1a8) & 4) == 0) {
      local_88 = 0.0;
      if ((*(uint *)(this + 0x1a8) & 2) != 0) goto LAB_002436c7;
    }
    else {
      fVar22 = fVar22 * DAT_005d9044;
LAB_002436c7:
      if (fVar22 <= 0.0) {
        fVar22 = 0.0;
      }
      local_88 = fVar22;
    }
    if (*(float *)(*(SharedFontInternal **)(this + 0x288) + 100) <= 0.0) {
                    /* try { // try from 002436fc to 00243700 has its CatchHandler @ 0024398f */
      Font::SharedFontInternal::getAscentDescent
                (*(SharedFontInternal **)(this + 0x288),(long *)(this + 0x288),uVar14,
                 (ulong)(iVar5 - 2U),param_5,param_6);
    }
  }
  fVar22 = 0.0;
LAB_0024372e:
  return CONCAT44(fVar22,local_88);
}


