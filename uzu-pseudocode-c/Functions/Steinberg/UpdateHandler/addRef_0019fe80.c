// Function : addRef
// Namespace: Steinberg:UpdateHandler
// Entry    : 0019fe80
// Prototype: undefined4 addRef(UpdateHandler * this)
// Body     : 0019fe80 - 0019fe88


/* Steinberg::UpdateHandler::addRef() */

undefined4 __thiscall Steinberg::UpdateHandler::addRef(UpdateHandler *this)

{
  LOCK();
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  UNLOCK();
  return *(undefined4 *)(this + 8);
}


