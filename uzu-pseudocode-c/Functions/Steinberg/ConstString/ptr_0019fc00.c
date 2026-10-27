// Function : ptr
// Namespace: Steinberg:ConstString
// Entry    : 0019fc00
// Prototype: undefined8 ptr(ConstString * this)
// Body     : 0019fc00 - 0019fc04


/* Steinberg::ConstString::ptr() const */

undefined8 __thiscall Steinberg::ConstString::ptr(ConstString *this)

{
  return *(undefined8 *)(this + 8);
}


