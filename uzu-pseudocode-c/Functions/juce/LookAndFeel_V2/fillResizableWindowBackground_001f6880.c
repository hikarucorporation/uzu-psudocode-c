// Function : fillResizableWindowBackground
// Namespace: juce:LookAndFeel_V2
// Entry    : 001f6880
// Prototype: undefined fillResizableWindowBackground(undefined8 param_1, Graphics * param_2)
// Body     : 001f6880 - 001f689d


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::LookAndFeel_V2::fillResizableWindowBackground(juce::Graphics&, int, int,
   juce::BorderSize<int> const&, juce::ResizableWindow&) */

void __cdecl
juce::LookAndFeel_V2::fillResizableWindowBackground(undefined8 param_1,Graphics *param_2)

{
  ulong uVar1;
  Component *in_R9;
  
                    /* try { // try from 001f6887 to 001f6892 has its CatchHandler @ 001f689e */
  uVar1 = Component::findColour(in_R9,0x1005700,'\0');
  Graphics::fillAll(param_2,(uint)uVar1);
  return;
}


