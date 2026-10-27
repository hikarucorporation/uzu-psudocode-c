// Function : put
// Namespace: Steinberg:Buffer
// Entry    : 00176b00
// Prototype: ulong put(Buffer * this, undefined2 param_1)
// Body     : 00176b00 - 00176b5f


/* Steinberg::Buffer::put(char16_t) */

ulong __thiscall Steinberg::Buffer::put(Buffer *this,undefined2 param_1)

{
  bool bVar1;
  uint uVar2;
  ulong unaff_RBP;
  uint uVar3;
  
  uVar3 = *(uint *)(this + 0x14);
  if (*(uint *)(this + 0x10) < uVar3 + 2) {
    uVar2 = *(uint *)(this + 0x18);
    if (uVar2 == 0) {
      *(undefined4 *)(this + 0x18) = 0x1000;
      uVar2 = 0x1000;
    }
    uVar3 = uVar3 + uVar2 + 1;
    unaff_RBP = 0;
    bVar1 = setSize(this,uVar3 - uVar3 % uVar2);
    if (!bVar1) goto LAB_00176b59;
    uVar3 = *(uint *)(this + 0x14);
  }
  *(undefined2 *)(*(long *)(this + 8) + (ulong)uVar3) = param_1;
  *(int *)(this + 0x14) = *(int *)(this + 0x14) + 2;
  unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
LAB_00176b59:
  return unaff_RBP & 0xffffffff;
}


