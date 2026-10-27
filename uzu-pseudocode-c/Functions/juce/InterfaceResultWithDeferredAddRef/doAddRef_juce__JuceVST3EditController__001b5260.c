// Function : doAddRef<juce::JuceVST3EditController>
// Namespace: juce:InterfaceResultWithDeferredAddRef
// Entry    : 001b5260
// Prototype: void doAddRef<juce::JuceVST3EditController>(long param_1)
// Body     : 001b5260 - 001b5265


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* void juce::InterfaceResultWithDeferredAddRef::doAddRef<juce::JuceVST3EditController>(void*) */

void __cdecl
juce::InterfaceResultWithDeferredAddRef::doAddRef<juce::JuceVST3EditController>(long param_1)

{
  LOCK();
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  UNLOCK();
  return;
}


