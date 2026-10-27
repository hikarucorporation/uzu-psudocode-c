// Function : clearUndoHistory
// Namespace: juce:UndoManager
// Entry    : 004c6350
// Prototype: ulong clearUndoHistory(UndoManager * this)
// Body     : 004c6350 - 004c63fd


/* juce::UndoManager::clearUndoHistory() */

ulong __thiscall juce::UndoManager::clearUndoHistory(UndoManager *this)

{
  OwnedArray<juce::UndoManager::ActionSet,juce::DummyCriticalSection> *this_00;
  long *plVar1;
  uint uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 extraout_RAX;
  ulong uVar5;
  
  this_00 = (OwnedArray<juce::UndoManager::ActionSet,juce::DummyCriticalSection> *)(this + 0x50);
  uVar4 = OwnedArray<juce::UndoManager::ActionSet,juce::DummyCriticalSection>::deleteAllObjects
                    (this_00);
  if (*(int *)(this + 0x58) != 0) {
    free(*(void **)this_00);
    *(undefined8 *)this_00 = 0;
    uVar4 = extraout_RAX;
  }
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  uVar5 = CONCAT71((int7)((ulong)uVar4 >> 8),this[0x48]);
  if (((byte)this[0x48] & 1) != 0) {
    uVar5 = 0;
    LOCK();
    uVar2 = *(uint *)(*(long *)(this + 0x10) + 0x18);
    if (uVar2 == 0) {
      *(uint *)(*(long *)(this + 0x10) + 0x18) = 1;
    }
    else {
      uVar5 = (ulong)uVar2;
    }
    UNLOCK();
    if (uVar2 == 0) {
      plVar3 = *(long **)(this + 0x10);
      if (((MessageManager::instance != 0) && (*(int *)(MessageManager::instance + 8) == 0)) &&
         (InternalMessageQueue::singletonHolder._40_8_ != 0)) {
        uVar5 = InternalMessageQueue::postMessage
                          ((InternalMessageQueue *)InternalMessageQueue::singletonHolder._40_8_,
                           (long)plVar3);
        return uVar5;
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
      uVar5 = *(ulong *)(this + 0x10);
      LOCK();
      *(undefined4 *)(uVar5 + 0x18) = 0;
      UNLOCK();
    }
  }
  return uVar5;
}


