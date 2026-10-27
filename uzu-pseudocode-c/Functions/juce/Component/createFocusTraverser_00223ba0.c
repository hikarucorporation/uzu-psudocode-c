// Function : createFocusTraverser
// Namespace: juce:Component
// Entry    : 00223ba0
// Prototype: undefined8 * createFocusTraverser(undefined8 * param_1, long param_2)
// Body     : 00223ba0 - 00223bea


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::Component::createFocusTraverser() */

undefined8 * __cdecl juce::Component::createFocusTraverser(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  
  if (((*(ushort *)(param_2 + 0xe8) & 0x40) == 0) && (*(long **)(param_2 + 0x30) != (long *)0x0)) {
    (**(code **)(**(long **)(param_2 + 0x30) + 0xd0))(param_1);
    return param_1;
  }
  puVar1 = operator_new(0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  *puVar1 = &PTR__ComponentTraverser_00707a20;
  *param_1 = puVar1;
  return param_1;
}


