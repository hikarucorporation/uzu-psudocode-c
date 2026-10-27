// Function : getChar8
// Namespace: Steinberg:ConstString
// Entry    : 001a21d0
// Prototype: undefined1 getChar8(ConstString * this, uint param_1)
// Body     : 001a21d0 - 001a21f9


/* Steinberg::ConstString::getChar8(unsigned int) const */

undefined1 __thiscall Steinberg::ConstString::getChar8(ConstString *this,uint param_1)

{
  undefined1 uVar1;
  
  if ((*(uint *)(this + 0x10) & 0x3fffffff) <= param_1) {
    return 0;
  }
  uVar1 = 0;
  if ((*(long *)(this + 8) != 0) && ((*(uint *)(this + 0x10) & 0x40000000) == 0)) {
    uVar1 = *(undefined1 *)(*(long *)(this + 8) + (ulong)param_1);
  }
  return uVar1;
}


