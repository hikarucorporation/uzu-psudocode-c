// Function : release
// Namespace: Steinberg:Vst:BufferStream
// Entry    : 00199040
// Prototype: int release(BufferStream * this)
// Body     : 00199040 - 0019905a


/* Steinberg::Vst::BufferStream::release() */

int __thiscall Steinberg::Vst::BufferStream::release(BufferStream *this)

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


