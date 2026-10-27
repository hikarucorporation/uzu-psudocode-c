// Function : scrollToBottom
// Namespace: juce:ScrollBar
// Entry    : 00266400
// Prototype: ulong scrollToBottom(ScrollBar * param_1)
// Body     : 00266400 - 0026652f


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::ScrollBar::scrollToBottom(juce::NotificationType) */

ulong __cdecl juce::ScrollBar::scrollToBottom(ScrollBar *param_1)

{
  long *plVar1;
  double dVar2;
  double dVar3;
  long *plVar4;
  undefined8 unaff_RBX;
  bool bVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar6 = *(double *)(param_1 + 0x128);
  dVar7 = *(double *)(param_1 + 0x130);
  dVar2 = *(double *)(param_1 + 0x138);
  dVar3 = *(double *)(param_1 + 0x140);
  dVar9 = (dVar7 - dVar3) + dVar2;
  dVar8 = dVar7;
  if (dVar7 <= dVar9) {
    dVar8 = dVar9;
  }
  if (dVar8 - dVar9 < dVar7 - dVar6) {
    dVar7 = dVar7 - (dVar8 - dVar9);
    if (dVar9 <= dVar7) {
      dVar7 = dVar9;
    }
    dVar6 = (double)(-(ulong)(dVar9 < dVar6) & (ulong)dVar6 |
                    ~-(ulong)(dVar9 < dVar6) & (ulong)dVar7);
    dVar7 = dVar8 + (dVar6 - dVar9);
    if (dVar7 <= dVar6) {
      dVar7 = dVar6;
    }
  }
  if (dVar3 != dVar7 || dVar2 != dVar6) {
    *(double *)(param_1 + 0x138) = dVar6;
    *(double *)(param_1 + 0x140) = dVar7;
    updateThumbPosition(param_1);
    LOCK();
    bVar5 = *(int *)(*(long *)(param_1 + 0xf8) + 0x18) == 0;
    if (bVar5) {
      *(int *)(*(long *)(param_1 + 0xf8) + 0x18) = 1;
    }
    UNLOCK();
    if (bVar5) {
      plVar4 = *(long **)(param_1 + 0xf8);
      if (((MessageManager::instance == 0) || (*(int *)(MessageManager::instance + 8) != 0)) ||
         (InternalMessageQueue::singletonHolder._40_8_ == 0)) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar4 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar4 + 8))(plVar4);
        }
        LOCK();
        *(undefined4 *)(*(long *)(param_1 + 0xf8) + 0x18) = 0;
        UNLOCK();
      }
      else {
        InternalMessageQueue::postMessage
                  ((InternalMessageQueue *)InternalMessageQueue::singletonHolder._40_8_,(long)plVar4
                  );
      }
    }
  }
  return CONCAT71((int7)((ulong)unaff_RBX >> 8),dVar3 != dVar7 || dVar2 != dVar6) & 0xffffffff;
}


