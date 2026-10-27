// Function : drawTabAreaBehindFrontButton
// Namespace: juce:LookAndFeel_V3
// Entry    : 00205be0
// Prototype: undefined drawTabAreaBehindFrontButton(undefined8 param_1_00, Component * param_2, Graphics * param_3, uint param_4, uint param_5)
// Body     : 00205be0 - 00205be4


/* non-virtual thunk to juce::LookAndFeel_V3::drawTabAreaBehindFrontButton(juce::TabbedButtonBar&,
   juce::Graphics&, int, int) */

void __thiscall
juce::LookAndFeel_V3::drawTabAreaBehindFrontButton
          (undefined8 param_1_00,Component *param_2,Graphics *param_3,uint param_4,uint param_5)

{
  undefined4 uVar1;
  uint uVar2;
  Component *pCVar3;
  undefined8 *__ptr;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  float fVar9;
  ulong uStack_98;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined1 uStack_58;
  undefined8 *puStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  Component *pCStack_38;
  
  uVar1 = _ZN4juce7ColoursL16transparentBlackE_5;
  pCVar3 = param_2;
  do {
    if ((*(ushort *)(pCVar3 + 0xe8) & 0x8000) != 0) {
      uVar2 = 0xa000000;
      goto LAB_001fac14;
    }
    pCVar3 = *(Component **)(pCVar3 + 0x30);
  } while (pCVar3 != (Component *)0x0);
  uVar2 = 0x14000000;
LAB_001fac14:
  uStack_80 = 0xfffffffe00000000;
  uStack_88 = 0xfffffffe;
  uVar6 = _ZN4juce7ColoursL5blackE_14 & 0xffffff;
  __ptr = malloc(0x80);
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_48 = 8;
  *__ptr = 0;
  *(uint *)(__ptr + 1) = uVar6 | uVar2;
  uStack_44 = 2;
  __ptr[2] = 0x3ff0000000000000;
  *(undefined4 *)(__ptr + 3) = uVar1;
  switch(*(undefined4 *)(param_2 + 0x150)) {
  case 0:
    uStack_68 = (ulong)(uint)(float)(int)param_5 << 0x20;
    fVar9 = (float)(int)param_5 * DAT_005de428;
    uStack_60 = (ulong)(uint)fVar9 << 0x20;
    iVar5 = (int)fVar9;
    uVar2 = param_5 - iVar5;
    uVar7 = (ulong)param_4 | 0x100000000;
    uStack_80 = (ulong)(iVar5 - 2) << 0x20;
    uVar8 = (ulong)(param_5 - 1) << 0x20;
    uStack_98 = 0;
    break;
  case 1:
    uStack_60 = (ulong)(uint)((float)(int)param_5 * DAT_005d9050) << 0x20;
    param_5 = (uint)((float)(int)param_5 * DAT_005d9050);
    uVar7 = (ulong)param_4 | 0x100000000;
    goto LAB_001fadc4;
  case 2:
    uStack_68 = (ulong)(uint)(float)(int)param_4;
    fVar9 = (float)(int)param_4 * DAT_005de428;
    uStack_60 = (ulong)(uint)fVar9;
    iVar5 = (int)fVar9;
    uStack_98 = (ulong)(param_4 - 1);
    uVar7 = (ulong)param_5 << 0x20 | 1;
    uStack_88 = (ulong)(iVar5 - 2);
    uVar8 = 0;
    param_4 = param_4 - iVar5;
    uVar2 = param_5;
    break;
  case 3:
    uStack_60 = (ulong)(uint)((float)(int)param_4 * DAT_005d9050);
    param_4 = (uint)((float)(int)param_4 * DAT_005d9050);
    uVar7 = (ulong)param_5 << 0x20 | 1;
LAB_001fadc4:
    uStack_98 = 0;
    uVar8 = 0;
    uVar2 = param_5;
    break;
  default:
    uStack_98 = 0;
    uVar8 = 0;
    uVar7 = 0;
    param_4 = 0;
    uVar2 = 0;
  }
  puStack_50 = __ptr;
  pCStack_38 = param_2;
  Graphics::setGradientFill(param_3,&uStack_68);
  if ((int)param_4 < -3) {
    param_4 = 0xfffffffc;
  }
  uVar6 = 0xfffffffc;
  if (-4 < (int)uVar2) {
    uVar6 = uVar2;
  }
  uStack_78 = uStack_80 | uStack_88;
  uStack_70 = CONCAT44(uVar6 + 4,param_4 + 4);
  (**(code **)(**(long **)(param_3 + 8) + 0xb0))(*(long **)(param_3 + 8),&uStack_78,0);
  uVar4 = Component::findColour(pCStack_38,0x1005812,'\0');
  Graphics::setColour(param_3,(int)uVar4);
  uStack_78 = uVar8 | uStack_98;
  uStack_70 = uVar7;
  (**(code **)(**(long **)(param_3 + 8) + 0xb0))(*(long **)(param_3 + 8),&uStack_78,0);
  free(__ptr);
  return;
}


