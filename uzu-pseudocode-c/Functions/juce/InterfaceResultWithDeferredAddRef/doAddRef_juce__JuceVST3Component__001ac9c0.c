// Function : doAddRef<juce::JuceVST3Component>
// Namespace: juce:InterfaceResultWithDeferredAddRef
// Entry    : 001ac9c0
// Prototype: void doAddRef<juce::JuceVST3Component>(long param_1)
// Body     : 001ac9c0 - 001ac9c5


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* void juce::InterfaceResultWithDeferredAddRef::doAddRef<juce::JuceVST3Component>(void*) */

void __cdecl
juce::InterfaceResultWithDeferredAddRef::doAddRef<juce::JuceVST3Component>(long param_1)

{
  LOCK();
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  UNLOCK();
  return;
}


