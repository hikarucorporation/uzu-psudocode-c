// Function : mouseDown
// Namespace: juce:Viewport:DragToScrollListener
// Entry    : 00269660
// Prototype: undefined mouseDown(DragToScrollListener * this, long param_1)
// Body     : 00269660 - 00269943


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::Viewport::DragToScrollListener::mouseDown(juce::MouseEvent const&) */

void __thiscall
juce::Viewport::DragToScrollListener::mouseDown(DragToScrollListener *this,long param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  void *pvVar4;
  Desktop *this_00;
  uint uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  Timer *local_48;
  double local_40;
  double local_38;
  undefined8 uStack_30;
  
  if (this[0x169] != (DragToScrollListener)0x0) {
    return;
  }
  if (*(long *)(this + 0x10) == 0) {
    return;
  }
  iVar7 = *(int *)(*(long *)(this + 0x10) + 0x224);
  if (iVar7 != 2) {
    if (iVar7 != 1) {
      return;
    }
    if (*(int *)(*(long *)(param_1 + 0x50) + 0x14) != 1) {
      return;
    }
  }
  local_38 = *(double *)(this + 0x58);
  uStack_30 = 0;
  Timer::stopTimer((Timer *)(this + 0x18));
  dVar10 = *(double *)(this + 0x58);
  dVar13 = *(double *)(this + 0x78);
  if (local_38 <= *(double *)(this + 0x78)) {
    dVar13 = local_38;
  }
  uVar9 = -(ulong)(local_38 < *(double *)(this + 0x70));
  dVar13 = (double)(uVar9 & (ulong)*(double *)(this + 0x70) | ~uVar9 & (ulong)dVar13);
  dVar11 = (double)((ulong)dVar10 & _DAT_005d91b0);
  if ((dVar11 == DAT_005d94e0) ||
     (dVar12 = (double)((ulong)dVar13 & _DAT_005d91b0), dVar12 == DAT_005d94e0)) {
    if ((dVar10 != dVar13) || (NAN(dVar10) || NAN(dVar13))) {
LAB_0026974d:
      *(double *)(this + 0x58) = dVar13;
      local_48 = (Timer *)(this + 0x18);
      local_40 = dVar13;
      ListenerList<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener,juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>>
      ::
      callCheckedExcluding<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::setPositionAndSendChange(double)::_lambda(juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener&)_1_,juce::ListenerList<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener,juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>
                ((long *)(this + 0x90),&local_48);
    }
  }
  else {
    dVar10 = (double)((ulong)(dVar10 - dVar13) & _DAT_005d91b0);
    if (DAT_005db368 < dVar10) {
      if (dVar12 <= dVar11) {
        dVar12 = dVar11;
      }
      if (dVar12 * DAT_005db370 < dVar10) goto LAB_0026974d;
    }
  }
  local_38 = *(double *)(this + 0xf8);
  uStack_30 = 0;
  Timer::stopTimer((Timer *)(this + 0xb8));
  dVar10 = *(double *)(this + 0xf8);
  dVar13 = *(double *)(this + 0x118);
  if (local_38 <= *(double *)(this + 0x118)) {
    dVar13 = local_38;
  }
  uVar9 = -(ulong)(local_38 < *(double *)(this + 0x110));
  dVar13 = (double)(uVar9 & (ulong)*(double *)(this + 0x110) | ~uVar9 & (ulong)dVar13);
  dVar11 = (double)((ulong)dVar10 & _DAT_005d91b0);
  if ((dVar11 == DAT_005d94e0) ||
     (dVar12 = (double)(_DAT_005d91b0 & (ulong)dVar13), dVar12 == DAT_005d94e0)) {
    if ((dVar10 == dVar13) && (!NAN(dVar10) && !NAN(dVar13))) goto LAB_0026983d;
  }
  else {
    dVar10 = (double)((ulong)(dVar10 - dVar13) & _DAT_005d91b0);
    if (dVar10 <= DAT_005db368) goto LAB_0026983d;
    if (dVar12 <= dVar11) {
      dVar12 = dVar11;
    }
    if (dVar10 <= dVar12 * DAT_005db370) goto LAB_0026983d;
  }
  *(double *)(this + 0xf8) = dVar13;
  local_48 = (Timer *)(this + 0xb8);
  local_40 = dVar13;
  ListenerList<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener,juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>>
  ::
  callCheckedExcluding<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::setPositionAndSendChange(double)::_lambda(juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener&)_1_,juce::ListenerList<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener,juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>
            ((long *)(this + 0x130),&local_48);
LAB_0026983d:
  plVar2 = *(long **)(*(long *)(this + 0x10) + 0x1a0);
  if (plVar2 != (long *)0x0) {
    uVar1 = *(uint *)((long)plVar2 + 0xc);
    if ((long)(int)uVar1 != 0) {
      lVar3 = *plVar2;
      lVar8 = (long)(int)uVar1 * 8;
      uVar9 = 0;
      do {
        if (*(DragToScrollListener **)(lVar3 + uVar9 * 8) == this) {
          uVar5 = (uint)uVar9;
          if (-1 < (int)uVar5) {
            if ((int)uVar5 < (int)plVar2[2]) {
              *(int *)(plVar2 + 2) = (int)plVar2[2] + -1;
            }
            if (uVar5 < uVar1) {
              memmove((void *)(lVar3 + (uVar9 & 0xffffffff) * 8),
                      (void *)(lVar3 + (uVar9 & 0xffffffff) * 8 + 8),
                      (long)(int)(~uVar5 + uVar1) << 3);
              iVar7 = *(int *)((long)plVar2 + 0xc);
              uVar1 = iVar7 - 1;
              *(uint *)((long)plVar2 + 0xc) = uVar1;
              iVar6 = iVar7 * 2 + -2;
              iVar7 = 0;
              if (-1 < iVar6) {
                iVar7 = iVar6;
              }
              if (iVar7 < (int)plVar2[1]) {
                uVar5 = 8;
                if (8 < (int)uVar1) {
                  uVar5 = uVar1;
                }
                if ((int)uVar5 < (int)plVar2[1]) {
                  pvVar4 = realloc((void *)*plVar2,(ulong)uVar5 << 3);
                  *plVar2 = (long)pvVar4;
                  *(uint *)(plVar2 + 1) = uVar5;
                }
              }
            }
          }
          break;
        }
        uVar9 = uVar9 + 1;
        lVar8 = lVar8 + -8;
      } while (lVar8 != 0);
    }
  }
  if (Desktop::instance == (Desktop *)0x0) {
    this_00 = operator_new(0x1d0);
                    /* try { // try from 00269913 to 0026991a has its CatchHandler @ 00269944 */
    Desktop::Desktop(this_00);
    Desktop::instance = this_00;
  }
  Desktop::addGlobalMouseListener(Desktop::instance,(long)this);
  this[0x169] = (DragToScrollListener)0x1;
  *(undefined8 *)(this + 0x160) = *(undefined8 *)(param_1 + 0x50);
  return;
}


