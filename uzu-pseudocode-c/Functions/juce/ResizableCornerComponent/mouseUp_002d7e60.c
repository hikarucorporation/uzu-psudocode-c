// Function : mouseUp
// Namespace: juce:ResizableCornerComponent
// Entry    : 002d7e60
// Prototype: undefined mouseUp(long param_1)
// Body     : 002d7e60 - 002d7e72


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::ResizableCornerComponent::mouseUp(juce::MouseEvent const&) */

void __cdecl juce::ResizableCornerComponent::mouseUp(long param_1)

{
  if (*(long **)(param_1 + 0xf8) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x002d7e6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xf8) + 0x20))();
  return;
}


