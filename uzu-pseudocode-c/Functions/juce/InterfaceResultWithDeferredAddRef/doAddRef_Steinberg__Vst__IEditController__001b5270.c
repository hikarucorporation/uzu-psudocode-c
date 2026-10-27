// Function : doAddRef<Steinberg::Vst::IEditController>
// Namespace: juce:InterfaceResultWithDeferredAddRef
// Entry    : 001b5270
// Prototype: void doAddRef<Steinberg::Vst::IEditController>(long * param_1)
// Body     : 001b5270 - 001b5275


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* void juce::InterfaceResultWithDeferredAddRef::doAddRef<Steinberg::Vst::IEditController>(void*) */

void __cdecl
juce::InterfaceResultWithDeferredAddRef::doAddRef<Steinberg::Vst::IEditController>(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001b5273. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}


