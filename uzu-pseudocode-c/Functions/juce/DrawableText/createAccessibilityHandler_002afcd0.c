// Function : createAccessibilityHandler
// Namespace: juce:DrawableText
// Entry    : 002afcd0
// Prototype: undefined8 * createAccessibilityHandler(undefined8 * param_1, long * param_2)
// Body     : 002afcd0 - 002afd73


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::DrawableText::createAccessibilityHandler() */

undefined8 * __cdecl
juce::DrawableText::createAccessibilityHandler(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x80);
  puVar1[1] = param_2;
  puVar1[2] = *(undefined8 *)(*param_2 + -8);
  *(undefined4 *)(puVar1 + 3) = 7;
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
  *puVar1 = &PTR__AccessibilityHandler_0070e318;
  puVar1[0xf] = param_2;
  *param_1 = puVar1;
  return param_1;
}


