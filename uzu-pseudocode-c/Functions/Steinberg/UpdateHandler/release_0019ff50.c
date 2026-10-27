// Function : release
// Namespace: Steinberg:UpdateHandler
// Entry    : 0019ff50
// Prototype: int release(UpdateHandler * this)
// Body     : 0019ff50 - 0019ff75


/* non-virtual thunk to Steinberg::UpdateHandler::release() */

int __thiscall Steinberg::UpdateHandler::release(UpdateHandler *this)

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


