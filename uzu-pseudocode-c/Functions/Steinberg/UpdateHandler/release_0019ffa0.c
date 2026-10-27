// Function : release
// Namespace: Steinberg:UpdateHandler
// Entry    : 0019ffa0
// Prototype: int release(UpdateHandler * this)
// Body     : 0019ffa0 - 0019ffc9


/* non-virtual thunk to Steinberg::UpdateHandler::release() */

int __thiscall Steinberg::UpdateHandler::release(UpdateHandler *this)

{
  LOCK();
  *(int *)(this + -0x10) = *(int *)(this + -0x10) + -1;
  UNLOCK();
  if (*(int *)(this + -0x10) == 0) {
    *(undefined4 *)(this + -0x10) = 0xfffffc18;
    (**(code **)(*(long *)(this + -0x18) + 0x28))(this + -0x18);
    return 0;
  }
  return *(int *)(this + -0x10);
}


