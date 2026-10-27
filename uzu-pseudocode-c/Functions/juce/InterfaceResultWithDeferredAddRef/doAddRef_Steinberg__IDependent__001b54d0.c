// Function : doAddRef<Steinberg::IDependent>
// Namespace: juce:InterfaceResultWithDeferredAddRef
// Entry    : 001b54d0
// Prototype: void doAddRef<Steinberg::IDependent>(long * param_1)
// Body     : 001b54d0 - 001b54d5


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* void juce::InterfaceResultWithDeferredAddRef::doAddRef<Steinberg::IDependent>(void*) */

void __cdecl juce::InterfaceResultWithDeferredAddRef::doAddRef<Steinberg::IDependent>(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001b54d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}


