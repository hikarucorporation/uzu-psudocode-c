// Function : release
// Namespace: Steinberg:Vst:Component
// Entry    : 001a0b30
// Prototype: int release(Component * this)
// Body     : 001a0b30 - 001a0b59


/* non-virtual thunk to Steinberg::Vst::Component::release() */

int __thiscall Steinberg::Vst::Component::release(Component *this)

{
  LOCK();
  *(int *)(this + -0x28) = *(int *)(this + -0x28) + -1;
  UNLOCK();
  if (*(int *)(this + -0x28) == 0) {
    *(undefined4 *)(this + -0x28) = 0xfffffc18;
    (**(code **)(*(long *)(this + -0x30) + 0x28))(this + -0x30);
    return 0;
  }
  return *(int *)(this + -0x28);
}


