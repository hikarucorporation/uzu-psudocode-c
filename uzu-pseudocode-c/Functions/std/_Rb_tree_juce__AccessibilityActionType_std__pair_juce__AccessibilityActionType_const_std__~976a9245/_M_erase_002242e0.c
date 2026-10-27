// Function : _M_erase
// Namespace: std:_Rb_tree_juce__AccessibilityActionType_std__pair_juce__AccessibilityActionType_const_std__~976a9245
// Entry    : 002242e0
// Prototype: undefined _M_erase(void * param_1)
// Body     : 002242e0 - 0022432d


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Rb_tree<juce::AccessibilityActionType, std::pair<juce::AccessibilityActionType const,
   std::function<void ()> >, std::_Select1st<std::pair<juce::AccessibilityActionType const,
   std::function<void ()> > >, std::less<juce::AccessibilityActionType>,
   std::allocator<std::pair<juce::AccessibilityActionType const, std::function<void ()> > >
   >::_M_erase(std::_Rb_tree_node<std::pair<juce::AccessibilityActionType const, std::function<void
   ()> > >*) */

void __cdecl
std::
_Rb_tree<juce::AccessibilityActionType,std::pair<juce::AccessibilityActionType_const,std::function<void()>>,std::_Select1st<std::pair<juce::AccessibilityActionType_const,std::function<void()>>>,std::less<juce::AccessibilityActionType>,std::allocator<std::pair<juce::AccessibilityActionType_const,std::function<void()>>>>
::_M_erase(void *param_1)

{
  void *pvVar1;
  
  if (param_1 != (void *)0x0) {
    do {
      _M_erase(*(void **)((long)param_1 + 0x18));
      pvVar1 = *(void **)((long)param_1 + 0x10);
      if (*(code **)((long)param_1 + 0x38) != (code *)0x0) {
                    /* try { // try from 0022431a to 00224323 has its CatchHandler @ 0022432e */
        (**(code **)((long)param_1 + 0x38))((long)param_1 + 0x28,(long)param_1 + 0x28,3);
      }
      operator_delete(param_1);
      param_1 = pvVar1;
    } while (pvVar1 != (void *)0x0);
  }
  return;
}


