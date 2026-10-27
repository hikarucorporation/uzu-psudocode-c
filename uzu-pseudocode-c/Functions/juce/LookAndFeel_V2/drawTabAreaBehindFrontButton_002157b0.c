// Function : drawTabAreaBehindFrontButton
// Namespace: juce:LookAndFeel_V2
// Entry    : 002157b0
// Prototype: undefined drawTabAreaBehindFrontButton(undefined8 param_1_00, long param_2, Graphics * param_3, uint param_4, uint param_5)
// Body     : 002157b0 - 00215a3b


/* juce::LookAndFeel_V2::drawTabAreaBehindFrontButton(juce::TabbedButtonBar&, juce::Graphics&, int,
   int) */

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
  ulong local_88;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong uStack_50;
  undefined1 local_48;
  undefined8 *local_40;
  undefined4 local_38;
  undefined4 local_34;
  
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
  local_70 = 0xfffffffe00000000;
  local_78 = 0xfffffffe;
  uVar5 = _ZN4juce7ColoursL5blackE_14 & 0xffffff;
  __ptr = malloc(0x80);
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_38 = 8;
  *__ptr = 0;
  *(uint *)(__ptr + 1) = uVar5 | uVar2;
  local_34 = 2;
  __ptr[2] = 0x3ff0000000000000;
  *(undefined4 *)(__ptr + 3) = uVar1;
  switch(*(undefined4 *)(param_2 + 0x150)) {
  case 0:
    local_58 = (ulong)(uint)(float)(int)param_5 << 0x20;
    fVar8 = (float)(int)param_5 * DAT_005de3cc;
    uStack_50 = (ulong)(uint)fVar8 << 0x20;
    iVar4 = (int)fVar8;
    uVar2 = param_5 - iVar4;
    uVar7 = (ulong)param_4 | 0x100000000;
    local_70 = (ulong)(iVar4 - 2) << 0x20;
    uVar6 = (ulong)(param_5 - 1) << 0x20;
    local_88 = 0;
    break;
  case 1:
    uStack_50 = (ulong)(uint)((float)(int)param_5 * DAT_005d9070) << 0x20;
    param_5 = (uint)((float)(int)param_5 * DAT_005d9070);
    uVar7 = (ulong)param_4 | 0x100000000;
    goto LAB_00215983;
  case 2:
    local_58 = (ulong)(uint)(float)(int)param_4;
    fVar8 = (float)(int)param_4 * DAT_005de3cc;
    uStack_50 = (ulong)(uint)fVar8;
    iVar4 = (int)fVar8;
    local_88 = (ulong)(param_4 - 1);
    uVar7 = (ulong)param_5 << 0x20 | 1;
    local_78 = (ulong)(iVar4 - 2);
    uVar6 = 0;
    param_4 = param_4 - iVar4;
    uVar2 = param_5;
    break;
  case 3:
    uStack_50 = (ulong)(uint)((float)(int)param_4 * DAT_005d9070);
    param_4 = (uint)((float)(int)param_4 * DAT_005d9070);
    uVar7 = (ulong)param_5 << 0x20 | 1;
LAB_00215983:
    local_88 = 0;
    uVar6 = 0;
    uVar2 = param_5;
    break;
  default:
    local_88 = 0;
    uVar6 = 0;
    uVar7 = 0;
    param_4 = 0;
    uVar2 = 0;
  }
                    /* try { // try from 002159a3 to 00215a24 has its CatchHandler @ 00215a3c */
  local_40 = __ptr;
  Graphics::setGradientFill(param_3,&local_58);
  if ((int)param_4 < -3) {
    param_4 = 0xfffffffc;
  }
  uVar5 = 0xfffffffc;
  if (-4 < (int)uVar2) {
    uVar5 = uVar2;
  }
  local_68 = local_70 | local_78;
  local_60 = CONCAT44(uVar5 + 4,param_4 + 4);
  (**(code **)(**(long **)(param_3 + 8) + 0xb0))(*(long **)(param_3 + 8),&local_68,0);
  Graphics::setColour(param_3,0x80000000);
  local_68 = uVar6 | local_88;
  local_60 = uVar7;
  (**(code **)(**(long **)(param_3 + 8) + 0xb0))(*(long **)(param_3 + 8),&local_68,0);
  free(__ptr);
  return;
}


