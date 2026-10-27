// Function : createAccessibilityHandler
// Namespace: juce:ComboBox
// Entry    : 002dbe80
// Prototype: undefined8 * createAccessibilityHandler(undefined8 * param_1, long * param_2)
// Body     : 002dbe80 - 002dc0e6


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::ComboBox::createAccessibilityHandler() */

undefined8 * __cdecl juce::ComboBox::createAccessibilityHandler(undefined8 *param_1,long *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_c8 [8];
  undefined4 local_c0 [2];
  undefined4 *local_b8;
  undefined4 *local_b0;
  undefined4 *puStack_a8;
  undefined8 local_a0;
  long *local_98;
  undefined8 local_90;
  code *local_88;
  code *local_80;
  long *local_78;
  undefined8 local_70;
  code *local_68;
  code *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 local_30;
  undefined1 *local_28;
  
  puVar2 = operator_new(0x80);
  local_40 = &uStack_50;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = (undefined4 *)0x0;
  local_30 = 0;
  local_70 = 0;
  local_60 = std::
             _Function_handler<void(),juce::ComboBoxAccessibilityHandler::getAccessibilityActions(juce::ComboBox&)::{lambda()#1}>
             ::_M_invoke;
  local_68 = std::
             _Function_handler<void(),juce::ComboBoxAccessibilityHandler::getAccessibilityActions(juce::ComboBox&)::{lambda()#1}>
             ::_M_manager;
                    /* try { // try from 002dbeff to 002dbf0f has its CatchHandler @ 002dc116 */
  local_78 = param_2;
  local_38 = local_40;
  AccessibilityActions::addAction((AccessibilityActions *)&local_58,0,&local_78);
  local_90 = 0;
  local_80 = std::
             _Function_handler<void(),juce::ComboBoxAccessibilityHandler::getAccessibilityActions(juce::ComboBox&)::{lambda()#2}>
             ::_M_invoke;
  local_88 = std::
             _Function_handler<void(),juce::ComboBoxAccessibilityHandler::getAccessibilityActions(juce::ComboBox&)::{lambda()#2}>
             ::_M_manager;
                    /* try { // try from 002dbf36 to 002dbf97 has its CatchHandler @ 002dc11b */
  local_98 = param_2;
  AccessibilityActions::addAction((AccessibilityActions *)&local_58,3,&local_98);
  local_b0 = local_c0;
  local_c0[0] = 0;
  local_b8 = (undefined4 *)0x0;
  local_a0 = 0;
  puStack_a8 = local_b0;
  if (local_48 != (undefined4 *)0x0) {
    local_28 = auStack_c8;
    local_b8 = std::
               _Rb_tree<juce::AccessibilityActionType,std::pair<juce::AccessibilityActionType_const,std::function<void()>>,std::_Select1st<std::pair<juce::AccessibilityActionType_const,std::function<void()>>>,std::less<juce::AccessibilityActionType>,std::allocator<std::pair<juce::AccessibilityActionType_const,std::function<void()>>>>
               ::
               _M_copy<false,std::_Rb_tree<juce::AccessibilityActionType,std::pair<juce::AccessibilityActionType_const,std::function<void()>>,std::_Select1st<std::pair<juce::AccessibilityActionType_const,std::function<void()>>>,std::less<juce::AccessibilityActionType>,std::allocator<std::pair<juce::AccessibilityActionType_const,std::function<void()>>>>::_Alloc_node>
                         (local_48,local_b0,&local_28);
    puVar1 = local_b8;
    do {
      local_b0 = puVar1;
      puVar1 = *(undefined4 **)(local_b0 + 4);
    } while (*(undefined4 **)(local_b0 + 4) != (undefined4 *)0x0);
    puVar1 = local_b8;
    do {
      puStack_a8 = puVar1;
      puVar1 = *(undefined4 **)(puStack_a8 + 6);
    } while (*(undefined4 **)(puStack_a8 + 6) != (undefined4 *)0x0);
    local_a0 = local_30;
  }
  if (local_88 != (code *)0x0) {
                    /* try { // try from 002dbfed to 002dbffb has its CatchHandler @ 002dc0ef */
    (*local_88)(&local_98,&local_98,3);
  }
  if (local_68 != (code *)0x0) {
                    /* try { // try from 002dc006 to 002dc014 has its CatchHandler @ 002dc0e7 */
    (*local_68)(&local_78,&local_78,3);
  }
                    /* try { // try from 002dc01d to 002dc021 has its CatchHandler @ 002dc10e */
  std::
  _Rb_tree<juce::AccessibilityActionType,std::pair<juce::AccessibilityActionType_const,std::function<void()>>,std::_Select1st<std::pair<juce::AccessibilityActionType_const,std::function<void()>>>,std::less<juce::AccessibilityActionType>,std::allocator<std::pair<juce::AccessibilityActionType_const,std::function<void()>>>>
  ::_M_erase(local_48);
                    /* try { // try from 002dc022 to 002dc02b has its CatchHandler @ 002dc0f7 */
  puVar3 = operator_new(0x10);
  *puVar3 = &PTR__AccessibilityValueInterface_00710038;
  puVar3[1] = param_2;
  *puVar2 = &PTR__AccessibilityHandler_00706fc8;
  puVar2[1] = param_2;
  puVar2[2] = *(undefined8 *)(*param_2 + -8);
  *(undefined4 *)(puVar2 + 3) = 3;
  puVar5 = puVar2 + 5;
  if (local_b8 == (undefined4 *)0x0) {
    puVar2[6] = 0;
    puVar2[7] = puVar5;
    puVar2[8] = puVar5;
    puVar4 = puVar2 + 9;
    local_c0[0] = 0;
  }
  else {
    puVar4 = &local_a0;
    puVar2[6] = local_b8;
    puVar2[7] = local_b0;
    puVar2[8] = puStack_a8;
    *(undefined8 **)(local_b8 + 2) = puVar5;
    puVar2[9] = local_a0;
  }
  *puVar4 = 0;
  *(undefined4 *)(puVar2 + 5) = local_c0[0];
  puVar2[10] = puVar3;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  *puVar2 = &PTR__AccessibilityHandler_0070ffc0;
  puVar2[0xf] = param_2;
  *param_1 = puVar2;
  return param_1;
}


