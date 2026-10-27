// Function : swapContent
// Namespace: Steinberg:String
// Entry    : 00183000
// Prototype: undefined swapContent(String * this, long param_1)
// Body     : 00183000 - 0018304d


/* Steinberg::String::swapContent(Steinberg::String&) */

void __thiscall Steinberg::String::swapContent(String *this,long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(uint *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(this + 8);
  uVar2 = *(uint *)(this + 0x10);
  *(uint *)(param_1 + 0x10) = uVar1 & 0xc0000000 | uVar2 & 0x3fffffff;
  *(uint *)(param_1 + 0x10) =
       uVar1 & 0x80000000 | uVar2 & 0x3fffffff | *(uint *)(this + 0x10) & 0x40000000;
  *(undefined8 *)(this + 8) = uVar3;
  *(uint *)(this + 0x10) = uVar1 & 0x7fffffff | *(uint *)(this + 0x10) & 0x80000000;
  return;
}


