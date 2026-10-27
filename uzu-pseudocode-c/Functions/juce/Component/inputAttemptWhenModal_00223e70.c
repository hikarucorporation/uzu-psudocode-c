// Function : inputAttemptWhenModal
// Namespace: juce:Component
// Entry    : 00223e70
// Prototype: undefined inputAttemptWhenModal(Component * this)
// Body     : 00223e70 - 00223f8f


/* juce::Component::inputAttemptWhenModal() */

void __thiscall juce::Component::inputAttemptWhenModal(Component *this)

{
  int *piVar1;
  void *pvVar2;
  ModalComponentManager *pMVar3;
  undefined8 *puVar4;
  Desktop *this_00;
  LookAndFeel_V4 *pLVar5;
  
  if (ModalComponentManager::singletonHolder == (ModalComponentManager *)0x0) {
    pMVar3 = operator_new(0x28);
    *(undefined ***)pMVar3 = &PTR__AsyncUpdater_00712b58;
    *(undefined8 *)(pMVar3 + 8) = 0;
                    /* try { // try from 00223ea6 to 00223eaf has its CatchHandler @ 00223fab */
    puVar4 = operator_new(0x20);
    *(undefined4 *)(puVar4 + 1) = 0;
    *puVar4 = &PTR__AsyncUpdaterMessage_00712cc0;
    puVar4[2] = pMVar3;
    *(undefined4 *)(puVar4 + 3) = 0;
    LOCK();
    *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
    UNLOCK();
    pvVar2 = *(void **)(pMVar3 + 8);
    *(undefined8 **)(pMVar3 + 8) = puVar4;
    if (pvVar2 != (void *)0x0) {
      LOCK();
      piVar1 = (int *)((long)pvVar2 + 8);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        operator_delete(pvVar2);
      }
    }
    DeletedAtShutdown::DeletedAtShutdown((DeletedAtShutdown *)(pMVar3 + 0x10));
    *(undefined ***)pMVar3 = &PTR__ModalComponentManager_00707a60;
    *(undefined ***)(pMVar3 + 0x10) = &PTR__ModalComponentManager_00707a88;
    *(undefined8 *)(pMVar3 + 0x18) = 0;
    *(undefined8 *)(pMVar3 + 0x20) = 0;
    LOCK();
    UNLOCK();
    ModalComponentManager::singletonHolder = pMVar3;
  }
  ModalComponentManager::bringModalComponentsToFront(ModalComponentManager::singletonHolder,'\x01');
  do {
    if ((*(long *)(this + 0x68) != 0) &&
       (pLVar5 = *(LookAndFeel_V4 **)(*(long *)(this + 0x68) + 0x10),
       pLVar5 != (LookAndFeel_V4 *)0x0)) goto LAB_00223f80;
    this = *(Component **)(this + 0x30);
  } while (this != (Component *)0x0);
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 00223f59 to 00223f62 has its CatchHandler @ 00223fa3 */
    this_00 = operator_new(0x1d0);
                    /* try { // try from 00223f66 to 00223f6d has its CatchHandler @ 00223f90 */
    Desktop::Desktop(this_00);
    Desktop::instance = this_00;
  }
  pLVar5 = Desktop::getDefaultLookAndFeel(Desktop::instance);
LAB_00223f80:
                    /* WARNING: Could not recover jumptable at 0x00223f8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)pLVar5 + 0x90))();
  return;
}


