// Function : addRef
// Namespace: Steinberg:Vst:EditController
// Entry    : 001a1210
// Prototype: undefined4 addRef(EditController * this)
// Body     : 001a1210 - 001a1218


/* non-virtual thunk to Steinberg::Vst::EditController::addRef() */

undefined4 __thiscall Steinberg::Vst::EditController::addRef(EditController *this)

{
  LOCK();
  *(int *)(this + -0x10) = *(int *)(this + -0x10) + 1;
  UNLOCK();
  return *(undefined4 *)(this + -0x10);
}


