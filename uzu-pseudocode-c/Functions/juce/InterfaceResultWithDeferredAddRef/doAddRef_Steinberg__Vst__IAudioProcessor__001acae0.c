// Function : doAddRef<Steinberg::Vst::IAudioProcessor>
// Namespace: juce:InterfaceResultWithDeferredAddRef
// Entry    : 001acae0
// Prototype: void doAddRef<Steinberg::Vst::IAudioProcessor>(long * param_1)
// Body     : 001acae0 - 001acae5


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* void juce::InterfaceResultWithDeferredAddRef::doAddRef<Steinberg::Vst::IAudioProcessor>(void*) */

void __cdecl
juce::InterfaceResultWithDeferredAddRef::doAddRef<Steinberg::Vst::IAudioProcessor>(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001acae3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}


