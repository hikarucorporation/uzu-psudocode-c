// Function : addRef
// Namespace: Steinberg:Vst:Component
// Entry    : 001a09e0
// Prototype: undefined4 addRef(Component * this)
// Body     : 001a09e0 - 001a09e8


/* non-virtual thunk to Steinberg::Vst::Component::addRef() */

undefined4 __thiscall Steinberg::Vst::Component::addRef(Component *this)

{
  LOCK();
  *(int *)(this + -8) = *(int *)(this + -8) + 1;
  UNLOCK();
  return *(undefined4 *)(this + -8);
}


