// Function : release
// Namespace: Steinberg:Vst:EditController
// Entry    : 001a13b0
// Prototype: int release(EditController * this)
// Body     : 001a13b0 - 001a13d9


/* non-virtual thunk to Steinberg::Vst::EditController::release() */

int __thiscall Steinberg::Vst::EditController::release(EditController *this)

{
  LOCK();
  *(int *)(this + -0x30) = *(int *)(this + -0x30) + -1;
  UNLOCK();
  if (*(int *)(this + -0x30) == 0) {
    *(undefined4 *)(this + -0x30) = 0xfffffc18;
    (**(code **)(*(long *)(this + -0x38) + 0x28))(this + -0x38);
    return 0;
  }
  return *(int *)(this + -0x30);
}


