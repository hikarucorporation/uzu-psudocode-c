// Function : componentVisibilityChanged
// Namespace: juce:ComponentMovementWatcher
// Entry    : 00224e40
// Prototype: undefined componentVisibilityChanged(long * param_1)
// Body     : 00224e40 - 00224e6e


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::ComponentMovementWatcher::componentVisibilityChanged(juce::Component&) */

void __cdecl juce::ComponentMovementWatcher::componentVisibilityChanged(long *param_1)

{
  Component *this;
  uint uVar1;
  
  if ((param_1[1] != 0) && (this = *(Component **)(param_1[1] + 0x10), this != (Component *)0x0)) {
    uVar1 = Component::isShowing(this);
    if (*(char *)((long)param_1 + 0x29) != (char)uVar1) {
      *(char *)((long)param_1 + 0x29) = (char)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00224e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x60))(param_1);
      return;
    }
  }
  return;
}


