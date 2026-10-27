// Function : triggerAsyncUpdate
// Namespace: juce:AsyncUpdater
// Entry    : 00482da0
// Prototype: ulong triggerAsyncUpdate(AsyncUpdater * this)
// Body     : 00482da0 - 00482dfe


/* juce::AsyncUpdater::triggerAsyncUpdate() */

ulong __thiscall juce::AsyncUpdater::triggerAsyncUpdate(AsyncUpdater *this)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  
  uVar4 = 0;
  LOCK();
  uVar2 = *(uint *)(*(long *)(this + 8) + 0x18);
  if (uVar2 == 0) {
    *(uint *)(*(long *)(this + 8) + 0x18) = 1;
  }
  else {
    uVar4 = (ulong)uVar2;
  }
  UNLOCK();
  if (uVar2 == 0) {
    plVar3 = *(long **)(this + 8);
    if (((MessageManager::instance != 0) && (*(int *)(MessageManager::instance + 8) == 0)) &&
       (InternalMessageQueue::singletonHolder._40_8_ != 0)) {
      uVar4 = InternalMessageQueue::postMessage
                        ((InternalMessageQueue *)InternalMessageQueue::singletonHolder._40_8_,
                         (long)plVar3);
      return uVar4;
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
    uVar4 = *(ulong *)(this + 8);
    LOCK();
    *(undefined4 *)(uVar4 + 0x18) = 0;
    UNLOCK();
  }
  return uVar4;
}


