// Function : addRef
// Namespace: Steinberg:UpdateHandler
// Entry    : 0019ff90
// Prototype: undefined4 addRef(UpdateHandler * this)
// Body     : 0019ff90 - 0019ff98


/* non-virtual thunk to Steinberg::UpdateHandler::addRef() */

undefined4 __thiscall Steinberg::UpdateHandler::addRef(UpdateHandler *this)

{
  LOCK();
  *(int *)(this + -0x10) = *(int *)(this + -0x10) + 1;
  UNLOCK();
  return *(undefined4 *)(this + -0x10);
}


