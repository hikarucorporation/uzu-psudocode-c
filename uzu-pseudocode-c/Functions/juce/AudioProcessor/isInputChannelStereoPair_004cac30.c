// Function : isInputChannelStereoPair
// Namespace: juce:AudioProcessor
// Entry    : 004cac30
// Prototype: ulong isInputChannelStereoPair(AudioProcessor * this, int param_1)
// Body     : 004cac30 - 004cac82


/* juce::AudioProcessor::isInputChannelStereoPair(int) const */

ulong __thiscall juce::AudioProcessor::isInputChannelStereoPair(AudioProcessor *this,int param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  void *local_38 [5];
  
  uVar3 = 0;
  if ((param_1 < 2) && (0 < *(int *)(this + 0xcc))) {
    lVar1 = **(long **)(this + 0xc0);
    AudioChannelSet::stereo((AudioChannelSet *)local_38);
    iVar2 = BigInteger::compare((BigInteger *)(lVar1 + 0x10),(long *)local_38);
    uVar3 = CONCAT71((int7)((ulong)(lVar1 + 0x10) >> 8),iVar2 == 0);
    free(local_38[0]);
  }
  return uVar3 & 0xffffffff;
}


