// Function : release
// Namespace: Steinberg:FObject
// Entry    : 00178300
// Prototype: int release(FObject * this)
// Body     : 00178300 - 00178321


/* Steinberg::FObject::release() */

int __thiscall Steinberg::FObject::release(FObject *this)

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


