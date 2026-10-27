// Function : componentMovedOrResized
// Namespace: juce:FocusOutline
// Entry    : 002b8c50
// Prototype: undefined componentMovedOrResized(FocusOutline * param_1, long param_2)
// Body     : 002b8c50 - 002b8c64


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::FocusOutline::componentMovedOrResized(juce::Component&, bool, bool) */

void __cdecl juce::FocusOutline::componentMovedOrResized(FocusOutline *param_1,long param_2)

{
  if ((*(long *)(param_1 + 0x10) == 0) || (*(long *)(*(long *)(param_1 + 0x10) + 0x10) != param_2))
  {
    return;
  }
  updateOutlineWindow(param_1);
  return;
}


