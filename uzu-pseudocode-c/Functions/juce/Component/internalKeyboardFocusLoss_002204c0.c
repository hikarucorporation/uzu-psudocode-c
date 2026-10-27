// Function : internalKeyboardFocusLoss
// Namespace: juce:Component
// Entry    : 002204c0
// Prototype: undefined internalKeyboardFocusLoss(Component * this, undefined4 param_1)
// Body     : 002204c0 - 002205e4


/* juce::Component::internalKeyboardFocusLoss(juce::Component::FocusChangeType) */

void __thiscall juce::Component::internalKeyboardFocusLoss(Component *this,undefined4 param_1)

{
  long *plVar1;
  long *plVar2;
  AccessibilityHandler *pAVar3;
  AccessibilityHandler *pAVar4;
  long *local_28;
  
  local_28 = *(long **)(this + 0xd8);
  if (local_28 == (long *)0x0) {
    local_28 = operator_new(0x18);
    *(undefined4 *)(local_28 + 1) = 0;
    *local_28 = (long)&PTR__ReferenceCountedObject_00714b80;
    local_28[2] = (long)this;
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
    plVar2 = *(long **)(this + 0xd8);
    *(long **)(this + 0xd8) = local_28;
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar2 + 8))();
      }
      local_28 = *(long **)(this + 0xd8);
      if (local_28 == (long *)0x0) goto LAB_002204e2;
    }
  }
  LOCK();
  *(int *)(local_28 + 1) = (int)local_28[1] + 1;
  UNLOCK();
LAB_002204e2:
                    /* try { // try from 002204e5 to 002204f0 has its CatchHandler @ 002205ea */
  (**(code **)(*(long *)this + 0x130))(this,param_1);
  plVar2 = local_28;
  if (local_28 != (long *)0x0) {
    if (local_28[2] != 0) {
                    /* try { // try from 00220509 to 00220510 has its CatchHandler @ 002205e5 */
      pAVar3 = (AccessibilityHandler *)getAccessibilityHandler(this);
      if ((pAVar3 != (AccessibilityHandler *)0x0) &&
         (pAVar4 = AccessibilityHandler::currentlyFocusedHandler,
         AccessibilityHandler::currentlyFocusedHandler != (AccessibilityHandler *)0x0)) {
        for (; pAVar4 != pAVar3;
            pAVar4 = AccessibilityHandler::getParent(*(AccessibilityHandler **)(pAVar4 + 8))) {
          if (pAVar4 == (AccessibilityHandler *)0x0) goto LAB_002205b1;
                    /* try { // try from 0022053e to 00220542 has its CatchHandler @ 0022060f */
        }
        AccessibilityHandler::currentlyFocusedHandler = (AccessibilityHandler *)0x0;
      }
LAB_002205b1:
                    /* try { // try from 002205b1 to 002205be has its CatchHandler @ 002205ea */
      internalChildKeyboardFocusChange(this,param_1,(long *)&local_28);
    }
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x002205d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 8))(plVar2);
      return;
    }
  }
  return;
}


