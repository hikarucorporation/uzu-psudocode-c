// Function : ~vector
// Namespace: std:vector_AudioPluginAudioProcessor__std__allocator_AudioPluginAudioProcessor___
// Entry    : 00167a80
// Prototype: undefined ~vector(vector<AudioPluginAudioProcessor*,std::allocator<AudioPluginAudioProcessor*>> * this)
// Body     : 00167a80 - 00167a8d


/* std::vector<AudioPluginAudioProcessor*, std::allocator<AudioPluginAudioProcessor*> >::~vector()
    */

void __thiscall
std::vector<AudioPluginAudioProcessor*,std::allocator<AudioPluginAudioProcessor*>>::~vector
          (vector<AudioPluginAudioProcessor*,std::allocator<AudioPluginAudioProcessor*>> *this)

{
  if (*(void **)this == (void *)0x0) {
    return;
  }
  operator_delete(*(void **)this);
  return;
}


