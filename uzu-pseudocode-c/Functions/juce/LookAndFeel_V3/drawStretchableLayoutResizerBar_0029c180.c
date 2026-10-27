// Function : drawStretchableLayoutResizerBar
// Namespace: juce:LookAndFeel_V3
// Entry    : 0029c180
// Prototype: undefined drawStretchableLayoutResizerBar(undefined8 param_1_00, Graphics * param_2)
// Body     : 0029c180 - 0029c1a6


/* non-virtual thunk to juce::LookAndFeel_V3::drawStretchableLayoutResizerBar(juce::Graphics&, int,
   int, bool, bool, bool) */

void __thiscall
juce::LookAndFeel_V3::drawStretchableLayoutResizerBar(undefined8 param_1_00,Graphics *param_2)

{
  int in_R9D;
  char in_stack_00000008;
  
  if ((in_R9D == 0) && (in_stack_00000008 == '\0')) {
    return;
  }
  Graphics::fillAll(param_2,_ZN4juce7ColoursL6yellowE_146 & 0xffffff | 0x66000000);
  return;
}


