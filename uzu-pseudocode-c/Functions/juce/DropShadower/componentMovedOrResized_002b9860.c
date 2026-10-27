// Function : componentMovedOrResized
// Namespace: juce:DropShadower
// Entry    : 002b9860
// Prototype: undefined componentMovedOrResized(DropShadower * param_1, long param_2)
// Body     : 002b9860 - 002b9874


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::DropShadower::componentMovedOrResized(juce::Component&, bool, bool) */

void __cdecl juce::DropShadower::componentMovedOrResized(DropShadower *param_1,long param_2)

{
  if ((*(long *)(param_1 + 8) == 0) || (*(long *)(*(long *)(param_1 + 8) + 0x10) != param_2)) {
    return;
  }
  updateShadows(param_1);
  return;
}


