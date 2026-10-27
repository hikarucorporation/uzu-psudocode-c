// Function : addRef
// Namespace: Steinberg:Vst:ReadOnlyBStream
// Entry    : 00198e10
// Prototype: undefined4 addRef(ReadOnlyBStream * this)
// Body     : 00198e10 - 00198e18


/* Steinberg::Vst::ReadOnlyBStream::addRef() */

undefined4 __thiscall Steinberg::Vst::ReadOnlyBStream::addRef(ReadOnlyBStream *this)

{
  LOCK();
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  UNLOCK();
  return *(undefined4 *)(this + 8);
}


