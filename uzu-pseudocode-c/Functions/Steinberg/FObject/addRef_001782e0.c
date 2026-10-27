// Function : addRef
// Namespace: Steinberg:FObject
// Entry    : 001782e0
// Prototype: undefined4 addRef(FObject * this)
// Body     : 001782e0 - 001782e8


/* Steinberg::FObject::addRef() */

undefined4 __thiscall Steinberg::FObject::addRef(FObject *this)

{
  LOCK();
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  UNLOCK();
  return *(undefined4 *)(this + 8);
}


