// Function : getUnitCount
// Namespace: Steinberg:Vst:EditControllerEx1
// Entry    : 001a1590
// Prototype: ulong getUnitCount(EditControllerEx1 * this)
// Body     : 001a1590 - 001a15a2


/* Steinberg::Vst::EditControllerEx1::getUnitCount() */

ulong __thiscall Steinberg::Vst::EditControllerEx1::getUnitCount(EditControllerEx1 *this)

{
  return (ulong)(*(long *)(this + 0x98) - *(long *)(this + 0x90)) >> 3;
}


