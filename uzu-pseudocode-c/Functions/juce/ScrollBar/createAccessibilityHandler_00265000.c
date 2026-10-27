// Function : createAccessibilityHandler
// Namespace: juce:ScrollBar
// Entry    : 00265000
// Prototype: undefined8 * createAccessibilityHandler(undefined8 * param_1, long * param_2)
// Body     : 00265000 - 0026510c


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::ScrollBar::createAccessibilityHandler() */

undefined8 * __cdecl juce::ScrollBar::createAccessibilityHandler(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_40 [2];
  undefined8 local_38;
  undefined4 *local_30;
  undefined4 *local_28;
  undefined8 local_20;
  
  local_80 = &uStack_90;
  uStack_90 = 0;
  local_88 = 0;
  local_70 = 0;
  local_78 = local_80;
                    /* try { // try from 0026503a to 00265043 has its CatchHandler @ 00265129 */
  puVar1 = operator_new(0x10);
  *puVar1 = &PTR__AccessibilityValueInterface_0070e5d0;
  puVar1[1] = param_2;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_68 = puVar1;
                    /* try { // try from 0026506b to 00265074 has its CatchHandler @ 00265115 */
  puVar2 = operator_new(0x78);
  local_30 = local_40;
  local_38 = 0;
  local_20 = 0;
  local_40[0] = 0;
  *puVar2 = &PTR__AccessibilityHandler_00706fc8;
  puVar2[1] = param_2;
  puVar2[2] = *(undefined8 *)(*param_2 + -8);
  *(undefined4 *)(puVar2 + 3) = 0x1a;
  puVar2[6] = 0;
  puVar2[7] = puVar2 + 5;
  puVar2[8] = puVar2 + 5;
  puVar2[9] = 0;
  *(undefined4 *)(puVar2 + 5) = 0;
  puVar2[10] = puVar1;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  *param_1 = puVar2;
  local_28 = local_30;
                    /* try { // try from 002650f6 to 002650fc has its CatchHandler @ 0026510d */
  std::
  _Rb_tree<juce::AccessibilityActionType,std::pair<juce::AccessibilityActionType_const,std::function<void()>>,std::_Select1st<std::pair<juce::AccessibilityActionType_const,std::function<void()>>>,std::less<juce::AccessibilityActionType>,std::allocator<std::pair<juce::AccessibilityActionType_const,std::function<void()>>>>
  ::_M_erase((void *)0x0);
  return param_1;
}


