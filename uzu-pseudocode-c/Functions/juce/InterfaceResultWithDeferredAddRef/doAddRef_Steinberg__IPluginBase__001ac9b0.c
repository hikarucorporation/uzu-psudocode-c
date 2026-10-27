// Function : doAddRef<Steinberg::IPluginBase>
// Namespace: juce:InterfaceResultWithDeferredAddRef
// Entry    : 001ac9b0
// Prototype: void doAddRef<Steinberg::IPluginBase>(long * param_1)
// Body     : 001ac9b0 - 001ac9b5


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* void juce::InterfaceResultWithDeferredAddRef::doAddRef<Steinberg::IPluginBase>(void*) */

void __cdecl
juce::InterfaceResultWithDeferredAddRef::doAddRef<Steinberg::IPluginBase>(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001ac9b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}


