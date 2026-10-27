// Function : _M_erase
// Namespace: std:_Rb_tree_juce__String_std__pair_juce__String_const_juce__AudioProcessorParameter___std___S~3aa47d2c
// Entry    : 001ac460
// Prototype: undefined _M_erase(_Rb_tree<juce::String,std::pair<juce::String_const,juce::AudioProcessorParameter*>,std::_Select1st<std::pair<juce::String_const,juce::AudioProcessorParameter*>>,std::less<juce::String>,std::allocator<std::pair<juce::String_const,juce::AudioProcessorParameter*>>> * this, void * param_1)
// Body     : 001ac460 - 001ac49e


/* std::_Rb_tree<juce::String, std::pair<juce::String const, juce::AudioProcessorParameter*>,
   std::_Select1st<std::pair<juce::String const, juce::AudioProcessorParameter*> >,
   std::less<juce::String>, std::allocator<std::pair<juce::String const,
   juce::AudioProcessorParameter*> > >::_M_erase(std::_Rb_tree_node<std::pair<juce::String const,
   juce::AudioProcessorParameter*> >*) */

void __thiscall
std::
_Rb_tree<juce::String,std::pair<juce::String_const,juce::AudioProcessorParameter*>,std::_Select1st<std::pair<juce::String_const,juce::AudioProcessorParameter*>>,std::less<juce::String>,std::allocator<std::pair<juce::String_const,juce::AudioProcessorParameter*>>>
::_M_erase(_Rb_tree<juce::String,std::pair<juce::String_const,juce::AudioProcessorParameter*>,std::_Select1st<std::pair<juce::String_const,juce::AudioProcessorParameter*>>,std::less<juce::String>,std::allocator<std::pair<juce::String_const,juce::AudioProcessorParameter*>>>
           *this,void *param_1)

{
  void *pvVar1;
  
  if (param_1 != (void *)0x0) {
    do {
      _M_erase(this,*(void **)((long)param_1 + 0x18));
      pvVar1 = *(void **)((long)param_1 + 0x10);
      juce::String::~String((String *)((long)param_1 + 0x20));
      operator_delete(param_1);
      param_1 = pvVar1;
    } while (pvVar1 != (void *)0x0);
  }
  return;
}


