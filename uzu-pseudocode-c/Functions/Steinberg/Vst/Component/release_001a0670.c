// Function : release
// Namespace: Steinberg:Vst:Component
// Entry    : 001a0670
// Prototype: int release(Component * this)
// Body     : 001a0670 - 001a0691


/* Steinberg::Vst::Component::release() */

int __thiscall Steinberg::Vst::Component::release(Component *this)

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


