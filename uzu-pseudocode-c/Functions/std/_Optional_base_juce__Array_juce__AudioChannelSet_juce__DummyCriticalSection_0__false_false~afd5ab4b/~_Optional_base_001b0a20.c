// Function : ~_Optional_base
// Namespace: std:_Optional_base_juce__Array_juce__AudioChannelSet_juce__DummyCriticalSection_0__false_false~afd5ab4b
// Entry    : 001b0a20
// Prototype: undefined ~_Optional_base(_Optional_base<juce::Array<juce::AudioChannelSet,juce::DummyCriticalSection,0>,false,false> * this)
// Body     : 001b0a20 - 001b0a76


/* std::_Optional_base<juce::Array<juce::AudioChannelSet, juce::DummyCriticalSection, 0>, false,
   false>::~_Optional_base() */

void __thiscall
std::_Optional_base<juce::Array<juce::AudioChannelSet,juce::DummyCriticalSection,0>,false,false>::
~_Optional_base(_Optional_base<juce::Array<juce::AudioChannelSet,juce::DummyCriticalSection,0>,false,false>
                *this)

{
  long lVar1;
  long lVar2;
  
  if (this[0x10] ==
      (_Optional_base<juce::Array<juce::AudioChannelSet,juce::DummyCriticalSection,0>,false,false>)
      0x0) {
    return;
  }
  this[0x10] = (_Optional_base<juce::Array<juce::AudioChannelSet,juce::DummyCriticalSection,0>,false,false>
                )0x0;
  if (0 < *(int *)(this + 0xc)) {
    lVar2 = 0;
    lVar1 = 0;
    do {
      juce::BigInteger::~BigInteger((BigInteger *)(*(long *)this + lVar2));
      lVar1 = lVar1 + 1;
      lVar2 = lVar2 + 0x28;
    } while (lVar1 < *(int *)(this + 0xc));
  }
  *(undefined4 *)(this + 0xc) = 0;
  free(*(void **)this);
  return;
}


