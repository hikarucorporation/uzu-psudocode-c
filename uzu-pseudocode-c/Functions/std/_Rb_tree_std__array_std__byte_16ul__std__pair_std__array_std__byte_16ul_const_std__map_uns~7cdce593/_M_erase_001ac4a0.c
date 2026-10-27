// Function : _M_erase
// Namespace: std:_Rb_tree_std__array_std__byte_16ul__std__pair_std__array_std__byte_16ul_const_std__map_uns~7cdce593
// Entry    : 001ac4a0
// Prototype: undefined _M_erase(_Rb_tree<std::array<std::byte,16ul>,std::pair<std::array<std::byte,16ul>const,std::map<unsigned_int,juce::AudioProcessorParameter*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>>,std::_Select1st<std::pair<std::array<std::byte,16ul>const,std::map<unsigned_int,juce::AudioProcessorParameter*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>>>,std::less<std::array<std::byte,16ul>>,std::allocator<std::pair<std::array<std::byte,16ul>const,std::map<unsigned_int,juce::AudioProcessorParameter*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>>>> * this, void * param_1)
// Body     : 001ac4a0 - 001ac4e2


/* std::_Rb_tree<std::array<std::byte, 16ul>, std::pair<std::array<std::byte, 16ul> const,
   std::map<unsigned int, juce::AudioProcessorParameter*, std::less<unsigned int>,
   std::allocator<std::pair<unsigned int const, juce::AudioProcessorParameter*> > > >,
   std::_Select1st<std::pair<std::array<std::byte, 16ul> const, std::map<unsigned int,
   juce::AudioProcessorParameter*, std::less<unsigned int>, std::allocator<std::pair<unsigned int
   const, juce::AudioProcessorParameter*> > > > >, std::less<std::array<std::byte, 16ul> >,
   std::allocator<std::pair<std::array<std::byte, 16ul> const, std::map<unsigned int,
   juce::AudioProcessorParameter*, std::less<unsigned int>, std::allocator<std::pair<unsigned int
   const, juce::AudioProcessorParameter*> > > > >
   >::_M_erase(std::_Rb_tree_node<std::pair<std::array<std::byte, 16ul> const, std::map<unsigned
   int, juce::AudioProcessorParameter*, std::less<unsigned int>, std::allocator<std::pair<unsigned
   int const, juce::AudioProcessorParameter*> > > > >*) */

void __thiscall
std::
_Rb_tree<std::array<std::byte,16ul>,std::pair<std::array<std::byte,16ul>const,std::map<unsigned_int,juce::AudioProcessorParameter*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>>,std::_Select1st<std::pair<std::array<std::byte,16ul>const,std::map<unsigned_int,juce::AudioProcessorParameter*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>>>,std::less<std::array<std::byte,16ul>>,std::allocator<std::pair<std::array<std::byte,16ul>const,std::map<unsigned_int,juce::AudioProcessorParameter*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>>>>
::_M_erase(_Rb_tree<std::array<std::byte,16ul>,std::pair<std::array<std::byte,16ul>const,std::map<unsigned_int,juce::AudioProcessorParameter*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>>,std::_Select1st<std::pair<std::array<std::byte,16ul>const,std::map<unsigned_int,juce::AudioProcessorParameter*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>>>,std::less<std::array<std::byte,16ul>>,std::allocator<std::pair<std::array<std::byte,16ul>const,std::map<unsigned_int,juce::AudioProcessorParameter*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>>>>
           *this,void *param_1)

{
  void *pvVar1;
  
  if (param_1 != (void *)0x0) {
    do {
      _M_erase(this,*(void **)((long)param_1 + 0x18));
      pvVar1 = *(void **)((long)param_1 + 0x10);
                    /* try { // try from 001ac4c8 to 001ac4cc has its CatchHandler @ 001ac4e3 */
      _Rb_tree<unsigned_int,std::pair<unsigned_int_const,juce::AudioProcessorParameter*>,std::_Select1st<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>
      ::_M_erase((_Rb_tree<unsigned_int,std::pair<unsigned_int_const,juce::AudioProcessorParameter*>,std::_Select1st<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>
                  *)((long)param_1 + 0x30),*(void **)((long)param_1 + 0x40));
      operator_delete(param_1);
      param_1 = pvVar1;
    } while (pvVar1 != (void *)0x0);
  }
  return;
}


