// Function : paintToolbarBackground
// Namespace: juce:LookAndFeel_V2
// Entry    : 00215d00
// Prototype: undefined paintToolbarBackground(undefined8 param_1_00, Graphics * param_2, int param_3, int param_4, Component * param_5)
// Body     : 00215d00 - 00215e33


/* juce::LookAndFeel_V2::paintToolbarBackground(juce::Graphics&, int, int, juce::Toolbar&) */

void __thiscall
juce::LookAndFeel_V2::paintToolbarBackground
          (undefined8 param_1_00,Graphics *param_2,int param_3,int param_4,Component *param_5)

{
  uint uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined8 *local_40;
  undefined4 local_38;
  undefined4 local_34;
  
  uVar2 = Component::findColour(param_5,0x1003200,'\0');
  uVar1 = (uint)uVar2;
  fVar3 = (float)((uint)(uVar2 >> 0x10) & 0xff) * DAT_005de454;
  fVar4 = (float)(byte)(uVar2 >> 8) * DAT_005de454;
  fVar5 = (float)(uVar1 & 0xff) * DAT_005de454;
  fVar7 = 0.0;
  fVar6 = 0.0;
  if (param_5[0x118] == (Component)0x0) {
    fVar7 = (float)param_4 + DAT_005d9054;
  }
  else {
    fVar6 = (float)param_3 + DAT_005d9054;
  }
  uStack_50 = CONCAT44(fVar7,fVar6);
  local_58 = 0;
  local_48 = 0;
  local_40 = malloc(0x80);
  local_38 = 8;
  *local_40 = 0;
  *(uint *)(local_40 + 1) = uVar1;
  local_34 = 2;
  local_40[2] = 0x3ff0000000000000;
  *(uint *)(local_40 + 3) =
       (int)fVar5 & 0xffU |
       ((int)fVar4 & 0xffU) << 8 | ((int)fVar3 & 0xffU) << 0x10 | uVar1 & 0xff000000;
                    /* try { // try from 00215e04 to 00215e0e has its CatchHandler @ 00215e34 */
  Graphics::setGradientFill(param_2,&local_58);
  free(local_40);
                    /* WARNING: Could not recover jumptable at 0x00215e2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_2 + 8) + 0xa8))();
  return;
}


