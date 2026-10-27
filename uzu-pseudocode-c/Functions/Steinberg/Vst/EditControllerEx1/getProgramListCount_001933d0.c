// Function : getProgramListCount
// Namespace: Steinberg:Vst:EditControllerEx1
// Entry    : 001933d0
// Prototype: ulong getProgramListCount(EditControllerEx1 * this)
// Body     : 001933d0 - 001933dc


/* non-virtual thunk to Steinberg::Vst::EditControllerEx1::getProgramListCount() */

ulong __thiscall Steinberg::Vst::EditControllerEx1::getProgramListCount(EditControllerEx1 *this)

{
  return (ulong)(*(long *)(this + 0x28) - *(long *)(this + 0x20)) >> 3;
}


