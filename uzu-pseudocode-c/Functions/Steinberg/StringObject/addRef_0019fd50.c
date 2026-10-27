// Function : addRef
// Namespace: Steinberg:StringObject
// Entry    : 0019fd50
// Prototype: undefined4 addRef(StringObject * this)
// Body     : 0019fd50 - 0019fd58


/* non-virtual thunk to Steinberg::StringObject::addRef() */

undefined4 __thiscall Steinberg::StringObject::addRef(StringObject *this)

{
  LOCK();
  *(int *)(this + -0x28) = *(int *)(this + -0x28) + 1;
  UNLOCK();
  return *(undefined4 *)(this + -0x28);
}


