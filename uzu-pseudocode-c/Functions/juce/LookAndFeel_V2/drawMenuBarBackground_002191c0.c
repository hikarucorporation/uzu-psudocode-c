// Function : drawMenuBarBackground
// Namespace: juce:LookAndFeel_V2
// Entry    : 002191c0
// Prototype: undefined drawMenuBarBackground(undefined8 param_1_00, Graphics * param_2, int param_3, int param_4, undefined8 param_5_00, Component * param_6)
// Body     : 002191c0 - 00219266


/* non-virtual thunk to juce::LookAndFeel_V2::drawMenuBarBackground(juce::Graphics&, int, int, bool,
   juce::MenuBarComponent&) */

void __thiscall
juce::LookAndFeel_V2::drawMenuBarBackground
          (undefined8 param_1_00,Graphics *param_2,int param_3,int param_4,undefined8 param_5_00,
          Component *param_6)

{
  uint uVar1;
  undefined8 in_RAX;
  ulong uVar2;
  uint local_28;
  undefined4 uStack_24;
  
  uStack_24 = (undefined4)((ulong)in_RAX >> 0x20);
  uVar2 = Component::findColour(param_6,0x1000700,'\0');
  uVar1 = Colour::withMultipliedSaturation(DAT_005de3c8,(uint)uVar2);
  _local_28 = CONCAT44(uStack_24,uVar1);
  do {
    if ((*(ushort *)(param_6 + 0xe8) & 0x8000) != 0) {
      Graphics::fillAll(param_2,uVar1);
      return;
    }
    param_6 = *(Component **)(param_6 + 0x30);
  } while (param_6 != (Component *)0x0);
  drawShinyButtonShape
            (DAT_0065b5a8,0.0,(float)param_3 + DAT_00651f38,(float)param_4,DAT_005d98f0,param_2,
             &local_28);
  return;
}


