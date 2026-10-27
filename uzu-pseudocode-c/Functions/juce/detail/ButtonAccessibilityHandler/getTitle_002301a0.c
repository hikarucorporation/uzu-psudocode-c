// Function : getTitle
// Namespace: juce:detail:ButtonAccessibilityHandler
// Entry    : 002301a0
// Prototype: long * getTitle(long * param_1, long param_2)
// Body     : 002301a0 - 00230210


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::detail::ButtonAccessibilityHandler::getTitle() const */

long * __cdecl juce::detail::ButtonAccessibilityHandler::getTitle(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  int *piVar4;
  
  pcVar3 = *(char **)(*(long *)(param_2 + 8) + 0x18);
  piVar4 = (int *)(pcVar3 + -0x10);
  if (piVar4 != &emptyString) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  if (*pcVar3 == '\0') {
    lVar2 = *(long *)(*(long *)(param_2 + 0x78) + 0x158);
    *param_1 = lVar2;
    piVar4 = (int *)(lVar2 + -0x10);
    if (piVar4 != &emptyString) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      UNLOCK();
    }
  }
  else {
    *param_1 = (long)pcVar3;
    pcVar3 = "";
  }
  piVar4 = (int *)(pcVar3 + -0x10);
  if (piVar4 != &emptyString) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar4);
      return param_1;
    }
  }
  return param_1;
}


