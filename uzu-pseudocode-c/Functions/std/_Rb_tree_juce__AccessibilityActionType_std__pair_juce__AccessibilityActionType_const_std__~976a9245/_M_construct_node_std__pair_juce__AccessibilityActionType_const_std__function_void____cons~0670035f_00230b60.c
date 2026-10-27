// Function : _M_construct_node<std::pair<juce::AccessibilityActionType_const,std::function<void()>>const&>
// Namespace: std:_Rb_tree_juce__AccessibilityActionType_std__pair_juce__AccessibilityActionType_const_std__~976a9245
// Entry    : 00230b60
// Prototype: void _M_construct_node<std::pair<juce::AccessibilityActionType_const,std::function<void()>>const&>(long param_1, undefined4 * param_2)
// Body     : 00230b60 - 00230bab


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* void std::_Rb_tree<juce::AccessibilityActionType, std::pair<juce::AccessibilityActionType const,
   std::function<void ()> >, std::_Select1st<std::pair<juce::AccessibilityActionType const,
   std::function<void ()> > >, std::less<juce::AccessibilityActionType>,
   std::allocator<std::pair<juce::AccessibilityActionType const, std::function<void ()> > >
   >::_M_construct_node<std::pair<juce::AccessibilityActionType const, std::function<void ()> >
   const&>(std::_Rb_tree_node<std::pair<juce::AccessibilityActionType const, std::function<void ()>
   > >*, std::pair<juce::AccessibilityActionType const, std::function<void ()> > const&) */

void __cdecl
std::
_Rb_tree<juce::AccessibilityActionType,std::pair<juce::AccessibilityActionType_const,std::function<void()>>,std::_Select1st<std::pair<juce::AccessibilityActionType_const,std::function<void()>>>,std::less<juce::AccessibilityActionType>,std::allocator<std::pair<juce::AccessibilityActionType_const,std::function<void()>>>>
::_M_construct_node<std::pair<juce::AccessibilityActionType_const,std::function<void()>>const&>
          (long param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x20) = *param_2;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (*(code **)(param_2 + 6) != (code *)0x0) {
                    /* try { // try from 00230b8c to 00230b95 has its CatchHandler @ 00230bac */
    (**(code **)(param_2 + 6))(param_1 + 0x28,param_2 + 2,2);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 6);
  }
  return;
}


