// Function : readInt
// Namespace: juce:InputStream
// Entry    : 0049e860
// Prototype: undefined4 readInt(InputStream * this)
// Body     : 0049e860 - 0049e87f


/* juce::InputStream::readInt() */

undefined4 __thiscall juce::InputStream::readInt(InputStream *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 in_RAX;
  undefined4 local_4;
  
  local_4 = (undefined4)((ulong)in_RAX >> 0x20);
  iVar1 = (**(code **)(*(long *)this + 0x20))(this,&local_4,4);
  uVar2 = 0;
  if (iVar1 == 4) {
    uVar2 = local_4;
  }
  return uVar2;
}


