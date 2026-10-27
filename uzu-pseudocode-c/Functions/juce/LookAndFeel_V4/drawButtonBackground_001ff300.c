// Function : drawButtonBackground
// Namespace: juce:LookAndFeel_V4
// Entry    : 001ff300
// Prototype: undefined drawButtonBackground(undefined8 param_1_00, Graphics * param_2, Component * param_3, undefined4 * param_4, char param_5, char param_6)
// Body     : 001ff300 - 001ff304


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* non-virtual thunk to juce::LookAndFeel_V4::drawButtonBackground(juce::Graphics&, juce::Button&,
   juce::Colour const&, bool, bool) */

void __thiscall
juce::LookAndFeel_V4::drawButtonBackground
          (undefined8 param_1_00,Graphics *param_2,Component *param_3,undefined4 *param_4,
          char param_5,char param_6)

{
  uint uVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined8 uVar6;
  ulong uVar7;
  float *pfVar8;
  int iVar9;
  Component *pCVar10;
  int iVar11;
  float fVar12;
  undefined1 auVar13 [16];
  uint auStack_90 [2];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  auVar13._0_4_ = (float)(int)*(undefined8 *)(param_3 + 0x40) + _DAT_005d9910;
  auVar13._4_4_ = (float)(int)((ulong)*(undefined8 *)(param_3 + 0x40) >> 0x20) + _UNK_005d9914;
  auVar13._8_4_ = _UNK_005d9918 + 0.0;
  auVar13._12_4_ = _UNK_005d991c + 0.0;
  for (pCVar10 = Component::currentlyFocusedComponent; fVar12 = DAT_005de3e8, pCVar10 != param_3;
      pCVar10 = *(Component **)(pCVar10 + 0x30)) {
    if (pCVar10 == (Component *)0x0) {
      fVar12 = DAT_005de3c8;
      break;
    }
  }
  _auStack_58 = maxps(auVar13,ZEXT816(0));
  uVar6 = Colour::withMultipliedSaturation(fVar12,*param_4);
  pCVar10 = param_3;
  do {
    uVar1 = (uint)((ulong)uVar6 >> 0x18);
    if ((*(ushort *)(pCVar10 + 0xe8) & 0x8000) != 0) {
      dVar2 = (double)((float)(uVar1 & 0xff) * DAT_005d9044);
      goto LAB_001eae4e;
    }
    pCVar10 = *(Component **)(pCVar10 + 0x30);
  } while (pCVar10 != (Component *)0x0);
  dVar2 = (double)(uVar1 & 0xff);
LAB_001eae4e:
  iVar9 = SUB84(dVar2 + DAT_005d9098,0);
  iVar11 = 0xff;
  if (iVar9 < 0xff) {
    iVar11 = iVar9;
  }
  auStack_90[0] = (uint)uVar6 & 0xffffff | iVar11 << 0x18;
  if ((param_5 != '\0') || (param_6 != '\0')) {
    if (param_6 == '\0') {
      fVar12 = DAT_005d904c;
    }
    else {
      fVar12 = DAT_005d9070;
    }
    auStack_90[0] = Colour::contrasting(fVar12,(Colour *)auStack_90);
  }
  Graphics::setColour(param_2,auStack_90[0]);
  uVar1 = *(uint *)(param_3 + 0x1b0);
  uVar3 = auStack_58._0_4_;
  uVar4 = auStack_58._4_4_;
  if ((uVar1 & 0xf) == 0) {
    uStack_80 = auStack_58;
    auStack_58._4_4_ = _UNK_005d9924;
    auStack_58._0_4_ = _DAT_005d9920;
    uStack_50._0_4_ = uVar3;
    uStack_50._4_4_ = uVar4;
    uStack_88 = (float *)CONCAT44(_UNK_005d9924,_DAT_005d9920);
    (**(code **)(**(long **)(param_2 + 8) + 0x120))(DAT_005d98e4,*(long **)(param_2 + 8),&uStack_88)
    ;
    uVar7 = Component::findColour(param_3,0x1000c00,'\0');
    Graphics::setColour(param_2,(int)uVar7);
    uStack_88 = (float *)auStack_58;
    uStack_80 = (undefined1  [8])uStack_50;
    (**(code **)(**(long **)(param_2 + 8) + 0x118))
              (DAT_005d98e4,DAT_005d9038,*(long **)(param_2 + 8),&uStack_88);
  }
  else {
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = (float *)0x0;
    uStack_80 = (undefined1  [8])0x0;
    uStack_68 = 1;
    Path::addRoundedRectangle
              (DAT_005d9044,DAT_005d9044,(float)auStack_58._0_4_,(float)auStack_58._4_4_,
               DAT_005d98e4,DAT_005d98e4,(Path *)&uStack_88,(uint)((uVar1 & 5) == 0),
               (uVar1 & 6) == 0,(uVar1 & 9) == 0,(uVar1 & 10) == 0);
    cVar5 = (**(code **)(**(long **)(param_2 + 8) + 0x68))();
    if (cVar5 == '\0') {
      if ((long)uStack_80._4_4_ != 0) {
        pfVar8 = uStack_88;
        do {
          fVar12 = *pfVar8;
          if ((fVar12 != DAT_005de3d0) || (NAN(fVar12) || NAN(DAT_005de3d0))) {
            if ((fVar12 != DAT_005de3d4) || (NAN(fVar12) || NAN(DAT_005de3d4))) {
              if (((fVar12 != DAT_005de3d8) || (NAN(fVar12) || NAN(DAT_005de3d8))) &&
                 ((fVar12 != DAT_005de3dc || (NAN(fVar12) || NAN(DAT_005de3dc)))))
              goto LAB_001eaf74;
            }
            auStack_48 = ZEXT416(DAT_005d9038);
            uStack_38 = 0x3f800000;
            (**(code **)(**(long **)(param_2 + 8) + 200))
                      (*(long **)(param_2 + 8),&uStack_88,auStack_48);
            break;
          }
          pfVar8 = pfVar8 + 2;
LAB_001eaf74:
          pfVar8 = pfVar8 + 1;
        } while (pfVar8 != uStack_88 + uStack_80._4_4_);
      }
    }
    uVar7 = Component::findColour(param_3,0x1000c00,'\0');
    Graphics::setColour(param_2,(int)uVar7);
    uStack_30 = 0x3f800000;
    uStack_28 = 0;
    auStack_48 = ZEXT416(DAT_005d9038);
    uStack_38 = 0x3f800000;
    cVar5 = (**(code **)(**(long **)(param_2 + 8) + 0x68))();
    if (cVar5 == '\0') {
      if ((long)uStack_80._4_4_ != 0) {
        pfVar8 = uStack_88;
        do {
          fVar12 = *pfVar8;
          if ((fVar12 != DAT_005de3d0) || (NAN(fVar12) || NAN(DAT_005de3d0))) {
            if ((fVar12 != DAT_005de3d4) || (NAN(fVar12) || NAN(DAT_005de3d4))) {
              if (((fVar12 != DAT_005de3d8) || (NAN(fVar12) || NAN(DAT_005de3d8))) &&
                 ((fVar12 != DAT_005de3dc || (NAN(fVar12) || NAN(DAT_005de3dc)))))
              goto LAB_001eb064;
            }
            (**(code **)(**(long **)(param_2 + 8) + 0xd8))
                      (*(long **)(param_2 + 8),&uStack_88,&uStack_30,auStack_48);
            break;
          }
          pfVar8 = pfVar8 + 2;
LAB_001eb064:
          pfVar8 = pfVar8 + 1;
        } while (pfVar8 != uStack_88 + uStack_80._4_4_);
      }
    }
    uStack_80 = (undefined1  [8])((ulong)uStack_80 & 0xffffffff);
    free(uStack_88);
  }
  return;
}


