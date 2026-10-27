// Function : text16
// Namespace: Steinberg:String
// Entry    : 0019e4d0
// Prototype: undefined2 * text16(String * this)
// Body     : 0019e4d0 - 0019e51f


/* Steinberg::String::text16() const */

undefined2 * __thiscall Steinberg::String::text16(String *this)

{
  undefined2 *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(this + 0x10) & 0x40000000;
  if (uVar2 == 0) {
    uVar2 = 0;
    if ((*(char **)(this + 8) != (char *)0x0) &&
       (uVar3 = *(uint *)(this + 0x10) & 0x3fffffff, uVar3 != 0)) {
      _toWideString(this,*(char **)(this + 8),uVar3,0);
      uVar2 = *(uint *)(this + 0x10) & 0x40000000;
    }
  }
  puVar1 = *(undefined2 **)(this + 8);
  if (puVar1 == (undefined2 *)0x0) {
    puVar1 = &kEmptyString16;
  }
  if (uVar2 == 0) {
    puVar1 = &kEmptyString16;
  }
  return puVar1;
}


