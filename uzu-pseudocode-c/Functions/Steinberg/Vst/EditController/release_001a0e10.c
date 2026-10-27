// Function : release
// Namespace: Steinberg:Vst:EditController
// Entry    : 001a0e10
// Prototype: int release(EditController * this)
// Body     : 001a0e10 - 001a0e31


/* Steinberg::Vst::EditController::release() */

int __thiscall Steinberg::Vst::EditController::release(EditController *this)

{
  LOCK();
  *(int *)(this + 8) = *(int *)(this + 8) + -1;
  UNLOCK();
  if (*(int *)(this + 8) == 0) {
    *(undefined4 *)(this + 8) = 0xfffffc18;
    (**(code **)(*(long *)this + 0x28))();
    return 0;
  }
  return *(int *)(this + 8);
}


