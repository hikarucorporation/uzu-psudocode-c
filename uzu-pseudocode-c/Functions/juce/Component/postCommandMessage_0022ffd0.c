// Function : postCommandMessage
// Namespace: juce:Component
// Entry    : 0022ffd0
// Prototype: undefined postCommandMessage(Component * this, undefined4 param_1)
// Body     : 0022ffd0 - 002300c0


/* juce::Component::postCommandMessage(int) */

void __thiscall juce::Component::postCommandMessage(Component *this,undefined4 param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(this + 0xd8);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = operator_new(0x18);
    *(undefined4 *)(puVar3 + 1) = 0;
    *puVar3 = &PTR__ReferenceCountedObject_00714b80;
    puVar3[2] = this;
    LOCK();
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
    UNLOCK();
    plVar2 = *(long **)(this + 0xd8);
    *(undefined8 **)(this + 0xd8) = puVar3;
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar2 + 8))();
      }
      puVar3 = *(undefined8 **)(this + 0xd8);
      if (puVar3 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)0x0;
        goto LAB_0022ffe8;
      }
    }
  }
  LOCK();
  *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
  UNLOCK();
LAB_0022ffe8:
                    /* try { // try from 0022ffe8 to 0022fff1 has its CatchHandler @ 002300c1 */
  plVar2 = operator_new(0x20);
  *(undefined4 *)(plVar2 + 1) = 0;
  *plVar2 = (long)&PTR__AsyncCallInvoker_007110d0;
  plVar2[2] = (long)puVar3;
  *(undefined4 *)(plVar2 + 3) = param_1;
  if (((MessageManager::instance != 0) && (*(int *)(MessageManager::instance + 8) == 0)) &&
     (InternalMessageQueue::singletonHolder._40_8_ != 0)) {
    InternalMessageQueue::postMessage
              ((InternalMessageQueue *)InternalMessageQueue::singletonHolder._40_8_,(long)plVar2);
    return;
  }
  LOCK();
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  UNLOCK();
  LOCK();
  plVar1 = plVar2 + 1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)*plVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00230038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))(plVar2);
    return;
  }
  return;
}


