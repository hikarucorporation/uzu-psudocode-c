// Function : clicked
// Namespace: juce:ScrollBar:ScrollbarButton
// Entry    : 00265f60
// Prototype: ulong clicked(ScrollbarButton * this)
// Body     : 00265f60 - 00266097


/* juce::ScrollBar::ScrollbarButton::clicked() */

ulong __thiscall juce::ScrollBar::ScrollbarButton::clicked(ScrollbarButton *this)

{
  long *plVar1;
  double dVar2;
  double dVar3;
  ScrollBar *this_00;
  long *plVar4;
  uint uVar5;
  ulong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  this_00 = *(ScrollBar **)(this + 0x200);
  uVar5 = (uint)(*(int *)(this + 0x1f8) - 1U < 2) * 2 - 1;
  uVar6 = (ulong)uVar5;
  dVar7 = (double)(int)uVar5 * *(double *)(this_00 + 0x148);
  dVar2 = *(double *)(this_00 + 0x138);
  dVar10 = dVar2 + dVar7;
  dVar3 = *(double *)(this_00 + 0x140);
  dVar7 = dVar7 + dVar3;
  if (dVar7 <= dVar10) {
    dVar7 = dVar10;
  }
  dVar8 = *(double *)(this_00 + 0x128);
  dVar9 = *(double *)(this_00 + 0x130);
  if (dVar7 - dVar10 < dVar9 - dVar8) {
    dVar9 = dVar9 - (dVar7 - dVar10);
    if (dVar10 <= dVar9) {
      dVar9 = dVar10;
    }
    dVar8 = (double)(-(ulong)(dVar10 < dVar8) & (ulong)dVar8 |
                    ~-(ulong)(dVar10 < dVar8) & (ulong)dVar9);
    dVar9 = dVar7 + (dVar8 - dVar10);
    if (dVar9 <= dVar8) {
      dVar9 = dVar8;
    }
  }
  if ((((dVar2 != dVar8) || (NAN(dVar2) || NAN(dVar8))) || (dVar3 != dVar9)) ||
     (NAN(dVar3) || NAN(dVar9))) {
    *(double *)(this_00 + 0x138) = dVar8;
    *(double *)(this_00 + 0x140) = dVar9;
    updateThumbPosition(this_00);
    uVar6 = 0;
    LOCK();
    uVar5 = *(uint *)(*(long *)(this_00 + 0xf8) + 0x18);
    if (uVar5 == 0) {
      *(uint *)(*(long *)(this_00 + 0xf8) + 0x18) = 1;
    }
    else {
      uVar6 = (ulong)uVar5;
    }
    UNLOCK();
    if (uVar5 == 0) {
      plVar4 = *(long **)(this_00 + 0xf8);
      if (((MessageManager::instance != 0) && (*(int *)(MessageManager::instance + 8) == 0)) &&
         (InternalMessageQueue::singletonHolder._40_8_ != 0)) {
        uVar6 = InternalMessageQueue::postMessage
                          ((InternalMessageQueue *)InternalMessageQueue::singletonHolder._40_8_,
                           (long)plVar4);
        return uVar6;
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
      uVar6 = *(ulong *)(this_00 + 0xf8);
      LOCK();
      *(undefined4 *)(uVar6 + 0x18) = 0;
      UNLOCK();
      return uVar6;
    }
  }
  return uVar6;
}


