// Function : drawComboBox
// Namespace: juce:LookAndFeel_V2
// Entry    : 002195e0
// Prototype: undefined drawComboBox(undefined8 param_1_00, Graphics * param_2, int param_3, int param_4, char param_5, int param_6, int param_7, int param_8, int param_9, Component * param_10)
// Body     : 002195e0 - 002195e4


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* non-virtual thunk to juce::LookAndFeel_V2::drawComboBox(juce::Graphics&, int, int, bool, int,
   int, int, int, juce::ComboBox&) */

void __thiscall
juce::LookAndFeel_V2::drawComboBox
          (undefined8 param_1_00,Graphics *param_2,int param_3,int param_4,char param_5,int param_6,
          int param_7,int param_8,int param_9,Component *param_10)

{
  Component *pCVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  Component *pCVar8;
  float *pfVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  uint auStack_98 [2];
  float fStack_90;
  float fStack_8c;
  undefined1 auStack_88 [16];
  float *pfStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  uVar7 = Component::findColour(param_10,0x1000b00,'\0');
  Graphics::fillAll(param_2,(uint)uVar7);
  pCVar8 = param_10;
  do {
    if ((*(ushort *)(pCVar8 + 0xe8) & 0x8000) != 0) goto LAB_00211c45;
    pCVar8 = *(Component **)(pCVar8 + 0x30);
  } while (pCVar8 != (Component *)0x0);
  if (Component::currentlyFocusedComponent == param_10) {
    uVar4 = 0x1000f00;
  }
  else {
LAB_00211c45:
    uVar4 = 0x1000c00;
  }
  uVar7 = Component::findColour(param_10,uVar4,'\0');
  Graphics::setColour(param_2,(int)uVar7);
  uStack_70 = CONCAT44((float)param_4,(float)param_3);
  pfStack_78 = (float *)0x0;
  (**(code **)(**(long **)(param_2 + 8) + 0xd0))(*(long **)(param_2 + 8),&pfStack_78);
  pCVar8 = param_10;
  do {
    pCVar1 = pCVar8 + 0xe8;
    if ((*(uint3 *)pCVar1 & 0x8000) != 0) break;
    pCVar8 = *(Component **)(pCVar8 + 0x30);
  } while (pCVar8 != (Component *)0x0);
  fVar16 = DAT_005de45c;
  if (param_5 == '\0') {
    fVar16 = DAT_005d9044;
  }
  if ((*(uint3 *)pCVar1 & 0x8000) != 0) {
    fVar16 = DAT_005d9088;
  }
  auStack_88 = ZEXT416((uint)fVar16);
  uVar7 = Component::findColour(param_10,0x1000d00,'\0');
  for (pCVar8 = Component::currentlyFocusedComponent; fVar16 = DAT_005de3e8, pCVar8 != param_10;
      pCVar8 = *(Component **)(pCVar8 + 0x30)) {
    if (pCVar8 == (Component *)0x0) {
      fVar16 = DAT_005de3c8;
      break;
    }
  }
  uVar4 = Colour::withMultipliedSaturation(fVar16,(uint)uVar7);
  if (param_5 == '\0') {
  }
  else {
    fVar21 = (float)(uVar4 >> 0x10 & 0xff) / DAT_005de3b0;
    fVar16 = (float)(uVar4 >> 8 & 0xff) / DAT_005de3b0;
    fVar17 = (float)(uVar4 & 0xff) / DAT_005de3b0;
    fVar16 = fVar17 * fVar17 * _DAT_005de3bc +
             fVar21 * fVar21 * _DAT_005de3b8 + fVar16 * fVar16 * _DAT_005de3b4;
    if (fVar16 < 0.0) {
      fVar16 = sqrtf(fVar16);
    }
    else {
      fVar16 = SQRT(fVar16);
    }
    puVar12 = &_ZN4juce7ColoursL5whiteE_474;
    if (DAT_005d9044 <= fVar16) {
      puVar12 = &_ZN4juce7ColoursL5blackE_344;
    }
    uVar2 = *puVar12;
    uVar10 = uVar2 & 0xffffff;
    uVar14 = uVar10 >> 8;
    uVar15 = uVar10 >> 0x10;
    uVar13 = 0x33000000;
    if (0xffffff < uVar4) {
      uVar13 = (uVar4 >> 0x18 ^ 0xff) * 0xcc >> 8 ^ 0xff;
      uVar5 = ((uVar4 >> 0x18) * 0xcc) / uVar13;
      uVar15 = uVar15 + (((uVar4 >> 0x10 & 0xff) - ((uVar2 & 0xff0000) >> 0x10)) * uVar5 >> 8);
      uVar14 = uVar14 + (((uVar4 >> 8 & 0xff) - ((uVar2 & 0xff00) >> 8)) * uVar5 >> 8);
      uVar10 = uVar10 + (((uVar4 & 0xff) - (uVar2 & 0xff)) * uVar5 >> 8);
      uVar13 = uVar13 << 0x18;
    }
    uVar4 = uVar10 & 0xff | (uVar14 & 0xff) << 8 | (uVar15 & 0xff) << 0x10 | uVar13;
  }
  pCVar8 = param_10;
  do {
    if ((*(ushort *)(pCVar8 + 0xe8) & 0x8000) != 0) {
      dVar18 = (double)((float)(uVar4 >> 0x18) * DAT_005d9044);
      goto LAB_00211f0e;
    }
    pCVar8 = *(Component **)(pCVar8 + 0x30);
  } while (pCVar8 != (Component *)0x0);
  dVar18 = (double)(uVar4 >> 0x18);
LAB_00211f0e:
  iVar6 = SUB84(dVar18 + DAT_005d9098,0);
  iVar11 = 0xff;
  if (iVar6 < 0xff) {
    iVar11 = iVar6;
  }
  auStack_98[0] = uVar4 & 0xffffff | iVar11 << 0x18;
  fStack_8c = (float)param_6;
  auVar19._4_4_ = auStack_88._4_4_;
  auVar19._0_4_ = auStack_88._0_4_;
  auVar19._8_4_ = auStack_88._8_4_;
  auVar19._12_4_ = auStack_88._12_4_;
  auVar20._4_12_ = auVar19._4_12_;
  auVar20._0_4_ = (float)auStack_88._0_4_ + fStack_8c;
  fVar16 = (float)param_7;
  auVar23._4_4_ = auStack_88._4_4_;
  auVar23._0_4_ = auStack_88._0_4_;
  auVar23._8_4_ = auStack_88._8_4_;
  auVar23._12_4_ = auStack_88._12_4_;
  auVar24._4_12_ = auVar23._4_12_;
  auVar24._0_4_ = (float)auStack_88._0_4_ + fVar16;
  fVar17 = (float)param_8;
  fVar21 = (float)param_9;
  drawGlassLozenge(auVar20._0_8_,auVar24._0_8_,
                   CONCAT44(_UNK_006524b4 ^ auStack_88._4_4_,
                            ((float)(_DAT_006524b0 ^ auStack_88._0_4_) - (float)auStack_88._0_4_) +
                            fVar21),(float)auStack_88._0_4_,DAT_005d9054,param_2,auStack_98,1,1,1,1)
  ;
  pCVar8 = param_10;
  do {
    if ((*(ushort *)(pCVar8 + 0xe8) & 0x8000) != 0) {
      return;
    }
    pCVar8 = *(Component **)(pCVar8 + 0x30);
  } while (pCVar8 != (Component *)0x0);
  uStack_68 = 0;
  uStack_60 = 0;
  pfStack_78 = (float *)0x0;
  uStack_70 = 0;
  uStack_58 = 1;
  fVar22 = DAT_005d9044 * fVar17 + fStack_8c;
  auStack_88._0_4_ = fVar22;
  fStack_90 = (float)s_333_power__f_00652630._0_4_ * fVar17 + fStack_8c;
  fVar25 = DAT_005de468 * fVar21 + fVar16;
  fVar26 = fVar17 * DAT_005d9088 + fStack_8c;
  Path::addTriangle(fVar22,DAT_005de464 * fVar21 + fVar16,fStack_90,fVar25,fVar26,fVar25,
                    (Path *)&pfStack_78);
  fVar17 = fVar21 * DAT_005de46c + fVar16;
  Path::addTriangle((float)auStack_88._0_4_,DAT_0065b218 * fVar21 + fVar16,fStack_90,fVar17,fVar26,
                    fVar17,(Path *)&pfStack_78);
  uVar7 = Component::findColour(param_10,0x1000e00,'\0');
  Graphics::setColour(param_2,(int)uVar7);
  cVar3 = (**(code **)(**(long **)(param_2 + 8) + 0x68))();
  if (cVar3 == '\0') {
    if ((long)uStack_70._4_4_ != 0) {
      pfVar9 = pfStack_78;
      do {
        fVar16 = *pfVar9;
        if ((fVar16 != DAT_005de3d0) || (NAN(fVar16) || NAN(DAT_005de3d0))) {
          if ((fVar16 != DAT_005de3d4) || (NAN(fVar16) || NAN(DAT_005de3d4))) {
            if (((fVar16 != DAT_005de3d8) || (NAN(fVar16) || NAN(DAT_005de3d8))) &&
               ((fVar16 != DAT_005de3dc || (NAN(fVar16) || NAN(DAT_005de3dc))))) goto LAB_00212134;
          }
          auStack_48 = ZEXT416(DAT_005d9038);
          uStack_38 = 0x3f800000;
          (**(code **)(**(long **)(param_2 + 8) + 200))
                    (*(long **)(param_2 + 8),&pfStack_78,auStack_48);
          break;
        }
        pfVar9 = pfVar9 + 2;
LAB_00212134:
        pfVar9 = pfVar9 + 1;
      } while (pfVar9 != pfStack_78 + uStack_70._4_4_);
    }
  }
  uStack_70 = uStack_70 & 0xffffffff;
  free(pfStack_78);
  return;
}


