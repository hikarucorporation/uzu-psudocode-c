// Function : createAccessibilityHandler
// Namespace: juce:PopupMenu:HelperClasses:MenuWindow
// Entry    : 00280c30
// Prototype: undefined8 * createAccessibilityHandler(undefined8 * param_1, long * param_2)
// Body     : 00280c30 - 00280e39


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::PopupMenu::HelperClasses::MenuWindow::createAccessibilityHandler() */

undefined8 * __cdecl
juce::PopupMenu::HelperClasses::MenuWindow::createAccessibilityHandler
          (undefined8 *param_1,long *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined1 local_b0 [8];
  undefined4 local_a8 [2];
  undefined4 *local_a0;
  undefined4 *local_98;
  undefined4 *local_90;
  undefined8 local_88;
  long *local_80;
  undefined8 local_78;
  code *local_70;
  code *local_68;
  undefined1 *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 local_30;
  
  local_40 = &uStack_50;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = (undefined4 *)0x0;
  local_30 = 0;
  local_78 = 0;
  local_68 = std::
             _Function_handler<void(),juce::PopupMenu::HelperClasses::MenuWindow::createAccessibilityHandler()::{lambda()#1}>
             ::_M_invoke;
  local_70 = std::
             _Function_handler<void(),juce::PopupMenu::HelperClasses::MenuWindow::createAccessibilityHandler()::{lambda()#1}>
             ::_M_manager;
                    /* try { // try from 00280c9b to 00280cb8 has its CatchHandler @ 00280e5f */
  local_80 = param_2;
  local_38 = local_40;
  AccessibilityActions::addAction((AccessibilityActions *)&local_58,2,&local_80);
  puVar2 = operator_new(0x78);
  local_a8[0] = 0;
  local_a0 = (undefined4 *)0x0;
  local_88 = 0;
  local_98 = local_a8;
  local_90 = local_a8;
  if (local_48 != (undefined4 *)0x0) {
    local_60 = local_b0;
                    /* try { // try from 00280cfc to 00280d08 has its CatchHandler @ 00280e42 */
    local_a0 = std::
               _Rb_tree<juce::AccessibilityActionType,std::pair<juce::AccessibilityActionType_const,std::function<void()>>,std::_Select1st<std::pair<juce::AccessibilityActionType_const,std::function<void()>>>,std::less<juce::AccessibilityActionType>,std::allocator<std::pair<juce::AccessibilityActionType_const,std::function<void()>>>>
               ::
               _M_copy<false,std::_Rb_tree<juce::AccessibilityActionType,std::pair<juce::AccessibilityActionType_const,std::function<void()>>,std::_Select1st<std::pair<juce::AccessibilityActionType_const,std::function<void()>>>,std::less<juce::AccessibilityActionType>,std::allocator<std::pair<juce::AccessibilityActionType_const,std::function<void()>>>>::_Alloc_node>
                         (local_48,local_a8,&local_60);
    puVar1 = local_a0;
    do {
      local_98 = puVar1;
      puVar1 = *(undefined4 **)(local_98 + 4);
    } while (puVar1 != (undefined4 *)0x0);
    puVar1 = local_a0;
    do {
      local_90 = puVar1;
      puVar1 = *(undefined4 **)(local_90 + 6);
    } while (puVar1 != (undefined4 *)0x0);
    local_88 = local_30;
  }
  *puVar2 = &PTR__AccessibilityHandler_00706fc8;
  puVar2[1] = param_2;
  puVar2[2] = *(undefined8 *)(*param_2 + -8);
  *(undefined4 *)(puVar2 + 3) = 0xb;
  puVar5 = puVar2 + 5;
  if (local_a0 == (undefined4 *)0x0) {
    puVar2[6] = 0;
    puVar2[7] = puVar5;
    puVar2[8] = puVar5;
    puVar3 = puVar2 + 9;
    uVar4 = 0;
  }
  else {
    puVar3 = &local_88;
    puVar2[6] = local_a0;
    puVar2[7] = local_98;
    puVar2[8] = local_90;
    *(undefined8 **)(local_a0 + 2) = puVar5;
    puVar2[9] = local_88;
    local_a0 = (undefined4 *)0x0;
    uVar4 = local_a8[0];
    local_98 = local_a8;
    local_90 = local_a8;
  }
  *puVar3 = 0;
  *(undefined4 *)(puVar2 + 5) = uVar4;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  *param_1 = puVar2;
                    /* try { // try from 00280dfe to 00280e02 has its CatchHandler @ 00280e57 */
  std::
  _Rb_tree<juce::AccessibilityActionType,std::pair<juce::AccessibilityActionType_const,std::function<void()>>,std::_Select1st<std::pair<juce::AccessibilityActionType_const,std::function<void()>>>,std::less<juce::AccessibilityActionType>,std::allocator<std::pair<juce::AccessibilityActionType_const,std::function<void()>>>>
  ::_M_erase(local_a0);
  if (local_70 != (code *)0x0) {
                    /* try { // try from 00280e0d to 00280e1b has its CatchHandler @ 00280e3a */
    (*local_70)(&local_80,&local_80,3);
  }
                    /* try { // try from 00280e21 to 00280e25 has its CatchHandler @ 00280e4f */
  std::
  _Rb_tree<juce::AccessibilityActionType,std::pair<juce::AccessibilityActionType_const,std::function<void()>>,std::_Select1st<std::pair<juce::AccessibilityActionType_const,std::function<void()>>>,std::less<juce::AccessibilityActionType>,std::allocator<std::pair<juce::AccessibilityActionType_const,std::function<void()>>>>
  ::_M_erase(local_48);
  return param_1;
}


