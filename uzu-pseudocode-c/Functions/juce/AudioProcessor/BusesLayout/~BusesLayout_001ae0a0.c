// Function : ~BusesLayout
// Namespace: juce:AudioProcessor:BusesLayout
// Entry    : 001ae0a0
// Prototype: undefined ~BusesLayout(BusesLayout * this)
// Body     : 001ae0a0 - 001ae130


/* juce::AudioProcessor::BusesLayout::~BusesLayout() */

void __thiscall juce::AudioProcessor::BusesLayout::~BusesLayout(BusesLayout *this)

{
  long lVar1;
  long lVar2;
  
  if (0 < *(int *)(this + 0x1c)) {
    lVar2 = 0;
    lVar1 = 0;
    do {
      BigInteger::~BigInteger((BigInteger *)(*(long *)(this + 0x10) + lVar2));
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
      BigInteger::~BigInteger((BigInteger *)(*(long *)this + lVar2));
      lVar1 = lVar1 + 1;
      lVar2 = lVar2 + 0x28;
    } while (lVar1 < *(int *)(this + 0xc));
  }
  *(undefined4 *)(this + 0xc) = 0;
  free(*(void **)this);
  return;
}


