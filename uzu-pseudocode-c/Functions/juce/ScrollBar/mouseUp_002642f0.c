// Function : mouseUp
// Namespace: juce:ScrollBar
// Entry    : 002642f0
// Prototype: undefined mouseUp(long param_1)
// Body     : 002642f0 - 0026431a


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::ScrollBar::mouseUp(juce::MouseEvent const&) */

void __cdecl juce::ScrollBar::mouseUp(long param_1)

{
  *(undefined1 *)(param_1 + 0x17d) = 0;
  Timer::stopTimer((Timer *)(param_1 + 0x100));
  Component::internalRepaintUnchecked(param_1,0,*(ulong *)(param_1 + 0x40),'\x01');
  return;
}


