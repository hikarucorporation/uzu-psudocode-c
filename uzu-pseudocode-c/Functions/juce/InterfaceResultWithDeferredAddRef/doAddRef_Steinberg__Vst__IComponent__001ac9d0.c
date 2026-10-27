// Function : doAddRef<Steinberg::Vst::IComponent>
// Namespace: juce:InterfaceResultWithDeferredAddRef
// Entry    : 001ac9d0
// Prototype: void doAddRef<Steinberg::Vst::IComponent>(long * param_1)
// Body     : 001ac9d0 - 001ac9d5


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* void juce::InterfaceResultWithDeferredAddRef::doAddRef<Steinberg::Vst::IComponent>(void*) */

void __cdecl
juce::InterfaceResultWithDeferredAddRef::doAddRef<Steinberg::Vst::IComponent>(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001ac9d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}


