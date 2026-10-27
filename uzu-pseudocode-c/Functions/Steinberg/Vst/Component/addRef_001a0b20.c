// Function : addRef
// Namespace: Steinberg:Vst:Component
// Entry    : 001a0b20
// Prototype: undefined4 addRef(Component * this)
// Body     : 001a0b20 - 001a0b28


/* non-virtual thunk to Steinberg::Vst::Component::addRef() */

undefined4 __thiscall Steinberg::Vst::Component::addRef(Component *this)

{
  LOCK();
  *(int *)(this + -0x28) = *(int *)(this + -0x28) + 1;
  UNLOCK();
  return *(undefined4 *)(this + -0x28);
}


