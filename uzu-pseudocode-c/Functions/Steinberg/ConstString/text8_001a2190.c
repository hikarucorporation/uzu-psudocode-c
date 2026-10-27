// Function : text8
// Namespace: Steinberg:ConstString
// Entry    : 001a2190
// Prototype: undefined * text8(ConstString * this)
// Body     : 001a2190 - 001a21aa


/* Steinberg::ConstString::text8() const */

undefined * __thiscall Steinberg::ConstString::text8(ConstString *this)

{
  undefined *puVar1;
  
  puVar1 = *(undefined **)(this + 8);
  if (puVar1 == (undefined *)0x0) {
    puVar1 = &DAT_005dae18;
  }
  if (((byte)this[0x13] & 0x40) != 0) {
    puVar1 = &DAT_005dae18;
  }
  return puVar1;
}


