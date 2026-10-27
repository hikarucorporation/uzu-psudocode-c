// Function : readCompressedInt
// Namespace: juce:InputStream
// Entry    : 0049e950
// Prototype: int readCompressedInt(InputStream * this)
// Body     : 0049e950 - 0049e9b0


/* juce::InputStream::readCompressedInt() */

int __thiscall juce::InputStream::readCompressedInt(InputStream *this)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  int local_1c;
  
  uVar1 = (**(code **)(*(long *)this + 0x28))();
  bVar4 = (byte)uVar1;
  iVar3 = 0;
  if (bVar4 != 0) {
    if ((bVar4 & 0x7f) < 5) {
      local_1c = 0;
      uVar2 = (**(code **)(*(long *)this + 0x20))(this,&local_1c,uVar1 & 0x7f);
      iVar3 = 0;
      if (uVar2 == (uVar1 & 0x7f)) {
        iVar3 = -local_1c;
        if (-1 < (char)bVar4) {
          iVar3 = local_1c;
        }
      }
    }
  }
  return iVar3;
}


