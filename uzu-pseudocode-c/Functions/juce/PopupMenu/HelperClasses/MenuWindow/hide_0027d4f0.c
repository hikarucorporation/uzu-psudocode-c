// Function : hide
// Namespace: juce:PopupMenu:HelperClasses:MenuWindow
// Entry    : 0027d4f0
// Prototype: undefined hide(MenuWindow * this, long param_1, char param_2)
// Body     : 0027d4f0 - 0027d7bf


/* juce::PopupMenu::HelperClasses::MenuWindow::hide(juce::PopupMenu::Item const*, bool) */

void __thiscall
juce::PopupMenu::HelperClasses::MenuWindow::hide(MenuWindow *this,long param_1,char param_2)

{
  long *plVar1;
  MenuWindow *this_00;
  code *pcVar2;
  char cVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  long local_48;
  long lStack_40;
  code *local_38;
  long lStack_30;
  
  if ((*(ushort *)(this + 0xe8) & 2) == 0) {
    return;
  }
  plVar4 = *(long **)(this + 0xd8);
  if (plVar4 == (long *)0x0) {
    plVar4 = operator_new(0x18);
    *(undefined4 *)(plVar4 + 1) = 0;
    *plVar4 = (long)&PTR__ReferenceCountedObject_00714b80;
    plVar4[2] = (long)this;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    plVar5 = *(long **)(this + 0xd8);
    *(long **)(this + 0xd8) = plVar4;
    if (plVar5 == (long *)0x0) goto LAB_0027d524;
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)(*plVar5 + 8))();
    }
    plVar4 = *(long **)(this + 0xd8);
    if (plVar4 != (long *)0x0) goto LAB_0027d524;
    plVar4 = (long *)0x0;
    this_00 = *(MenuWindow **)(this + 400);
    *(undefined8 *)(this + 400) = 0;
  }
  else {
LAB_0027d524:
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    this_00 = *(MenuWindow **)(this + 400);
    *(undefined8 *)(this + 400) = 0;
  }
  if (this_00 != (MenuWindow *)0x0) {
    ~MenuWindow(this_00);
    operator_delete(this_00);
  }
  plVar5 = *(long **)(this + 0x188);
  *(undefined8 *)(this + 0x188) = 0;
  if (plVar5 != (long *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  if (param_1 == 0) {
    if (this[0x140] == (MenuWindow)0x0) {
      iVar6 = 0;
      goto LAB_0027d669;
    }
LAB_0027d632:
    iVar6 = 0;
    if (((*(long *)(this + 0x118) == 0) || (param_1 == 0)) ||
       (*(long *)(*(long *)(this + 0x118) + 0x10) == 0)) goto LAB_0027d669;
  }
  else {
    if ((*(long *)(param_1 + 0x50) != 0) && (*(int *)(param_1 + 8) != 0)) {
      **(long **)(this + 0x158) = *(long *)(param_1 + 0x50);
    }
    if (this[0x140] != (MenuWindow)0x0) goto LAB_0027d632;
  }
  if (*(long **)(param_1 + 0x48) != (long *)0x0) {
                    /* try { // try from 0027d658 to 0027d672 has its CatchHandler @ 0027d7f9 */
    cVar3 = (**(code **)(**(long **)(param_1 + 0x48) + 0x10))();
    iVar6 = 0;
    if (cVar3 == '\0') goto LAB_0027d669;
  }
  iVar6 = *(int *)(param_1 + 8);
LAB_0027d669:
  Component::exitModalState((Component *)this,iVar6);
  if (((plVar4 != (long *)0x0) && (plVar4[2] != 0)) &&
     (this[0x1cc] = (MenuWindow)0x1, param_2 != '\0')) {
                    /* try { // try from 0027d68b to 0027d694 has its CatchHandler @ 0027d7c8 */
    Component::setVisible((Component *)this,0);
  }
  if (((param_1 != 0) && (iVar6 != 0)) &&
     (pcVar2 = *(code **)(param_1 + 0x20), pcVar2 != (code *)0x0)) {
                    /* try { // try from 0027d6b3 to 0027d6bc has its CatchHandler @ 0027d7f9 */
    plVar5 = operator_new(0x30);
    local_38 = (code *)0x0;
    lStack_30 = 0;
    local_48 = 0;
    lStack_40 = 0;
                    /* try { // try from 0027d6d0 to 0027d6d9 has its CatchHandler @ 0027d7cd */
    (*pcVar2)(&local_48,param_1 + 0x10,2);
    lStack_30 = *(long *)(param_1 + 0x28);
    local_38 = *(code **)(param_1 + 0x20);
    *(undefined4 *)(plVar5 + 1) = 0;
    *plVar5 = (long)&PTR__AsyncCallInvoker_0070fa10;
    plVar5[2] = 0;
    plVar5[3] = 0;
    plVar5[4] = 0;
    plVar5[5] = lStack_30;
    if (local_38 != (code *)0x0) {
      plVar5[2] = local_48;
      plVar5[3] = lStack_40;
      plVar5[4] = (long)local_38;
      local_38 = (code *)0x0;
      lStack_30 = 0;
    }
    if (((MessageManager::instance == 0) || (*(int *)(MessageManager::instance + 8) != 0)) ||
       (InternalMessageQueue::singletonHolder._40_8_ == 0)) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar5 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
    else {
      InternalMessageQueue::postMessage
                ((InternalMessageQueue *)InternalMessageQueue::singletonHolder._40_8_,(long)plVar5);
    }
    if (local_38 != (code *)0x0) {
                    /* try { // try from 0027d764 to 0027d770 has its CatchHandler @ 0027d7c0 */
      (*local_38)(&local_48,&local_48,3);
    }
  }
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0027d790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4);
      return;
    }
  }
  return;
}


