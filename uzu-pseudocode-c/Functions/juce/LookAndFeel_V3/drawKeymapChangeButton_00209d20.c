// Function : drawKeymapChangeButton
// Namespace: juce:LookAndFeel_V3
// Entry    : 00209d20
// Prototype: undefined drawKeymapChangeButton(undefined8 param_1_00, undefined8 param_2_00, undefined8 param_3_00, undefined8 param_4_00, Graphics * param_5, uint param_6, uint param_7, Component * param_8, undefined8 * param_9)
// Body     : 00209d20 - 00209d24


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* non-virtual thunk to juce::LookAndFeel_V3::drawKeymapChangeButton(juce::Graphics&, int, int,
   juce::Button&, juce::String const&) */

void __thiscall
juce::LookAndFeel_V3::drawKeymapChangeButton
          (undefined8 param_1_00,undefined8 param_2_00,undefined8 param_3_00,undefined8 param_4_00,
          Graphics *param_5,uint param_6,uint param_7,Component *param_8,undefined8 *param_9)

{
  int iVar1;
  char cVar2;
  ulong uVar3;
  Component *pCVar4;
  float *pfVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
  undefined1 auVar18 [16];
  undefined1 auVar17 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float *pfStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  int iStack_6c;
  Component *pCStack_68;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  Graphics *pGStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  uVar16 = (uint)((ulong)param_3_00 >> 0x20);
  uVar13 = (ulong)param_7;
  uVar11 = (ulong)param_6;
  uVar3 = Component::findColour(param_8,0x100ad01,'\x01');
  uVar7 = (uint)uVar3;
  if (*(char *)*param_9 != '\0') {
    pCVar4 = param_8;
    do {
      if ((*(ushort *)(pCVar4 + 0xe8) & 0x8000) != 0) goto LAB_001fe216;
      pCVar4 = *(Component **)(pCVar4 + 0x30);
    } while (pCVar4 != (Component *)0x0);
    uVar16 = 0x33000000;
    if (*(int *)(param_8 + 0x1b8) == 0) {
      uVar16 = 0x1a000000;
    }
    uVar12 = 0x66000000;
    if (*(int *)(param_8 + 0x1b8) != 2) {
      uVar12 = uVar16;
    }
    Graphics::setColour(param_5,uVar7 & 0xffffff | uVar12);
    uStack_90 = CONCAT44((float)(int)((ulong)*(undefined8 *)(param_8 + 0x40) >> 0x20),
                         (float)(int)*(undefined8 *)(param_8 + 0x40));
    pfStack_98 = (float *)0x0;
    (**(code **)(**(long **)(param_5 + 8) + 0x120))(*(long **)(param_5 + 8),&pfStack_98);
    uStack_90 = CONCAT44((float)(int)((ulong)*(undefined8 *)(param_8 + 0x40) >> 0x20),
                         (float)(int)*(undefined8 *)(param_8 + 0x40));
    pfStack_98 = (float *)0x0;
    (**(code **)(**(long **)(param_5 + 8) + 0x118))(*(long **)(param_5 + 8),&pfStack_98);
LAB_001fe216:
    Graphics::setColour(param_5,uVar7);
    Graphics::setFont((float)(int)param_7 * DAT_005d98e8,param_5);
    Graphics::drawFittedText
              (0,DAT_005d9960,(long)param_5,param_9,4,CONCAT44(param_7,param_6 - 8),(uint *)0x24,1);
    if (Component::currentlyFocusedComponent != param_8) {
      return;
    }
    goto LAB_001fe275;
  }
  uStack_88 = 0;
  uStack_80 = 0;
  pfStack_98 = (float *)0x0;
  uStack_90 = 0;
  uStack_78 = 1;
  Path::addEllipse(0,DAT_005dcf50,(Path *)&pfStack_98);
  iVar1 = uStack_90._4_4_;
  lVar9 = (long)uStack_90._4_4_;
  if (lVar9 == 0) {
    uStack_88 = CONCAT44(_UNK_005dcf84,_DAT_005dcf80);
    uStack_80 = CONCAT44(_UNK_005dcf8c,_UNK_005dcf88);
  }
  else {
    uVar16 = ~-(uint)(uStack_88._4_4_ < DAT_005dcf74) & (uint)uStack_88._4_4_;
    uStack_88 = CONCAT44(-(uint)(uStack_88._4_4_ < DAT_005dcf74) & _UNK_005dcf84 | uVar16,
                         -(uint)(DAT_005dcf60 < (float)uStack_88) & _DAT_005dcf80 |
                         ~-(uint)(DAT_005dcf60 < (float)uStack_88) & (uint)(float)uStack_88);
    uStack_80 = CONCAT44(-(uint)(uStack_80._4_4_ < DAT_005dcf7c) & _UNK_005dcf8c |
                         ~-(uint)(uStack_80._4_4_ < DAT_005dcf7c) & (uint)uStack_80._4_4_,
                         -(uint)(DAT_005dcf68 < (float)uStack_80) & _UNK_005dcf88 |
                         ~-(uint)(DAT_005dcf68 < (float)uStack_80) & (uint)(float)uStack_80);
  }
  iVar8 = uStack_90._4_4_ + 0xd;
  uStack_38 = uVar13;
  if ((int)(uint)uStack_90 < iVar8) {
    uVar12 = iVar8 / 2 + uStack_90._4_4_ + 0x15U & 0xfffffff8;
    if ((uint)uStack_90 != uVar12) {
      if ((int)uVar12 < 1) {
        free(pfStack_98);
        pfStack_98 = (float *)0x0;
      }
      else {
        pfStack_98 = realloc(pfStack_98,(ulong)uVar12 << 2);
      }
    }
    uStack_90 = (ulong)uVar12;
  }
  else {
    uVar12 = (uint)uStack_90;
  }
  pfStack_98[lVar9] = 100002.0;
  pfStack_98[lVar9 + 1] = 22.0;
  pfStack_98[lVar9 + 2] = 57.0;
  pfStack_98[lVar9 + 3] = 100001.0;
  pfStack_98[lVar9 + 4] = 22.0;
  pfStack_98[lVar9 + 5] = 43.0;
  pfStack_98[lVar9 + 6] = 100001.0;
  pfStack_98[lVar9 + 7] = 78.0;
  pfStack_98[lVar9 + 8] = 43.0;
  pfStack_98[lVar9 + 9] = 100001.0;
  pfStack_98[lVar9 + 10] = 78.0;
  pfStack_98[lVar9 + 0xb] = 57.0;
  pfStack_98[lVar9 + 0xc] = 100005.0;
  if (iVar8 == 0) {
    uStack_88 = CONCAT44(_UNK_005dcfb4,_DAT_005dcfb0);
    uStack_80 = CONCAT44(_UNK_005dcfbc,_UNK_005dcfb8);
  }
  else {
    uVar16 = ~-(uint)(uStack_88._4_4_ < DAT_005dcfa4) & (uint)uStack_88._4_4_;
    uStack_88 = CONCAT44(-(uint)(uStack_88._4_4_ < DAT_005dcfa4) & _UNK_005dcfb4 | uVar16,
                         -(uint)(DAT_005dcf90 < (float)uStack_88) & _DAT_005dcfb0 |
                         ~-(uint)(DAT_005dcf90 < (float)uStack_88) & (uint)(float)uStack_88);
    uStack_80 = CONCAT44(-(uint)(uStack_80._4_4_ < DAT_005dcfac) & _UNK_005dcfbc |
                         ~-(uint)(uStack_80._4_4_ < DAT_005dcfac) & (uint)uStack_80._4_4_,
                         -(uint)(DAT_005dcf98 < (float)uStack_80) & _UNK_005dcfb8 |
                         ~-(uint)(DAT_005dcf98 < (float)uStack_80) & (uint)(float)uStack_80);
  }
  iVar6 = iVar1 + 0x1a;
  pCStack_68 = param_8;
  uStack_40 = uVar11;
  uStack_90._4_4_ = iVar8;
  if ((int)uVar12 < iVar6) {
    uVar10 = iVar6 / 2 + iVar1 + 0x22U & 0xfffffff8;
    if (uVar12 != uVar10) {
      if ((int)uVar10 < 1) {
        free(pfStack_98);
        pfStack_98 = (float *)0x0;
      }
      else {
        pfStack_98 = realloc(pfStack_98,(ulong)uVar10 << 2);
      }
    }
    uVar12 = uVar10;
    uStack_90._0_4_ = uVar10;
  }
  pCVar4 = pCStack_68;
  pfStack_98[lVar9 + 0xd] = 100002.0;
  pfStack_98[lVar9 + 0xe] = 43.0;
  pfStack_98[lVar9 + 0xf] = 43.0;
  pfStack_98[lVar9 + 0x10] = 100001.0;
  pfStack_98[lVar9 + 0x11] = 43.0;
  pfStack_98[lVar9 + 0x12] = 22.0;
  pfStack_98[lVar9 + 0x13] = 100001.0;
  pfStack_98[lVar9 + 0x14] = 57.0;
  pfStack_98[lVar9 + 0x15] = 22.0;
  pfStack_98[lVar9 + 0x16] = 100001.0;
  pfStack_98[lVar9 + 0x17] = 57.0;
  pfStack_98[lVar9 + 0x18] = 43.0;
  pfStack_98[lVar9 + 0x19] = 100005.0;
  if (iVar6 == 0) {
    uStack_88 = CONCAT44(_UNK_005dcfe4,_DAT_005dcfe0);
    uStack_80 = CONCAT44(_UNK_005dcfec,_UNK_005dcfe8);
    if ((int)uVar12 < iVar1 + 0x27) goto LAB_001fe5a7;
LAB_001fe5fe:
  }
  else {
    uVar16 = ~-(uint)(uStack_88._4_4_ < DAT_005dcfd4) & (uint)uStack_88._4_4_;
    uStack_88 = CONCAT44(-(uint)(uStack_88._4_4_ < DAT_005dcfd4) & _UNK_005dcfe4 | uVar16,
                         -(uint)(DAT_005dcfc0 < (float)uStack_88) & _DAT_005dcfe0 |
                         ~-(uint)(DAT_005dcfc0 < (float)uStack_88) & (uint)(float)uStack_88);
    uStack_80 = CONCAT44(-(uint)(uStack_80._4_4_ < DAT_005dcfdc) & _UNK_005dcfec |
                         ~-(uint)(uStack_80._4_4_ < DAT_005dcfdc) & (uint)uStack_80._4_4_,
                         -(uint)(DAT_005dcfc8 < (float)uStack_80) & _UNK_005dcfe8 |
                         ~-(uint)(DAT_005dcfc8 < (float)uStack_80) & (uint)(float)uStack_80);
    if (iVar1 + 0x27 <= (int)uVar12) goto LAB_001fe5fe;
LAB_001fe5a7:
    uVar10 = (iVar1 + 0x27) / 2 + iVar1 + 0x2fU & 0xfffffff8;
    pGStack_48 = param_5;
    if (uVar12 != uVar10) {
      iStack_6c = iVar6;
      if ((int)uVar10 < 1) {
        free(pfStack_98);
        pfStack_98 = (float *)0x0;
      }
      else {
        pfStack_98 = realloc(pfStack_98,(ulong)uVar10 << 2);
      }
      iVar6 = iStack_6c;
    }
    param_5 = pGStack_48;
    uStack_90._0_4_ = uVar10;
  }
  uStack_90._4_4_ = iVar1 + 0x27;
  pfStack_98[iVar6] = 100002.0;
  pfStack_98[lVar9 + 0x1b] = 43.0;
  pfStack_98[lVar9 + 0x1c] = 78.0;
  pfStack_98[lVar9 + 0x1d] = 100001.0;
  pfStack_98[lVar9 + 0x1e] = 43.0;
  pfStack_98[lVar9 + 0x1f] = 57.0;
  pfStack_98[lVar9 + 0x20] = 100001.0;
  pfStack_98[lVar9 + 0x21] = 57.0;
  pfStack_98[lVar9 + 0x22] = 57.0;
  pfStack_98[lVar9 + 0x23] = 100001.0;
  pfStack_98[lVar9 + 0x24] = 57.0;
  pfStack_98[lVar9 + 0x25] = 78.0;
  pfStack_98[lVar9 + 0x26] = 100005.0;
  uStack_78 = 0;
  iVar1 = *(int *)(pCVar4 + 0x1b8);
  uVar12 = 0x80000000;
  if (iVar1 == 0) {
    uVar12 = 0x4c000000;
  }
  uVar10 = 0xb2000000;
  if (iVar1 != 2) {
    uVar10 = uVar12;
  }
  Graphics::setColour(param_5,uVar10 | (int)((float)(uVar7 & 0xff) * DAT_005de454) & 0xffU |
                                       ((int)((float)(uVar7 >> 8 & 0xff) * DAT_005de454) & 0xffU) <<
                                       8 | ((int)((float)(uVar7 >> 0x10 & 0xff) * DAT_005de454) &
                                           0xffU) << 0x10);
  param_6 = (uint)uStack_40;
  fVar14 = (float)(int)param_6 + DAT_0065b5a8;
  param_7 = (uint)uStack_38;
  fStack_60 = DAT_005d9038;
  fStack_50 = DAT_005d9038;
  if (fVar14 <= 0.0) {
LAB_001fe7df:
    fStack_58 = 0.0;
    fStack_5c = 0.0;
    fStack_54 = 0.0;
    fStack_4c = 0.0;
  }
  else {
    fVar15 = (float)(int)param_7 + DAT_0065b5a8;
    fStack_5c = 0.0;
    if (fVar15 <= 0.0) goto LAB_001fe7df;
    fVar20 = uStack_88._4_4_ - (float)uStack_88;
    if (fVar20 <= 0.0) goto LAB_001fe7df;
    fVar21 = uStack_80._4_4_ - (float)uStack_80;
    fStack_58 = 0.0;
    fStack_54 = 0.0;
    fStack_4c = 0.0;
    if (0.0 < fVar21) {
      auVar18._4_8_ = 0;
      auVar18._0_4_ = fVar21;
      auVar18._12_4_ = uVar16;
      auVar17._8_8_ = auVar18._8_8_;
      auVar17._4_4_ = fVar15;
      auVar17._0_4_ = fVar21;
      auVar19._4_4_ = fVar14;
      auVar19._0_4_ = fVar20;
      auVar19._8_8_ = 0;
      auVar19 = divps(auVar17,auVar19);
      fStack_50 = auVar19._0_4_;
      if (fStack_50 <= auVar19._4_4_) {
        fStack_50 = fStack_50 * fVar14;
        fStack_60 = fVar14;
      }
      else {
        fStack_60 = fVar15 / fStack_50;
        fStack_50 = fVar15;
      }
      fStack_60 = fStack_60 / fVar20;
      fStack_50 = fStack_50 / fVar21;
      fStack_5c = fStack_60 * 0.0;
      fStack_58 = (fVar20 * DAT_005d98c8 - (float)uStack_88) * fStack_60 +
                  fVar14 * DAT_005d9044 + DAT_005d9078;
      fStack_54 = fStack_50 * 0.0;
      fStack_4c = (DAT_005d98c8 * fVar21 - (float)uStack_80) * fStack_50 +
                  fVar15 * DAT_005d9044 + DAT_005d9078;
    }
  }
  cVar2 = (**(code **)(**(long **)(param_5 + 8) + 0x68))();
  if ((cVar2 == '\0') && ((long)uStack_90._4_4_ != 0)) {
    pfVar5 = pfStack_98;
    do {
      fVar14 = *pfVar5;
      if ((fVar14 != DAT_005de3d0) || (NAN(fVar14) || NAN(DAT_005de3d0))) {
        if ((fVar14 != DAT_005de3d4) || (NAN(fVar14) || NAN(DAT_005de3d4))) {
          if (((fVar14 != DAT_005de3d8) || (NAN(fVar14) || NAN(DAT_005de3d8))) &&
             ((fVar14 != DAT_005de3dc || (NAN(fVar14) || NAN(DAT_005de3dc))))) goto LAB_001fe8d4;
        }
        (**(code **)(**(long **)(param_5 + 8) + 200))
                  (*(long **)(param_5 + 8),&pfStack_98,&fStack_60);
        break;
      }
      pfVar5 = pfVar5 + 2;
LAB_001fe8d4:
      pfVar5 = pfVar5 + 1;
    } while (pfVar5 != pfStack_98 + uStack_90._4_4_);
  }
  uStack_90 = (ulong)(uint)uStack_90;
  free(pfStack_98);
  if (Component::currentlyFocusedComponent != pCVar4) {
    return;
  }
LAB_001fe275:
  Graphics::setColour(param_5,uVar7 & 0xffffff | 0x66000000);
  uStack_90 = CONCAT44((float)(int)param_7,(float)(int)param_6);
  pfStack_98 = (float *)0x0;
  (**(code **)(**(long **)(param_5 + 8) + 0xd0))(*(long **)(param_5 + 8),&pfStack_98);
  return;
}


