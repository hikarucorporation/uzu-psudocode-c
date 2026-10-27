// Function : doAddRef<Steinberg::IPluginFactory>
// Namespace: juce:InterfaceResultWithDeferredAddRef
// Entry    : 001a5d90
// Prototype: void doAddRef<Steinberg::IPluginFactory>(long * param_1)
// Body     : 001a5d90 - 001a5d95


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* void juce::InterfaceResultWithDeferredAddRef::doAddRef<Steinberg::IPluginFactory>(void*) */

void __cdecl
juce::InterfaceResultWithDeferredAddRef::doAddRef<Steinberg::IPluginFactory>(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001a5d93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}


