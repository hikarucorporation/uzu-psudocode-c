// Function : addRef
// Namespace: Steinberg:Vst:ComponentBase
// Entry    : 001a0cf0
// Prototype: undefined4 addRef(ComponentBase * this)
// Body     : 001a0cf0 - 001a0cf8


/* non-virtual thunk to Steinberg::Vst::ComponentBase::addRef() */

undefined4 __thiscall Steinberg::Vst::ComponentBase::addRef(ComponentBase *this)

{
  LOCK();
  *(int *)(this + -8) = *(int *)(this + -8) + 1;
  UNLOCK();
  return *(undefined4 *)(this + -8);
}


