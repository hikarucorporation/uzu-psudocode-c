// Function : reorderChildInternal
// Namespace: juce:Component
// Entry    : 00276b70
// Prototype: undefined reorderChildInternal(Component * this, uint param_1, uint param_2)
// Body     : 00276b70 - 00276cc6


/* juce::Component::reorderChildInternal(int, int) */

void __thiscall juce::Component::reorderChildInternal(Component *this,uint param_1,uint param_2)

{
  int *piVar1;
  long *plVar2;
  void *__dest;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  uint uVar7;
  Desktop *this_00;
  long lVar8;
  bool bVar9;
  
  if (param_1 == param_2) {
    return;
  }
  lVar8 = (long)(int)param_1;
  repaintParent(*(Component **)(*(long *)(this + 0x58) + lVar8 * 8));
  uVar3 = *(uint *)(this + 100);
  if (param_1 < uVar3) {
    uVar7 = uVar3 - 1;
    if (param_2 < uVar3) {
      uVar7 = param_2;
    }
    lVar4 = *(long *)(this + 0x58);
    uVar5 = *(undefined8 *)(lVar4 + lVar8 * 8);
    if (uVar7 - param_1 == 0 || (int)uVar7 < (int)param_1) {
      memmove((void *)(lVar4 + (long)(int)uVar7 * 8 + 8),(void *)(lVar4 + (long)(int)uVar7 * 8),
              (long)(int)(param_1 - uVar7) << 3);
    }
    else {
      __dest = (void *)(lVar4 + lVar8 * 8);
      memmove(__dest,(void *)((long)__dest + 8),(long)(int)(uVar7 - param_1) << 3);
    }
    *(undefined8 *)(*(long *)(this + 0x58) + (long)(int)uVar7 * 8) = uVar5;
  }
  if ((*(ushort *)(this + 0xe8) & 0x18) != 8) {
    if (Desktop::instance == (Desktop *)0x0) {
      this_00 = operator_new(0x1d0);
                    /* try { // try from 00276c32 to 00276c39 has its CatchHandler @ 00276cc7 */
      Desktop::Desktop(this_00);
      Desktop::instance = this_00;
    }
    lVar8 = **(long **)(*(long *)(Desktop::instance + 0x40) + 0x28);
    if ((*(ushort *)(lVar8 + 0x3c) & 0x1f0) == 0) {
      piVar1 = (int *)(*(long *)(lVar8 + 8) + 0x18);
      LOCK();
      bVar9 = *piVar1 == 0;
      if (bVar9) {
        *piVar1 = 1;
      }
      UNLOCK();
      if (bVar9) {
        plVar6 = *(long **)(lVar8 + 8);
        if (((MessageManager::instance == 0) || (*(int *)(MessageManager::instance + 8) != 0)) ||
           (InternalMessageQueue::singletonHolder._40_8_ == 0)) {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
          LOCK();
          plVar2 = plVar6 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)(*plVar6 + 8))(plVar6);
          }
          LOCK();
          *(undefined4 *)(*(long *)(lVar8 + 8) + 0x18) = 0;
          UNLOCK();
        }
        else {
          InternalMessageQueue::postMessage
                    ((InternalMessageQueue *)InternalMessageQueue::singletonHolder._40_8_,
                     (long)plVar6);
        }
      }
    }
  }
  internalChildrenChanged(this);
  return;
}


