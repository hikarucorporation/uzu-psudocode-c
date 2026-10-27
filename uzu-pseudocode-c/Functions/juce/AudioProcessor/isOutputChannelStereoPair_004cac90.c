// Function : isOutputChannelStereoPair
// Namespace: juce:AudioProcessor
// Entry    : 004cac90
// Prototype: ulong isOutputChannelStereoPair(AudioProcessor * this, int param_1)
// Body     : 004cac90 - 004cace2


/* juce::AudioProcessor::isOutputChannelStereoPair(int) const */

ulong __thiscall juce::AudioProcessor::isOutputChannelStereoPair(AudioProcessor *this,int param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  void *local_38 [5];
  
  uVar3 = 0;
  if ((param_1 < 2) && (0 < *(int *)(this + 0xdc))) {
    lVar1 = **(long **)(this + 0xd0);
    AudioChannelSet::stereo((AudioChannelSet *)local_38);
    iVar2 = BigInteger::compare((BigInteger *)(lVar1 + 0x10),(long *)local_38);
    uVar3 = CONCAT71((int7)((ulong)(lVar1 + 0x10) >> 8),iVar2 == 0);
    free(local_38[0]);
  }
  return uVar3 & 0xffffffff;
}


