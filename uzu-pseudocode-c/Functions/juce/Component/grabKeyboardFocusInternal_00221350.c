// Function : grabKeyboardFocusInternal
// Namespace: juce:Component
// Entry    : 00221350
// Prototype: undefined grabKeyboardFocusInternal(Component * this, uint param_1, char param_2, undefined4 param_3)
// Body     : 00221350 - 002217a2


/* juce::Component::grabKeyboardFocusInternal(juce::Component::FocusChangeType, bool,
   juce::Component::FocusChangeDirection) */

void __thiscall
juce::Component::grabKeyboardFocusInternal
          (Component *this,uint param_1,char param_2,undefined4 param_3)

{
  long *plVar1;
  long *plVar2;
  uint3 uVar3;
  char cVar4;
  uint uVar5;
  long *in_RAX;
  Component *pCVar6;
  Desktop *pDVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  bool bVar11;
  long *local_38;
  
  if ((param_1 == 0) && ((*(ushort *)(this + 0xe8) & 0x200) != 0)) {
    return;
  }
  local_38 = in_RAX;
  uVar5 = isShowing(this);
  if ((char)uVar5 == '\0') {
    return;
  }
  uVar3 = *(uint3 *)(this + 0xe8);
  if ((uVar3 & 0x20) == 0) {
LAB_002213e7:
    pCVar6 = currentlyFocusedComponent;
    do {
      if (pCVar6 == (Component *)0x0) goto LAB_0022141b;
      pCVar6 = *(Component **)(pCVar6 + 0x30);
    } while (pCVar6 != this);
    uVar5 = isShowing(currentlyFocusedComponent);
    if ((char)uVar5 != '\0') {
      return;
    }
LAB_0022141b:
    (**(code **)(*(long *)this + 0xd8))(&local_38,this);
    if (local_38 == (long *)0x0) {
      bVar11 = false;
    }
    else {
                    /* try { // try from 0022143b to 00221458 has its CatchHandler @ 0022180a */
      pCVar6 = (Component *)(**(code **)(*local_38 + 0x10))(local_38,this);
      if (pCVar6 != (Component *)0x0) {
        grabKeyboardFocusInternal(pCVar6,param_1,'\0',param_3);
      }
      bVar11 = pCVar6 != (Component *)0x0;
      if (local_38 != (long *)0x0) {
        (**(code **)(*local_38 + 8))();
      }
    }
    if (bVar11) {
      return;
    }
    if (param_2 == '\0') {
      return;
    }
    if (*(Component **)(this + 0x30) == (Component *)0x0) {
      return;
    }
    grabKeyboardFocusInternal(*(Component **)(this + 0x30),param_1,'\x01',param_3);
    return;
  }
  if ((uVar3 & 0x8000) == 0) {
    pCVar6 = this;
    do {
      pCVar6 = *(Component **)(pCVar6 + 0x30);
      if (pCVar6 == (Component *)0x0) goto LAB_00221477;
    } while ((*(ushort *)(pCVar6 + 0xe8) & 0x8000) == 0);
  }
  if (*(long *)(this + 0x30) != 0) goto LAB_002213e7;
LAB_00221477:
  pCVar6 = this;
  if (currentlyFocusedComponent == this) {
    return;
  }
  while ((uVar3 & 1) == 0) {
    pCVar6 = *(Component **)(pCVar6 + 0x30);
    if (pCVar6 == (Component *)0x0) {
      return;
    }
    uVar3 = *(uint3 *)(pCVar6 + 0xe8);
  }
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002214c0 to 002214c9 has its CatchHandler @ 002217ed */
    pDVar7 = operator_new(0x1d0);
                    /* try { // try from 002214cd to 002214d4 has its CatchHandler @ 002217da */
    Desktop::Desktop(pDVar7);
    Desktop::instance = pDVar7;
  }
  if ((long)*(int *)(Desktop::instance + 0xdc) == 0) {
    return;
  }
  lVar10 = 0;
  while (plVar8 = *(long **)(*(long *)(Desktop::instance + 0xd0) + lVar10),
        (Component *)plVar8[1] != pCVar6) {
    lVar10 = lVar10 + 8;
    if ((long)*(int *)(Desktop::instance + 0xdc) * 8 == lVar10) {
      return;
    }
  }
  local_38 = *(long **)(this + 0xd8);
  if (local_38 == (long *)0x0) {
    local_38 = operator_new(0x18);
    *(undefined4 *)(local_38 + 1) = 0;
    *local_38 = (long)&PTR__ReferenceCountedObject_00714b80;
    local_38[2] = (long)this;
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    plVar2 = *(long **)(this + 0xd8);
    *(long **)(this + 0xd8) = local_38;
    if (plVar2 == (long *)0x0) goto LAB_0022155c;
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
    local_38 = *(long **)(this + 0xd8);
    if (local_38 != (long *)0x0) goto LAB_0022155c;
  }
  else {
LAB_0022155c:
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
                    /* try { // try from 00221565 to 0022157a has its CatchHandler @ 002217f5 */
  (**(code **)(*plVar8 + 0xf0))(plVar8);
  cVar4 = (**(code **)(*plVar8 + 0xe8))(plVar8);
  pCVar6 = currentlyFocusedComponent;
  if ((cVar4 == '\0') || (currentlyFocusedComponent == this)) goto LAB_00221780;
  bVar11 = true;
  if (currentlyFocusedComponent != (Component *)0x0) {
    plVar8 = *(long **)(currentlyFocusedComponent + 0xd8);
    if (plVar8 == (long *)0x0) {
                    /* try { // try from 0022163f to 00221648 has its CatchHandler @ 002217ac */
      plVar8 = operator_new(0x18);
      *(undefined4 *)(plVar8 + 1) = 0;
      *plVar8 = (long)&PTR__ReferenceCountedObject_00714b80;
      plVar8[2] = (long)pCVar6;
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      plVar2 = *(long **)(pCVar6 + 0xd8);
      *(long **)(pCVar6 + 0xd8) = plVar8;
      if (plVar2 != (long *)0x0) {
        LOCK();
        plVar8 = plVar2 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)(*plVar2 + 8))();
        }
        plVar8 = *(long **)(pCVar6 + 0xd8);
        if (plVar8 == (long *)0x0) goto LAB_0022169b;
      }
    }
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    for (lVar10 = plVar8[2]; lVar10 != 0; lVar10 = *(long *)(lVar10 + 0x30)) {
      if ((*(ushort *)(lVar10 + 0xe8) & 1) != 0) {
        if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002216ac to 002216b5 has its CatchHandler @ 002217aa */
          pDVar7 = operator_new(0x1d0);
                    /* try { // try from 002216b9 to 002216c0 has its CatchHandler @ 002217a8 */
          Desktop::Desktop(pDVar7);
          Desktop::instance = pDVar7;
        }
        if ((long)*(int *)(Desktop::instance + 0xdc) != 0) {
          lVar9 = 0;
          goto LAB_002216e1;
        }
        break;
      }
    }
    goto LAB_002216ff;
  }
