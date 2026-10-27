// Function : addRef
// Namespace: Steinberg:Vst:BufferStream
// Entry    : 00199030
// Prototype: undefined4 addRef(BufferStream * this)
// Body     : 00199030 - 00199038


/* Steinberg::Vst::BufferStream::addRef() */

undefined4 __thiscall Steinberg::Vst::BufferStream::addRef(BufferStream *this)

{
  LOCK();
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  UNLOCK();
  return *(undefined4 *)(this + 8);
}


