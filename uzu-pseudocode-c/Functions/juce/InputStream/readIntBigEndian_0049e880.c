// Function : readIntBigEndian
// Namespace: juce:InputStream
// Entry    : 0049e880
// Prototype: uint readIntBigEndian(InputStream * this)
// Body     : 0049e880 - 0049e8a1


/* juce::InputStream::readIntBigEndian() */

uint __thiscall juce::InputStream::readIntBigEndian(InputStream *this)

{
  int iVar1;
  uint uVar2;
  undefined8 in_RAX;
  uint local_4;
  
  local_4 = (uint)((ulong)in_RAX >> 0x20);
  iVar1 = (**(code **)(*(long *)this + 0x20))(this,&local_4,4);
  uVar2 = 0;
  if (iVar1 == 4) {
    uVar2 = local_4 >> 0x18 | (local_4 & 0xff0000) >> 8 | (local_4 & 0xff00) << 8 | local_4 << 0x18;
  }
  return uVar2;
}


