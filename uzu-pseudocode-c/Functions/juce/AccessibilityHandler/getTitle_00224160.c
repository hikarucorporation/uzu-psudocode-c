// Function : getTitle
// Namespace: juce:AccessibilityHandler
// Entry    : 00224160
// Prototype: long * getTitle(long * param_1, long param_2)
// Body     : 00224160 - 00224182


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::AccessibilityHandler::getTitle() const */

long * __cdecl juce::AccessibilityHandler::getTitle(long *param_1,long param_2)

{
  long lVar1;
  int *piVar2;
  
  lVar1 = *(long *)(*(long *)(param_2 + 8) + 0x18);
  *param_1 = lVar1;
  piVar2 = (int *)(lVar1 + -0x10);
  if (piVar2 != &emptyString) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  return param_1;
}


