// Function : getChar16
// Namespace: Steinberg:String
// Entry    : 0019fc80
// Prototype: undefined2 getChar16(String * this, uint param_1)
// Body     : 0019fc80 - 0019fce6


/* Steinberg::String::getChar16(unsigned int) const */

undefined2 __thiscall Steinberg::String::getChar16(String *this,uint param_1)

{
  undefined2 uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(this + 0x10);
  if ((((uVar2 & 0x40000000) == 0) && (*(char **)(this + 8) != (char *)0x0)) &&
     ((uVar2 & 0x3fffffff) != 0)) {
    _toWideString(this,*(char **)(this + 8),uVar2 & 0x3fffffff,0);
    uVar2 = *(uint *)(this + 0x10);
  }
  if ((uVar2 & 0x3fffffff) <= param_1) {
    return 0;
  }
  uVar1 = 0;
  if ((*(long *)(this + 8) != 0) && ((uVar2 & 0x40000000) != 0)) {
    uVar1 = *(undefined2 *)(*(long *)(this + 8) + (ulong)param_1 * 2);
  }
  return uVar1;
}


