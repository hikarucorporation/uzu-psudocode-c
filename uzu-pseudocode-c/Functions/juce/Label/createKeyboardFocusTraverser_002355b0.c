// Function : createKeyboardFocusTraverser
// Namespace: juce:Label
// Entry    : 002355b0
// Prototype: undefined8 * createKeyboardFocusTraverser(undefined8 * param_1, undefined8 param_2)
// Body     : 002355b0 - 002355df


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::Label::createKeyboardFocusTraverser() */

undefined8 * __cdecl
juce::Label::createKeyboardFocusTraverser(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x10);
  *puVar1 = &PTR__ComponentTraverser_007100a0;
  puVar1[1] = param_2;
  *param_1 = puVar1;
  return param_1;
}


