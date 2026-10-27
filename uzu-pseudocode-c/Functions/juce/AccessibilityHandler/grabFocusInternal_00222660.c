// Function : grabFocusInternal
// Namespace: juce:AccessibilityHandler
// Entry    : 00222660
// Prototype: undefined grabFocusInternal(AccessibilityHandler * this, char param_1)
// Body     : 00222660 - 0022285f


/* juce::AccessibilityHandler::grabFocusInternal(bool) */

void __thiscall
juce::AccessibilityHandler::grabFocusInternal(AccessibilityHandler *this,char param_1)

{
  bool bVar1;
  Component *pCVar2;
  uint uVar3;
  long *in_RAX;
  ulong uVar4;
  AccessibilityHandler *pAVar5;
  Component *pCVar6;
  AccessibilityHandler *pAVar7;
  long *local_28;
  
  local_28 = in_RAX;
  uVar4 = (**(code **)(*(long *)this + 0x28))();
  if ((((uVar4 & 0x20) != 0) && (*(int *)(this + 0x18) != 0x1d)) &&
     (uVar4 = (**(code **)(*(long *)this + 0x28))(this), (uVar4 & 0x80) == 0)) {
    currentlyFocusedHandler = this;
    uVar3 = Component::isShowing(*(Component **)(this + 8));
    pCVar6 = *(Component **)(this + 8);
    if (((char)uVar3 == '\0') && ((*(uint3 *)(pCVar6 + 0xe8) & 1) == 0)) {
      return;
    }
    pCVar2 = Component::currentlyFocusedComponent;
    if ((*(uint3 *)(pCVar6 + 0xe8) & 0x8020) != 0x20) {
      return;
    }
    while( true ) {
      if (pCVar2 == pCVar6) {
        return;
      }
      if (pCVar2 == (Component *)0x0) break;
      pCVar2 = *(Component **)(pCVar2 + 0x30);
    }
    Component::grabKeyboardFocusInternal(pCVar6,2,'\x01',0);
    return;
  }
  pAVar5 = currentlyFocusedHandler;
  while (pAVar5 != (AccessibilityHandler *)0x0) {
                    /* try { // try from 00222719 to 0022271d has its CatchHandler @ 00222888 */
    pAVar5 = getParent(*(AccessibilityHandler **)(pAVar5 + 8));
    if (pAVar5 == this) {
      return;
    }
  }
  (**(code **)(**(long **)(this + 8) + 0xd0))(&local_28);
  if (local_28 != (long *)0x0) {
                    /* try { // try from 0022274c to 0022274e has its CatchHandler @ 00222862 */
    for (pCVar6 = (Component *)(**(code **)(*local_28 + 0x10))(); pCVar6 != (Component *)0x0;
        pCVar6 = *(Component **)(pCVar6 + 0x30)) {
                    /* try { // try from 00222760 to 00222767 has its CatchHandler @ 0022286c */
      pAVar5 = (AccessibilityHandler *)Component::getAccessibilityHandler(pCVar6);
      if (pAVar5 != (AccessibilityHandler *)0x0) goto LAB_002227b1;
    }
    goto LAB_00222779;
  }
  goto LAB_0022281a;
                    /* try { // try from 002227a4 to 002227d9 has its CatchHandler @ 0022286e */
  while (pAVar5 = getParent(*(AccessibilityHandler **)(pAVar5 + 8)),
        pAVar5 != (AccessibilityHandler *)0x0) {
LAB_002227b1:
    if ((((*(int *)(pAVar5 + 0x18) != 0x1d) &&
         (uVar4 = (**(code **)(*(long *)pAVar5 + 0x28))(pAVar5), (uVar4 & 0x80) == 0)) &&
        (uVar4 = isVisibleWithinParent(pAVar5), (char)uVar4 != '\0')) ||
       (pAVar7 = getParent(*(AccessibilityHandler **)(pAVar5 + 8)),
       pAVar7 == (AccessibilityHandler *)0x0)) {
      pAVar7 = pAVar5;
      goto LAB_002227f0;
    }
  }
LAB_00222779:
  bVar1 = false;
  goto LAB_0022277b;
                    /* try { // try from 002227f9 to 002227fd has its CatchHandler @ 00222864 */
  while (pAVar7 = getParent(*(AccessibilityHandler **)(pAVar7 + 8)), pAVar7 != this) {
LAB_002227f0:
    if (pAVar7 == (AccessibilityHandler *)0x0) goto LAB_00222779;
  }
  bVar1 = true;
                    /* try { // try from 00222805 to 0022280e has its CatchHandler @ 00222860 */
  grabFocusInternal(pAVar5,'\0');
LAB_0022277b:
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  if (!bVar1) {
LAB_0022281a:
    if ((param_1 != '\0') &&
       (pAVar5 = getParent(*(AccessibilityHandler **)(this + 8)),
       pAVar5 != (AccessibilityHandler *)0x0)) {
      grabFocusInternal(pAVar5,'\x01');
    }
  }
  return;
}


