// Function : doAddRef<Steinberg::Vst::IParameterFinder>
// Namespace: juce:InterfaceResultWithDeferredAddRef
// Entry    : 001b8310
// Prototype: void doAddRef<Steinberg::Vst::IParameterFinder>(long * param_1)
// Body     : 001b8310 - 001b8315


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* void juce::InterfaceResultWithDeferredAddRef::doAddRef<Steinberg::Vst::IParameterFinder>(void*)
    */

void __cdecl
juce::InterfaceResultWithDeferredAddRef::doAddRef<Steinberg::Vst::IParameterFinder>(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001b8313. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}


