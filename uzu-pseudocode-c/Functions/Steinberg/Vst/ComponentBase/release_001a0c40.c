// Function : release
// Namespace: Steinberg:Vst:ComponentBase
// Entry    : 001a0c40
// Prototype: int release(ComponentBase * this)
// Body     : 001a0c40 - 001a0c61


/* Steinberg::Vst::ComponentBase::release() */

int __thiscall Steinberg::Vst::ComponentBase::release(ComponentBase *this)

{
  LOCK();
  *(int *)(this + 8) = *(int *)(this + 8) + -1;
  UNLOCK();
  if (*(int *)(this + 8) == 0) {
    *(undefined4 *)(this + 8) = 0xfffffc18;
    (**(code **)(*(long *)this + 0x28))();
    return 0;
  }
  return *(int *)(this + 8);
}


