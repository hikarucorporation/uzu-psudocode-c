// Function : getParent
// Namespace: juce:AccessibilityHandler
// Entry    : 00220620
// Prototype: AccessibilityHandler * getParent(AccessibilityHandler * this)
// Body     : 00220620 - 002206bc


/* juce::AccessibilityHandler::getParent() const */

AccessibilityHandler * __thiscall juce::AccessibilityHandler::getParent(AccessibilityHandler *this)

{
  Component *pCVar1;
  AccessibilityHandler *this_00;
  ulong uVar2;
  AccessibilityHandler *pAVar3;
  Component *this_01;
  
  pCVar1 = *(Component **)(this + 0x30);
  do {
    this_01 = pCVar1;
    if (this_01 == (Component *)0x0) {
      return (AccessibilityHandler *)0x0;
    }
  } while (((*(ushort *)(this_01 + 0xe8) & 0x40) == 0) &&
          (pCVar1 = *(Component **)(this_01 + 0x30),
          *(Component **)(this_01 + 0x30) != (Component *)0x0));
  while (this_00 = (AccessibilityHandler *)Component::getAccessibilityHandler(this_01),
        this_00 == (AccessibilityHandler *)0x0) {
    this_01 = *(Component **)(this_01 + 0x30);
    if (this_01 == (Component *)0x0) {
      return (AccessibilityHandler *)0x0;
    }
  }
  do {
    if (((*(int *)(this_00 + 0x18) != 0x1d) &&
        (uVar2 = (**(code **)(*(long *)this_00 + 0x28))(this_00), (uVar2 & 0x80) == 0)) &&
       (uVar2 = isVisibleWithinParent(this_00), (char)uVar2 != '\0')) {
      return this_00;
    }
    pAVar3 = getParent(*(AccessibilityHandler **)(this_00 + 8));
    if (pAVar3 == (AccessibilityHandler *)0x0) {
      return this_00;
    }
    this_00 = getParent(*(AccessibilityHandler **)(this_00 + 8));
  } while (this_00 != (AccessibilityHandler *)0x0);
  return (AccessibilityHandler *)0x0;
}


