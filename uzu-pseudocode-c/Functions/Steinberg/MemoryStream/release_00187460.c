// Function : release
// Namespace: Steinberg:MemoryStream
// Entry    : 00187460
// Prototype: int release(MemoryStream * this)
// Body     : 00187460 - 0018747a


/* Steinberg::MemoryStream::release() */

int __thiscall Steinberg::MemoryStream::release(MemoryStream *this)

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


