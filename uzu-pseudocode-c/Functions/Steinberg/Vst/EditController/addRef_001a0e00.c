// Function : addRef
// Namespace: Steinberg:Vst:EditController
// Entry    : 001a0e00
// Prototype: undefined4 addRef(EditController * this)
// Body     : 001a0e00 - 001a0e08


/* Steinberg::Vst::EditController::addRef() */

undefined4 __thiscall Steinberg::Vst::EditController::addRef(EditController *this)

{
  LOCK();
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  UNLOCK();
  return *(undefined4 *)(this + 8);
}


