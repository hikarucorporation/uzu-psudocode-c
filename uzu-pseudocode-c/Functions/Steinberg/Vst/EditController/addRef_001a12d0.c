// Function : addRef
// Namespace: Steinberg:Vst:EditController
// Entry    : 001a12d0
// Prototype: undefined4 addRef(EditController * this)
// Body     : 001a12d0 - 001a12d8


/* non-virtual thunk to Steinberg::Vst::EditController::addRef() */

undefined4 __thiscall Steinberg::Vst::EditController::addRef(EditController *this)

{
  LOCK();
  *(int *)(this + -0x28) = *(int *)(this + -0x28) + 1;
  UNLOCK();
  return *(undefined4 *)(this + -0x28);
}


