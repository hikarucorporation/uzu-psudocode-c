// Function : createKeyboardFocusTraverser
// Namespace: juce:Component
// Entry    : 00223bf0
// Prototype: undefined8 * createKeyboardFocusTraverser(undefined8 * param_1, long param_2)
// Body     : 00223bf0 - 00223c34


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::Component::createKeyboardFocusTraverser() */

undefined8 * __cdecl juce::Component::createKeyboardFocusTraverser(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  
  if (((*(ushort *)(param_2 + 0xe8) & 0x80) == 0) && (*(long **)(param_2 + 0x30) != (long *)0x0)) {
    (**(code **)(**(long **)(param_2 + 0x30) + 0xd8))(param_1);
    return param_1;
  }
  puVar1 = operator_new(8);
  *puVar1 = &PTR__ComponentTraverser_0070d138;
  *param_1 = puVar1;
  return param_1;
}


