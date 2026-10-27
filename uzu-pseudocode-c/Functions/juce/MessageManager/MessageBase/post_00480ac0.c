// Function : post
// Namespace: juce:MessageManager:MessageBase
// Entry    : 00480ac0
// Prototype: undefined8 post(MessageBase * this)
// Body     : 00480ac0 - 00480b04


/* juce::MessageManager::MessageBase::post() */

undefined8 __thiscall juce::MessageManager::MessageBase::post(MessageBase *this)

{
  MessageBase *pMVar1;
  undefined8 uVar2;
  
  if (((instance != 0) && (*(int *)(instance + 8) == 0)) &&
     (InternalMessageQueue::singletonHolder._40_8_ != 0)) {
    uVar2 = InternalMessageQueue::postMessage
                      ((InternalMessageQueue *)InternalMessageQueue::singletonHolder._40_8_,
                       (long)this);
    return CONCAT71((int7)((ulong)uVar2 >> 8),1);
  }
  LOCK();
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  UNLOCK();
  LOCK();
  pMVar1 = this + 8;
  *(int *)pMVar1 = *(int *)pMVar1 + -1;
  UNLOCK();
  if (*(int *)pMVar1 == 0) {
    (**(code **)(*(long *)this + 8))(this);
  }
  return 0;
}


