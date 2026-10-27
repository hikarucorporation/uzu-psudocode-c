// Function : release
// Namespace: Steinberg:Vst:EditControllerEx1
// Entry    : 001a1780
// Prototype: int release(EditControllerEx1 * this)
// Body     : 001a1780 - 001a17a5


/* non-virtual thunk to Steinberg::Vst::EditControllerEx1::release() */

int __thiscall Steinberg::Vst::EditControllerEx1::release(EditControllerEx1 *this)

{
  LOCK();
  *(int *)(this + -0x10) = *(int *)(this + -0x10) + -1;
  UNLOCK();
  if (*(int *)(this + -0x10) == 0) {
    *(undefined4 *)(this + -0x10) = 0xfffffc18;
    (**(code **)(*(long *)(this + -0x18) + 0x28))();
    return 0;
  }
  return *(int *)(this + -0x10);
}


