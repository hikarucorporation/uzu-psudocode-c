// Function : ~AudioBuffer
// Namespace: juce:AudioBuffer_float_
// Entry    : 00171e10
// Prototype: undefined ~AudioBuffer(AudioBuffer<float> * this)
// Body     : 00171e10 - 00171e18


/* juce::AudioBuffer<float>::~AudioBuffer() */

void __thiscall juce::AudioBuffer<float>::~AudioBuffer(AudioBuffer<float> *this)

{
  free(*(void **)(this + 0x18));
  return;
}


