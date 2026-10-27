// Function : drawStretchableLayoutResizerBar
// Namespace: juce:LookAndFeel_V4
// Entry    : 00209690
// Prototype: undefined drawStretchableLayoutResizerBar(LookAndFeel_V4 * this, Graphics * param_1)
// Body     : 00209690 - 002096b6


/* non-virtual thunk to juce::LookAndFeel_V4::drawStretchableLayoutResizerBar(juce::Graphics&, int,
   int, bool, bool, bool) */

void __thiscall
juce::LookAndFeel_V4::drawStretchableLayoutResizerBar(LookAndFeel_V4 *this,Graphics *param_1)

{
  int in_R9D;
  char in_stack_00000008;
  
  if ((in_R9D == 0) && (in_stack_00000008 == '\0')) {
    return;
  }
  Graphics::fillAll(param_1,*(uint *)(this + 0xb0) & 0xffffff | 0x80000000);
  return;
}


