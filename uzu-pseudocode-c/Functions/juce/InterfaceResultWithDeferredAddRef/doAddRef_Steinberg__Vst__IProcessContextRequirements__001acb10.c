// Function : doAddRef<Steinberg::Vst::IProcessContextRequirements>
// Namespace: juce:InterfaceResultWithDeferredAddRef
// Entry    : 001acb10
// Prototype: void doAddRef<Steinberg::Vst::IProcessContextRequirements>(long * param_1)
// Body     : 001acb10 - 001acb15


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* void 
   juce::InterfaceResultWithDeferredAddRef::doAddRef<Steinberg::Vst::IProcessContextRequirements>(void*)
    */

void __cdecl
juce::InterfaceResultWithDeferredAddRef::doAddRef<Steinberg::Vst::IProcessContextRequirements>
          (long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001acb13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}


