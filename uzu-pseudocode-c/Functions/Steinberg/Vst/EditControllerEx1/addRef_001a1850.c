// Function : addRef
// Namespace: Steinberg:Vst:EditControllerEx1
// Entry    : 001a1850
// Prototype: undefined4 addRef(EditControllerEx1 * this)
// Body     : 001a1850 - 001a1858


/* non-virtual thunk to Steinberg::Vst::EditControllerEx1::addRef() */

undefined4 __thiscall Steinberg::Vst::EditControllerEx1::addRef(EditControllerEx1 *this)

{
  LOCK();
  *(int *)(this + -0x28) = *(int *)(this + -0x28) + 1;
  UNLOCK();
  return *(undefined4 *)(this + -0x28);
}


