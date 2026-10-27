// Function : getTitle
// Namespace: juce:ComboBoxAccessibilityHandler
// Entry    : 002dd420
// Prototype: long * getTitle(long * param_1, long param_2)
// Body     : 002dd420 - 002dd442


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::ComboBoxAccessibilityHandler::getTitle() const */

long * __cdecl juce::ComboBoxAccessibilityHandler::getTitle(long *param_1,long param_2)

{
  long lVar1;
  int *piVar2;
  
  lVar1 = *(long *)(*(long *)(param_2 + 0x78) + 0x18);
  *param_1 = lVar1;
  piVar2 = (int *)(lVar1 + -0x10);
  if (piVar2 != &emptyString) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  return param_1;
}


