// Function : put
// Namespace: Steinberg:Buffer
// Entry    : 00176c70
// Prototype: ulong put(Buffer * this, undefined1 param_1)
// Body     : 00176c70 - 00176ccc


/* Steinberg::Buffer::put(char) */

ulong __thiscall Steinberg::Buffer::put(Buffer *this,undefined1 param_1)

{
  bool bVar1;
  uint uVar2;
  ulong unaff_RBP;
  uint uVar3;
  
  uVar3 = *(uint *)(this + 0x14);
  uVar2 = uVar3 + 1;
  if (*(uint *)(this + 0x10) < uVar2) {
    uVar2 = *(uint *)(this + 0x18);
    if (uVar2 == 0) {
      *(undefined4 *)(this + 0x18) = 0x1000;
      uVar2 = 0x1000;
    }
    unaff_RBP = 0;
    bVar1 = setSize(this,(uVar3 + uVar2) - (uVar3 + uVar2) % uVar2);
    if (!bVar1) goto LAB_00176cc6;
    uVar3 = *(uint *)(this + 0x14);
    uVar2 = uVar3 + 1;
  }
  *(uint *)(this + 0x14) = uVar2;
  *(undefined1 *)(*(long *)(this + 8) + (ulong)uVar3) = param_1;
  unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
LAB_00176cc6:
  return unaff_RBP & 0xffffffff;
}


