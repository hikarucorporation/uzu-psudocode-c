// Function : addRef
// Namespace: Steinberg:MemoryStream
// Entry    : 00187450
// Prototype: undefined4 addRef(MemoryStream * this)
// Body     : 00187450 - 00187458


/* Steinberg::MemoryStream::addRef() */

undefined4 __thiscall Steinberg::MemoryStream::addRef(MemoryStream *this)

{
  LOCK();
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  UNLOCK();
  return *(undefined4 *)(this + 8);
}


