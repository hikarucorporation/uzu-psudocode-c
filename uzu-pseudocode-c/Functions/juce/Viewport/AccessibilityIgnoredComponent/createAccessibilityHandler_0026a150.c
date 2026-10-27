// Function : createAccessibilityHandler
// Namespace: juce:Viewport:AccessibilityIgnoredComponent
// Entry    : 0026a150
// Prototype: undefined8 * createAccessibilityHandler(undefined8 * param_1, long * param_2)
// Body     : 0026a150 - 0026a1ef


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::Viewport::AccessibilityIgnoredComponent::createAccessibilityHandler() */

undefined8 * __cdecl
juce::Viewport::AccessibilityIgnoredComponent::createAccessibilityHandler
          (undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x78);
  *puVar1 = &PTR__AccessibilityHandler_00706fc8;
  puVar1[1] = param_2;
  puVar1[2] = *(undefined8 *)(*param_2 + -8);
  *(undefined4 *)(puVar1 + 3) = 0x1d;
  puVar1[6] = 0;
  puVar1[7] = puVar1 + 5;
  puVar1[8] = puVar1 + 5;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  *param_1 = puVar1;
  return param_1;
}


