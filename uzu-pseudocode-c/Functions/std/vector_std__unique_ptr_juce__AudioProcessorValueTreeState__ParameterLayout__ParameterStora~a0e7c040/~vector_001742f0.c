// Function : ~vector
// Namespace: std:vector_std__unique_ptr_juce__AudioProcessorValueTreeState__ParameterLayout__ParameterStora~a0e7c040
// Entry    : 001742f0
// Prototype: undefined ~vector(vector<std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterLayout::ParameterStorageBase,std::default_delete<juce::AudioProcessorValueTreeState::ParameterLayout::ParameterStorageBase>>,std::allocator<std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterLayout::ParameterStorageBase,std::default_delete<juce::AudioProcessorValueTreeState::ParameterLayout::ParameterStorageBase>>>> * this)
// Body     : 001742f0 - 0017434a


/* std::vector<std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterLayout::ParameterStorageBase,
   std::default_delete<juce::AudioProcessorValueTreeState::ParameterLayout::ParameterStorageBase> >,
   std::allocator<std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterLayout::ParameterStorageBase,
   std::default_delete<juce::AudioProcessorValueTreeState::ParameterLayout::ParameterStorageBase> >
   > >::~vector() */

void __thiscall
std::
vector<std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterLayout::ParameterStorageBase,std::default_delete<juce::AudioProcessorValueTreeState::ParameterLayout::ParameterStorageBase>>,std::allocator<std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterLayout::ParameterStorageBase,std::default_delete<juce::AudioProcessorValueTreeState::ParameterLayout::ParameterStorageBase>>>>
::~vector(vector<std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterLayout::ParameterStorageBase,std::default_delete<juce::AudioProcessorValueTreeState::ParameterLayout::ParameterStorageBase>>,std::allocator<std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterLayout::ParameterStorageBase,std::default_delete<juce::AudioProcessorValueTreeState::ParameterLayout::ParameterStorageBase>>>>
          *this)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)this;
  plVar1 = *(long **)(this + 8);
  if (plVar2 != plVar1) {
    do {
      if ((long *)*plVar2 != (long *)0x0) {
        (**(code **)(*(long *)*plVar2 + 8))();
      }
      *plVar2 = 0;
      plVar2 = plVar2 + 1;
    } while (plVar2 != plVar1);
    plVar2 = *(long **)this;
  }
  if (plVar2 == (long *)0x0) {
    return;
  }
  operator_delete(plVar2);
  return;
}


