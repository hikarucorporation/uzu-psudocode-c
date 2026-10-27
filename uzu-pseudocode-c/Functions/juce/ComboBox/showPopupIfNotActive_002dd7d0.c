// Function : showPopupIfNotActive
// Namespace: juce:ComboBox
// Entry    : 002dd7d0
// Prototype: undefined showPopupIfNotActive(ComboBox * this)
// Body     : 002dd7d0 - 002dd943


/* juce::ComboBox::showPopupIfNotActive() */

void __thiscall juce::ComboBox::showPopupIfNotActive(ComboBox *this)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  if (this[0x185] != (ComboBox)0x0) {
    return;
  }
  this[0x185] = (ComboBox)0x1;
  plVar3 = *(long **)(this + 0xd8);
  if (plVar3 == (long *)0x0) {
    plVar3 = operator_new(0x18);
    *(undefined4 *)(plVar3 + 1) = 0;
    *plVar3 = (long)&PTR__ReferenceCountedObject_00714b80;
    plVar3[2] = (long)this;
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    plVar2 = *(long **)(this + 0xd8);
    *(long **)(this + 0xd8) = plVar3;
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar3 = plVar2 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)(*plVar2 + 8))();
      }
      plVar3 = *(long **)(this + 0xd8);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)0x0;
        goto LAB_002dd800;
      }
    }
  }
  LOCK();
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  UNLOCK();
LAB_002dd800:
                    /* try { // try from 002dd800 to 002dd809 has its CatchHandler @ 002dd944 */
  plVar2 = operator_new(0x18);
  if (plVar3 == (long *)0x0) {
    *(undefined4 *)(plVar2 + 1) = 0;
    *plVar2 = (long)&PTR__AsyncCallInvoker_00711350;
    plVar2[2] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(undefined4 *)(plVar2 + 1) = 0;
    *plVar2 = (long)&PTR__AsyncCallInvoker_00711350;
    plVar2[2] = (long)plVar3;
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if (((MessageManager::instance == 0) || (*(int *)(MessageManager::instance + 8) != 0)) ||
     ((InternalMessageQueue *)InternalMessageQueue::singletonHolder._40_8_ ==
      (InternalMessageQueue *)0x0)) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))(plVar2);
    }
  }
  else {
    InternalMessageQueue::postMessage
              ((InternalMessageQueue *)InternalMessageQueue::singletonHolder._40_8_,(long)plVar2);
  }
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)(*plVar3 + 8))(plVar3);
    }
    LOCK();
    plVar2 = plVar3 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)(*plVar3 + 8))(plVar3);
    }
  }
  Component::internalRepaintUnchecked((long)this,0,*(ulong *)(this + 0x40),'\x01');
  return;
}


