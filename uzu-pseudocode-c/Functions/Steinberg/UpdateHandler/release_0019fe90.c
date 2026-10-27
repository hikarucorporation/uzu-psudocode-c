// Function : release
// Namespace: Steinberg:UpdateHandler
// Entry    : 0019fe90
// Prototype: int release(UpdateHandler * this)
// Body     : 0019fe90 - 0019feb1


/* Steinberg::UpdateHandler::release() */

int __thiscall Steinberg::UpdateHandler::release(UpdateHandler *this)

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


