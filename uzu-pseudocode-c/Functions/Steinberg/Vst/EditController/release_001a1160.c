// Function : release
// Namespace: Steinberg:Vst:EditController
// Entry    : 001a1160
// Prototype: int release(EditController * this)
// Body     : 001a1160 - 001a1185


/* non-virtual thunk to Steinberg::Vst::EditController::release() */

int __thiscall Steinberg::Vst::EditController::release(EditController *this)

{
  LOCK();
  *(int *)(this + -8) = *(int *)(this + -8) + -1;
  UNLOCK();
  if (*(int *)(this + -8) == 0) {
    *(undefined4 *)(this + -8) = 0xfffffc18;
    (**(code **)(*(long *)(this + -0x10) + 0x28))();
    return 0;
  }
  return *(int *)(this + -8);
}


