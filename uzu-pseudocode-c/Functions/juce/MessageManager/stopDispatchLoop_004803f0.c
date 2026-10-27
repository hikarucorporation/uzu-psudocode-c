// Function : stopDispatchLoop
// Namespace: juce:MessageManager
// Entry    : 004803f0
// Prototype: undefined4 stopDispatchLoop(MessageManager * this)
// Body     : 004803f0 - 0048045e


/* juce::MessageManager::stopDispatchLoop() */

undefined4 __thiscall juce::MessageManager::stopDispatchLoop(MessageManager *this)

{
  long *plVar1;
  undefined4 uVar2;
  long *plVar3;
  
  plVar3 = operator_new(0x10);
  *(undefined4 *)(plVar3 + 1) = 0;
  *plVar3 = (long)&PTR__ReferenceCountedObject_00712c40;
  if (((instance != 0) && (*(int *)(instance + 8) == 0)) &&
     (InternalMessageQueue::singletonHolder._40_8_ != 0)) {
    InternalMessageQueue::postMessage
              ((InternalMessageQueue *)InternalMessageQueue::singletonHolder._40_8_,(long)plVar3);
    LOCK();
    uVar2 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = 1;
    UNLOCK();
    return uVar2;
  }
  LOCK();
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  UNLOCK();
  LOCK();
  plVar1 = plVar3 + 1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)*plVar1 == 0) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  LOCK();
  uVar2 = *(undefined4 *)(this + 8);
  *(undefined4 *)(this + 8) = 1;
  UNLOCK();
  return uVar2;
}


