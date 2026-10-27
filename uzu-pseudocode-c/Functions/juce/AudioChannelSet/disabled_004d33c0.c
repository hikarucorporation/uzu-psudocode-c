// Function : disabled
// Namespace: juce:AudioChannelSet
// Entry    : 004d33c0
// Prototype: AudioChannelSet * disabled(AudioChannelSet * this)
// Body     : 004d33c0 - 004d33e8


/* juce::AudioChannelSet::disabled() */

AudioChannelSet * __thiscall juce::AudioChannelSet::disabled(AudioChannelSet *this)

{
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 4;
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return this;
}


