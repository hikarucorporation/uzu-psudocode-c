// Function : stereo
// Namespace: juce:AudioChannelSet
// Entry    : 004d3420
// Prototype: AudioChannelSet * stereo(AudioChannelSet * this)
// Body     : 004d3420 - 004d344b


/* juce::AudioChannelSet::stereo() */

AudioChannelSet * __thiscall juce::AudioChannelSet::stereo(AudioChannelSet *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x18) = 4;
  this[0x24] = (AudioChannelSet)0x0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x20) = 2;
  *(undefined4 *)(this + 8) = 6;
  return this;
}


