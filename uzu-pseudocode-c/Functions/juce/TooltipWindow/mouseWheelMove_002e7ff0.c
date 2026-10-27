// Function : mouseWheelMove
// Namespace: juce:TooltipWindow
// Entry    : 002e7ff0
// Prototype: undefined mouseWheelMove(long param_1)
// Body     : 002e7ff0 - 002e8002


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::TooltipWindow::mouseWheelMove(juce::MouseEvent const&, juce::MouseWheelDetails const&) */

void __cdecl juce::TooltipWindow::mouseWheelMove(long param_1)

{
  if ((*(ushort *)(param_1 + 0xe8) & 2) != 0) {
    *(undefined1 *)(param_1 + 0x14d) = 1;
  }
  return;
}


