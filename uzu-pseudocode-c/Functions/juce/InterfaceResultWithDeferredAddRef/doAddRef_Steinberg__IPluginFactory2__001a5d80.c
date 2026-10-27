// Function : doAddRef<Steinberg::IPluginFactory2>
// Namespace: juce:InterfaceResultWithDeferredAddRef
// Entry    : 001a5d80
// Prototype: void doAddRef<Steinberg::IPluginFactory2>(long * param_1)
// Body     : 001a5d80 - 001a5d85


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* void juce::InterfaceResultWithDeferredAddRef::doAddRef<Steinberg::IPluginFactory2>(void*) */

void __cdecl
juce::InterfaceResultWithDeferredAddRef::doAddRef<Steinberg::IPluginFactory2>(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001a5d83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}


