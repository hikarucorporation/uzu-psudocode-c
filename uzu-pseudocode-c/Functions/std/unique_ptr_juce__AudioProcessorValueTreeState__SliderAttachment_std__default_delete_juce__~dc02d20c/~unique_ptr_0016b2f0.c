// Function : ~unique_ptr
// Namespace: std:unique_ptr_juce__AudioProcessorValueTreeState__SliderAttachment_std__default_delete_juce__~dc02d20c
// Entry    : 0016b2f0
// Prototype: undefined ~unique_ptr(unique_ptr<juce::AudioProcessorValueTreeState::SliderAttachment,std::default_delete<juce::AudioProcessorValueTreeState::SliderAttachment>> * this)
// Body     : 0016b2f0 - 0016b323


/* std::unique_ptr<juce::AudioProcessorValueTreeState::SliderAttachment,
   std::default_delete<juce::AudioProcessorValueTreeState::SliderAttachment> >::~unique_ptr() */

void __thiscall
std::
unique_ptr<juce::AudioProcessorValueTreeState::SliderAttachment,std::default_delete<juce::AudioProcessorValueTreeState::SliderAttachment>>
::~unique_ptr(unique_ptr<juce::AudioProcessorValueTreeState::SliderAttachment,std::default_delete<juce::AudioProcessorValueTreeState::SliderAttachment>>
              *this)

{
  long *plVar1;
  
  plVar1 = *(long **)this;
  if (plVar1 != (long *)0x0) {
    if ((long *)*plVar1 != (long *)0x0) {
      (**(code **)(*(long *)*plVar1 + 8))();
    }
    operator_delete(plVar1);
  }
  *(undefined8 *)this = 0;
  return;
}


