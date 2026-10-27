// Function : operator=
// Namespace: juce:BigInteger
// Entry    : 004a5110
// Prototype: BigInteger * operator=(BigInteger * this, undefined8 * param_1)
// Body     : 004a5110 - 004a513b


/* juce::BigInteger::TEMPNAMEPLACEHOLDERVALUE(juce::BigInteger&&) */

BigInteger * __thiscall juce::BigInteger::operator=(BigInteger *this,undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)this;
  *(undefined8 *)this = *param_1;
  *param_1 = uVar1;
  uVar1 = param_1[2];
  *(undefined8 *)(this + 8) = param_1[1];
  *(undefined8 *)(this + 0x10) = uVar1;
  *(undefined8 *)(this + 0x18) = param_1[3];
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 4);
  this[0x24] = *(BigInteger *)((long)param_1 + 0x24);
  return this;
}


