// Function : doAddRef<Steinberg::FObject>
// Namespace: juce:InterfaceResultWithDeferredAddRef
// Entry    : 001b5250
// Prototype: void doAddRef<Steinberg::FObject>(long * param_1)
// Body     : 001b5250 - 001b5255


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* void juce::InterfaceResultWithDeferredAddRef::doAddRef<Steinberg::FObject>(void*) */

void __cdecl juce::InterfaceResultWithDeferredAddRef::doAddRef<Steinberg::FObject>(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001b5253. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}


