// Function : ~BigInteger
// Namespace: juce:BigInteger
// Entry    : 004a5240
// Prototype: undefined ~BigInteger(BigInteger * this)
// Body     : 004a5240 - 004a5247


/* juce::BigInteger::~BigInteger() */

void __thiscall juce::BigInteger::~BigInteger(BigInteger *this)

{
  free(*(void **)this);
  return;
}


