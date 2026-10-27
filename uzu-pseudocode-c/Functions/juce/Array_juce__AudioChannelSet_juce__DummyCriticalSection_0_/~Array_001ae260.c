// Function : ~Array
// Namespace: juce:Array_juce__AudioChannelSet_juce__DummyCriticalSection_0_
// Entry    : 001ae260
// Prototype: undefined ~Array(Array<juce::AudioChannelSet,juce::DummyCriticalSection,0> * this)
// Body     : 001ae260 - 001ae2b0


/* juce::Array<juce::AudioChannelSet, juce::DummyCriticalSection, 0>::~Array() */

void __thiscall
juce::Array<juce::AudioChannelSet,juce::DummyCriticalSection,0>::~Array
          (Array<juce::AudioChannelSet,juce::DummyCriticalSection,0> *this)

{
  long lVar1;
  long lVar2;
  
  if (0 < *(int *)(this + 0xc)) {
    lVar2 = 0;
    lVar1 = 0;
    do {
      BigInteger::~BigInteger((BigInteger *)(*(long *)this + lVar2));
      lVar1 = lVar1 + 1;
      lVar2 = lVar2 + 0x28;
    } while (lVar1 < *(int *)(this + 0xc));
  }
  *(undefined4 *)(this + 0xc) = 0;
  free(*(void **)this);
  return;
}


