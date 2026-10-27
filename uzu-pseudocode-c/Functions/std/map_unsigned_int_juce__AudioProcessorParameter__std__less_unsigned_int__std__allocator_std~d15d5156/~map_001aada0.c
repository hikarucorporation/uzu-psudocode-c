// Function : ~map
// Namespace: std:map_unsigned_int_juce__AudioProcessorParameter__std__less_unsigned_int__std__allocator_std~d15d5156
// Entry    : 001aada0
// Prototype: undefined8 ~map(map<unsigned_int,juce::AudioProcessorParameter*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>> * this)
// Body     : 001aada0 - 001aadab


/* std::map<unsigned int, juce::AudioProcessorParameter*, std::less<unsigned int>,
   std::allocator<std::pair<unsigned int const, juce::AudioProcessorParameter*> > >::~map() */

undefined8 __thiscall
std::
map<unsigned_int,juce::AudioProcessorParameter*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>
::~map(map<unsigned_int,juce::AudioProcessorParameter*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>
       *this)

{
  undefined8 in_RAX;
  
                    /* try { // try from 001aada5 to 001aada9 has its CatchHandler @ 001aadac */
  _Rb_tree<unsigned_int,std::pair<unsigned_int_const,juce::AudioProcessorParameter*>,std::_Select1st<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>
  ::_M_erase((_Rb_tree<unsigned_int,std::pair<unsigned_int_const,juce::AudioProcessorParameter*>,std::_Select1st<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>
              *)this,*(void **)(this + 0x10));
  return in_RAX;
}