LAB_0022169b:
  plVar8 = (long *)0x0;
  goto LAB_00221701;
  while (lVar9 = lVar9 + 8, (long)*(int *)(Desktop::instance + 0xdc) * 8 != lVar9) {
LAB_002216e1:
    if ((*(long **)(*(long *)(Desktop::instance + 0xd0) + lVar9))[1] == lVar10) {
                    /* try { // try from 002216f9 to 002216fe has its CatchHandler @ 002217a3 */
      (**(code **)(**(long **)(*(long *)(Desktop::instance + 0xd0) + lVar9) + 0xf8))();
      break;
    }
  }
LAB_002216ff:
  bVar11 = false;
LAB_00221701:
  currentlyFocusedComponent = this;
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 00221714 to 0022171d has its CatchHandler @ 002217c0 */
    pDVar7 = operator_new(0x1d0);
                    /* try { // try from 00221721 to 00221728 has its CatchHandler @ 002217b3 */
    Desktop::Desktop(pDVar7);
    Desktop::instance = pDVar7;
  }
                    /* try { // try from 00221734 to 0022173b has its CatchHandler @ 002217c0 */
  AsyncUpdater::triggerAsyncUpdate((AsyncUpdater *)(Desktop::instance + 0x30));
  if ((!bVar11) && ((Component *)plVar8[2] != (Component *)0x0)) {
                    /* try { // try from 00221749 to 00221750 has its CatchHandler @ 002217ae */
    internalKeyboardFocusLoss((Component *)plVar8[2],param_1);
  }
  if (currentlyFocusedComponent == this) {
                    /* try { // try from 0022175a to 0022176a has its CatchHandler @ 002217c0 */
    internalKeyboardFocusGain(this,(ulong)param_1,(long *)&local_38,param_3);
  }
  if (!bVar11) {
    LOCK();
    plVar2 = plVar8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)(*plVar8 + 8))(plVar8);
    }
  }
LAB_00221780:
  if (local_38 != (long *)0x0) {
    LOCK();
    plVar8 = local_38 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)(*local_38 + 8))();
    }
  }
  return;
}


