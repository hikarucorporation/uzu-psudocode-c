// Function : _M_copy<false,std::_Rb_tree<juce::AccessibilityActionType,std::pair<juce::AccessibilityActionType_const,std::function<void()>>,std::_Select1st<std::pair<juce::AccessibilityActionType_const,std::function<void()>>>,std::less<juce::AccessibilityActionType>,std::allocator<std::pair<juce::AccessibilityActionType_const,std::function<void()>>>>::_Alloc_node>
// Namespace: std:_Rb_tree_juce__AccessibilityActionType_std__pair_juce__AccessibilityActionType_const_std__~976a9245
// Entry    : 002309a0
// Prototype: undefined4 * _M_copy<false,std::_Rb_tree<juce::AccessibilityActionType,std::pair<juce::AccessibilityActionType_const,std::function<void()>>,std::_Select1st<std::pair<juce::AccessibilityActionType_const,std::function<void()>>>,std::less<juce::AccessibilityActionType>,std::allocator<std::pair<juce::AccessibilityActionType_const,std::function<void()>>>>::_Alloc_node>(undefined4 * param_1, undefined8 param_2, undefined8 param_3)
// Body     : 002309a0 - 00230a73


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Rb_tree_node<std::pair<juce::AccessibilityActionType const, std::function<void ()> > >*
   std::_Rb_tree<juce::AccessibilityActionType, std::pair<juce::AccessibilityActionType const,
   std::function<void ()> >, std::_Select1st<std::pair<juce::AccessibilityActionType const,
   std::function<void ()> > >, std::less<juce::AccessibilityActionType>,
   std::allocator<std::pair<juce::AccessibilityActionType const, std::function<void ()> > >
   >::_M_copy<false, std::_Rb_tree<juce::AccessibilityActionType,
   std::pair<juce::AccessibilityActionType const, std::function<void ()> >,
   std::_Select1st<std::pair<juce::AccessibilityActionType const, std::function<void ()> > >,
   std::less<juce::AccessibilityActionType>, std::allocator<std::pair<juce::AccessibilityActionType
   const, std::function<void ()> > >
   >::_Alloc_node>(std::_Rb_tree_node<std::pair<juce::AccessibilityActionType const,
   std::function<void ()> > >*, std::_Rb_tree_node_base*,
   std::_Rb_tree<juce::AccessibilityActionType, std::pair<juce::AccessibilityActionType const,
   std::function<void ()> >, std::_Select1st<std::pair<juce::AccessibilityActionType const,
   std::function<void ()> > >, std::less<juce::AccessibilityActionType>,
   std::allocator<std::pair<juce::AccessibilityActionType const, std::function<void ()> > >
   >::_Alloc_node&) */

undefined4 * __cdecl
std::
_Rb_tree<juce::AccessibilityActionType,std::pair<juce::AccessibilityActionType_const,std::function<void()>>,std::_Select1st<std::pair<juce::AccessibilityActionType_const,std::function<void()>>>,std::less<juce::AccessibilityActionType>,std::allocator<std::pair<juce::AccessibilityActionType_const,std::function<void()>>>>
::
_M_copy<false,std::_Rb_tree<juce::AccessibilityActionType,std::pair<juce::AccessibilityActionType_const,std::function<void()>>,std::_Select1st<std::pair<juce::AccessibilityActionType_const,std::function<void()>>>,std::less<juce::AccessibilityActionType>,std::allocator<std::pair<juce::AccessibilityActionType_const,std::function<void()>>>>::_Alloc_node>
          (undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = operator_new(0x48);
  _M_construct_node<std::pair<juce::AccessibilityActionType_const,std::function<void()>>const&>
            ((long)puVar1,param_1 + 8);
  *puVar1 = *param_1;
  *(undefined8 *)(puVar1 + 4) = 0;
  *(undefined8 *)(puVar1 + 6) = 0;
  *(undefined8 *)(puVar1 + 2) = param_2;
  if (*(undefined4 **)(param_1 + 6) != (undefined4 *)0x0) {
                    /* try { // try from 002309e8 to 002309f2 has its CatchHandler @ 00230a74 */
    puVar2 = _M_copy<false,std::_Rb_tree<juce::AccessibilityActionType,std::pair<juce::AccessibilityActionType_const,std::function<void()>>,std::_Select1st<std::pair<juce::AccessibilityActionType_const,std::function<void()>>>,std::less<juce::AccessibilityActionType>,std::allocator<std::pair<juce::AccessibilityActionType_const,std::function<void()>>>>::_Alloc_node>
                       (*(undefined4 **)(param_1 + 6),puVar1,param_3);
    *(undefined4 **)(puVar1 + 6) = puVar2;
  }
  puVar2 = *(undefined4 **)(param_1 + 4);
  if (puVar2 != (undefined4 *)0x0) {
    puVar4 = puVar1;
    do {
                    /* try { // try from 00230a21 to 00230a64 has its CatchHandler @ 00230a76 */
      puVar3 = operator_new(0x48);
      _M_construct_node<std::pair<juce::AccessibilityActionType_const,std::function<void()>>const&>
                ((long)puVar3,puVar2 + 8);
      *puVar3 = *puVar2;
      *(undefined8 *)(puVar3 + 4) = 0;
      *(undefined8 *)(puVar3 + 6) = 0;
      *(undefined4 **)(puVar4 + 4) = puVar3;
      *(undefined4 **)(puVar3 + 2) = puVar4;
      if (*(undefined4 **)(puVar2 + 6) != (undefined4 *)0x0) {
        puVar4 = _M_copy<false,std::_Rb_tree<juce::AccessibilityActionType,std::pair<juce::AccessibilityActionType_const,std::function<void()>>,std::_Select1st<std::pair<juce::AccessibilityActionType_const,std::function<void()>>>,std::less<juce::AccessibilityActionType>,std::allocator<std::pair<juce::AccessibilityActionType_const,std::function<void()>>>>::_Alloc_node>
                           (*(undefined4 **)(puVar2 + 6),puVar3,param_3);
        *(undefined4 **)(puVar3 + 6) = puVar4;
      }
      puVar2 = *(undefined4 **)(puVar2 + 4);
      puVar4 = puVar3;
    } while (puVar2 != (undefined4 *)0x0);
  }
  return puVar1;
}


