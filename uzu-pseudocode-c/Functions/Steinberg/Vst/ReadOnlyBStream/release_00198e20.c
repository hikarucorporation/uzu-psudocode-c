// Function : release
// Namespace: Steinberg:Vst:ReadOnlyBStream
// Entry    : 00198e20
// Prototype: int release(ReadOnlyBStream * this)
// Body     : 00198e20 - 00198e3a


/* Steinberg::Vst::ReadOnlyBStream::release() */

int __thiscall Steinberg::Vst::ReadOnlyBStream::release(ReadOnlyBStream *this)

{
  LOCK();
  *(int *)(this + 8) = *(int *)(this + 8) + -1;
  UNLOCK();
  if (*(int *)(this + 8) == 0) {
    (**(code **)(*(long *)this + 0x40))();
    return 0;
  }
  return *(int *)(this + 8);
}


