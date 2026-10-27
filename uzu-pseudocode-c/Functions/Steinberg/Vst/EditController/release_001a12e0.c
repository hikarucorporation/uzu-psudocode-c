// Function : release
// Namespace: Steinberg:Vst:EditController
// Entry    : 001a12e0
// Prototype: int release(EditController * this)
// Body     : 001a12e0 - 001a1305


/* non-virtual thunk to Steinberg::Vst::EditController::release() */

int __thiscall Steinberg::Vst::EditController::release(EditController *this)

{
  LOCK();
  *(int *)(this + -0x28) = *(int *)(this + -0x28) + -1;
  UNLOCK();
  if (*(int *)(this + -0x28) == 0) {
    *(undefined4 *)(this + -0x28) = 0xfffffc18;
    (**(code **)(*(long *)(this + -0x30) + 0x28))();
    return 0;
  }
  return *(int *)(this + -0x28);
}


