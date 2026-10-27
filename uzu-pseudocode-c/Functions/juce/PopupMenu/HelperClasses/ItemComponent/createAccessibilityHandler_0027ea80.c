// Function : createAccessibilityHandler
// Namespace: juce:PopupMenu:HelperClasses:ItemComponent
// Entry    : 0027ea80
// Prototype: undefined8 * createAccessibilityHandler(undefined8 * param_1, AccessibilityActions * param_2)
// Body     : 0027ea80 - 0027eeea


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::PopupMenu::HelperClasses::ItemComponent::createAccessibilityHandler() */

undefined8 * __cdecl
juce::PopupMenu::HelperClasses::ItemComponent::createAccessibilityHandler
          (undefined8 *param_1,AccessibilityActions *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  AccessibilityActions *local_f8;
  undefined8 uStack_f0;
  code *local_e8;
  code *local_e0;
  code *local_d8;
  undefined8 local_d0;
  AccessibilityActions local_c0 [8];
  undefined4 local_b8 [2];
  undefined4 *local_b0;
  undefined4 *local_a8;
  undefined4 *puStack_a0;
  undefined8 local_98;
  AccessibilityActions *local_90;
  undefined8 local_88;
  code *local_80;
  code *local_78;
  AccessibilityActions *local_70;
  undefined8 local_68;
  code *local_60;
  code *local_58;
  AccessibilityActions *local_50;
  undefined8 local_48;
  code *local_40;
  code *local_38;
  
  if (param_2[0x156] == (AccessibilityActions)0x0) {
    puVar2 = operator_new(0x80);
    *puVar2 = &PTR__AccessibilityHandler_0070f938;
    if ((param_2[0x157] != (AccessibilityActions)0x0) ||
       ((uVar5 = 0x1d, param_2[0x154] != (AccessibilityActions)0x0 &&
        (((*(long *)(param_2 + 0x120) != 0 && (0 < *(int *)(*(long *)(param_2 + 0x120) + 0xc))) ||
         ((*(int *)(param_2 + 0xf8) != 0 &&
          ((*(long *)(param_2 + 0x130) == 0 ||
           (*(char *)(*(long *)(param_2 + 0x130) + 0xfd) != '\0')))))))))) {
      uVar5 = 9;
    }
    local_e0 = (code *)&uStack_f0;
    local_f8 = (AccessibilityActions *)0x0;
    uStack_f0 = 0;
    local_e8 = (code *)0x0;
    local_d0 = 0;
    local_48 = 0;
    local_38 = std::
               _Function_handler<void(),juce::PopupMenu::HelperClasses::ItemComponent::ItemAccessibilityHandler::getAccessibilityActions(juce::PopupMenu::HelperClasses::ItemComponent::ItemAccessibilityHandler&,juce::PopupMenu::HelperClasses::ItemComponent&)::{lambda()#1}>
               ::_M_invoke;
    local_40 = std::
               _Function_handler<void(),juce::PopupMenu::HelperClasses::ItemComponent::ItemAccessibilityHandler::getAccessibilityActions(juce::PopupMenu::HelperClasses::ItemComponent::ItemAccessibilityHandler&,juce::PopupMenu::HelperClasses::ItemComponent&)::{lambda()#1}>
               ::_M_manager;
                    /* try { // try from 0027ebb8 to 0027ec13 has its CatchHandler @ 0027ef9b */
    local_d8 = local_e0;
    local_50 = param_2;
    AccessibilityActions::addAction((AccessibilityActions *)&local_f8,2,&local_50);
    local_a8 = local_b8;
    local_b8[0] = 0;
    local_b0 = (undefined4 *)0x0;
    local_98 = 0;
    puStack_a0 = local_a8;
    if (local_e8 != (code *)0x0) {
      local_90 = local_c0;
      local_b0 = std::
                 _Rb_tree<juce::AccessibilityActionType,std::pair<juce::AccessibilityActionType_const,std::function<void()>>,std::_Select1st<std::pair<juce::AccessibilityActionType_const,std::function<void()>>>,std::less<juce::AccessibilityActionType>,std::allocator<std::pair<juce::AccessibilityActionType_const,std::function<void()>>>>
                 ::
                 _M_copy<false,std::_Rb_tree<juce::AccessibilityActionType,std::pair<juce::AccessibilityActionType_const,std::function<void()>>,std::_Select1st<std::pair<juce::AccessibilityActionType_const,std::function<void()>>>,std::less<juce::AccessibilityActionType>,std::allocator<std::pair<juce::AccessibilityActionType_const,std::function<void()>>>>::_Alloc_node>
                           ((undefined4 *)local_e8,local_a8,&local_90);
      puVar1 = local_b0;
      do {
        local_a8 = puVar1;
        puVar1 = *(undefined4 **)(local_a8 + 4);
      } while (*(undefined4 **)(local_a8 + 4) != (undefined4 *)0x0);
      puVar1 = local_b0;
      do {
        puStack_a0 = puVar1;
        puVar1 = *(undefined4 **)(puStack_a0 + 6);
      } while (*(undefined4 **)(puStack_a0 + 6) != (undefined4 *)0x0);
      local_98 = local_d0;
    }
    if (local_40 != (code *)0x0) {
                    /* try { // try from 0027ec6d to 0027ec7e has its CatchHandler @ 0027ef8b */
      (*local_40)(&local_50,&local_50,3);
    }
                    /* try { // try from 0027ec84 to 0027ec88 has its CatchHandler @ 0027ef93 */
    std::
    _Rb_tree<juce::AccessibilityActionType,std::pair<juce::AccessibilityActionType_const,std::function<void()>>,std::_Select1st<std::pair<juce::AccessibilityActionType_const,std::function<void()>>>,std::less<juce::AccessibilityActionType>,std::allocator<std::pair<juce::AccessibilityActionType_const,std::function<void()>>>>
    ::_M_erase(local_e8);
    if ((((param_2[0x154] != (AccessibilityActions)0x0) && (*(int *)(param_2 + 0xf8) != 0)) &&
        (param_2[0x157] == (AccessibilityActions)0x0)) &&
       ((*(long *)(param_2 + 0x130) == 0 || (*(char *)(*(long *)(param_2 + 0x130) + 0xfd) != '\0')))
       ) {
      uStack_f0 = 0;
      local_e0 = std::
                 _Function_handler<void(),juce::PopupMenu::HelperClasses::ItemComponent::ItemAccessibilityHandler::getAccessibilityActions(juce::PopupMenu::HelperClasses::ItemComponent::ItemAccessibilityHandler&,juce::PopupMenu::HelperClasses::ItemComponent&)::{lambda()#2}>
                 ::_M_invoke;
      local_e8 = std::
                 _Function_handler<void(),juce::PopupMenu::HelperClasses::ItemComponent::ItemAccessibilityHandler::getAccessibilityActions(juce::PopupMenu::HelperClasses::ItemComponent::ItemAccessibilityHandler&,juce::PopupMenu::HelperClasses::ItemComponent&)::{lambda()#2}>
                 ::_M_manager;
                    /* try { // try from 0027ecde to 0027ecec has its CatchHandler @ 0027ef55 */
      local_f8 = param_2;
      AccessibilityActions::addAction(local_c0,0,&local_f8);
      if (local_e8 != (code *)0x0) {
                    /* try { // try from 0027ecf7 to 0027ed03 has its CatchHandler @ 0027ef27 */
        (*local_e8)(&local_f8,&local_f8,3);
      }
    }
    if (((param_2[0x154] != (AccessibilityActions)0x0) && (*(long *)(param_2 + 0x120) != 0)) &&
       (0 < *(int *)(*(long *)(param_2 + 0x120) + 0xc))) {
      local_88 = 0;
      local_78 = std::
                 _Function_handler<void(),juce::PopupMenu::HelperClasses::ItemComponent::ItemAccessibilityHandler::getAccessibilityActions(juce::PopupMenu::HelperClasses::ItemComponent::ItemAccessibilityHandler&,juce::PopupMenu::HelperClasses::ItemComponent&)::{lambda()#3}>
                 ::_M_invoke;
      local_80 = std::
                 _Function_handler<void(),juce::PopupMenu::HelperClasses::ItemComponent::ItemAccessibilityHandler::getAccessibilityActions(juce::PopupMenu::HelperClasses::ItemComponent::ItemAccessibilityHandler&,juce::PopupMenu::HelperClasses::ItemComponent&)::{lambda()#3}>
                 ::_M_manager;
                    /* try { // try from 0027ed54 to 0027ed64 has its CatchHandler @ 0027ef2f */
      local_90 = param_2;
      AccessibilityActions::addAction(local_c0,0,&local_90);
      if (local_80 != (code *)0x0) {
                    /* try { // try from 0027ed6f to 0027ed7d has its CatchHandler @ 0027eef3 */
        (*local_80)(&local_90,&local_90,3);
      }
      local_68 = 0;
      local_58 = std::
                 _Function_handler<void(),juce::PopupMenu::HelperClasses::ItemComponent::ItemAccessibilityHandler::getAccessibilityActions(juce::PopupMenu::HelperClasses::ItemComponent::ItemAccessibilityHandler&,juce::PopupMenu::HelperClasses::ItemComponent&)::{lambda()#3}>
                 ::_M_invoke;
      local_60 = std::
                 _Function_handler<void(),juce::PopupMenu::HelperClasses::ItemComponent::ItemAccessibilityHandler::getAccessibilityActions(juce::PopupMenu::HelperClasses::ItemComponent::ItemAccessibilityHandler&,juce::PopupMenu::HelperClasses::ItemComponent&)::{lambda()#3}>
                 ::_M_manager;
                    /* try { // try from 0027eda9 to 0027edbf has its CatchHandler @ 0027eefb */
      local_70 = param_2;
      AccessibilityActions::addAction(local_c0,3,&local_70);
      if (local_60 != (code *)0x0) {
                    /* try { // try from 0027edd4 to 0027ede5 has its CatchHandler @ 0027eeeb */
        (*local_60)(&local_70,&local_70,3);
      }
    }
    *puVar2 = &PTR__AccessibilityHandler_00706fc8;
    puVar2[1] = param_2;
    puVar2[2] = *(undefined8 *)(*(long *)param_2 + -8);
    *(undefined4 *)(puVar2 + 3) = uVar5;
    puVar4 = puVar2 + 5;
    if (local_b0 == (undefined4 *)0x0) {
      puVar2[6] = 0;
      puVar2[7] = puVar4;
      puVar2[8] = puVar4;
      puVar3 = puVar2 + 9;
      local_b8[0] = 0;
    }
    else {
      puVar3 = &local_98;
      puVar2[6] = local_b0;
      puVar2[7] = local_a8;
      puVar2[8] = puStack_a0;
      *(undefined8 **)(local_b0 + 2) = puVar4;
      puVar2[9] = local_98;
    }
    *puVar3 = 0;
    *(undefined4 *)(puVar2 + 5) = local_b8[0];
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = 0;
    *puVar2 = &PTR__AccessibilityHandler_0070f938;
    puVar2[0xf] = param_2;
    *param_1 = puVar2;
  }
  else {
    puVar2 = operator_new(0x78);
    *puVar2 = &PTR__AccessibilityHandler_00706fc8;
    puVar2[1] = param_2;
    puVar2[2] = *(undefined8 *)(*(long *)param_2 + -8);
    *(undefined4 *)(puVar2 + 3) = 0x1d;
    puVar2[6] = 0;
    puVar2[7] = puVar2 + 5;
    puVar2[8] = puVar2 + 5;
    puVar2[9] = 0;
    *(undefined4 *)(puVar2 + 5) = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = 0;
    *param_1 = puVar2;
  }
  return param_1;
}


