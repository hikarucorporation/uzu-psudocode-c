// Function : release
// Namespace: Steinberg:Vst:ComponentBase
// Entry    : 001a0d50
// Prototype: int release(ComponentBase * this)
// Body     : 001a0d50 - 001a0d75


/* non-virtual thunk to Steinberg::Vst::ComponentBase::release() */

int __thiscall Steinberg::Vst::ComponentBase::release(ComponentBase *this)

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


