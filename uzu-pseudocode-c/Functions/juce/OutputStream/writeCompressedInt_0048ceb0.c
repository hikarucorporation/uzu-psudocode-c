// Function : writeCompressedInt
// Namespace: juce:OutputStream
// Entry    : 0048ceb0
// Prototype: undefined writeCompressedInt(OutputStream * this, uint param_1)
// Body     : 0048ceb0 - 0048cef3


/* juce::OutputStream::writeCompressedInt(int) */

void __thiscall juce::OutputStream::writeCompressedInt(OutputStream *this,uint param_1)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 local_5;
  undefined1 auStack_4 [4];
  
  uVar3 = -param_1;
  if ((int)-param_1 < 0) {
    uVar3 = param_1;
  }
  lVar5 = 0;
  if (uVar3 != 0) {
    uVar4 = (ulong)uVar3;
    do {
      auStack_4[lVar5] = (char)uVar3;
      lVar5 = lVar5 + 1;
      uVar2 = uVar4 >> 8;
      bVar1 = 0xff < uVar3;
      uVar4 = uVar4 >> 8;
      uVar3 = (uint)uVar2;
    } while (bVar1);
  }
  (**(code **)(*(long *)this + 0x28))(this,&local_5,(int)lVar5 + 1);
  return;
}


