// Function : scrollToTop
// Namespace: juce:ScrollBar
// Entry    : 002662e0
// Prototype: ulong scrollToTop(ScrollBar * param_1)
// Body     : 002662e0 - 002663f2


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::ScrollBar::scrollToTop(juce::NotificationType) */

ulong __cdecl juce::ScrollBar::scrollToTop(ScrollBar *param_1)

{
  long *plVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  long *plVar5;
  undefined8 unaff_RBX;
  bool bVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar2 = *(double *)(param_1 + 0x128);
  dVar9 = *(double *)(param_1 + 0x130);
  dVar3 = *(double *)(param_1 + 0x140);
  dVar4 = *(double *)(param_1 + 0x138);
  dVar8 = (dVar2 - dVar4) + dVar3;
  if (dVar8 <= dVar2) {
    dVar8 = dVar2;
  }
  dVar7 = dVar2;
  if (dVar8 - dVar2 < dVar9 - dVar2) {
    dVar7 = dVar9 - (dVar8 - dVar2);
    if (dVar2 <= dVar7) {
      dVar7 = dVar2;
    }
    dVar9 = dVar8 + (dVar7 - dVar2);
    if (dVar9 <= dVar7) {
      dVar9 = dVar7;
    }
  }
  if (dVar3 != dVar9 || dVar4 != dVar7) {
    *(double *)(param_1 + 0x138) = dVar7;
    *(double *)(param_1 + 0x140) = dVar9;
    updateThumbPosition(param_1);
    LOCK();
    bVar6 = *(int *)(*(long *)(param_1 + 0xf8) + 0x18) == 0;
    if (bVar6) {
      *(int *)(*(long *)(param_1 + 0xf8) + 0x18) = 1;
    }
    UNLOCK();
    if (bVar6) {
      plVar5 = *(long **)(param_1 + 0xf8);
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
        LOCK();
        *(undefined4 *)(*(long *)(param_1 + 0xf8) + 0x18) = 0;
        UNLOCK();
      }
      else {
        InternalMessageQueue::postMessage
                  ((InternalMessageQueue *)InternalMessageQueue::singletonHolder._40_8_,(long)plVar5
                  );
      }
    }
  }
  return CONCAT71((int7)((ulong)unaff_RBX >> 8),dVar3 != dVar9 || dVar4 != dVar7) & 0xffffffff;
}


