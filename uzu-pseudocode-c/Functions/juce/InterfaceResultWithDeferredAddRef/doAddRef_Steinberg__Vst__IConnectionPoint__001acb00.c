// Function : doAddRef<Steinberg::Vst::IConnectionPoint>
// Namespace: juce:InterfaceResultWithDeferredAddRef
// Entry    : 001acb00
// Prototype: void doAddRef<Steinberg::Vst::IConnectionPoint>(long * param_1)
// Body     : 001acb00 - 001acb05


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* void juce::InterfaceResultWithDeferredAddRef::doAddRef<Steinberg::Vst::IConnectionPoint>(void*)
    */

void __cdecl
juce::InterfaceResultWithDeferredAddRef::doAddRef<Steinberg::Vst::IConnectionPoint>(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001acb03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}


