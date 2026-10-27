// Function : createAccessibilityHandler
// Namespace: juce:Label
// Entry    : 00282f40
// Prototype: undefined8 * createAccessibilityHandler(undefined8 * param_1, long * param_2)
// Body     : 00282f40 - 0028318b


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::Label::createAccessibilityHandler() */

undefined8 * __cdecl juce::Label::createAccessibilityHandler(undefined8 *param_1,long *param_2)

{
  bool bVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *puStack_a8;
  undefined8 local_a0 [2];
  long *local_90;
  undefined8 local_88;
  code *local_80;
  code *local_78;
  undefined1 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 local_40;
  
  puVar3 = operator_new(0x80);
  bVar1 = (char)param_2[0x42] == '\0';
  bVar2 = *(char *)((long)param_2 + 0x211) == '\0';
  if (bVar1 && bVar2) {
    local_b0 = &uStack_c0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = (undefined8 *)0x0;
    local_a0[0] = 0;
    puStack_a8 = local_b0;
  }
  else {
    local_50 = &uStack_60;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = (undefined4 *)0x0;
    local_40 = 0;
    local_88 = 0;
    local_78 = std::
               _Function_handler<void(),juce::LabelAccessibilityHandler::getAccessibilityActions(juce::Label&)::{lambda()#1}>
               ::_M_invoke;
    local_80 = std::
               _Function_handler<void(),juce::LabelAccessibilityHandler::getAccessibilityActions(juce::Label&)::{lambda()#1}>
               ::_M_manager;
                    /* try { // try from 00282fd7 to 0028302c has its CatchHandler @ 0028319c */
    local_90 = param_2;
    local_48 = local_50;
    AccessibilityActions::addAction((AccessibilityActions *)&local_68,0,&local_90);
    local_b0 = &uStack_c0;
    uStack_c0 = (ulong)uStack_c0._4_4_ << 0x20;
    local_b8 = (undefined8 *)0x0;
    local_a0[0] = 0;
    puStack_a8 = local_b0;
    if (local_58 != (undefined4 *)0x0) {
      local_70 = (undefined1 *)&local_c8;
      local_b8 = (undefined8 *)
                 std::
                 _Rb_tree<juce::AccessibilityActionType,std::pair<juce::AccessibilityActionType_const,std::function<void()>>,std::_Select1st<std::pair<juce::AccessibilityActionType_const,std::function<void()>>>,std::less<juce::AccessibilityActionType>,std::allocator<std::pair<juce::AccessibilityActionType_const,std::function<void()>>>>
                 ::
                 _M_copy<false,std::_Rb_tree<juce::AccessibilityActionType,std::pair<juce::AccessibilityActionType_const,std::function<void()>>,std::_Select1st<std::pair<juce::AccessibilityActionType_const,std::function<void()>>>,std::less<juce::AccessibilityActionType>,std::allocator<std::pair<juce::AccessibilityActionType_const,std::function<void()>>>>::_Alloc_node>
                           (local_58,local_b0,&local_70);
      puVar4 = local_b8;
      do {
        local_b0 = puVar4;
        puVar4 = (undefined8 *)local_b0[2];
      } while ((undefined8 *)local_b0[2] != (undefined8 *)0x0);
      puVar4 = local_b8;
      do {
        puStack_a8 = puVar4;
        puVar4 = (undefined8 *)puStack_a8[3];
      } while ((undefined8 *)puStack_a8[3] != (undefined8 *)0x0);
      local_a0[0] = local_40;
    }
    if (local_80 != (code *)0x0) {
                    /* try { // try from 0028307d to 0028308b has its CatchHandler @ 0028318c */
      (*local_80)(&local_90,&local_90,3);
    }
                    /* try { // try from 00283091 to 00283095 has its CatchHandler @ 00283194 */
    std::
    _Rb_tree<juce::AccessibilityActionType,std::pair<juce::AccessibilityActionType_const,std::function<void()>>,std::_Select1st<std::pair<juce::AccessibilityActionType_const,std::function<void()>>>,std::less<juce::AccessibilityActionType>,std::allocator<std::pair<juce::AccessibilityActionType_const,std::function<void()>>>>
    ::_M_erase(local_58);
  }
                    /* try { // try from 002830c0 to 002830c9 has its CatchHandler @ 002831d4 */
  puVar4 = operator_new(0x10);
  *puVar4 = &PTR__AccessibilityValueInterface_00710160;
  puVar4[1] = param_2;
  *puVar3 = &PTR__AccessibilityHandler_00706fc8;
  puVar3[1] = param_2;
  puVar3[2] = *(undefined8 *)(*param_2 + -8);
  *(uint *)(puVar3 + 3) = (uint)(!bVar1 || !bVar2) * 2 + 6;
  puVar5 = puVar3 + 5;
  if (local_b8 == (undefined8 *)0x0) {
    puVar3[6] = 0;
    puVar3[7] = puVar5;
    puVar3[8] = puVar5;
    puVar5 = puVar3 + 9;
    uStack_c0._0_4_ = 0;
  }
  else {
    puVar3[6] = local_b8;
    puVar3[7] = local_b0;
    puVar3[8] = puStack_a8;
    local_b8[1] = puVar5;
    puVar5 = local_a0;
    puVar3[9] = local_a0[0];
  }
  *puVar5 = 0;
  *(undefined4 *)(puVar3 + 5) = (undefined4)uStack_c0;
  puVar3[10] = puVar4;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  puVar3[0xe] = 0;
  *puVar3 = &PTR__AccessibilityHandler_007100f8;
  puVar3[0xf] = param_2;
  *param_1 = puVar3;
  return param_1;
}


