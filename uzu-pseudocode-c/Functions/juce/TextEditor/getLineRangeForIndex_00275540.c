// Function : getLineRangeForIndex
// Namespace: juce:TextEditor
// Entry    : 00275540
// Prototype: undefined1[16] getLineRangeForIndex(TextEditor * this, int param_1)
// Body     : 00275540 - 002759ad


/* juce::TextEditor::getLineRangeForIndex(int) */

undefined1  [16] __thiscall juce::TextEditor::getLineRangeForIndex(TextEditor *this,int param_1)

{
  String *this_00;
  long lVar1;
  char *__s;
  byte bVar2;
  undefined8 uVar3;
  ParagraphStorage *pPVar4;
  size_t sVar5;
  long *plVar6;
  char *pcVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  byte bVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined1 auVar21 [16];
  
  lVar18 = (long)param_1;
  if (*(long *)(this + 0x80) == *(long *)(this + 0x88)) {
    lVar19 = lVar18;
    goto LAB_0027599e;
  }
  plVar6 = *(long **)(this + 0x68);
  uVar8 = (long)*(long **)(this + 0x70) - (long)plVar6;
  plVar13 = plVar6;
  if (0 < (long)uVar8) {
    uVar14 = uVar8 >> 4;
    do {
      uVar11 = uVar14 >> 1;
      uVar12 = uVar11;
      if (plVar13[uVar11 * 2 + 1] <= lVar18) {
        uVar12 = ~uVar11 + uVar14;
        plVar13 = plVar13 + uVar11 * 2 + 2;
      }
      uVar14 = uVar12;
    } while (0 < (long)uVar12);
  }
  if ((plVar13 == *(long **)(this + 0x70)) || (lVar18 < *plVar13)) {
    lVar17 = *(long *)((uVar8 - 0x10) + (long)plVar6);
    lVar18 = *(long *)((uVar8 - 8) + (long)plVar6);
    this_00 = *(String **)(*(long *)(this + 0x88) + -8);
    uVar3 = juce::String::endsWith(this_00,"\n");
    lVar19 = lVar18;
    if ((char)uVar3 != '\0') goto LAB_0027599e;
    pPVar4 = ParagraphStorage::getShapedText((ParagraphStorage *)this_00);
    lVar18 = *(long *)(*(long *)(*(long *)pPVar4 + 0xd8) + -0x10) + lVar17;
    lVar17 = lVar17 + *(long *)(*(long *)(*(long *)pPVar4 + 0xd8) + -8);
    if (lVar17 <= lVar18) {
      lVar17 = lVar18;
    }
  }
  else {
    lVar20 = *plVar13;
    lVar17 = plVar13[1];
    pPVar4 = ParagraphStorage::getShapedText
                       (*(ParagraphStorage **)
                         (*(long *)(this + 0x80) + ((long)plVar13 - (long)plVar6 >> 1)));
    lVar1 = *(long *)pPVar4;
    plVar6 = *(long **)(lVar1 + 0xd0);
    plVar13 = *(long **)(lVar1 + 0xd8);
    if (0 < (long)plVar13 - (long)plVar6) {
      uVar8 = (ulong)((long)plVar13 - (long)plVar6) >> 4;
      do {
        uVar12 = uVar8 >> 1;
        uVar14 = uVar12;
        if (plVar6[uVar12 * 2 + 1] <= lVar18 - lVar20) {
          uVar14 = ~uVar12 + uVar8;
          plVar6 = plVar6 + uVar12 * 2 + 2;
        }
        uVar8 = uVar14;
      } while (0 < (long)uVar14);
    }
    if (plVar6 == plVar13) {
LAB_00275698:
      lVar19 = *plVar13;
      plVar6 = plVar13;
    }
    else {
      lVar19 = *plVar6;
      if (lVar18 - lVar20 < lVar19) goto LAB_00275698;
    }
    lVar18 = lVar19 + lVar20;
    lVar19 = lVar20 + plVar6[1];
    if (lVar20 + plVar6[1] <= lVar18) {
      lVar19 = lVar18;
    }
    if (lVar19 != lVar17) goto LAB_0027599e;
    __s = *(char **)(lVar1 + 0x78);
    sVar5 = strlen(__s);
    if (sVar5 != 0) {
      pcVar7 = __s + (sVar5 - 1);
      bVar2 = __s[sVar5 - 1];
      if ((bVar2 & 0xc0) == 0x80) {
        bVar2 = __s[sVar5 - 2];
        pcVar7 = __s + (sVar5 - 2);
        if ((bVar2 & 0xc0) == 0x80) {
          bVar2 = __s[sVar5 - 3];
          pcVar7 = __s + (sVar5 - 3);
          if ((bVar2 & 0xc0) == 0x80) {
            bVar2 = __s[sVar5 - 4];
            pcVar7 = __s + (sVar5 - 4);
          }
        }
      }
      uVar9 = (uint)bVar2;
      if ((char)bVar2 < '\0') {
        if ((bVar2 & 0x40) == 0) {
          uVar9 = uVar9 & 0x7f;
        }
        else {
          uVar16 = 0x3f;
          if ((bVar2 & 0x20) != 0) {
            uVar16 = uVar9 & 0x10 ^ 0x1f;
          }
          uVar9 = uVar16 & uVar9;
          if (((byte)pcVar7[1] & 0xffffffc0) == 0x80) {
            bVar15 = bVar2 >> 5 & (bVar2 & 0x10) == 0;
            uVar10 = (byte)pcVar7[1] & 0x3f;
            uVar16 = uVar10 + uVar9 * 0x40;
            if (((((bVar2 & 0x20) != 0) && ((pcVar7[2] & 0xc0U) == 0x80)) &&
                (uVar16 = (byte)pcVar7[2] & 0x3f | uVar16 * 0x40, bVar15 == 0)) &&
               ((pcVar7[3] & 0xc0U) == 0x80)) {
              uVar16 = uVar16 << 6 | (byte)pcVar7[3] & 0x3f;
            }
            if (uVar16 != 0xd) {
              uVar9 = uVar10 | uVar9 * 0x40;
              if ((((bVar2 & 0x20) != 0) && ((pcVar7[2] & 0xc0U) == 0x80)) &&
                 ((uVar9 = (byte)pcVar7[2] & 0x3f | uVar9 << 6, bVar15 == 0 &&
                  (((byte)pcVar7[3] & 0xffffffc0) == 0x80)))) {
                uVar9 = uVar9 << 6 | (byte)pcVar7[3] & 0x3f;
              }
              goto LAB_0027581c;
            }
            goto LAB_00275825;
          }
        }
        if (uVar9 != 0xd) goto LAB_0027581c;
      }
      else if (bVar2 != 0xd) {
LAB_0027581c:
        if (uVar9 != 10) goto LAB_0027560e;
      }
LAB_00275825:
      lVar20 = lVar17 + -1;
      if (lVar17 + -1 <= lVar18) {
        lVar20 = lVar18;
      }
      lVar19 = lVar20;
      if (pcVar7 == __s) goto LAB_0027599e;
      bVar2 = pcVar7[-1];
      if ((bVar2 & 0xc0) == 0x80) {
        bVar2 = pcVar7[-2];
        if ((bVar2 & 0xc0) == 0x80) {
          bVar2 = pcVar7[-3];
          if ((bVar2 & 0xc0) == 0x80) {
            bVar2 = pcVar7[-4];
            pcVar7 = pcVar7 + -4;
          }
          else {
            pcVar7 = pcVar7 + -3;
          }
        }
        else {
          pcVar7 = pcVar7 + -2;
        }
      }
      else {
        pcVar7 = pcVar7 + -1;
      }
      uVar9 = (uint)bVar2;
      if ((char)bVar2 < '\0') {
        if ((bVar2 & 0x40) == 0) {
          uVar9 = uVar9 & 0x7f;
        }
        else {
          uVar16 = 0x3f;
          if ((bVar2 & 0x20) != 0) {
            uVar16 = uVar9 & 0x10 ^ 0x1f;
          }
          uVar9 = uVar16 & uVar9;
          if (((byte)pcVar7[1] & 0xffffffc0) == 0x80) {
            bVar15 = bVar2 >> 5 & (bVar2 & 0x10) == 0;
            uVar10 = (byte)pcVar7[1] & 0x3f;
            uVar16 = uVar10 + uVar9 * 0x40;
            if ((((bVar2 & 0x20) != 0) && ((pcVar7[2] & 0xc0U) == 0x80)) &&
               ((uVar16 = (byte)pcVar7[2] & 0x3f | uVar16 * 0x40, bVar15 == 0 &&
                ((pcVar7[3] & 0xc0U) == 0x80)))) {
              uVar16 = uVar16 << 6 | (byte)pcVar7[3] & 0x3f;
            }
            if (uVar16 != 0xd) {
              uVar9 = uVar10 | uVar9 * 0x40;
              if (((((bVar2 & 0x20) != 0) && ((pcVar7[2] & 0xc0U) == 0x80)) &&
                  (uVar9 = (byte)pcVar7[2] & 0x3f | uVar9 << 6, bVar15 == 0)) &&
                 (((byte)pcVar7[3] & 0xffffffc0) == 0x80)) {
                uVar9 = uVar9 << 6 | (byte)pcVar7[3] & 0x3f;
              }
              goto LAB_0027598e;
            }
            goto LAB_00275993;
          }
        }
        if (uVar9 != 0xd) goto LAB_0027598e;
      }
      else if (bVar2 != 0xd) {
LAB_0027598e:
        if (uVar9 != 10) goto LAB_0027599e;
      }
LAB_00275993:
      lVar19 = lVar20 + -1;
      if (lVar20 + -1 <= lVar18) {
        lVar19 = lVar18;
      }
      goto LAB_0027599e;
    }
  }
LAB_0027560e:
  lVar19 = lVar17;
LAB_0027599e:
  auVar21._8_8_ = lVar19;
  auVar21._0_8_ = lVar18;
  return auVar21;
}


