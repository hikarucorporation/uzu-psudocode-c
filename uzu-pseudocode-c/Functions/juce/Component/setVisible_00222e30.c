// Function : setVisible
// Namespace: juce:Component
// Entry    : 00222e30
// Prototype: ulong setVisible(Component * this, byte param_1)
// Body     : 00222e30 - 002230ee


/* juce::Component::setVisible(bool) */

ulong __thiscall juce::Component::setVisible(Component *this,byte param_1)

{
  uint *puVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  Component *pCVar5;
  byte bVar6;
  Desktop *pDVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  
  bVar6 = (*(ushort *)(this + 0xe8) & 2) == 0 ^ param_1;
  if (bVar6 != 0) {
    return (ulong)CONCAT11((char)(*(ushort *)(this + 0xe8) >> 8),bVar6);
  }
  plVar9 = *(long **)(this + 0xd8);
  if (plVar9 == (long *)0x0) {
    plVar9 = operator_new(0x18);
    *(undefined4 *)(plVar9 + 1) = 0;
    *plVar9 = (long)&PTR__ReferenceCountedObject_00714b80;
    plVar9[2] = (long)this;
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    plVar4 = *(long **)(this + 0xd8);
    *(long **)(this + 0xd8) = plVar9;
    if (plVar4 != (long *)0x0) {
      LOCK();
      plVar9 = plVar4 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
      plVar9 = *(long **)(this + 0xd8);
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)0x0;
        goto LAB_00222e69;
      }
    }
  }
  LOCK();
  *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
  UNLOCK();
LAB_00222e69:
  this[0xea] = this[0xea];
  *(ushort *)(this + 0xe8) = ((ushort)*(undefined3 *)(this + 0xe8) & 0xfffd) + (ushort)param_1 * 2;
  if (param_1 == 0) {
    repaintParent(this);
  }
  else {
                    /* try { // try from 00222e9d to 00222ede has its CatchHandler @ 00223119 */
    internalRepaintUnchecked((long)this,0,*(ulong *)(this + 0x40),'\x01');
  }
  uVar8 = (ulong)(*(ushort *)(this + 0xe8) & 0x18);
  if ((*(ushort *)(this + 0xe8) & 0x18) != 8) {
    if (Desktop::instance == (Desktop *)0x0) {
      pDVar7 = operator_new(0x1d0);
                    /* try { // try from 00222ee2 to 00222ee9 has its CatchHandler @ 0022310c */
      Desktop::Desktop(pDVar7);
      Desktop::instance = pDVar7;
    }
    lVar10 = **(long **)(*(long *)(Desktop::instance + 0x40) + 0x28);
    uVar8 = (ulong)*(ushort *)(lVar10 + 0x3c);
    if ((*(ushort *)(lVar10 + 0x3c) & 0x1f0) == 0) {
      uVar8 = 0;
      puVar1 = (uint *)(*(long *)(lVar10 + 8) + 0x18);
      LOCK();
      uVar3 = *puVar1;
      if (uVar3 == 0) {
        *puVar1 = 1;
      }
      else {
        uVar8 = (ulong)uVar3;
      }
      UNLOCK();
      if (uVar3 == 0) {
        plVar4 = *(long **)(lVar10 + 8);
        if (((MessageManager::instance == 0) || (*(int *)(MessageManager::instance + 8) != 0)) ||
           (InternalMessageQueue::singletonHolder._40_8_ == 0)) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          LOCK();
          plVar2 = plVar4 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)(*plVar4 + 8))(plVar4);
          }
          uVar8 = *(ulong *)(lVar10 + 8);
          LOCK();
          *(undefined4 *)(uVar8 + 0x18) = 0;
          UNLOCK();
        }
        else {
          uVar8 = InternalMessageQueue::postMessage
                            ((InternalMessageQueue *)InternalMessageQueue::singletonHolder._40_8_,
                             (long)plVar4);
        }
      }
    }
  }
  if (param_1 == 0) {
                    /* try { // try from 00222f57 to 00222fc0 has its CatchHandler @ 00223119 */
    detail::ComponentHelpers::releaseAllCachedImageResources((long)this);
    for (pCVar5 = currentlyFocusedComponent; pCVar5 != this; pCVar5 = *(Component **)(pCVar5 + 0x30)
        ) {
      uVar8 = 0;
      if (pCVar5 == (Component *)0x0) goto LAB_00222fa5;
    }
    if (*(Component **)(this + 0x30) != (Component *)0x0) {
      grabKeyboardFocusInternal(*(Component **)(this + 0x30),2,'\x01',0);
    }
    uVar8 = giveAwayKeyboardFocusInternal(this,'\x01');
  }
LAB_00222fa5:
  if (plVar9 != (long *)0x0) {
    if (((plVar9[2] != 0) && (uVar8 = sendVisibilityChangeMessage(this), plVar9[2] != 0)) &&
       (uVar8 = (ulong)*(ushort *)(this + 0xe8), (*(ushort *)(this + 0xe8) & 1) != 0)) {
      if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 00222fe7 to 00222ff0 has its CatchHandler @ 00223102 */
        pDVar7 = operator_new(0x1d0);
                    /* try { // try from 00222ff4 to 00222ffb has its CatchHandler @ 002230ef */
        uVar8 = Desktop::Desktop(pDVar7);
        Desktop::instance = pDVar7;
      }
      if ((long)*(int *)(Desktop::instance + 0xdc) != 0) {
        uVar8 = *(ulong *)(Desktop::instance + 0xd0);
        lVar10 = 0;
        do {
          plVar4 = *(long **)(uVar8 + lVar10);
          if ((Component *)plVar4[1] == this) {
                    /* try { // try from 0022309c to 002230a9 has its CatchHandler @ 0022310a */
            (**(code **)(*plVar4 + 0x20))(plVar4,param_1);
            uVar8 = internalHierarchyChanged(this);
            break;
          }
          lVar10 = lVar10 + 8;
        } while ((long)*(int *)(Desktop::instance + 0xdc) * 8 != lVar10);
      }
    }
    LOCK();
    plVar4 = plVar9 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x002230c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (**(code **)(*plVar9 + 8))(plVar9);
      return uVar8;
    }
  }
  return uVar8;
}


