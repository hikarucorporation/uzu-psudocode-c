// Function : ~unique_ptr
// Namespace: std:unique_ptr_juce__Displays_std__default_delete_juce__Displays__
// Entry    : 001ddf10
// Prototype: undefined ~unique_ptr(unique_ptr<juce::Displays,std::default_delete<juce::Displays>> * this)
// Body     : 001ddf10 - 001ddf44


/* std::unique_ptr<juce::Displays, std::default_delete<juce::Displays> >::~unique_ptr() */

void __thiscall
std::unique_ptr<juce::Displays,std::default_delete<juce::Displays>>::~unique_ptr
          (unique_ptr<juce::Displays,std::default_delete<juce::Displays>> *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)this;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0xc) = 0;
    free((void *)*puVar1);
    operator_delete(puVar1);
  }
  *(undefined8 *)this = 0;
  return;
}


