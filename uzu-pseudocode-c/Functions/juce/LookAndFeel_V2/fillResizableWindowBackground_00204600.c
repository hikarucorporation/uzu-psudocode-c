// Function : fillResizableWindowBackground
// Namespace: juce:LookAndFeel_V2
// Entry    : 00204600
// Prototype: undefined fillResizableWindowBackground(undefined8 param_1_00, Graphics * param_2)
// Body     : 00204600 - 0020461d


/* non-virtual thunk to juce::LookAndFeel_V2::fillResizableWindowBackground(juce::Graphics&, int,
   int, juce::BorderSize<int> const&, juce::ResizableWindow&) */

void __thiscall
juce::LookAndFeel_V2::fillResizableWindowBackground(undefined8 param_1_00,Graphics *param_2)

{
  ulong uVar1;
  Component *in_R9;
  
                    /* try { // try from 00204607 to 00204612 has its CatchHandler @ 0020461e */
  uVar1 = Component::findColour(in_R9,0x1005700,'\0');
  Graphics::fillAll(param_2,(uint)uVar1);
  return;
}


