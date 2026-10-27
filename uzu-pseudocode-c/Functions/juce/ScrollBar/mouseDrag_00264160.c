// Function : mouseDrag
// Namespace: juce:ScrollBar
// Entry    : 00264160
// Prototype: ulong mouseDrag(ScrollBar * this, long param_1)
// Body     : 00264160 - 002642e5


/* juce::ScrollBar::mouseDrag(juce::MouseEvent const&) */

ulong __thiscall juce::ScrollBar::mouseDrag(ScrollBar *this,long param_1)

{
  long *plVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  long *plVar5;
  uint uVar6;
  ulong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  uVar7 = (ulong)(byte)this[0x17c];
  iVar4 = *(int *)(param_1 + 8 + uVar7 * 4);
  if ((this[0x17d] != (ScrollBar)0x0) && (*(int *)(this + 0x16c) != iVar4)) {
    uVar6 = *(int *)(this + 0x15c) - *(int *)(this + 0x164);
    uVar7 = (ulong)uVar6;
    if (uVar6 != 0 && *(int *)(this + 0x164) <= *(int *)(this + 0x15c)) {
      dVar8 = *(double *)(this + 0x128);
      dVar9 = *(double *)(this + 0x130);
      dVar2 = *(double *)(this + 0x140);
      dVar3 = *(double *)(this + 0x138);
      dVar10 = (((dVar9 - dVar8) - (dVar2 - dVar3)) * (double)(iVar4 - *(int *)(this + 0x168))) /
               (double)(int)uVar6 + *(double *)(this + 0x150);
      dVar11 = (dVar10 - dVar3) + dVar2;
      if (dVar11 <= dVar10) {
        dVar11 = dVar10;
      }
      if (dVar11 - dVar10 < dVar9 - dVar8) {
        dVar9 = dVar9 - (dVar11 - dVar10);
        if (dVar10 <= dVar9) {
          dVar9 = dVar10;
        }
        dVar8 = (double)(-(ulong)(dVar10 < dVar8) & (ulong)dVar8 |
                        ~-(ulong)(dVar10 < dVar8) & (ulong)dVar9);
        dVar9 = dVar11 + (dVar8 - dVar10);
        if (dVar9 <= dVar8) {
          dVar9 = dVar8;
        }
      }
      if ((dVar3 == dVar8) && (!NAN(dVar3) && !NAN(dVar8))) {
        if ((dVar2 == dVar9) && (!NAN(dVar2) && !NAN(dVar9))) goto LAB_002642c6;
      }
      *(double *)(this + 0x138) = dVar8;
      *(double *)(this + 0x140) = dVar9;
      updateThumbPosition(this);
      uVar7 = 0;
      LOCK();
      uVar6 = *(uint *)(*(long *)(this + 0xf8) + 0x18);
      if (uVar6 == 0) {
        *(uint *)(*(long *)(this + 0xf8) + 0x18) = 1;
      }
      else {
        uVar7 = (ulong)uVar6;
      }
      UNLOCK();
      if (uVar6 == 0) {
        plVar5 = *(long **)(this + 0xf8);
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
          uVar7 = *(ulong *)(this + 0xf8);
          LOCK();
          *(undefined4 *)(uVar7 + 0x18) = 0;
          UNLOCK();
        }
        else {
          uVar7 = InternalMessageQueue::postMessage
                            ((InternalMessageQueue *)InternalMessageQueue::singletonHolder._40_8_,
                             (long)plVar5);
        }
      }
    }
  }
LAB_002642c6:
  *(int *)(this + 0x16c) = iVar4;
  return uVar7;
}


