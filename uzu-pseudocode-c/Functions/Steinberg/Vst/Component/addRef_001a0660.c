// Function : addRef
// Namespace: Steinberg:Vst:Component
// Entry    : 001a0660
// Prototype: undefined4 addRef(Component * this)
// Body     : 001a0660 - 001a0668


/* Steinberg::Vst::Component::addRef() */

undefined4 __thiscall Steinberg::Vst::Component::addRef(Component *this)

{
  LOCK();
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  UNLOCK();
  return *(undefined4 *)(this + 8);
}


