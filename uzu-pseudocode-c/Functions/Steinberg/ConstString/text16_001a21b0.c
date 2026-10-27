// Function : text16
// Namespace: Steinberg:ConstString
// Entry    : 001a21b0
// Prototype: undefined2 * text16(ConstString * this)
// Body     : 001a21b0 - 001a21ca


/* Steinberg::ConstString::text16() const */

undefined2 * __thiscall Steinberg::ConstString::text16(ConstString *this)

{
  undefined2 *puVar1;
  
  puVar1 = *(undefined2 **)(this + 8);
  if (puVar1 == (undefined2 *)0x0) {
    puVar1 = &kEmptyString16;
  }
  if (((byte)this[0x13] & 0x40) == 0) {
    puVar1 = &kEmptyString16;
  }
  return puVar1;
}


