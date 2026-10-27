// Function : writeFromInputStream
// Namespace: juce:MemoryOutputStream
// Entry    : 0048d6e0
// Prototype: long writeFromInputStream(MemoryOutputStream * this, long * param_1, ulong param_2)
// Body     : 0048d6e0 - 0048d7ac


/* juce::MemoryOutputStream::writeFromInputStream(juce::InputStream&, long long) */

long __thiscall
juce::MemoryOutputStream::writeFromInputStream(MemoryOutputStream *this,long *param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  bool bVar7;
  undefined1 auStack_2038 [8200];
  
  lVar2 = (**(code **)(*param_1 + 0x10))(param_1);
  lVar3 = (**(code **)(*param_1 + 0xb0))(param_1);
  uVar5 = lVar2 - lVar3;
  if (uVar5 != 0 && lVar3 <= lVar2) {
    uVar4 = param_2;
    if ((long)uVar5 < (long)param_2) {
      uVar4 = uVar5;
    }
    bVar7 = (long)param_2 < 0;
    param_2 = uVar4;
    if (bVar7) {
      param_2 = uVar5;
    }
    if (*(MemoryOutputStream **)(this + 0x10) != (MemoryOutputStream *)0x0) {
      preallocate(*(MemoryOutputStream **)(this + 0x10),*(long *)(this + 0x30) + param_2);
    }
  }
  uVar5 = 0x7fffffffffffffff;
  if (param_2 < 0x7fffffffffffffff) {
    uVar5 = param_2;
  }
  lVar2 = 0;
  if (uVar5 != 0) {
    do {
      uVar4 = 0x2000;
      if (uVar5 < 0x2000) {
        uVar4 = uVar5 & 0xffffffff;
      }
      uVar1 = (**(code **)(*param_1 + 0x20))(param_1,auStack_2038,uVar4);
      if ((int)uVar1 < 1) {
        return lVar2;
      }
      uVar4 = (ulong)uVar1;
      (**(code **)(*(long *)this + 0x28))(this,auStack_2038,uVar4);
      lVar2 = lVar2 + uVar4;
      uVar6 = uVar5 - uVar4;
      bVar7 = (long)uVar4 <= (long)uVar5;
      uVar5 = uVar6;
    } while (uVar6 != 0 && bVar7);
  }
  return lVar2;
}


