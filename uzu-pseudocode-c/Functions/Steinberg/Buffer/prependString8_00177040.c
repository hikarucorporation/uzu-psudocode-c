// Function : prependString8
// Namespace: Steinberg:Buffer
// Entry    : 00177040
// Prototype: undefined8 prependString8(Buffer * this, undefined1 param_1)
// Body     : 00177040 - 001770b3


/* Steinberg::Buffer::prependString8(char) */

undefined8 __thiscall Steinberg::Buffer::prependString8(Buffer *this,undefined1 param_1)

{
  undefined1 *puVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *(uint *)(this + 0x14);
  if (*(uint *)(this + 0x10) < uVar4 + 1) {
    uVar5 = *(uint *)(this + 0x18);
    if (uVar5 == 0) {
      *(undefined4 *)(this + 0x18) = 0x1000;
      uVar5 = 0x1000;
    }
    bVar2 = setSize(this,(uVar4 + uVar5) - (uVar4 + uVar5) % uVar5);
    if (!bVar2) goto LAB_001770a4;
    uVar4 = *(uint *)(this + 0x14);
  }
  if (uVar4 == 0) {
    iVar3 = 1;
  }
  else {
    memmove((void *)((long)*(void **)(this + 8) + 1),*(void **)(this + 8),(ulong)uVar4);
    iVar3 = *(int *)(this + 0x14) + 1;
  }
  *(int *)(this + 0x14) = iVar3;
LAB_001770a4:
  puVar1 = *(undefined1 **)(this + 8);
  *puVar1 = param_1;
  return CONCAT71((int7)((ulong)puVar1 >> 8),1);
}


