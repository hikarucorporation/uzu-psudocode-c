// Function : getHelp
// Namespace: juce:AccessibilityHandler
// Entry    : 002241c0
// Prototype: long * getHelp(long * param_1, long param_2)
// Body     : 002241c0 - 002241e2


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::AccessibilityHandler::getHelp() const */

long * __cdecl juce::AccessibilityHandler::getHelp(long *param_1,long param_2)

{
  long lVar1;
  int *piVar2;
  
  lVar1 = *(long *)(*(long *)(param_2 + 8) + 0x28);
  *param_1 = lVar1;
  piVar2 = (int *)(lVar1 + -0x10);
  if (piVar2 != &emptyString) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  return param_1;
}


