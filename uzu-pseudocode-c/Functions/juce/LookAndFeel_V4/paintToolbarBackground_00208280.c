// Function : paintToolbarBackground
// Namespace: juce:LookAndFeel_V4
// Entry    : 00208280
// Prototype: undefined paintToolbarBackground(undefined8 param_1_00, Graphics * param_2, int param_3, int param_4, Component * param_5)
// Body     : 00208280 - 00208284


/* non-virtual thunk to juce::LookAndFeel_V4::paintToolbarBackground(juce::Graphics&, int, int,
   juce::Toolbar&) */

void __thiscall
juce::LookAndFeel_V4::paintToolbarBackground
          (undefined8 param_1_00,Graphics *param_2,int param_3,int param_4,Component *param_5)

{
  uint uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  uVar2 = Component::findColour(param_5,0x1003200,'\0');
  uVar1 = (uint)uVar2;
  fVar3 = (float)((uint)(uVar2 >> 0x10) & 0xff) * DAT_005de424;
  fVar4 = (float)(byte)(uVar2 >> 8) * DAT_005de424;
  fVar5 = (float)(uVar1 & 0xff) * DAT_005de424;
  fVar7 = 0.0;
  fVar6 = 0.0;
  if (param_5[0x118] == (Component)0x0) {
    fVar7 = (float)param_4 + DAT_005d9054;
  }
  else {
    fVar6 = (float)param_3 + DAT_005d9054;
  }
  uStack_50 = CONCAT44(fVar7,fVar6);
  uStack_58 = 0;
  uStack_48 = 0;
  puStack_40 = malloc(0x80);
  uStack_38 = 8;
  *puStack_40 = 0;
  *(uint *)(puStack_40 + 1) = uVar1;
  uStack_34 = 2;
  puStack_40[2] = 0x3ff0000000000000;
  *(uint *)(puStack_40 + 3) =
       (int)fVar5 & 0xffU |
       ((int)fVar4 & 0xffU) << 8 | ((int)fVar3 & 0xffU) << 0x10 | uVar1 & 0xff000000;
  Graphics::setGradientFill(param_2,&uStack_58);
  free(puStack_40);
                    /* WARNING: Could not recover jumptable at 0x001fd01e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_2 + 8) + 0xa8))();
  return;
}


