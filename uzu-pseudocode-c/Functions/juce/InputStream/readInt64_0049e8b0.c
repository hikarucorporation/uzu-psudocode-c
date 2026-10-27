// Function : readInt64
// Namespace: juce:InputStream
// Entry    : 0049e8b0
// Prototype: undefined8 readInt64(InputStream * this)
// Body     : 0049e8b0 - 0049e8cd


/* juce::InputStream::readInt64() */

undefined8 __thiscall juce::InputStream::readInt64(InputStream *this)

{
  int iVar1;
  undefined8 in_RAX;
  undefined8 local_8;
  
  local_8 = in_RAX;
  iVar1 = (**(code **)(*(long *)this + 0x20))(this,&local_8,8);
  if (iVar1 == 8) {
    return local_8;
  }
  return 0;
}


