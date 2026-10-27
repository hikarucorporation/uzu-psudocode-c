// Function : mouseDown
// Namespace: juce:TooltipWindow
// Entry    : 002e7fd0
// Prototype: undefined mouseDown(long param_1)
// Body     : 002e7fd0 - 002e7fe2


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::TooltipWindow::mouseDown(juce::MouseEvent const&) */

void __cdecl juce::TooltipWindow::mouseDown(long param_1)

{
  if ((*(ushort *)(param_1 + 0xe8) & 2) != 0) {
    *(undefined1 *)(param_1 + 0x14d) = 1;
  }
  return;
}


