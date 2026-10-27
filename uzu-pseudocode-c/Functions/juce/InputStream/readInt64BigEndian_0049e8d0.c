// Function : readInt64BigEndian
// Namespace: juce:InputStream
// Entry    : 0049e8d0
// Prototype: undefined8 readInt64BigEndian(InputStream * this)
// Body     : 0049e8d0 - 0049e904


/* juce::InputStream::readInt64BigEndian() */

undefined8 __thiscall juce::InputStream::readInt64BigEndian(InputStream *this)

{
  int iVar1;
  uint uVar2;
  undefined8 in_RAX;
  uint uVar3;
  undefined8 local_8;
  
  local_8 = in_RAX;
  iVar1 = (**(code **)(*(long *)this + 0x20))(this,&local_8,8);
  if (iVar1 == 8) {
    uVar2 = (uint)local_8;
    uVar3 = (uint)((ulong)local_8 >> 0x20);
    return CONCAT44(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18,
                    uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18)
    ;
  }
  return 0;
}


