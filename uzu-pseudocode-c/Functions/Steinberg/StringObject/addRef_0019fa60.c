// Function : addRef
// Namespace: Steinberg:StringObject
// Entry    : 0019fa60
// Prototype: undefined4 addRef(StringObject * this)
// Body     : 0019fa60 - 0019fa68


/* Steinberg::StringObject::addRef() */

undefined4 __thiscall Steinberg::StringObject::addRef(StringObject *this)

{
  LOCK();
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  UNLOCK();
  return *(undefined4 *)(this + 8);
}


