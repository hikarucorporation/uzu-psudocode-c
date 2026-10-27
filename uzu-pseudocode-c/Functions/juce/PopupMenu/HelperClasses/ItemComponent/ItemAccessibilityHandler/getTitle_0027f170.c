// Function : getTitle
// Namespace: juce:PopupMenu:HelperClasses:ItemComponent:ItemAccessibilityHandler
// Entry    : 0027f170
// Prototype: long * getTitle(long * param_1, long param_2)
// Body     : 0027f170 - 0027f195


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::PopupMenu::HelperClasses::ItemComponent::ItemAccessibilityHandler::getTitle() const */

long * __cdecl
juce::PopupMenu::HelperClasses::ItemComponent::ItemAccessibilityHandler::getTitle
          (long *param_1,long param_2)

{
  long lVar1;
  int *piVar2;
  
  lVar1 = *(long *)(*(long *)(param_2 + 0x78) + 0xf0);
  *param_1 = lVar1;
  piVar2 = (int *)(lVar1 + -0x10);
  if (piVar2 != &emptyString) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  return param_1;
}


