// Function : doAddRef<Steinberg::Vst::IRemapParamID>
// Namespace: juce:InterfaceResultWithDeferredAddRef
// Entry    : 001b54b0
// Prototype: void doAddRef<Steinberg::Vst::IRemapParamID>(long * param_1)
// Body     : 001b54b0 - 001b54b5


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* void juce::InterfaceResultWithDeferredAddRef::doAddRef<Steinberg::Vst::IRemapParamID>(void*) */

void __cdecl
juce::InterfaceResultWithDeferredAddRef::doAddRef<Steinberg::Vst::IRemapParamID>(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001b54b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}


