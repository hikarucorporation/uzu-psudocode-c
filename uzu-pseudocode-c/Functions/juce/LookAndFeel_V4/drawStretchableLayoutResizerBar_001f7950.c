// Function : drawStretchableLayoutResizerBar
// Namespace: juce:LookAndFeel_V4
// Entry    : 001f7950
// Prototype: undefined drawStretchableLayoutResizerBar(long param_1, Graphics * param_2)
// Body     : 001f7950 - 001f7976


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::LookAndFeel_V4::drawStretchableLayoutResizerBar(juce::Graphics&, int, int, bool, bool,
   bool) */

void __cdecl juce::LookAndFeel_V4::drawStretchableLayoutResizerBar(long param_1,Graphics *param_2)

{
  int in_R9D;
  char in_stack_00000008;
  
  if ((in_R9D == 0) && (in_stack_00000008 == '\0')) {
    return;
  }
  Graphics::fillAll(param_2,*(uint *)(param_1 + 0x170) & 0xffffff | 0x80000000);
  return;
}


