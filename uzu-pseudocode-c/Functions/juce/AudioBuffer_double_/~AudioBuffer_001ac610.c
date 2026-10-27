// Function : ~AudioBuffer
// Namespace: juce:AudioBuffer_double_
// Entry    : 001ac610
// Prototype: undefined ~AudioBuffer(AudioBuffer<double> * this)
// Body     : 001ac610 - 001ac618


/* juce::AudioBuffer<double>::~AudioBuffer() */

void __thiscall juce::AudioBuffer<double>::~AudioBuffer(AudioBuffer<double> *this)

{
  free(*(void **)(this + 0x18));
  return;
}


