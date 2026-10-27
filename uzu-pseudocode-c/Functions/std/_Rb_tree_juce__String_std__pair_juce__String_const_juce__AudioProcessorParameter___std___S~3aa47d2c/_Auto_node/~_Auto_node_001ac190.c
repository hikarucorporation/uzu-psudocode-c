// Function : ~_Auto_node
// Namespace: std:_Rb_tree_juce__String_std__pair_juce__String_const_juce__AudioProcessorParameter___std___S~3aa47d2c:_Auto_node
// Entry    : 001ac190
// Prototype: undefined ~_Auto_node(_Auto_node * this)
// Body     : 001ac190 - 001ac1ad


/* std::_Rb_tree<juce::String, std::pair<juce::String const, juce::AudioProcessorParameter*>,
   std::_Select1st<std::pair<juce::String const, juce::AudioProcessorParameter*> >,
   std::less<juce::String>, std::allocator<std::pair<juce::String const,
   juce::AudioProcessorParameter*> > >::_Auto_node::~_Auto_node() */

void __thiscall
std::
_Rb_tree<juce::String,std::pair<juce::String_const,juce::AudioProcessorParameter*>,std::_Select1st<std::pair<juce::String_const,juce::AudioProcessorParameter*>>,std::less<juce::String>,std::allocator<std::pair<juce::String_const,juce::AudioProcessorParameter*>>>
::_Auto_node::~_Auto_node(_Auto_node *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  juce::String::~String((String *)((long)pvVar1 + 0x20));
  operator_delete(pvVar1);
  return;
}


