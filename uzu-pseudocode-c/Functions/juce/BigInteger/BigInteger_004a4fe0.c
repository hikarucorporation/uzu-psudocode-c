// Function : BigInteger
// Namespace: juce:BigInteger
// Entry    : 004a4fe0
// Prototype: undefined BigInteger(BigInteger * this)
// Body     : 004a4fe0 - 004a5001


/* juce::BigInteger::BigInteger() */

void __thiscall juce::BigInteger::BigInteger(BigInteger *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x18) = 4;
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  this[0x24] = (BigInteger)0x0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return;
}


