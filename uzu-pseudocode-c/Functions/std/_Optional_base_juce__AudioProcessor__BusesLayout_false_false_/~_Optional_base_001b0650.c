// Function : ~_Optional_base
// Namespace: std:_Optional_base_juce__AudioProcessor__BusesLayout_false_false_
// Entry    : 001b0650
// Prototype: undefined ~_Optional_base(_Optional_base<juce::AudioProcessor::BusesLayout,false,false> * this)
// Body     : 001b0650 - 001b06f6


/* std::_Optional_base<juce::AudioProcessor::BusesLayout, false, false>::~_Optional_base() */

void __thiscall
std::_Optional_base<juce::AudioProcessor::BusesLayout,false,false>::~_Optional_base
          (_Optional_base<juce::AudioProcessor::BusesLayout,false,false> *this)

{
  long lVar1;
  long lVar2;
  
  if (this[0x20] == (_Optional_base<juce::AudioProcessor::BusesLayout,false,false>)0x0) {
    return;
  }
  this[0x20] = (_Optional_base<juce::AudioProcessor::BusesLayout,false,false>)0x0;
  if (0 < *(int *)(this + 0x1c)) {
    lVar2 = 0;
    lVar1 = 0;
    do {
      juce::BigInteger::~BigInteger((BigInteger *)(*(long *)(this + 0x10) + lVar2));
      lVar1 = lVar1 + 1;
      lVar2 = lVar2 + 0x28;
    } while (lVar1 < *(int *)(this + 0x1c));
  }
  *(undefined4 *)(this + 0x1c) = 0;
  free(*(void **)(this + 0x10));
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


