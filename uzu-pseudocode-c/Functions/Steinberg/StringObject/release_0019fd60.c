// Function : release
// Namespace: Steinberg:StringObject
// Entry    : 0019fd60
// Prototype: int release(StringObject * this)
// Body     : 0019fd60 - 0019fd85


/* non-virtual thunk to Steinberg::StringObject::release() */

int __thiscall Steinberg::StringObject::release(StringObject *this)

{
  LOCK();
  *(int *)(this + -0x28) = *(int *)(this + -0x28) + -1;
  UNLOCK();
  if (*(int *)(this + -0x28) == 0) {
    *(undefined4 *)(this + -0x28) = 0xfffffc18;
    (**(code **)(*(long *)(this + -0x30) + 0x28))();
    return 0;
  }
  return *(int *)(this + -0x28);
}


