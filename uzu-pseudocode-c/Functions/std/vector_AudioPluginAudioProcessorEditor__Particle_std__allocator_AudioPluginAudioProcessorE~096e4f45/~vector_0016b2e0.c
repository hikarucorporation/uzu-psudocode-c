// Function : ~vector
// Namespace: std:vector_AudioPluginAudioProcessorEditor__Particle_std__allocator_AudioPluginAudioProcessorE~096e4f45
// Entry    : 0016b2e0
// Prototype: undefined ~vector(vector<AudioPluginAudioProcessorEditor::Particle,std::allocator<AudioPluginAudioProcessorEditor::Particle>> * this)
// Body     : 0016b2e0 - 0016b2ed


/* std::vector<AudioPluginAudioProcessorEditor::Particle,
   std::allocator<AudioPluginAudioProcessorEditor::Particle> >::~vector() */

void __thiscall
std::
vector<AudioPluginAudioProcessorEditor::Particle,std::allocator<AudioPluginAudioProcessorEditor::Particle>>
::~vector(vector<AudioPluginAudioProcessorEditor::Particle,std::allocator<AudioPluginAudioProcessorEditor::Particle>>
          *this)

{
  if (*(void **)this == (void *)0x0) {
    return;
  }
  operator_delete(*(void **)this);
  return;
}


