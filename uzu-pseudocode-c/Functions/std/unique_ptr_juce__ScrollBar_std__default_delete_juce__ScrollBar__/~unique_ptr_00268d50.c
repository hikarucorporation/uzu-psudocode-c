// Function : ~unique_ptr
// Namespace: std:unique_ptr_juce__ScrollBar_std__default_delete_juce__ScrollBar__
// Entry    : 00268d50
// Prototype: undefined ~unique_ptr(unique_ptr<juce::ScrollBar,std::default_delete<juce::ScrollBar>> * this)
// Body     : 00268d50 - 00268d6a


/* std::unique_ptr<juce::ScrollBar, std::default_delete<juce::ScrollBar> >::~unique_ptr() */

void __thiscall
std::unique_ptr<juce::ScrollBar,std::default_delete<juce::ScrollBar>>::~unique_ptr
          (unique_ptr<juce::ScrollBar,std::default_delete<juce::ScrollBar>> *this)

{
  if (*(long **)this != (long *)0x0) {
    (**(code **)(**(long **)this + 8))();
  }
  *(undefined8 *)this = 0;
  return;
}


