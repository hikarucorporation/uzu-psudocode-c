// Function : _M_erase
// Namespace: std:_Rb_tree_unsigned_int_std__pair_unsigned_int_const_juce__AudioProcessorParameter___std___S~1d9b22e5
// Entry    : 001ac420
// Prototype: undefined _M_erase(_Rb_tree<unsigned_int,std::pair<unsigned_int_const,juce::AudioProcessorParameter*>,std::_Select1st<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>> * this, void * param_1)
// Body     : 001ac420 - 001ac455


/* std::_Rb_tree<unsigned int, std::pair<unsigned int const, juce::AudioProcessorParameter*>,
   std::_Select1st<std::pair<unsigned int const, juce::AudioProcessorParameter*> >,
   std::less<unsigned int>, std::allocator<std::pair<unsigned int const,
   juce::AudioProcessorParameter*> > >::_M_erase(std::_Rb_tree_node<std::pair<unsigned int const,
   juce::AudioProcessorParameter*> >*) */

void __thiscall
std::
_Rb_tree<unsigned_int,std::pair<unsigned_int_const,juce::AudioProcessorParameter*>,std::_Select1st<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>
::_M_erase(_Rb_tree<unsigned_int,std::pair<unsigned_int_const,juce::AudioProcessorParameter*>,std::_Select1st<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>
           *this,void *param_1)

{
  void *pvVar1;
  
  if (param_1 != (void *)0x0) {
    do {
      _M_erase(this,*(void **)((long)param_1 + 0x18));
      pvVar1 = *(void **)((long)param_1 + 0x10);
      operator_delete(param_1);
      param_1 = pvVar1;
    } while (pvVar1 != (void *)0x0);
  }
  return;
}


