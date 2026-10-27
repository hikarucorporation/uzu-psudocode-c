// Function : ~vector
// Namespace: std:vector_juce__RangedAudioParameter__std__allocator_juce__RangedAudioParameter___
// Entry    : 00171e50
// Prototype: undefined ~vector(vector<juce::RangedAudioParameter*,std::allocator<juce::RangedAudioParameter*>> * this)
// Body     : 00171e50 - 00171e5d


/* std::vector<juce::RangedAudioParameter*, std::allocator<juce::RangedAudioParameter*> >::~vector()
    */

void __thiscall
std::vector<juce::RangedAudioParameter*,std::allocator<juce::RangedAudioParameter*>>::~vector
          (vector<juce::RangedAudioParameter*,std::allocator<juce::RangedAudioParameter*>> *this)

{
  if (*(void **)this == (void *)0x0) {
    return;
  }
  operator_delete(*(void **)this);
  return;
}


