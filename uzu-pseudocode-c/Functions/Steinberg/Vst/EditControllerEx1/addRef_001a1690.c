// Function : addRef
// Namespace: Steinberg:Vst:EditControllerEx1
// Entry    : 001a1690
// Prototype: undefined4 addRef(EditControllerEx1 * this)
// Body     : 001a1690 - 001a1698


/* non-virtual thunk to Steinberg::Vst::EditControllerEx1::addRef() */

undefined4 __thiscall Steinberg::Vst::EditControllerEx1::addRef(EditControllerEx1 *this)

{
  LOCK();
  *(int *)(this + -8) = *(int *)(this + -8) + 1;
  UNLOCK();
  return *(undefined4 *)(this + -8);
}


