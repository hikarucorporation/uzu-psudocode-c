// Function : ~unique_ptr
// Namespace: std:unique_ptr_juce__ResizableCornerComponent_std__default_delete_juce__ResizableCornerCompone~9d0aea08
// Entry    : 001bdba0
// Prototype: undefined ~unique_ptr(unique_ptr<juce::ResizableCornerComponent,std::default_delete<juce::ResizableCornerComponent>> * this)
// Body     : 001bdba0 - 001bdbba


/* std::unique_ptr<juce::ResizableCornerComponent,
   std::default_delete<juce::ResizableCornerComponent> >::~unique_ptr() */

void __thiscall
std::unique_ptr<juce::ResizableCornerComponent,std::default_delete<juce::ResizableCornerComponent>>
::~unique_ptr(unique_ptr<juce::ResizableCornerComponent,std::default_delete<juce::ResizableCornerComponent>>
              *this)

{
  if (*(long **)this != (long *)0x0) {
    (**(code **)(**(long **)this + 8))();
  }
  *(undefined8 *)this = 0;
  return;
}


