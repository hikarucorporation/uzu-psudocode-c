// Function : ~map
// Namespace: std:map_juce__String_juce__AudioProcessorParameter__std__less_juce__String__std__allocator_std~5f326a44
// Entry    : 001aadf0
// Prototype: undefined8 ~map(map<juce::String,juce::AudioProcessorParameter*,std::less<juce::String>,std::allocator<std::pair<juce::String_const,juce::AudioProcessorParameter*>>> * this)
// Body     : 001aadf0 - 001aadfb


/* std::map<juce::String, juce::AudioProcessorParameter*, std::less<juce::String>,
   std::allocator<std::pair<juce::String const, juce::AudioProcessorParameter*> > >::~map() */

undefined8 __thiscall
std::
map<juce::String,juce::AudioProcessorParameter*,std::less<juce::String>,std::allocator<std::pair<juce::String_const,juce::AudioProcessorParameter*>>>
::~map(map<juce::String,juce::AudioProcessorParameter*,std::less<juce::String>,std::allocator<std::pair<juce::String_const,juce::AudioProcessorParameter*>>>
       *this)

{
  undefined8 in_RAX;
  
                    /* try { // try from 001aadf5 to 001aadf9 has its CatchHandler @ 001aadfc */
  _Rb_tree<juce::String,std::pair<juce::String_const,juce::AudioProcessorParameter*>,std::_Select1st<std::pair<juce::String_const,juce::AudioProcessorParameter*>>,std::less<juce::String>,std::allocator<std::pair<juce::String_const,juce::AudioProcessorParameter*>>>
  ::_M_erase((_Rb_tree<juce::String,std::pair<juce::String_const,juce::AudioProcessorParameter*>,std::_Select1st<std::pair<juce::String_const,juce::AudioProcessorParameter*>>,std::less<juce::String>,std::allocator<std::pair<juce::String_const,juce::AudioProcessorParameter*>>>
              *)this,*(void **)(this + 0x10));
  return in_RAX;
}


