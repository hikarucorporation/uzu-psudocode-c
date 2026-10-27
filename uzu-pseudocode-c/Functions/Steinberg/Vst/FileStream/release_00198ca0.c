// Function : release
// Namespace: Steinberg:Vst:FileStream
// Entry    : 00198ca0
// Prototype: int release(FileStream * this)
// Body     : 00198ca0 - 00198cba


/* Steinberg::Vst::FileStream::release() */

int __thiscall Steinberg::Vst::FileStream::release(FileStream *this)

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


