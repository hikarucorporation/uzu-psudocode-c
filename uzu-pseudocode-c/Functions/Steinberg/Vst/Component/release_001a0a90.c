// Function : release
// Namespace: Steinberg:Vst:Component
// Entry    : 001a0a90
// Prototype: int release(Component * this)
// Body     : 001a0a90 - 001a0ab5


/* non-virtual thunk to Steinberg::Vst::Component::release() */

int __thiscall Steinberg::Vst::Component::release(Component *this)

{
  LOCK();
  *(int *)(this + -0x10) = *(int *)(this + -0x10) + -1;
  UNLOCK();
  if (*(int *)(this + -0x10) == 0) {
    *(undefined4 *)(this + -0x10) = 0xfffffc18;
    (**(code **)(*(long *)(this + -0x18) + 0x28))();
    return 0;
  }
  return *(int *)(this + -0x10);
}


