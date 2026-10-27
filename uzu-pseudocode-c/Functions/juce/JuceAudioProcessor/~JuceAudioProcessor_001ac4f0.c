// Function : ~JuceAudioProcessor
// Namespace: juce:JuceAudioProcessor
// Entry    : 001ac4f0
// Prototype: undefined ~JuceAudioProcessor(JuceAudioProcessor * this)
// Body     : 001ac4f0 - 001ac5f3


/* juce::JuceAudioProcessor::~JuceAudioProcessor() */

void __thiscall juce::JuceAudioProcessor::~JuceAudioProcessor(JuceAudioProcessor *this)

{
  *(undefined4 *)(this + 0x18c) = 0;
  free(*(void **)(this + 0x180));
  if (*(long **)(this + 0x178) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x178) + 8))();
  }
  *(undefined8 *)(this + 0x178) = 0;
  if (*(long **)(this + 0x170) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x170) + 8))();
  }
  *(undefined8 *)(this + 0x170) = 0;
                    /* try { // try from 001ac552 to 001ac556 has its CatchHandler @ 001ac604 */
  std::
  _Rb_tree<unsigned_int,std::pair<unsigned_int_const,juce::AudioProcessorParameter*>,std::_Select1st<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>
  ::_M_erase((_Rb_tree<unsigned_int,std::pair<unsigned_int_const,juce::AudioProcessorParameter*>,std::_Select1st<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>
              *)(this + 0x140),*(void **)(this + 0x150));
  *(undefined4 *)(this + 0x124) = 0;
  free(*(void **)(this + 0x118));
  AudioProcessorParameterGroup::~AudioProcessorParameterGroup
            ((AudioProcessorParameterGroup *)(this + 0xe8));
  if (*(long **)(this + 0xd8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xd8) + 8))();
  }
  *(undefined8 *)(this + 0xd8) = 0;
                    /* try { // try from 001ac5a4 to 001ac5a8 has its CatchHandler @ 001ac5fc */
  std::
  _Rb_tree<juce::String,std::pair<juce::String_const,juce::AudioProcessorParameter*>,std::_Select1st<std::pair<juce::String_const,juce::AudioProcessorParameter*>>,std::less<juce::String>,std::allocator<std::pair<juce::String_const,juce::AudioProcessorParameter*>>>
  ::_M_erase((_Rb_tree<juce::String,std::pair<juce::String_const,juce::AudioProcessorParameter*>,std::_Select1st<std::pair<juce::String_const,juce::AudioProcessorParameter*>>,std::less<juce::String>,std::allocator<std::pair<juce::String_const,juce::AudioProcessorParameter*>>>
              *)(this + 0xa0),*(void **)(this + 0xb0));
                    /* try { // try from 001ac5b4 to 001ac5b8 has its CatchHandler @ 001ac5f4 */
  std::
  _Rb_tree<std::array<std::byte,16ul>,std::pair<std::array<std::byte,16ul>const,std::map<unsigned_int,juce::AudioProcessorParameter*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>>,std::_Select1st<std::pair<std::array<std::byte,16ul>const,std::map<unsigned_int,juce::AudioProcessorParameter*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>>>,std::less<std::array<std::byte,16ul>>,std::allocator<std::pair<std::array<std::byte,16ul>const,std::map<unsigned_int,juce::AudioProcessorParameter*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>>>>
  ::_M_erase((_Rb_tree<std::array<std::byte,16ul>,std::pair<std::array<std::byte,16ul>const,std::map<unsigned_int,juce::AudioProcessorParameter*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>>,std::_Select1st<std::pair<std::array<std::byte,16ul>const,std::map<unsigned_int,juce::AudioProcessorParameter*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>>>,std::less<std::array<std::byte,16ul>>,std::allocator<std::pair<std::array<std::byte,16ul>const,std::map<unsigned_int,juce::AudioProcessorParameter*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>>>>
              *)(this + 0x70),*(void **)(this + 0x80));
  if (*(void **)(this + 0x48) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x48));
  }
  if (*(void **)(this + 0x30) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x30));
  }
  if (*(void **)(this + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x18));
  }
  *(undefined4 *)(this + 0x14) = 0;
  free(*(void **)(this + 8));
  return;
}


