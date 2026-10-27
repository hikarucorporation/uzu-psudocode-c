// Function : doAddRef<juce::JuceAudioProcessor>
// Namespace: juce:InterfaceResultWithDeferredAddRef
// Entry    : 001acb20
// Prototype: void doAddRef<juce::JuceAudioProcessor>(long param_1)
// Body     : 001acb20 - 001acb28


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* void juce::InterfaceResultWithDeferredAddRef::doAddRef<juce::JuceAudioProcessor>(void*) */

void __cdecl
juce::InterfaceResultWithDeferredAddRef::doAddRef<juce::JuceAudioProcessor>(long param_1)

{
  LOCK();
  *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + 1;
  UNLOCK();
  return;
}


