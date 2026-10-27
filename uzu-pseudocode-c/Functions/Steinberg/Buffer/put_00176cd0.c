// Function : put
// Namespace: Steinberg:Buffer
// Entry    : 00176cd0
// Prototype: ulong put(Buffer * this, long * param_1)
// Body     : 00176cd0 - 00176d66


/* Steinberg::Buffer::put(Steinberg::String const&) */

ulong __thiscall Steinberg::Buffer::put(Buffer *this,long *param_1)

{
  bool bVar1;
  int iVar2;
  void *__src;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  __src = (void *)(**(code **)(*param_1 + 0x28))(param_1);
  iVar2 = (**(code **)(*param_1 + 0x10))(param_1);
  if (__src == (void *)0x0) {
    param_1 = (long *)0x0;
  }
  else {
    uVar5 = iVar2 * 2 + 2;
    uVar4 = *(uint *)(this + 0x14);
    if (*(uint *)(this + 0x10) < uVar4 + uVar5) {
      uVar3 = *(uint *)(this + 0x18);
      if (uVar3 == 0) {
        *(undefined4 *)(this + 0x18) = 0x1000;
        uVar3 = 0x1000;
      }
      uVar4 = (uVar4 + uVar5 + uVar3) - 1;
      param_1 = (long *)0x0;
      bVar1 = setSize(this,uVar4 - uVar4 % uVar3);
      if (!bVar1) goto LAB_00176d5a;
      uVar4 = *(uint *)(this + 0x14);
    }
    memcpy((void *)((ulong)uVar4 + *(long *)(this + 8)),__src,(ulong)uVar5);
    *(uint *)(this + 0x14) = *(int *)(this + 0x14) + uVar5;
    param_1 = (long *)CONCAT71((int7)((ulong)param_1 >> 8),1);
  }
LAB_00176d5a:
  return (ulong)param_1 & 0xffffffff;
}


