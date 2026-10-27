// Function : release
// Namespace: Steinberg:StringObject
// Entry    : 0019fd10
// Prototype: int release(StringObject * this)
// Body     : 0019fd10 - 0019fd39


/* non-virtual thunk to Steinberg::StringObject::release() */

int __thiscall Steinberg::StringObject::release(StringObject *this)

{
  LOCK();
  *(int *)(this + -0x20) = *(int *)(this + -0x20) + -1;
  UNLOCK();
  if (*(int *)(this + -0x20) == 0) {
    *(undefined4 *)(this + -0x20) = 0xfffffc18;
    (**(code **)(*(long *)(this + -0x28) + 0x28))(this + -0x28);
    return 0;
  }
  return *(int *)(this + -0x20);
}


