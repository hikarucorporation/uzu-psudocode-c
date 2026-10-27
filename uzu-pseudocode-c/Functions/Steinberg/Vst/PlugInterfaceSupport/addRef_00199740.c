// Function : addRef
// Namespace: Steinberg:Vst:PlugInterfaceSupport
// Entry    : 00199740
// Prototype: undefined4 addRef(PlugInterfaceSupport * this)
// Body     : 00199740 - 00199748


/* Steinberg::Vst::PlugInterfaceSupport::addRef() */

undefined4 __thiscall Steinberg::Vst::PlugInterfaceSupport::addRef(PlugInterfaceSupport *this)

{
  LOCK();
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  UNLOCK();
  return *(undefined4 *)(this + 8);
}


