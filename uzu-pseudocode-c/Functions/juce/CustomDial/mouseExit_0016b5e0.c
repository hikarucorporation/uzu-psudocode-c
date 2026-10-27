// Function : mouseExit
// Namespace: juce:CustomDial
// Entry    : 0016b5e0
// Prototype: undefined mouseExit(long param_1)
// Body     : 0016b5e0 - 0016b5f7


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::CustomDial::mouseExit(juce::MouseEvent const&) */

void __cdecl juce::CustomDial::mouseExit(long param_1)

{
  *(undefined1 *)(param_1 + 0x1d3) = 0;
  Timer::startTimer((Timer *)(param_1 + 0x1a8),0x10);
  return;
}


