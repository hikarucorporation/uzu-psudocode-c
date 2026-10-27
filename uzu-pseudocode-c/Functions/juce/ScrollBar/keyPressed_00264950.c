// Function : keyPressed
// Namespace: juce:ScrollBar
// Entry    : 00264950
// Prototype: ulong keyPressed(ScrollBar * this, int * param_1)
// Body     : 00264950 - 00264bf2


/* juce::ScrollBar::keyPressed(juce::KeyPress const&) */

ulong __thiscall juce::ScrollBar::keyPressed(ScrollBar *this,int *param_1)

{
  long *plVar1;
  double dVar2;
  long *plVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 unaff_RBP;
  int iVar6;
  bool bVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  if ((*(ushort *)(this + 0xe8) & 2) == 0) {
LAB_00264a38:
    uVar5 = 0;
  }
  else {
    iVar6 = *param_1;
    uVar4 = param_1[1] & 7;
    if (((iVar6 == 0x10000052) && (uVar4 == 0)) || ((iVar6 == 0x10000051 && (uVar4 == 0)))) {
      dVar2 = *(double *)(this + 0x138);
      dVar11 = dVar2 - *(double *)(this + 0x148);
      dVar8 = *(double *)(this + 0x140);
      dVar9 = dVar8 - *(double *)(this + 0x148);
      if (dVar9 <= dVar11) {
        dVar9 = dVar11;
      }
      dVar10 = *(double *)(this + 0x128);
      dVar12 = *(double *)(this + 0x130);
      if (dVar9 - dVar11 < dVar12 - dVar10) {
        dVar12 = dVar12 - (dVar9 - dVar11);
        if (dVar11 <= dVar12) {
          dVar12 = dVar11;
        }
        dVar10 = (double)(-(ulong)(dVar11 < dVar10) & (ulong)dVar10 |
                         ~-(ulong)(dVar11 < dVar10) & (ulong)dVar12);
        dVar12 = dVar9 + (dVar10 - dVar11);
        if (dVar12 <= dVar10) {
          dVar12 = dVar10;
        }
      }
      if ((dVar2 == dVar10) && (!NAN(dVar2) && !NAN(dVar10))) {
LAB_00264a28:
        if ((dVar8 == dVar12) && (!NAN(dVar8) && !NAN(dVar12))) goto LAB_00264a38;
      }
    }
    else {
      if (((iVar6 != 0x10000054) || (uVar4 != 0)) && ((iVar6 != 0x10000053 || (uVar4 != 0)))) {
        if ((iVar6 == 0x10000055) && (uVar4 == 0)) {
          iVar6 = -1;
LAB_00264baa:
          uVar5 = moveScrollbarInPages(this,iVar6);
          return uVar5;
        }
        if ((iVar6 == 0x10000056) && (uVar4 == 0)) {
          iVar6 = 1;
          goto LAB_00264baa;
        }
        if ((iVar6 == 0x10000050) && (uVar4 == 0)) {
          uVar5 = scrollToTop(this);
          return uVar5;
        }
        uVar5 = 0;
        if ((iVar6 == 0x10000057) && (uVar4 == 0)) {
          uVar5 = scrollToBottom(this);
          return uVar5;
        }
        goto LAB_00264a3a;
      }
      dVar2 = *(double *)(this + 0x138);
      dVar11 = *(double *)(this + 0x148) + dVar2;
      dVar8 = *(double *)(this + 0x140);
      dVar9 = *(double *)(this + 0x148) + dVar8;
      if (dVar9 <= dVar11) {
        dVar9 = dVar11;
      }
      dVar10 = *(double *)(this + 0x128);
      dVar12 = *(double *)(this + 0x130);
      if (dVar9 - dVar11 < dVar12 - dVar10) {
        dVar12 = dVar12 - (dVar9 - dVar11);
        if (dVar11 <= dVar12) {
          dVar12 = dVar11;
        }
        dVar10 = (double)(-(ulong)(dVar11 < dVar10) & (ulong)dVar10 |
                         ~-(ulong)(dVar11 < dVar10) & (ulong)dVar12);
        dVar12 = dVar9 + (dVar10 - dVar11);
        if (dVar12 <= dVar10) {
          dVar12 = dVar10;
        }
      }
      if ((dVar2 == dVar10) && (!NAN(dVar2) && !NAN(dVar10))) goto LAB_00264a28;
    }
    *(double *)(this + 0x138) = dVar10;
    *(double *)(this + 0x140) = dVar12;
    updateThumbPosition(this);
    LOCK();
    bVar7 = *(int *)(*(long *)(this + 0xf8) + 0x18) == 0;
    if (bVar7) {
      *(int *)(*(long *)(this + 0xf8) + 0x18) = 1;
    }
    UNLOCK();
    uVar5 = CONCAT71((int7)((ulong)unaff_RBP >> 8),1);
    if (bVar7) {
      plVar3 = *(long **)(this + 0xf8);
      if (((MessageManager::instance == 0) || (*(int *)(MessageManager::instance + 8) != 0)) ||
         (InternalMessageQueue::singletonHolder._40_8_ == 0)) {
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
        LOCK();
        *(undefined4 *)(*(long *)(this + 0xf8) + 0x18) = 0;
        UNLOCK();
      }
      else {
        InternalMessageQueue::postMessage
                  ((InternalMessageQueue *)InternalMessageQueue::singletonHolder._40_8_,(long)plVar3
                  );
      }
    }
  }
LAB_00264a3a:
  return uVar5 & 0xffffffff;
}


