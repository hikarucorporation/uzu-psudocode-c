// Function : prependString16
// Namespace: Steinberg:Buffer
// Entry    : 001770c0
// Prototype: undefined8 prependString16(Buffer * this, undefined2 param_1)
// Body     : 001770c0 - 00177135


/* Steinberg::Buffer::prependString16(char16_t) */

undefined8 __thiscall Steinberg::Buffer::prependString16(Buffer *this,undefined2 param_1)

{
  undefined2 *puVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(this + 0x14);
  if (*(uint *)(this + 0x10) < uVar5 + 2) {
    uVar4 = *(uint *)(this + 0x18);
    if (uVar4 == 0) {
      *(undefined4 *)(this + 0x18) = 0x1000;
      uVar4 = 0x1000;
    }
    uVar5 = uVar5 + uVar4 + 1;
    bVar2 = setSize(this,uVar5 - uVar5 % uVar4);
    if (!bVar2) goto LAB_00177126;
    uVar5 = *(uint *)(this + 0x14);
  }
  if (uVar5 == 0) {
    iVar3 = 2;
  }
  else {
    memmove((void *)((long)*(void **)(this + 8) + 2),*(void **)(this + 8),(ulong)uVar5);
    iVar3 = *(int *)(this + 0x14) + 2;
  }
  *(int *)(this + 0x14) = iVar3;
LAB_00177126:
  puVar1 = *(undefined2 **)(this + 8);
  *puVar1 = param_1;
  return CONCAT71((int7)((ulong)puVar1 >> 8),1);
}


