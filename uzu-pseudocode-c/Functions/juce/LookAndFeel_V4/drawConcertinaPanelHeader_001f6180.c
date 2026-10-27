// Function : drawConcertinaPanelHeader
// Namespace: juce:LookAndFeel_V4
// Entry    : 001f6180
// Prototype: undefined drawConcertinaPanelHeader(undefined8 param_1_00, Graphics * param_2, int * param_3, char param_4, undefined8 param_5_00, long param_6, long param_7)
// Body     : 001f6180 - 001f63b1


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::LookAndFeel_V4::drawConcertinaPanelHeader(juce::Graphics&, juce::Rectangle<int> const&,
   bool, bool, juce::ConcertinaPanel&, juce::Component&) */

void __thiscall
juce::LookAndFeel_V4::drawConcertinaPanelHeader
          (undefined8 param_1_00,Graphics *param_2,int *param_3,char param_4,undefined8 param_5_00,
          long param_6,long param_7)

{
  undefined1 auVar1 [16];
  char cVar2;
  undefined4 in_EAX;
  uint uVar3;
  float *pfVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 local_78 [16];
  ulong local_68;
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 local_54;
  float *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  
  fVar10 = (float)(int)*(undefined8 *)(param_3 + 2) + _DAT_005d9910;
  fVar11 = (float)(int)((ulong)*(undefined8 *)(param_3 + 2) >> 0x20) + _UNK_005d9914;
  iVar8 = -(uint)(0.0 < fVar11);
  auVar1._4_4_ = -(uint)(0.0 < fVar10);
  auVar1._0_4_ = -(uint)(0.0 < fVar10);
  auVar1._8_4_ = iVar8;
  auVar1._12_4_ = iVar8;
  uVar3 = movmskpd(in_EAX,auVar1);
  if ((uVar3 & 1) == 0) {
    fVar10 = 0.0;
  }
  fVar9 = 0.0;
  if ((uVar3 & 2) != 0) {
    fVar9 = fVar11;
  }
  if ((*(int *)(param_6 + 0x104) == 0) || (**(long **)(param_6 + 0xf8) == 0)) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(**(long **)(param_6 + 0xf8) + 0xf0);
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = (float *)0x0;
  uStack_40 = 0;
  local_28 = 1;
  Path::addRoundedRectangle
            ((float)*param_3 + DAT_005d9044,(float)param_3[1] + DAT_005d9044,fVar10,fVar9,
             DAT_005d94d4,DAT_005d94d4,(Path *)&local_48,(uint)(lVar5 == param_7),lVar5 == param_7,
             '\0','\0');
  uVar3 = 0x33000000;
  if (param_4 != '\0') {
    uVar3 = 0x66000000;
  }
  uVar6 = _ZN4juce7ColoursL5whiteE_144 & 0xffffff;
  uVar7 = _ZN4juce7ColoursL8darkgreyE_31 & 0xffffff;
  local_78._4_4_ = 0;
  local_78._0_4_ = (float)param_3[1];
  local_78._8_4_ = (float)(param_3[1] + param_3[3]);
  local_78._12_4_ = 0;
  local_78 = local_78 << 0x20;
  local_68 = local_68 & 0xffffffffffffff00;
  local_60 = malloc(0x80);
  local_58 = 8;
  *local_60 = 0;
  *(uint *)(local_60 + 1) = uVar6 | uVar3;
  local_54 = 2;
  local_60[2] = 0x3ff0000000000000;
  *(uint *)(local_60 + 3) = uVar7 | 0x1a000000;
                    /* try { // try from 001f62d4 to 001f62de has its CatchHandler @ 001f63b7 */
  Graphics::setGradientFill(param_2,(undefined8 *)local_78);
  free(local_60);
                    /* try { // try from 001f62f0 to 001f6396 has its CatchHandler @ 001f63b2 */
  cVar2 = (**(code **)(**(long **)(param_2 + 8) + 0x68))();
  if ((cVar2 == '\0') && ((long)uStack_40._4_4_ != 0)) {
    pfVar4 = local_48;
    do {
      fVar10 = *pfVar4;
      if ((fVar10 != DAT_005de3d0) || (NAN(fVar10) || NAN(DAT_005de3d0))) {
        if ((fVar10 != DAT_005de3d4) || (NAN(fVar10) || NAN(DAT_005de3d4))) {
          if (((fVar10 != DAT_005de3d8) || (NAN(fVar10) || NAN(DAT_005de3d8))) &&
             ((fVar10 != DAT_005de3dc || (NAN(fVar10) || NAN(DAT_005de3dc))))) goto LAB_001f6344;
        }
        local_78 = ZEXT416(DAT_005d9038);
        local_68 = 0x3f800000;
        (**(code **)(**(long **)(param_2 + 8) + 200))(*(long **)(param_2 + 8),&local_48,local_78);
        break;
      }
      pfVar4 = pfVar4 + 2;
LAB_001f6344:
      pfVar4 = pfVar4 + 1;
    } while (pfVar4 != local_48 + uStack_40._4_4_);
  }
  uStack_40 = uStack_40 & 0xffffffff;
  free(local_48);
  return;
}


