// Function : mouseDrag
// Namespace: juce:Viewport:DragToScrollListener
// Entry    : 00269960
// Prototype: undefined mouseDrag(DragToScrollListener * this, ulong * param_1)
// Body     : 00269960 - 00269cad


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::Viewport::DragToScrollListener::mouseDrag(juce::MouseEvent const&) */

void __thiscall
juce::Viewport::DragToScrollListener::mouseDrag(DragToScrollListener *this,ulong *param_1)

{
  Timer *pTVar1;
  long *plVar2;
  long lVar3;
  double dVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 local_70;
  double local_68;
  undefined8 local_48;
  
  if (param_1[10] != *(ulong *)(this + 0x160)) {
    return;
  }
  for (plVar2 = (long *)param_1[6]; (plVar2 != (long *)0x0 && (*(long **)(this + 0x10) != plVar2));
      plVar2 = (long *)plVar2[6]) {
    if ((*(byte *)((long)plVar2 + 0xea) & 0x10) != 0) {
      return;
    }
  }
  MouseEvent::getEventRelativeTo((float *)&local_70,param_1,*(long **)(this + 0x10));
  iVar5 = SUB84((double)((float)local_70 - (float)local_48) + DAT_005d9098,0);
  iVar6 = SUB84((double)(local_70._4_4_ - (float)((ulong)local_48 >> 0x20)) + DAT_005d9098,0);
  if (this[0x168] != (DragToScrollListener)0x0) goto LAB_00269c72;
  fVar8 = hypotf((float)iVar5,(float)iVar6);
  if (((DAT_00651f38 < fVar8) && (lVar3 = *(long *)(this + 0x10), lVar3 != 0)) &&
     ((*(int *)(lVar3 + 0x224) == 2 ||
      ((*(int *)(lVar3 + 0x224) == 1 && (*(int *)(param_1[10] + 0x14) == 1)))))) {
    this[0x168] = (DragToScrollListener)0x1;
    *(undefined8 *)(this + 0x158) = *(undefined8 *)(lVar3 + 0x208);
    pTVar1 = (Timer *)(this + 0x18);
    Timer::stopTimer(pTVar1);
    dVar13 = *(double *)(this + 0x58);
    uVar9 = SUB84(dVar13,0);
    uVar10 = (undefined4)((ulong)dVar13 >> 0x20);
    dVar12 = *(double *)(this + 0x78);
    if (0.0 <= *(double *)(this + 0x78)) {
      dVar12 = 0.0;
    }
    uVar7 = -(ulong)(0.0 < *(double *)(this + 0x70));
    dVar4 = (double)(uVar7 & (ulong)*(double *)(this + 0x70) | ~uVar7 & (ulong)dVar12);
    dVar12 = (double)((ulong)dVar13 & _DAT_005d91b0);
    if ((dVar12 == DAT_005d94e0) ||
       (dVar11 = (double)((ulong)dVar4 & _DAT_005d91b0), dVar11 == DAT_005d94e0)) {
      if ((dVar13 != dVar4) || (NAN(dVar13) || NAN(dVar4))) {
LAB_00269b2e:
        *(double *)(this + 0x58) = dVar4;
        local_70 = pTVar1;
        local_68 = dVar4;
        ListenerList<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener,juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>>
        ::
        callCheckedExcluding<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::setPositionAndSendChange(double)::_lambda(juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener&)_1_,juce::ListenerList<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener,juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>
                  ((long *)(this + 0x90),&local_70);
        uVar9 = (undefined4)*(undefined8 *)(this + 0x58);
        uVar10 = (undefined4)((ulong)*(undefined8 *)(this + 0x58) >> 0x20);
      }
    }
    else {
      dVar13 = (double)((ulong)(dVar13 - dVar4) & _DAT_005d91b0);
      if (DAT_005db368 < dVar13) {
        if (dVar11 <= dVar12) {
          dVar11 = dVar12;
        }
        if (dVar11 * DAT_005db370 < dVar13) goto LAB_00269b2e;
      }
    }
    *(ulong *)(this + 0x60) = CONCAT44(uVar10,uVar9);
    *(undefined8 *)(this + 0x68) = 0;
    Timer::stopTimer(pTVar1);
    pTVar1 = (Timer *)(this + 0xb8);
    Timer::stopTimer(pTVar1);
    dVar13 = *(double *)(this + 0xf8);
    uVar9 = SUB84(dVar13,0);
    uVar10 = (undefined4)((ulong)dVar13 >> 0x20);
    dVar12 = *(double *)(this + 0x118);
    if (0.0 <= *(double *)(this + 0x118)) {
      dVar12 = 0.0;
    }
    uVar7 = -(ulong)(0.0 < *(double *)(this + 0x110));
    dVar4 = (double)(uVar7 & (ulong)*(double *)(this + 0x110) | ~uVar7 & (ulong)dVar12);
    dVar12 = (double)((ulong)dVar13 & _DAT_005d91b0);
    if ((dVar12 == DAT_005d94e0) ||
       (dVar11 = (double)(_DAT_005d91b0 & (ulong)dVar4), dVar11 == DAT_005d94e0)) {
      if ((dVar13 != dVar4) || (NAN(dVar13) || NAN(dVar4))) {
LAB_00269c15:
        *(double *)(this + 0xf8) = dVar4;
        local_70 = pTVar1;
        local_68 = dVar4;
        ListenerList<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener,juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>>
        ::
        callCheckedExcluding<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::setPositionAndSendChange(double)::_lambda(juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener&)_1_,juce::ListenerList<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener,juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>
                  ((long *)(this + 0x130),&local_70);
        uVar9 = (undefined4)*(undefined8 *)(this + 0xf8);
        uVar10 = (undefined4)((ulong)*(undefined8 *)(this + 0xf8) >> 0x20);
      }
    }
    else {
      dVar13 = (double)((ulong)(dVar13 - dVar4) & _DAT_005d91b0);
      if (DAT_005db368 < dVar13) {
        if (dVar11 <= dVar12) {
          dVar11 = dVar12;
        }
        if (dVar11 * DAT_005db370 < dVar13) goto LAB_00269c15;
      }
    }
    *(ulong *)(this + 0x100) = CONCAT44(uVar10,uVar9);
    *(undefined8 *)(this + 0x108) = 0;
    Timer::stopTimer(pTVar1);
  }
  if (this[0x168] == (DragToScrollListener)0x0) {
    return;
  }
LAB_00269c72:
  AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::moveTo
            ((double)iVar5 + *(double *)(this + 0x60),
             (AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum> *)
             (this + 0x18));
  AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::moveTo
            ((double)iVar6 + *(double *)(this + 0x100),
             (AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum> *)
             (this + 0xb8));
  return;
}


