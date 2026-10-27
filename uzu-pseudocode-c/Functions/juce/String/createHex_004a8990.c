// Function : createHex
// Namespace: juce:String
// Entry    : 004a8990
// Prototype: String * createHex(String * this, uint param_1)
// Body     : 004a8990 - 004a8a31


/* juce::String::createHex(unsigned int) */

String * __thiscall juce::String::createHex(String *this,uint param_1)

{
  bool bVar1;
  long lVar2;
  undefined4 *puVar3;
  long lVar4;
  ulong uVar5;
  size_t sVar6;
  size_t __n;
  char acStack_2c [4];
  
  lVar2 = -4;
  __n = 0;
  do {
    sVar6 = __n;
    lVar4 = lVar2;
    acStack_2c[lVar4 + 6] = "0123456789abcdef"[param_1 & 0xf];
    __n = sVar6 + 1;
    bVar1 = 0xf < param_1;
    lVar2 = lVar4 + -1;
    param_1 = param_1 >> 4;
  } while (bVar1);
  uVar5 = -(lVar4 + -1) & 0xfffffffffffffffc;
  puVar3 = operator_new__(uVar5 + 0x17);
  LOCK();
  *puVar3 = 0;
  UNLOCK();
  *(ulong *)(puVar3 + 2) = uVar5;
  memcpy(puVar3 + 4,acStack_2c + lVar4 + 6,__n);
  *(undefined1 *)((long)puVar3 + sVar6 + 0x11) = 0;
  *(undefined4 **)this = puVar3 + 4;
  return this;
}


