// Function : getChar16
// Namespace: Steinberg:ConstString
// Entry    : 001a2200
// Prototype: undefined2 getChar16(ConstString * this, uint param_1)
// Body     : 001a2200 - 001a222a


/* Steinberg::ConstString::getChar16(unsigned int) const */

undefined2 __thiscall Steinberg::ConstString::getChar16(ConstString *this,uint param_1)

{
  undefined2 uVar1;
  
  if ((*(uint *)(this + 0x10) & 0x3fffffff) <= param_1) {
    return 0;
  }
  uVar1 = 0;
  if ((*(long *)(this + 8) != 0) && ((*(uint *)(this + 0x10) & 0x40000000) != 0)) {
    uVar1 = *(undefined2 *)(*(long *)(this + 8) + (ulong)param_1 * 2);
  }
  return uVar1;
}


