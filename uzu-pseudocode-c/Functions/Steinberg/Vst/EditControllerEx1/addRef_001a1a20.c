// Function : addRef
// Namespace: Steinberg:Vst:EditControllerEx1
// Entry    : 001a1a20
// Prototype: undefined4 addRef(EditControllerEx1 * this)
// Body     : 001a1a20 - 001a1a28


/* non-virtual thunk to Steinberg::Vst::EditControllerEx1::addRef() */

undefined4 __thiscall Steinberg::Vst::EditControllerEx1::addRef(EditControllerEx1 *this)

{
  LOCK();
  *(int *)(this + -0x80) = *(int *)(this + -0x80) + 1;
  UNLOCK();
  return *(undefined4 *)(this + -0x80);
}


