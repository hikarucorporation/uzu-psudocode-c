// Function : checkToMultiByte
// Namespace: Steinberg:String
// Entry    : 0017f740
// Prototype: ulong checkToMultiByte(String * this, int param_1)
// Body     : 0017f740 - 0017f75f


/* Steinberg::String::checkToMultiByte(unsigned int) const */

ulong __thiscall Steinberg::String::checkToMultiByte(String *this,int param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(this + 0x10);
  uVar2 = (ulong)uVar1;
  if ((((uVar1 & 0x40000000) == 0) || (*(long *)(this + 8) == 0)) ||
     (uVar2 = (ulong)(uVar1 & 0x3fffffff), (uVar1 & 0x3fffffff) == 0)) {
    return CONCAT71((int7)(uVar2 >> 8),1);
  }
  uVar2 = toMultiByte(this,param_1);
  return uVar2;
}


