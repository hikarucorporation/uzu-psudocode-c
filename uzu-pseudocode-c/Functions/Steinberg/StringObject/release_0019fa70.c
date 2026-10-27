// Function : release
// Namespace: Steinberg:StringObject
// Entry    : 0019fa70
// Prototype: int release(StringObject * this)
// Body     : 0019fa70 - 0019fa91


/* Steinberg::StringObject::release() */

int __thiscall Steinberg::StringObject::release(StringObject *this)

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


