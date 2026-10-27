// Function : drawTabAreaBehindFrontButton
// Namespace: juce:LookAndFeel_V3
// Entry    : 001fabd0
// Prototype: undefined drawTabAreaBehindFrontButton(undefined8 param_1_00, Component * param_2, Graphics * param_3, uint param_4, uint param_5)
// Body     : 001fabd0 - 001fae76


/* juce::LookAndFeel_V3::drawTabAreaBehindFrontButton(juce::TabbedButtonBar&, juce::Graphics&, int,
   int) */

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
  ulong local_98;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  ulong uStack_60;
  undefined1 local_58;
  undefined8 *local_50;
  undefined4 local_48;
  undefined4 local_44;
  Component *local_38;
  
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
  local_80 = 0xfffffffe00000000;
  local_88 = 0xfffffffe;
  uVar6 = _ZN4juce7ColoursL5blackE_14 & 0xffffff;
  __ptr = malloc(0x80);
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_48 = 8;
  *__ptr = 0;
  *(uint *)(__ptr + 1) = uVar6 | uVar2;
  local_44 = 2;
  __ptr[2] = 0x3ff0000000000000;
  *(undefined4 *)(__ptr + 3) = uVar1;
  switch(*(undefined4 *)(param_2 + 0x150)) {
  case 0:
    local_68 = (ulong)(uint)(float)(int)param_5 << 0x20;
    fVar9 = (float)(int)param_5 * DAT_005de428;
    uStack_60 = (ulong)(uint)fVar9 << 0x20;
    iVar5 = (int)fVar9;
    uVar2 = param_5 - iVar5;
    uVar7 = (ulong)param_4 | 0x100000000;
    local_80 = (ulong)(iVar5 - 2) << 0x20;
    uVar8 = (ulong)(param_5 - 1) << 0x20;
    local_98 = 0;
    break;
  case 1:
    uStack_60 = (ulong)(uint)((float)(int)param_5 * DAT_005d9050) << 0x20;
    param_5 = (uint)((float)(int)param_5 * DAT_005d9050);
    uVar7 = (ulong)param_4 | 0x100000000;
    goto LAB_001fadc4;
  case 2:
    local_68 = (ulong)(uint)(float)(int)param_4;
    fVar9 = (float)(int)param_4 * DAT_005de428;
    uStack_60 = (ulong)(uint)fVar9;
    iVar5 = (int)fVar9;
    local_98 = (ulong)(param_4 - 1);
    uVar7 = (ulong)param_5 << 0x20 | 1;
    local_88 = (ulong)(iVar5 - 2);
    uVar8 = 0;
    param_4 = param_4 - iVar5;
    uVar2 = param_5;
    break;
  case 3:
    uStack_60 = (ulong)(uint)((float)(int)param_4 * DAT_005d9050);
    param_4 = (uint)((float)(int)param_4 * DAT_005d9050);
    uVar7 = (ulong)param_5 << 0x20 | 1;
LAB_001fadc4:
    local_98 = 0;
    uVar8 = 0;
    uVar2 = param_5;
    break;
  default:
    local_98 = 0;
    uVar8 = 0;
    uVar7 = 0;
    param_4 = 0;
    uVar2 = 0;
  }
                    /* try { // try from 001fadcd to 001fae5f has its CatchHandler @ 001fae77 */
  local_50 = __ptr;
  local_38 = param_2;
  Graphics::setGradientFill(param_3,&local_68);
  if ((int)param_4 < -3) {
    param_4 = 0xfffffffc;
  }
  uVar6 = 0xfffffffc;
  if (-4 < (int)uVar2) {
    uVar6 = uVar2;
  }
  local_78 = local_80 | local_88;
  local_70 = CONCAT44(uVar6 + 4,param_4 + 4);
  (**(code **)(**(long **)(param_3 + 8) + 0xb0))(*(long **)(param_3 + 8),&local_78,0);
  uVar4 = Component::findColour(local_38,0x1005812,'\0');
  Graphics::setColour(param_3,(int)uVar4);
  local_78 = uVar8 | local_98;
  local_70 = uVar7;
  (**(code **)(**(long **)(param_3 + 8) + 0xb0))(*(long **)(param_3 + 8),&local_78,0);
  free(__ptr);
  return;
}


