// Function : drawTabAreaBehindFrontButton
// Namespace: juce:LookAndFeel_V2
// Entry    : 0021aa20
// Prototype: undefined drawTabAreaBehindFrontButton(undefined8 param_1_00, long param_2, Graphics * param_3, uint param_4, uint param_5)
// Body     : 0021aa20 - 0021aa24


/* non-virtual thunk to juce::LookAndFeel_V2::drawTabAreaBehindFrontButton(juce::TabbedButtonBar&,
   juce::Graphics&, int, int) */

void __thiscall
juce::LookAndFeel_V2::drawTabAreaBehindFrontButton
          (undefined8 param_1_00,long param_2,Graphics *param_3,uint param_4,uint param_5)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *__ptr;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  ulong uStack_88;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  uVar1 = _ZN4juce7ColoursL16transparentBlackE_5;
  lVar3 = param_2;
  do {
    if ((*(ushort *)(lVar3 + 0xe8) & 0x8000) != 0) {
      uVar2 = 0x26000000;
      goto LAB_002157fa;
    }
    lVar3 = *(long *)(lVar3 + 0x30);
  } while (lVar3 != 0);
  uVar2 = 0x40000000;
LAB_002157fa:
  uStack_70 = 0xfffffffe00000000;
  uStack_78 = 0xfffffffe;
  uVar5 = _ZN4juce7ColoursL5blackE_14 & 0xffffff;
  __ptr = malloc(0x80);
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_38 = 8;
  *__ptr = 0;
  *(uint *)(__ptr + 1) = uVar5 | uVar2;
  uStack_34 = 2;
  __ptr[2] = 0x3ff0000000000000;
  *(undefined4 *)(__ptr + 3) = uVar1;
  switch(*(undefined4 *)(param_2 + 0x150)) {
  case 0:
    uStack_58 = (ulong)(uint)(float)(int)param_5 << 0x20;
    fVar8 = (float)(int)param_5 * DAT_005de3cc;
    uStack_50 = (ulong)(uint)fVar8 << 0x20;
    iVar4 = (int)fVar8;
    uVar2 = param_5 - iVar4;
    uVar7 = (ulong)param_4 | 0x100000000;
    uStack_70 = (ulong)(iVar4 - 2) << 0x20;
    uVar6 = (ulong)(param_5 - 1) << 0x20;
    uStack_88 = 0;
    break;
  case 1:
    uStack_50 = (ulong)(uint)((float)(int)param_5 * DAT_005d9070) << 0x20;
    param_5 = (uint)((float)(int)param_5 * DAT_005d9070);
    uVar7 = (ulong)param_4 | 0x100000000;
    goto LAB_00215983;
  case 2:
    uStack_58 = (ulong)(uint)(float)(int)param_4;
    fVar8 = (float)(int)param_4 * DAT_005de3cc;
    uStack_50 = (ulong)(uint)fVar8;
    iVar4 = (int)fVar8;
    uStack_88 = (ulong)(param_4 - 1);
    uVar7 = (ulong)param_5 << 0x20 | 1;
    uStack_78 = (ulong)(iVar4 - 2);
    uVar6 = 0;
    param_4 = param_4 - iVar4;
    uVar2 = param_5;
    break;
  case 3:
    uStack_50 = (ulong)(uint)((float)(int)param_4 * DAT_005d9070);
    param_4 = (uint)((float)(int)param_4 * DAT_005d9070);
    uVar7 = (ulong)param_5 << 0x20 | 1;
LAB_00215983:
    uStack_88 = 0;
    uVar6 = 0;
    uVar2 = param_5;
    break;
  default:
    uStack_88 = 0;
    uVar6 = 0;
    uVar7 = 0;
    param_4 = 0;
    uVar2 = 0;
  }
  puStack_40 = __ptr;
  Graphics::setGradientFill(param_3,&uStack_58);
  if ((int)param_4 < -3) {
    param_4 = 0xfffffffc;
  }
  uVar5 = 0xfffffffc;
  if (-4 < (int)uVar2) {
    uVar5 = uVar2;
  }
  uStack_68 = uStack_70 | uStack_78;
  uStack_60 = CONCAT44(uVar5 + 4,param_4 + 4);
  (**(code **)(**(long **)(param_3 + 8) + 0xb0))(*(long **)(param_3 + 8),&uStack_68,0);
  Graphics::setColour(param_3,0x80000000);
  uStack_68 = uVar6 | uStack_88;
  uStack_60 = uVar7;
  (**(code **)(**(long **)(param_3 + 8) + 0xb0))(*(long **)(param_3 + 8),&uStack_68,0);
  free(__ptr);
  return;
}


