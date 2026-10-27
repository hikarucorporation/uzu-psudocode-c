// Function : modifierKeysChanged
// Namespace: juce:Component
// Entry    : 00223da0
// Prototype: undefined modifierKeysChanged(long param_1)
// Body     : 00223da0 - 00223db5


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::Component::modifierKeysChanged(juce::ModifierKeys const&) */

void __cdecl juce::Component::modifierKeysChanged(long param_1)

{
  if (*(long **)(param_1 + 0x30) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00223db3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x30) + 0x118))();
  return;
}


