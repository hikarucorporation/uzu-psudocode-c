// Function : text8
// Namespace: Steinberg:String
// Entry    : 0019e3a0
// Prototype: undefined * text8(String * this)
// Body     : 0019e3a0 - 0019e3fa


/* Steinberg::String::text8() const */

undefined * __thiscall Steinberg::String::text8(String *this)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = *(undefined **)(this + 8);
  if ((*(uint *)(this + 0x10) & 0x40000000) == 0) {
    puVar2 = &DAT_005dae18;
    if (puVar1 != (undefined *)0x0) {
      puVar2 = puVar1;
    }
  }
  else {
    if (puVar1 == (undefined *)0x0) {
      return &DAT_005dae18;
    }
    if ((*(uint *)(this + 0x10) & 0x3fffffff) == 0) {
      return &DAT_005dae18;
    }
    toMultiByte(this,0);
    puVar2 = *(undefined **)(this + 8);
    if (puVar2 == (undefined *)0x0) {
      puVar2 = &DAT_005dae18;
    }
    if (((byte)this[0x13] & 0x40) != 0) {
      return &DAT_005dae18;
    }
  }
  return puVar2;
}


