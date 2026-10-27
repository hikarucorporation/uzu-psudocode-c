// Function : addRef
// Namespace: Steinberg:Vst:ComponentBase
// Entry    : 001a0d40
// Prototype: undefined4 addRef(ComponentBase * this)
// Body     : 001a0d40 - 001a0d48


/* non-virtual thunk to Steinberg::Vst::ComponentBase::addRef() */

undefined4 __thiscall Steinberg::Vst::ComponentBase::addRef(ComponentBase *this)

{
  LOCK();
  *(int *)(this + -0x10) = *(int *)(this + -0x10) + 1;
  UNLOCK();
  return *(undefined4 *)(this + -0x10);
}


