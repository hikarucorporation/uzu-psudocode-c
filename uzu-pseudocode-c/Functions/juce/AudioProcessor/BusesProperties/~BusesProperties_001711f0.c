// Function : ~BusesProperties
// Namespace: juce:AudioProcessor:BusesProperties
// Entry    : 001711f0
// Prototype: undefined ~BusesProperties(BusesProperties * this)
// Body     : 001711f0 - 001712a6


/* juce::AudioProcessor::BusesProperties::~BusesProperties() */

void __thiscall juce::AudioProcessor::BusesProperties::~BusesProperties(BusesProperties *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (0 < *(int *)(this + 0x1c)) {
    lVar2 = 0;
    lVar3 = 0;
    do {
      lVar1 = *(long *)(this + 0x10);
      BigInteger::~BigInteger((BigInteger *)(lVar1 + lVar2 + 8));
      juce::String::~String((String *)(lVar1 + lVar2));
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0x38;
    } while (lVar3 < *(int *)(this + 0x1c));
  }
  *(undefined4 *)(this + 0x1c) = 0;
  free(*(void **)(this + 0x10));
  if (0 < *(int *)(this + 0xc)) {
    lVar2 = 0;
    lVar3 = 0;
    do {
      lVar1 = *(long *)this;
      BigInteger::~BigInteger((BigInteger *)(lVar1 + lVar2 + 8));
      juce::String::~String((String *)(lVar1 + lVar2));
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0x38;
    } while (lVar3 < *(int *)(this + 0xc));
  }
  *(undefined4 *)(this + 0xc) = 0;
  free(*(void **)this);
  return;
}


