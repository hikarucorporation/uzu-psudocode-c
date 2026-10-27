// Function : drawKeymapChangeButton
// Namespace: juce:LookAndFeel_V2
// Entry    : 0021cc30
// Prototype: undefined drawKeymapChangeButton(undefined8 param_1_00, Graphics * param_2, uint param_3, uint param_4, Component * param_5, undefined8 * param_6)
// Body     : 0021cc30 - 0021cc34


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* non-virtual thunk to juce::LookAndFeel_V2::drawKeymapChangeButton(juce::Graphics&, int, int,
   juce::Button&, juce::String const&) */

void __thiscall
juce::LookAndFeel_V2::drawKeymapChangeButton
          (undefined8 param_1_00,Graphics *param_2,uint param_3,uint param_4,Component *param_5,
          undefined8 *param_6)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  ulong uVar4;
  Component *pCVar5;
  float *pfVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float *pfStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  uint uStack_64;
  Component *pCStack_60;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  ulong uStack_40;
  ulong uStack_38;
  
  uVar12 = (ulong)param_4;
  uVar11 = (ulong)param_3;
  uVar4 = Component::findColour(param_5,0x100ad01,'\x01');
  uVar10 = (uint)uVar4;
  if (*(char *)*param_6 != '\0') {
    pCVar5 = param_5;
    do {
      if ((*(ushort *)(pCVar5 + 0xe8) & 0x8000) != 0) goto LAB_00216e4f;
      pCVar5 = *(Component **)(pCVar5 + 0x30);
    } while (pCVar5 != (Component *)0x0);
    uVar9 = 0x26000000;
    if (*(int *)(param_5 + 0x1b8) == 0) {
      uVar9 = 0x14000000;
    }
    uVar3 = 0x4c000000;
    if (*(int *)(param_5 + 0x1b8) != 2) {
      uVar3 = uVar9;
    }
    Graphics::fillAll(param_2,uVar10 & 0xffffff | uVar3);
    if (param_2[0x10] != (Graphics)0x0) {
      param_2[0x10] = (Graphics)0x0;
      (**(code **)(**(long **)(param_2 + 8) + 0x70))();
    }
    (**(code **)(**(long **)(param_2 + 8) + 0x98))();
    drawBevel((long)param_2,param_3,param_4,2,&_ZN4juce7ColoursL5whiteE_144,
              &_ZN4juce7ColoursL5blackE_14);
LAB_00216e4f:
    Graphics::setColour(param_2,uVar10);
    Graphics::setFont((float)(int)param_4 * DAT_005d98e8,param_2);
    Graphics::drawFittedText
              (0,DAT_005d9960,(long)param_2,param_6,3,CONCAT44(param_4,param_3 - 6),(uint *)0x24,1);
    if (Component::currentlyFocusedComponent != param_5) {
      return;
    }
    goto LAB_00216eae;
  }
  uStack_88 = 0;
  uStack_80 = 0;
  pfStack_98 = (float *)0x0;
  uStack_90 = 0;
  uStack_78 = 1;
  Path::addEllipse(0,DAT_005dcf50,(Path *)&pfStack_98);
  iVar1 = uStack_90._4_4_;
  lVar8 = (long)uStack_90._4_4_;
  if (lVar8 == 0) {
    uStack_88 = CONCAT44(_UNK_005dcf84,_DAT_005dcf80);
    uStack_80 = CONCAT44(_UNK_005dcf8c,_UNK_005dcf88);
  }
  else {
    uStack_88 = CONCAT44(-(uint)(uStack_88._4_4_ < DAT_005dcf74) & _UNK_005dcf84 |
                         ~-(uint)(uStack_88._4_4_ < DAT_005dcf74) & (uint)uStack_88._4_4_,
                         -(uint)(DAT_005dcf60 < (float)uStack_88) & _DAT_005dcf80 |
                         ~-(uint)(DAT_005dcf60 < (float)uStack_88) & (uint)(float)uStack_88);
    uStack_80 = CONCAT44(-(uint)(uStack_80._4_4_ < DAT_005dcf7c) & _UNK_005dcf8c |
                         ~-(uint)(uStack_80._4_4_ < DAT_005dcf7c) & (uint)uStack_80._4_4_,
                         -(uint)(DAT_005dcf68 < (float)uStack_80) & _UNK_005dcf88 |
                         ~-(uint)(DAT_005dcf68 < (float)uStack_80) & (uint)(float)uStack_80);
  }
  iVar7 = uStack_90._4_4_ + 0xd;
  uStack_64 = uVar10;
  uStack_40 = uVar11;
  if ((int)(uint)uStack_90 < iVar7) {
    uVar10 = iVar7 / 2 + uStack_90._4_4_ + 0x15U & 0xfffffff8;
    if ((uint)uStack_90 != uVar10) {
      if ((int)uVar10 < 1) {
        free(pfStack_98);
        pfStack_98 = (float *)0x0;
      }
      else {
        pfStack_98 = realloc(pfStack_98,(ulong)uVar10 << 2);
      }
    }
    uStack_90 = (ulong)uVar10;
  }
  else {
    uVar10 = (uint)uStack_90;
  }
  pfStack_98[lVar8] = 100002.0;
  pfStack_98[lVar8 + 1] = 22.0;
  pfStack_98[lVar8 + 2] = 57.0;
  pfStack_98[lVar8 + 3] = 100001.0;
  pfStack_98[lVar8 + 4] = 22.0;
  pfStack_98[lVar8 + 5] = 43.0;
  pfStack_98[lVar8 + 6] = 100001.0;
  pfStack_98[lVar8 + 7] = 78.0;
  pfStack_98[lVar8 + 8] = 43.0;
  pfStack_98[lVar8 + 9] = 100001.0;
  pfStack_98[lVar8 + 10] = 78.0;
  pfStack_98[lVar8 + 0xb] = 57.0;
  pfStack_98[lVar8 + 0xc] = 100005.0;
  pCStack_60 = param_5;
  uStack_38 = uVar12;
  uStack_90._4_4_ = iVar7;
  if (iVar7 == 0) {
    uStack_88 = CONCAT44(_UNK_005dcfb4,_DAT_005dcfb0);
    uStack_80 = CONCAT44(_UNK_005dcfbc,_UNK_005dcfb8);
    if ((int)uVar10 < iVar1 + 0x1a) goto LAB_002170a8;
  }
  else {
    uStack_88 = CONCAT44(-(uint)(uStack_88._4_4_ < DAT_005dcfa4) & _UNK_005dcfb4 |
                         ~-(uint)(uStack_88._4_4_ < DAT_005dcfa4) & (uint)uStack_88._4_4_,
                         -(uint)(DAT_005dcf90 < (float)uStack_88) & _DAT_005dcfb0 |
                         ~-(uint)(DAT_005dcf90 < (float)uStack_88) & (uint)(float)uStack_88);
    uStack_80 = CONCAT44(-(uint)(uStack_80._4_4_ < DAT_005dcfac) & _UNK_005dcfbc |
                         ~-(uint)(uStack_80._4_4_ < DAT_005dcfac) & (uint)uStack_80._4_4_,
                         -(uint)(DAT_005dcf98 < (float)uStack_80) & _UNK_005dcfb8 |
                         ~-(uint)(DAT_005dcf98 < (float)uStack_80) & (uint)(float)uStack_80);
    if ((int)uVar10 < iVar1 + 0x1a) {
LAB_002170a8:
      uVar9 = (iVar1 + 0x1a) / 2 + iVar1 + 0x22U & 0xfffffff8;
      if (uVar10 != uVar9) {
        if ((int)uVar9 < 1) {
          free(pfStack_98);
          pfStack_98 = (float *)0x0;
        }
        else {
          pfStack_98 = realloc(pfStack_98,(ulong)uVar9 << 2);
        }
      }
      uVar10 = uVar9;
      uStack_90._0_4_ = uVar9;
    }
  }
  pCVar5 = pCStack_60;
  pfStack_98[lVar8 + 0xd] = 100002.0;
  pfStack_98[lVar8 + 0xe] = 43.0;
  pfStack_98[lVar8 + 0xf] = 43.0;
  pfStack_98[lVar8 + 0x10] = 100001.0;
  pfStack_98[lVar8 + 0x11] = 43.0;
  pfStack_98[lVar8 + 0x12] = 22.0;
  pfStack_98[lVar8 + 0x13] = 100001.0;
  pfStack_98[lVar8 + 0x14] = 57.0;
  pfStack_98[lVar8 + 0x15] = 22.0;
  pfStack_98[lVar8 + 0x16] = 100001.0;
  pfStack_98[lVar8 + 0x17] = 57.0;
  pfStack_98[lVar8 + 0x18] = 43.0;
  pfStack_98[lVar8 + 0x19] = 100005.0;
  if (iVar1 + 0x1a == 0) {
    uStack_88 = CONCAT44(_UNK_005dcfe4,_DAT_005dcfe0);
    uStack_80 = CONCAT44(_UNK_005dcfec,_UNK_005dcfe8);
    if ((int)uVar10 < iVar1 + 0x27) goto LAB_002171c3;
  }
  else {
    uStack_88 = CONCAT44(-(uint)(uStack_88._4_4_ < DAT_005dcfd4) & _UNK_005dcfe4 |
                         ~-(uint)(uStack_88._4_4_ < DAT_005dcfd4) & (uint)uStack_88._4_4_,
                         -(uint)(DAT_005dcfc0 < (float)uStack_88) & _DAT_005dcfe0 |
                         ~-(uint)(DAT_005dcfc0 < (float)uStack_88) & (uint)(float)uStack_88);
    uStack_80 = CONCAT44(-(uint)(uStack_80._4_4_ < DAT_005dcfdc) & _UNK_005dcfec |
                         ~-(uint)(uStack_80._4_4_ < DAT_005dcfdc) & (uint)uStack_80._4_4_,
                         -(uint)(DAT_005dcfc8 < (float)uStack_80) & _UNK_005dcfe8 |
                         ~-(uint)(DAT_005dcfc8 < (float)uStack_80) & (uint)(float)uStack_80);
    if ((int)uVar10 < iVar1 + 0x27) {
LAB_002171c3:
      uVar9 = (iVar1 + 0x27) / 2 + iVar1 + 0x2fU & 0xfffffff8;
      if (uVar10 != uVar9) {
        if ((int)uVar9 < 1) {
          free(pfStack_98);
          pfStack_98 = (float *)0x0;
        }
        else {
          pfStack_98 = realloc(pfStack_98,(ulong)uVar9 << 2);
        }
      }
      uStack_90._0_4_ = uVar9;
    }
  }
  uVar10 = uStack_64;
  uStack_90._4_4_ = iVar1 + 0x27;
  pfStack_98[iVar1 + 0x1a] = 100002.0;
  pfStack_98[lVar8 + 0x1b] = 43.0;
  pfStack_98[lVar8 + 0x1c] = 78.0;
  pfStack_98[lVar8 + 0x1d] = 100001.0;
  pfStack_98[lVar8 + 0x1e] = 43.0;
  pfStack_98[lVar8 + 0x1f] = 57.0;
  pfStack_98[lVar8 + 0x20] = 100001.0;
  pfStack_98[lVar8 + 0x21] = 57.0;
  pfStack_98[lVar8 + 0x22] = 57.0;
  pfStack_98[lVar8 + 0x23] = 100001.0;
  pfStack_98[lVar8 + 0x24] = 57.0;
  pfStack_98[lVar8 + 0x25] = 78.0;
  pfStack_98[lVar8 + 0x26] = 100005.0;
  uStack_78 = 0;
  iVar1 = *(int *)(pCVar5 + 0x1b8);
  uVar9 = 0x80000000;
  if (iVar1 == 0) {
    uVar9 = 0x4c000000;
  }
  uVar3 = 0xb2000000;
  if (iVar1 != 2) {
    uVar3 = uVar9;
  }
  Graphics::setColour(param_2,uStack_64 & 0xffffff | uVar3);
  param_3 = (uint)uStack_40;
  fVar13 = (float)(int)param_3 + DAT_0065b5a8;
  param_4 = (uint)uStack_38;
  fStack_58 = DAT_005d9038;
  fStack_48 = DAT_005d9038;
  if (fVar13 <= 0.0) {
LAB_002173a0:
    fStack_50 = 0.0;
    fStack_54 = 0.0;
    fStack_4c = 0.0;
    fStack_44 = 0.0;
  }
  else {
    fVar14 = (float)(int)param_4 + DAT_0065b5a8;
    fStack_54 = 0.0;
    if (fVar14 <= 0.0) goto LAB_002173a0;
    fVar17 = uStack_88._4_4_ - (float)uStack_88;
    if (fVar17 <= 0.0) goto LAB_002173a0;
    fVar18 = uStack_80._4_4_ - (float)uStack_80;
    fStack_50 = 0.0;
    fStack_4c = 0.0;
    fStack_44 = 0.0;
    if (0.0 < fVar18) {
      auVar15._4_4_ = fVar14;
      auVar15._0_4_ = fVar18;
      auVar15._8_8_ = 0;
      auVar16._4_4_ = fVar13;
      auVar16._0_4_ = fVar17;
      auVar16._8_8_ = 0;
      auVar16 = divps(auVar15,auVar16);
      fStack_48 = auVar16._0_4_;
      if (fStack_48 <= auVar16._4_4_) {
        fStack_48 = fStack_48 * fVar13;
        fStack_58 = fVar13;
      }
      else {
        fStack_58 = fVar14 / fStack_48;
        fStack_48 = fVar14;
      }
      fStack_58 = fStack_58 / fVar17;
      fStack_48 = fStack_48 / fVar18;
      fStack_54 = fStack_58 * 0.0;
      fStack_50 = (fVar17 * DAT_005d98c8 - (float)uStack_88) * fStack_58 +
                  fVar13 * DAT_005d9044 + DAT_005d9078;
      fStack_4c = fStack_48 * 0.0;
      fStack_44 = (DAT_005d98c8 * fVar18 - (float)uStack_80) * fStack_48 +
                  fVar14 * DAT_005d9044 + DAT_005d9078;
    }
  }
  cVar2 = (**(code **)(**(long **)(param_2 + 8) + 0x68))();
  if ((cVar2 == '\0') && ((long)uStack_90._4_4_ != 0)) {
    pfVar6 = pfStack_98;
    do {
      fVar13 = *pfVar6;
      if ((fVar13 != DAT_005de3d0) || (NAN(fVar13) || NAN(DAT_005de3d0))) {
        if ((fVar13 != DAT_005de3d4) || (NAN(fVar13) || NAN(DAT_005de3d4))) {
          if (((fVar13 != DAT_005de3d8) || (NAN(fVar13) || NAN(DAT_005de3d8))) &&
             ((fVar13 != DAT_005de3dc || (NAN(fVar13) || NAN(DAT_005de3dc))))) goto LAB_00217494;
        }
        (**(code **)(**(long **)(param_2 + 8) + 200))
                  (*(long **)(param_2 + 8),&pfStack_98,&fStack_58);
        break;
      }
      pfVar6 = pfVar6 + 2;
LAB_00217494:
      pfVar6 = pfVar6 + 1;
    } while (pfVar6 != pfStack_98 + uStack_90._4_4_);
  }
  uStack_90 = (ulong)(uint)uStack_90;
  free(pfStack_98);
  if (Component::currentlyFocusedComponent != pCVar5) {
    return;
  }
LAB_00216eae:
  Graphics::setColour(param_2,uVar10 & 0xffffff | 0x66000000);
  uStack_90 = CONCAT44((float)(int)param_4,(float)(int)param_3);
  pfStack_98 = (float *)0x0;
  (**(code **)(**(long **)(param_2 + 8) + 0xd0))(*(long **)(param_2 + 8),&pfStack_98);
  return;
}


