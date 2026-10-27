// Function : release
// Namespace: Steinberg:Vst:PlugInterfaceSupport
// Entry    : 00199750
// Prototype: int release(PlugInterfaceSupport * this)
// Body     : 00199750 - 0019976a


/* Steinberg::Vst::PlugInterfaceSupport::release() */

int __thiscall Steinberg::Vst::PlugInterfaceSupport::release(PlugInterfaceSupport *this)

{
  LOCK();
  *(int *)(this + 8) = *(int *)(this + 8) + -1;
  UNLOCK();
  if (*(int *)(this + 8) == 0) {
    (**(code **)(*(long *)this + 0x28))();
    return 0;
  }
  return *(int *)(this + 8);
}


