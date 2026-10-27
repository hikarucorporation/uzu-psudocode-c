// Function : doAddRef<Steinberg::FUnknown>
// Namespace: juce:InterfaceResultWithDeferredAddRef
// Entry    : 001a5da0
// Prototype: void doAddRef<Steinberg::FUnknown>(long * param_1)
// Body     : 001a5da0 - 001a5da5


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* void juce::InterfaceResultWithDeferredAddRef::doAddRef<Steinberg::FUnknown>(void*) */

void __cdecl juce::InterfaceResultWithDeferredAddRef::doAddRef<Steinberg::FUnknown>(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001a5da3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}


