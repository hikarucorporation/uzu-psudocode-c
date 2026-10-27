// Function : toWideString
// Namespace: Steinberg:String
// Entry    : 0017aac0
// Prototype: ulong toWideString(String * this, int param_1)
// Body     : 0017aac0 - 0017aaee


/* Steinberg::String::toWideString(unsigned int) */

ulong __thiscall Steinberg::String::toWideString(String *this,int param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(this + 0x10);
  if ((((uVar1 & 0x40000000) == 0) && (*(char **)(this + 8) != (char *)0x0)) &&
     ((uVar1 & 0x3fffffff) != 0)) {
    uVar2 = _toWideString(this,*(char **)(this + 8),uVar1 & 0x3fffffff,param_1);
    return uVar2;
  }
  *(uint *)(this + 0x10) = uVar1 | 0x40000000;
  return CONCAT71((uint7)(uint3)((uVar1 | 0x40000000) >> 8),1);
}


