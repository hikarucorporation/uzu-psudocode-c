// Function : readShortBigEndian
// Namespace: juce:InputStream
// Entry    : 0049e830
// Prototype: ushort readShortBigEndian(InputStream * this)
// Body     : 0049e830 - 0049e855


/* juce::InputStream::readShortBigEndian() */

ushort __thiscall juce::InputStream::readShortBigEndian(InputStream *this)

{
  int iVar1;
  undefined8 in_RAX;
  ushort uVar2;
  ushort local_2;
  
  local_2 = (ushort)((ulong)in_RAX >> 0x30);
  iVar1 = (**(code **)(*(long *)this + 0x20))(this,&local_2,2);
  uVar2 = local_2 << 8 | local_2 >> 8;
  if (iVar1 != 2) {
    uVar2 = 0;
  }
  return uVar2;
}


