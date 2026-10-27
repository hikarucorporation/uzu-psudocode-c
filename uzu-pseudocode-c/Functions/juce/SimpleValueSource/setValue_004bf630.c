// Function : setValue
// Namespace: juce:SimpleValueSource
// Entry    : 004bf630
// Prototype: ulong setValue(SimpleValueSource * this, long * param_1)
// Body     : 004bf630 - 004bf6e1


/* juce::SimpleValueSource::setValue(juce::var const&) */

ulong __thiscall juce::SimpleValueSource::setValue(SimpleValueSource *this,long *param_1)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = *(long *)(this + 0x30);
  if (*param_1 == lVar5) {
                    /* try { // try from 004bf64f to 004bf651 has its CatchHandler @ 004bf6e2 */
    uVar4 = (**(code **)(*param_1 + 0x68))(param_1 + 1,this + 0x38);
    if ((char)uVar4 != '\0') {
      return uVar4;
    }
    lVar5 = *(long *)(this + 0x30);
  }
  (**(code **)(lVar5 + 0x58))(this + 0x38);
  lVar5 = *param_1;
  *(long *)(this + 0x30) = lVar5;
  uVar4 = (**(code **)(lVar5 + 0x60))(this + 0x38,param_1 + 1);
  if (0 < *(int *)(this + 0x2c)) {
    uVar4 = 0;
    LOCK();
    uVar2 = *(uint *)(*(long *)(this + 0x18) + 0x18);
    if (uVar2 == 0) {
      *(uint *)(*(long *)(this + 0x18) + 0x18) = 1;
    }
    else {
      uVar4 = (ulong)uVar2;
    }
    UNLOCK();
    if (uVar2 == 0) {
      plVar3 = *(long **)(this + 0x18);
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
      uVar4 = *(ulong *)(this + 0x18);
      LOCK();
      *(undefined4 *)(uVar4 + 0x18) = 0;
      UNLOCK();
    }
  }
  return uVar4;
}


