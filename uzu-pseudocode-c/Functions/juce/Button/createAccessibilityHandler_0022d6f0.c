// Function : createAccessibilityHandler
// Namespace: juce:Button
// Entry    : 0022d6f0
// Prototype: undefined8 * createAccessibilityHandler(undefined8 * param_1, long * param_2)
// Body     : 0022d6f0 - 0022d972


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::Button::createAccessibilityHandler() */

undefined8 * __cdecl juce::Button::createAccessibilityHandler(undefined8 *param_1,long *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *local_b8;
  undefined8 uStack_b0;
  code *local_a8;
  code *local_a0;
  code *local_98;
  undefined8 local_90;
  AccessibilityActions local_80 [8];
  undefined4 local_78 [2];
  undefined4 *local_70;
  undefined4 *local_68;
  undefined4 *puStack_60;
  undefined8 local_58;
  long *local_50;
  undefined8 local_48;
  code *local_40;
  code *local_38;
  AccessibilityActions *local_30;
  
  puVar3 = operator_new(0x80);
  iVar1 = *(int *)((long)param_2 + 0x1ac);
  local_a0 = (code *)&uStack_b0;
  local_b8 = (long *)0x0;
  uStack_b0 = 0;
  local_a8 = (code *)0x0;
  local_90 = 0;
  local_48 = 0;
  local_38 = std::
             _Function_handler<void(),juce::detail::ButtonAccessibilityHandler::getAccessibilityActions(juce::Button&)::{lambda()#1}>
             ::_M_invoke;
  local_40 = std::
             _Function_handler<void(),juce::detail::ButtonAccessibilityHandler::getAccessibilityActions(juce::Button&)::{lambda()#1}>
             ::_M_manager;
                    /* try { // try from 0022d76c to 0022d7c7 has its CatchHandler @ 0022d9d8 */
  local_98 = local_a0;
  local_50 = param_2;
  AccessibilityActions::addAction((AccessibilityActions *)&local_b8,0,&local_50);
  local_68 = local_78;
  local_78[0] = 0;
  local_70 = (undefined4 *)0x0;
  local_58 = 0;
  puStack_60 = local_68;
  if (local_a8 != (code *)0x0) {
    local_30 = local_80;
    local_70 = std::
               _Rb_tree<juce::AccessibilityActionType,std::pair<juce::AccessibilityActionType_const,std::function<void()>>,std::_Select1st<std::pair<juce::AccessibilityActionType_const,std::function<void()>>>,std::less<juce::AccessibilityActionType>,std::allocator<std::pair<juce::AccessibilityActionType_const,std::function<void()>>>>
               ::
               _M_copy<false,std::_Rb_tree<juce::AccessibilityActionType,std::pair<juce::AccessibilityActionType_const,std::function<void()>>,std::_Select1st<std::pair<juce::AccessibilityActionType_const,std::function<void()>>>,std::less<juce::AccessibilityActionType>,std::allocator<std::pair<juce::AccessibilityActionType_const,std::function<void()>>>>::_Alloc_node>
                         ((undefined4 *)local_a8,local_68,&local_30);
    puVar2 = local_70;
    do {
      local_68 = puVar2;
      puVar2 = *(undefined4 **)(local_68 + 4);
    } while (*(undefined4 **)(local_68 + 4) != (undefined4 *)0x0);
    puVar2 = local_70;
    do {
      puStack_60 = puVar2;
      puVar2 = *(undefined4 **)(puStack_60 + 6);
    } while (*(undefined4 **)(puStack_60 + 6) != (undefined4 *)0x0);
    local_58 = local_90;
  }
  if (local_40 != (code *)0x0) {
                    /* try { // try from 0022d81a to 0022d828 has its CatchHandler @ 0022d9c8 */
    (*local_40)(&local_50,&local_50,3);
  }
                    /* try { // try from 0022d82e to 0022d832 has its CatchHandler @ 0022d9d0 */
  std::
  _Rb_tree<juce::AccessibilityActionType,std::pair<juce::AccessibilityActionType_const,std::function<void()>>,std::_Select1st<std::pair<juce::AccessibilityActionType_const,std::function<void()>>>,std::less<juce::AccessibilityActionType>,std::allocator<std::pair<juce::AccessibilityActionType_const,std::function<void()>>>>
  ::_M_erase(local_a8);
  if ((char)param_2[0x3e] != '\0' || *(char *)((long)param_2 + 0x1f2) != '\0') {
    uStack_b0 = 0;
    local_a0 = std::
               _Function_handler<void(),juce::detail::ButtonAccessibilityHandler::getAccessibilityActions(juce::Button&)::{lambda()#2}>
               ::_M_invoke;
    local_a8 = std::
               _Function_handler<void(),juce::detail::ButtonAccessibilityHandler::getAccessibilityActions(juce::Button&)::{lambda()#2}>
               ::_M_manager;
                    /* try { // try from 0022d866 to 0022d877 has its CatchHandler @ 0022d992 */
    local_b8 = param_2;
    AccessibilityActions::addAction(local_80,1,&local_b8);
    if (local_a8 != (code *)0x0) {
                    /* try { // try from 0022d882 to 0022d88e has its CatchHandler @ 0022d973 */
      (*local_a8)(&local_b8,&local_b8,3);
    }
  }
  if ((char)param_2[0x3e] == '\0' && *(char *)((long)param_2 + 0x1f2) == '\0') {
    puVar4 = (undefined8 *)0x0;
  }
  else {
                    /* try { // try from 0022d89d to 0022d8a6 has its CatchHandler @ 0022d97b */
    puVar4 = operator_new(0x10);
    *puVar4 = &PTR__AccessibilityValueInterface_0070e0a8;
    puVar4[1] = param_2;
  }
  *puVar3 = &PTR__AccessibilityHandler_00706fc8;
  puVar3[1] = param_2;
  puVar3[2] = *(undefined8 *)(*param_2 + -8);
  *(uint *)(puVar3 + 3) = (uint)(iVar1 != 0) * 2;
  puVar6 = puVar3 + 5;
  if (local_70 == (undefined4 *)0x0) {
    puVar3[6] = 0;
    puVar3[7] = puVar6;
    puVar3[8] = puVar6;
    puVar5 = puVar3 + 9;
    local_78[0] = 0;
  }
  else {
    puVar5 = &local_58;
    puVar3[6] = local_70;
    puVar3[7] = local_68;
    puVar3[8] = puStack_60;
    *(undefined8 **)(local_70 + 2) = puVar6;
    puVar3[9] = local_58;
  }
  *puVar5 = 0;
  *(undefined4 *)(puVar3 + 5) = local_78[0];
  puVar3[10] = puVar4;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  puVar3[0xe] = 0;
  *puVar3 = &PTR__AccessibilityHandler_0070e030;
  puVar3[0xf] = param_2;
  *param_1 = puVar3;
  return param_1;
}


