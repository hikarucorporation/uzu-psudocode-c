// Function : getProgramListCount
// Namespace: Steinberg:Vst:EditControllerEx1
// Entry    : 001933b0
// Prototype: ulong getProgramListCount(EditControllerEx1 * this)
// Body     : 001933b0 - 001933c2


/* Steinberg::Vst::EditControllerEx1::getProgramListCount() */

ulong __thiscall Steinberg::Vst::EditControllerEx1::getProgramListCount(EditControllerEx1 *this)

{
  return (ulong)(*(long *)(this + 0xb0) - *(long *)(this + 0xa8)) >> 3;
}


