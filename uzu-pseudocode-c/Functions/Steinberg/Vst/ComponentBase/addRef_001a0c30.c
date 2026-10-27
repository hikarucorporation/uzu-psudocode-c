// Function : addRef
// Namespace: Steinberg:Vst:ComponentBase
// Entry    : 001a0c30
// Prototype: undefined4 addRef(ComponentBase * this)
// Body     : 001a0c30 - 001a0c38


/* Steinberg::Vst::ComponentBase::addRef() */

undefined4 __thiscall Steinberg::Vst::ComponentBase::addRef(ComponentBase *this)

{
  LOCK();
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  UNLOCK();
  return *(undefined4 *)(this + 8);
}


