// Function : getTitle
// Namespace: juce:DrawableText:createAccessibilityHandler__:DrawableTextAccessibilityHandler
// Entry    : 002b0f20
// Prototype: long * getTitle(long * param_1, long param_2)
// Body     : 002b0f20 - 002b0f45


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* getTitle() const */

long * __cdecl
juce::DrawableText::createAccessibilityHandler()::DrawableTextAccessibilityHandler::getTitle
          (long *param_1,long param_2)

{
  long lVar1;
  int *piVar2;
  
  lVar1 = *(long *)(*(long *)(param_2 + 0x78) + 400);
  *param_1 = lVar1;
  piVar2 = (int *)(lVar1 + -0x10);
  if (piVar2 != &emptyString) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  return param_1;
}


