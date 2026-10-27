// Function : operator=
// Namespace: juce:Array_juce__AudioChannelSet_juce__DummyCriticalSection_0_
// Entry    : 001b0940
// Prototype: Array<juce::AudioChannelSet,juce::DummyCriticalSection,0> * operator=(Array<juce::AudioChannelSet,juce::DummyCriticalSection,0> * this, Array<juce::AudioChannelSet,juce::DummyCriticalSection,0> * param_1)
// Body     : 001b0940 - 001b0a0b


/* juce::Array<juce::AudioChannelSet, juce::DummyCriticalSection,
   0>::TEMPNAMEPLACEHOLDERVALUE(juce::Array<juce::AudioChannelSet, juce::DummyCriticalSection, 0>
   const&) */

Array<juce::AudioChannelSet,juce::DummyCriticalSection,0> * __thiscall
juce::Array<juce::AudioChannelSet,juce::DummyCriticalSection,0>::operator=
          (Array<juce::AudioChannelSet,juce::DummyCriticalSection,0> *this,
          Array<juce::AudioChannelSet,juce::DummyCriticalSection,0> *param_1)

{
  uint uVar1;
  BigInteger *pBVar2;
  BigInteger *pBVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  uint uVar7;
  
  if (this != param_1) {
    uVar1 = *(uint *)(param_1 + 0xc);
    if ((int)uVar1 < 1) {
      pBVar2 = (BigInteger *)0x0;
      uVar4 = 0;
    }
    else {
      plVar6 = *(long **)param_1;
      uVar4 = (uVar1 >> 1) + uVar1 + 8 & 0xfffffff8;
      if ((int)uVar4 < 1) {
        pBVar2 = (BigInteger *)0x0;
      }
      else {
        pBVar2 = malloc((ulong)uVar4 * 0x28);
      }
      uVar7 = uVar1 + 1;
      pBVar3 = pBVar2;
      do {
                    /* try { // try from 001b09a0 to 001b09aa has its CatchHandler @ 001b0a0c */
        BigInteger::BigInteger(pBVar3,plVar6);
        plVar6 = plVar6 + 5;
        pBVar3 = pBVar3 + 0x28;
        uVar7 = uVar7 - 1;
      } while (1 < uVar7);
    }
    pBVar3 = *(BigInteger **)this;
    *(BigInteger **)this = pBVar2;
    *(uint *)(this + 8) = uVar4;
    uVar4 = *(uint *)(this + 0xc);
    uVar5 = (ulong)uVar4;
    *(uint *)(this + 0xc) = uVar1;
    if (0 < (int)uVar4) {
      pBVar2 = pBVar3;
      do {
        BigInteger::~BigInteger(pBVar2);
        pBVar2 = pBVar2 + 0x28;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    free(pBVar3);
  }
  return this;
}


