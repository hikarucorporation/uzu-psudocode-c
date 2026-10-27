// Function : mouseEnter
// Namespace: juce:CustomDial
// Entry    : 0016b5c0
// Prototype: undefined mouseEnter(long param_1)
// Body     : 0016b5c0 - 0016b5d7


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::CustomDial::mouseEnter(juce::MouseEvent const&) */

void __cdecl juce::CustomDial::mouseEnter(long param_1)

{
  *(undefined1 *)(param_1 + 0x1d3) = 1;
  Timer::startTimer((Timer *)(param_1 + 0x1a8),0x10);
  return;
}


