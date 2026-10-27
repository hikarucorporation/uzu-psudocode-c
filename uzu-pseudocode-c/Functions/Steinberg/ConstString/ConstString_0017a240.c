// Function : ConstString
// Namespace: Steinberg:ConstString
// Entry    : 0017a240
// Prototype: undefined ConstString(ConstString * this, long param_1, uint param_2)
// Body     : 0017a240 - 0017a289


/* Steinberg::ConstString::ConstString(char16_t const*, int) */

void __thiscall Steinberg::ConstString::ConstString(ConstString *this,long param_1,uint param_2)

{
  short *psVar1;
  ulong uVar2;
  
  *(undefined ***)this = &PTR__ConstString_00704d88;
  *(long *)(this + 8) = param_1;
  if ((int)param_2 < 0) {
    uVar2 = 0;
    param_2 = 0;
    if (param_1 != 0) {
      do {
        psVar1 = (short *)(param_1 + uVar2);
        uVar2 = uVar2 + 2;
      } while (*psVar1 != 0);
      param_2 = (int)(uVar2 >> 1) - 1;
    }
  }
  *(uint *)(this + 0x10) =
       (*(uint *)(this + 0x10) & 0x80000000) + (param_2 & 0x3fffffff) + 0x40000000;
  return;
}


