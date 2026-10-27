// Function : ~unique_ptr
// Namespace: std:unique_ptr_juce__PopupMenuCompletionCallback_std__default_delete_juce__PopupMenuCompletion~899210de
// Entry    : 00276b30
// Prototype: undefined ~unique_ptr(unique_ptr<juce::PopupMenuCompletionCallback,std::default_delete<juce::PopupMenuCompletionCallback>> * this)
// Body     : 00276b30 - 00276b64


/* std::unique_ptr<juce::PopupMenuCompletionCallback,
   std::default_delete<juce::PopupMenuCompletionCallback> >::~unique_ptr() */

void __thiscall
std::
unique_ptr<juce::PopupMenuCompletionCallback,std::default_delete<juce::PopupMenuCompletionCallback>>
::~unique_ptr(unique_ptr<juce::PopupMenuCompletionCallback,std::default_delete<juce::PopupMenuCompletionCallback>>
              *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    if (*(long **)((long)pvVar1 + 0x10) != (long *)0x0) {
      (**(code **)(**(long **)((long)pvVar1 + 0x10) + 8))();
    }
    operator_delete(pvVar1);
  }
  *(undefined8 *)this = 0;
  return;
}


