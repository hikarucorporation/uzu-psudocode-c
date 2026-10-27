// Function : readByte
// Namespace: juce:InputStream
// Entry    : 0049e7d0
// Prototype: ulong readByte(InputStream * this)
// Body     : 0049e7d0 - 0049e7eb


/* juce::InputStream::readByte() */

ulong __thiscall juce::InputStream::readByte(InputStream *this)

{
  ulong in_RAX;
  undefined8 uVar1;
  undefined8 uStack_8;
  
  uStack_8 = in_RAX & 0xffffffffffffff;
  uVar1 = (**(code **)(*(long *)this + 0x20))(this,(long)&uStack_8 + 7,1);
  return CONCAT71((int7)((ulong)uVar1 >> 8),uStack_8._7_1_);
}


