// Function : ~unique_ptr
// Namespace: std:unique_ptr_juce__Component__MouseListenerList_std__default_delete_juce__Component__MouseLi~ab145a1b
// Entry    : 00220330
// Prototype: undefined ~unique_ptr(unique_ptr<juce::Component::MouseListenerList,std::default_delete<juce::Component::MouseListenerList>> * this)
// Body     : 00220330 - 00220364


/* std::unique_ptr<juce::Component::MouseListenerList,
   std::default_delete<juce::Component::MouseListenerList> >::~unique_ptr() */

void __thiscall
std::
unique_ptr<juce::Component::MouseListenerList,std::default_delete<juce::Component::MouseListenerList>>
::~unique_ptr(unique_ptr<juce::Component::MouseListenerList,std::default_delete<juce::Component::MouseListenerList>>
              *this)

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


