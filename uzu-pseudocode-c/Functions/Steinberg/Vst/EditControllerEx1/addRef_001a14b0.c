// Function : addRef
// Namespace: Steinberg:Vst:EditControllerEx1
// Entry    : 001a14b0
// Prototype: undefined4 addRef(EditControllerEx1 * this)
// Body     : 001a14b0 - 001a14b8


/* Steinberg::Vst::EditControllerEx1::addRef() */

undefined4 __thiscall Steinberg::Vst::EditControllerEx1::addRef(EditControllerEx1 *this)

{
  LOCK();
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  UNLOCK();
  return *(undefined4 *)(this + 8);
}


