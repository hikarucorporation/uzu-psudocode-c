// Function : writeFromInputStream
// Namespace: juce:OutputStream
// Entry    : 0048d500
// Prototype: long writeFromInputStream(OutputStream * this, long * param_1, ulong param_2)
// Body     : 0048d500 - 0048d591


/* juce::OutputStream::writeFromInputStream(juce::InputStream&, long long) */

long __thiscall
juce::OutputStream::writeFromInputStream(OutputStream *this,long *param_1,ulong param_2)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auStack_2038 [8200];
  
  uVar4 = 0x7fffffffffffffff;
  if (param_2 < 0x7fffffffffffffff) {
    uVar4 = param_2;
  }
  if (uVar4 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    do {
      uVar3 = 0x2000;
      if (uVar4 < 0x2000) {
        uVar3 = uVar4 & 0xffffffff;
      }
      uVar2 = (**(code **)(*param_1 + 0x20))(param_1,auStack_2038,uVar3);
      if ((int)uVar2 < 1) {
        return lVar6;
      }
      uVar3 = (ulong)uVar2;
      (**(code **)(*(long *)this + 0x28))(this,auStack_2038,uVar3);
      lVar6 = lVar6 + uVar3;
      uVar5 = uVar4 - uVar3;
      bVar1 = (long)uVar3 <= (long)uVar4;
      uVar4 = uVar5;
    } while (uVar5 != 0 && bVar1);
  }
  return lVar6;
}


