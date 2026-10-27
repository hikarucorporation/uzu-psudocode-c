// Function : addRef
// Namespace: Steinberg:Vst:Component
// Entry    : 001a0a80
// Prototype: undefined4 addRef(Component * this)
// Body     : 001a0a80 - 001a0a88


/* non-virtual thunk to Steinberg::Vst::Component::addRef() */

undefined4 __thiscall Steinberg::Vst::Component::addRef(Component *this)

{
  LOCK();
  *(int *)(this + -0x10) = *(int *)(this + -0x10) + 1;
  UNLOCK();
  return *(undefined4 *)(this + -0x10);
}


