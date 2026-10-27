// Function : drawComboBox
// Namespace: juce:LookAndFeel_V3
// Entry    : 00291380
// Prototype: undefined drawComboBox(undefined8 param_1_00, Graphics * param_2, int param_3, int param_4, undefined8 param_5_00, int param_6, int param_7, int param_8, int param_9, Component * param_10)
// Body     : 00291380 - 002916b3


/* juce::LookAndFeel_V3::drawComboBox(juce::Graphics&, int, int, bool, int, int, int, int,
   juce::ComboBox&) */

void __thiscall
juce::LookAndFeel_V3::drawComboBox
          (undefined8 param_1_00,Graphics *param_2,int param_3,int param_4,undefined8 param_5_00,
          int param_6,int param_7,int param_8,int param_9,Component *param_10)

{
  char cVar1;
  ulong uVar2;
  Component *pCVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined1 local_48 [16];
  undefined8 local_38;
  
  uVar2 = Component::findColour(param_10,0x1000b00,'\0');
  Graphics::fillAll(param_2,(uint)uVar2);
  pCVar3 = param_10;
  do {
    if ((*(ushort *)(pCVar3 + 0xe8) & 0x8000) != 0) goto LAB_002913f5;
    pCVar3 = *(Component **)(pCVar3 + 0x30);
  } while (pCVar3 != (Component *)0x0);
  if (Component::currentlyFocusedComponent == param_10) {
    uVar7 = 0x1000f00;
  }
  else {
LAB_002913f5:
    uVar7 = 0x1000c00;
  }
  uVar2 = Component::findColour(param_10,uVar7,'\0');
  Graphics::setColour(param_2,(int)uVar2);
  uStack_70 = CONCAT44((float)param_4,(float)param_3);
  local_78 = (float *)0x0;
  (**(code **)(**(long **)(param_2 + 8) + 0xd0))(*(long **)(param_2 + 8),&local_78);
  fVar13 = (float)param_6;
  fVar15 = (float)param_7;
  fVar12 = (float)param_8;
  fVar14 = (float)param_9;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = (float *)0x0;
  uStack_70 = 0;
  local_58 = 1;
  fVar9 = DAT_005d9044 * fVar12 + fVar13;
  fVar10 = (float)s_333_power__f_00652630._0_4_ * fVar12 + fVar13;
  fVar11 = DAT_005de468 * fVar14 + fVar15;
  fVar13 = fVar12 * DAT_005d9088 + fVar13;
  Path::addTriangle(fVar9,DAT_005de464 * fVar14 + fVar15,fVar10,fVar11,fVar13,fVar11,
                    (Path *)&local_78);
  fVar11 = fVar14 * DAT_005de46c + fVar15;
  Path::addTriangle(fVar9,DAT_0065b218 * fVar14 + fVar15,fVar10,fVar11,fVar13,fVar11,
                    (Path *)&local_78);
                    /* try { // try from 00291542 to 002915cc has its CatchHandler @ 002916b6 */
  uVar2 = Component::findColour(param_10,0x1000e00,'\0');
  do {
    uVar7 = (uint)(uVar2 >> 0x18);
    if ((*(ushort *)(param_10 + 0xe8) & 0x8000) != 0) {
      dVar8 = (double)((float)(uVar7 & 0xff) * DAT_005d9088);
      goto LAB_0029159e;
    }
    param_10 = *(Component **)(param_10 + 0x30);
  } while (param_10 != (Component *)0x0);
  dVar8 = (double)(uVar7 & 0xff);
LAB_0029159e:
  iVar5 = SUB84(dVar8 + DAT_005d9098,0);
  iVar6 = 0xff;
  if (iVar5 < 0xff) {
    iVar6 = iVar5;
  }
  Graphics::setColour(param_2,(uint)uVar2 & 0xffffff | iVar6 << 0x18);
                    /* try { // try from 002915d4 to 0029167a has its CatchHandler @ 002916b4 */
  cVar1 = (**(code **)(**(long **)(param_2 + 8) + 0x68))();
  if ((cVar1 == '\0') && ((long)uStack_70._4_4_ != 0)) {
    pfVar4 = local_78;
    do {
      fVar9 = *pfVar4;
      if ((fVar9 != DAT_005de3d0) || (NAN(fVar9) || NAN(DAT_005de3d0))) {
        if ((fVar9 != DAT_005de3d4) || (NAN(fVar9) || NAN(DAT_005de3d4))) {
          if (((fVar9 != DAT_005de3d8) || (NAN(fVar9) || NAN(DAT_005de3d8))) &&
             ((fVar9 != DAT_005de3dc || (NAN(fVar9) || NAN(DAT_005de3dc))))) goto LAB_00291624;
        }
        local_48 = ZEXT416(DAT_005d9038);
        local_38 = 0x3f800000;
        (**(code **)(**(long **)(param_2 + 8) + 200))(*(long **)(param_2 + 8),&local_78,local_48);
        break;
      }
      pfVar4 = pfVar4 + 2;
LAB_00291624:
      pfVar4 = pfVar4 + 1;
    } while (pfVar4 != local_78 + uStack_70._4_4_);
  }
  uStack_70 = uStack_70 & 0xffffffff;
  free(local_78);
  return;
}


