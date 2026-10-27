// Function : mono
// Namespace: juce:AudioChannelSet
// Entry    : 004d33f0
// Prototype: AudioChannelSet * mono(AudioChannelSet * this)
// Body     : 004d33f0 - 004d341b


/* juce::AudioChannelSet::mono() */

AudioChannelSet * __thiscall juce::AudioChannelSet::mono(AudioChannelSet *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x18) = 4;
  this[0x24] = (AudioChannelSet)0x0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x20) = 3;
  *(undefined4 *)(this + 8) = 8;
  return this;
}


