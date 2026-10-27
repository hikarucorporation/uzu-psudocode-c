// Function : channelSetWithChannels
// Namespace: juce:AudioChannelSet
// Entry    : 004d36c0
// Prototype: AudioChannelSet * channelSetWithChannels(AudioChannelSet * this, long * param_1)
// Body     : 004d36c0 - 004d3723


/* juce::AudioChannelSet::channelSetWithChannels(juce::Array<juce::AudioChannelSet::ChannelType,
   juce::DummyCriticalSection, 0> const&) */

AudioChannelSet * __thiscall
juce::AudioChannelSet::channelSetWithChannels(AudioChannelSet *this,long *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x18) = 4;
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  this[0x24] = (AudioChannelSet)0x0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  iVar1 = *(int *)((long)param_1 + 0xc);
  if ((long)iVar1 != 0) {
    lVar2 = *param_1;
    lVar3 = 0;
    do {
      BigInteger::setBit((BigInteger *)this,*(uint *)(lVar2 + lVar3));
      lVar3 = lVar3 + 4;
    } while ((long)iVar1 * 4 != lVar3);
  }
  return this;
}


