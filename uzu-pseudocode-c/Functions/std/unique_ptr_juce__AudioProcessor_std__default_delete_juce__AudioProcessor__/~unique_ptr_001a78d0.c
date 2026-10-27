// Function : ~unique_ptr
// Namespace: std:unique_ptr_juce__AudioProcessor_std__default_delete_juce__AudioProcessor__
// Entry    : 001a78d0
// Prototype: undefined ~unique_ptr(unique_ptr<juce::AudioProcessor,std::default_delete<juce::AudioProcessor>> * this)
// Body     : 001a78d0 - 001a78ea


/* std::unique_ptr<juce::AudioProcessor, std::default_delete<juce::AudioProcessor> >::~unique_ptr()
    */

void __thiscall
std::unique_ptr<juce::AudioProcessor,std::default_delete<juce::AudioProcessor>>::~unique_ptr
          (unique_ptr<juce::AudioProcessor,std::default_delete<juce::AudioProcessor>> *this)

{
  if (*(long **)this != (long *)0x0) {
    (**(code **)(**(long **)this + 8))();
  }
  *(undefined8 *)this = 0;
  return;
}


