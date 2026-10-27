// Function : drawLasso
// Namespace: juce:LookAndFeel_V2
// Entry    : 0020aa00
// Prototype: undefined drawLasso(undefined8 param_1_00, Graphics * param_2, Component * param_3)
// Body     : 0020aa00 - 0020aa73


/* non-virtual thunk to juce::LookAndFeel_V2::drawLasso(juce::Graphics&, juce::Component&) */

void __thiscall
juce::LookAndFeel_V2::drawLasso(undefined8 param_1_00,Graphics *param_2,Component *param_3)

{
  ulong uVar1;
  undefined8 local_20;
  undefined8 uStack_18;
  
  uVar1 = Component::findColour(param_3,0x1000440,'\0');
  Graphics::fillAll(param_2,(uint)uVar1);
  uVar1 = Component::findColour(param_3,0x1000441,'\0');
  Graphics::setColour(param_2,(int)uVar1);
  uStack_18 = CONCAT44((float)(int)((ulong)*(undefined8 *)(param_3 + 0x40) >> 0x20),
                       (float)(int)*(undefined8 *)(param_3 + 0x40));
  local_20 = 0;
  (**(code **)(**(long **)(param_2 + 8) + 0xd0))(DAT_005d9038,*(long **)(param_2 + 8),&local_20);
  return;
}


