// Function : getMouseCursor
// Namespace: juce:Component
// Entry    : 00223d30
// Prototype: undefined8 * getMouseCursor(undefined8 * param_1, long param_2)
// Body     : 00223d30 - 00223d5d


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::Component::getMouseCursor() */

undefined8 * __cdecl juce::Component::getMouseCursor(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = *(undefined8 *)(param_2 + 0x70);
  lVar1 = *(long *)(param_2 + 0x78);
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    if (*PTR___libc_single_threaded_00715c50 != '\0') {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      return param_1;
    }
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}


