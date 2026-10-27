// Function : getChar8
// Namespace: Steinberg:String
// Entry    : 0019fc10
// Prototype: undefined1 getChar8(String * this, uint param_1)
// Body     : 0019fc10 - 0019fc72


/* Steinberg::String::getChar8(unsigned int) const */

undefined1 __thiscall Steinberg::String::getChar8(String *this,uint param_1)

{
  undefined1 uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(this + 0x10);
  if ((((uVar2 & 0x40000000) != 0) && (*(long *)(this + 8) != 0)) && ((uVar2 & 0x3fffffff) != 0)) {
    toMultiByte(this,0);
    uVar2 = *(uint *)(this + 0x10);
  }
  if ((uVar2 & 0x3fffffff) <= param_1) {
    return 0;
  }
  uVar1 = 0;
  if ((*(long *)(this + 8) != 0) && ((uVar2 & 0x40000000) == 0)) {
    uVar1 = *(undefined1 *)(*(long *)(this + 8) + (ulong)param_1);
  }
  return uVar1;
}


