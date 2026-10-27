// Function : addRef
// Namespace: Steinberg:StringObject
// Entry    : 0019fd00
// Prototype: undefined4 addRef(StringObject * this)
// Body     : 0019fd00 - 0019fd08


/* non-virtual thunk to Steinberg::StringObject::addRef() */

undefined4 __thiscall Steinberg::StringObject::addRef(StringObject *this)

{
  LOCK();
  *(int *)(this + -0x20) = *(int *)(this + -0x20) + 1;
  UNLOCK();
  return *(undefined4 *)(this + -0x20);
}


