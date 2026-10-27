// Function : setValue
// Namespace: juce:ScrollBar:createAccessibilityHandler__:ValueInterface
// Entry    : 00265da0
// Prototype: undefined setValue(double param_1, ValueInterface * this)
// Body     : 00265da0 - 00265eb1


/* setValue(double) */

void __thiscall
juce::ScrollBar::createAccessibilityHandler()::ValueInterface::setValue
          (double param_1,ValueInterface *this)

{
  long *plVar1;
  double dVar2;
  double dVar3;
  ScrollBar *this_00;
  long *plVar4;
  bool bVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  this_00 = *(ScrollBar **)(this + 8);
  dVar2 = *(double *)(this_00 + 0x140);
  dVar3 = *(double *)(this_00 + 0x138);
  dVar6 = (param_1 - dVar3) + dVar2;
  if (dVar6 <= param_1) {
    dVar6 = param_1;
  }
  dVar7 = *(double *)(this_00 + 0x128);
  dVar8 = *(double *)(this_00 + 0x130);
  if (dVar6 - param_1 < dVar8 - dVar7) {
    dVar8 = dVar8 - (dVar6 - param_1);
    if (param_1 <= dVar8) {
      dVar8 = param_1;
    }
    dVar7 = (double)(-(ulong)(param_1 < dVar7) & (ulong)dVar7 |
                    ~-(ulong)(param_1 < dVar7) & (ulong)dVar8);
    dVar8 = dVar6 + (dVar7 - param_1);
    if (dVar8 <= dVar7) {
      dVar8 = dVar7;
    }
  }
  if ((((dVar3 != dVar7) || (NAN(dVar3) || NAN(dVar7))) || (dVar2 != dVar8)) ||
     (NAN(dVar2) || NAN(dVar8))) {
    *(double *)(this_00 + 0x138) = dVar7;
    *(double *)(this_00 + 0x140) = dVar8;
    updateThumbPosition(this_00);
    LOCK();
    bVar5 = *(int *)(*(long *)(this_00 + 0xf8) + 0x18) == 0;
    if (bVar5) {
      *(int *)(*(long *)(this_00 + 0xf8) + 0x18) = 1;
    }
    UNLOCK();
    if (bVar5) {
      plVar4 = *(long **)(this_00 + 0xf8);
      if (((MessageManager::instance != 0) && (*(int *)(MessageManager::instance + 8) == 0)) &&
         (InternalMessageQueue::singletonHolder._40_8_ != 0)) {
        InternalMessageQueue::postMessage
                  ((InternalMessageQueue *)InternalMessageQueue::singletonHolder._40_8_,(long)plVar4
                  );
        return;
      }
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
      *(undefined4 *)(*(long *)(this_00 + 0xf8) + 0x18) = 0;
      UNLOCK();
      return;
    }
  }
  return;
}


