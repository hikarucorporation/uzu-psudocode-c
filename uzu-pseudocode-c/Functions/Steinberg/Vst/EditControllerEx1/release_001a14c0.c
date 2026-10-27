// Function : release
// Namespace: Steinberg:Vst:EditControllerEx1
// Entry    : 001a14c0
// Prototype: int release(EditControllerEx1 * this)
// Body     : 001a14c0 - 001a14e1


/* Steinberg::Vst::EditControllerEx1::release() */

int __thiscall Steinberg::Vst::EditControllerEx1::release(EditControllerEx1 *this)

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


