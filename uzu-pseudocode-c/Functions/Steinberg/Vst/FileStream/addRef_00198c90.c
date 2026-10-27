// Function : addRef
// Namespace: Steinberg:Vst:FileStream
// Entry    : 00198c90
// Prototype: undefined4 addRef(FileStream * this)
// Body     : 00198c90 - 00198c98


/* Steinberg::Vst::FileStream::addRef() */

undefined4 __thiscall Steinberg::Vst::FileStream::addRef(FileStream *this)

{
  LOCK();
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  UNLOCK();
  return *(undefined4 *)(this + 8);
}


