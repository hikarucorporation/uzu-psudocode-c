// Function : createAccessibilityHandler
// Namespace: juce:Slider
// Entry    : 002e4370
// Prototype: undefined8 * createAccessibilityHandler(undefined8 * param_1, long * param_2)
// Body     : 002e4370 - 002e4452


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::Slider::createAccessibilityHandler() */

undefined8 * __cdecl juce::Slider::createAccessibilityHandler(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 local_20;
  
  puVar1 = operator_new(0x80);
  local_30 = &uStack_40;
  uStack_40 = 0;
  local_38 = 0;
  local_20 = 0;
  local_28 = local_30;
                    /* try { // try from 002e43b4 to 002e43bd has its CatchHandler @ 002e4453 */
  puVar2 = operator_new(0x18);
  *puVar2 = &PTR__AccessibilityValueInterface_00710530;
  puVar2[1] = param_2;
  *(bool *)(puVar2 + 2) = *(int *)(param_2[0x34] + 0x20) - 9U < 2;
  *puVar1 = &PTR__AccessibilityHandler_00706fc8;
  puVar1[1] = param_2;
  puVar1[2] = *(undefined8 *)(*param_2 + -8);
  *(undefined4 *)(puVar1 + 3) = 5;
  puVar1[6] = 0;
  puVar1[7] = puVar1 + 5;
  puVar1[8] = puVar1 + 5;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  puVar1[10] = puVar2;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  *puVar1 = &PTR__AccessibilityHandler_007104d8;
  puVar1[0xf] = param_2;
  *param_1 = puVar1;
  return param_1;
}


