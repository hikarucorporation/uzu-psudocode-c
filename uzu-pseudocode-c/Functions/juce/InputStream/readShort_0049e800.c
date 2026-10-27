// Function : readShort
// Namespace: juce:InputStream
// Entry    : 0049e800
// Prototype: undefined2 readShort(InputStream * this)
// Body     : 0049e800 - 0049e820


/* juce::InputStream::readShort() */

undefined2 __thiscall juce::InputStream::readShort(InputStream *this)

{
  int iVar1;
  undefined8 in_RAX;
  undefined2 local_2;
  
  local_2 = (undefined2)((ulong)in_RAX >> 0x30);
  iVar1 = (**(code **)(*(long *)this + 0x20))(this,&local_2,2);
  if (iVar1 == 2) {
    return local_2;
  }
  return 0;
}


