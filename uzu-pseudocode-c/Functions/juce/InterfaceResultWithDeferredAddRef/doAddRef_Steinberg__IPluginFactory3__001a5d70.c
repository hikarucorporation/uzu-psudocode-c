// Function : doAddRef<Steinberg::IPluginFactory3>
// Namespace: juce:InterfaceResultWithDeferredAddRef
// Entry    : 001a5d70
// Prototype: void doAddRef<Steinberg::IPluginFactory3>(long * param_1)
// Body     : 001a5d70 - 001a5d75


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* void juce::InterfaceResultWithDeferredAddRef::doAddRef<Steinberg::IPluginFactory3>(void*) */

void __cdecl
juce::InterfaceResultWithDeferredAddRef::doAddRef<Steinberg::IPluginFactory3>(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001a5d73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}


