// Function : length
// Namespace: Steinberg:ConstString
// Entry    : 0019e2d0
// Prototype: uint length(ConstString * this)
// Body     : 0019e2d0 - 0019e2d8


/* Steinberg::ConstString::length() const */

uint __thiscall Steinberg::ConstString::length(ConstString *this)

{
  return *(uint *)(this + 0x10) & 0x3fffffff;
}


