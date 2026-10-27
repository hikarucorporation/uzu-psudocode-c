// Function : getUnitCount
// Namespace: Steinberg:Vst:EditControllerEx1
// Entry    : 001a1a60
// Prototype: ulong getUnitCount(EditControllerEx1 * this)
// Body     : 001a1a60 - 001a1a6c


/* non-virtual thunk to Steinberg::Vst::EditControllerEx1::getUnitCount() */

ulong __thiscall Steinberg::Vst::EditControllerEx1::getUnitCount(EditControllerEx1 *this)

{
  return (ulong)(*(long *)(this + 0x10) - *(long *)(this + 8)) >> 3;
}


