// Function : mouseDown
// Namespace: juce:Viewport
// Entry    : 00263210
// Prototype: undefined mouseDown(Viewport * this, long param_1)
// Body     : 00263210 - 002633e8


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::Viewport::mouseDown(juce::MouseEvent const&) */

void __thiscall juce::Viewport::mouseDown(Viewport *this,long param_1)

{
  long lVar1;
  ulong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  Timer *local_38;
  double local_30;
  double local_28;
  undefined8 uStack_20;
  
  if ((*(long *)(param_1 + 0x30) != *(long *)(this + 0x108)) &&
     (*(long *)(param_1 + 0x30) != *(long *)(this + 0x100))) {
    return;
  }
  lVar1 = *(long *)(this + 0x230);
  local_28 = *(double *)(lVar1 + 0x58);
  uStack_20 = 0;
  Timer::stopTimer((Timer *)(lVar1 + 0x18));
  dVar3 = *(double *)(lVar1 + 0x58);
  dVar5 = *(double *)(lVar1 + 0x78);
  if (local_28 <= *(double *)(lVar1 + 0x78)) {
    dVar5 = local_28;
  }
  uVar2 = -(ulong)(local_28 < *(double *)(lVar1 + 0x70));
  dVar5 = (double)(uVar2 & (ulong)*(double *)(lVar1 + 0x70) | ~uVar2 & (ulong)dVar5);
  dVar4 = (double)((ulong)dVar3 & _DAT_005d91b0);
  if ((dVar4 == DAT_005d94e0) ||
     (dVar6 = (double)((ulong)dVar5 & _DAT_005d91b0), dVar6 == DAT_005d94e0)) {
    if ((dVar3 != dVar5) || (NAN(dVar3) || NAN(dVar5))) {
LAB_002632e2:
      *(double *)(lVar1 + 0x58) = dVar5;
      local_38 = (Timer *)(lVar1 + 0x18);
      local_30 = dVar5;
      ListenerList<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener,juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>>
      ::
      callCheckedExcluding<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::setPositionAndSendChange(double)::_lambda(juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener&)_1_,juce::ListenerList<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener,juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>
                ((long *)(lVar1 + 0x90),&local_38);
    }
  }
  else {
    dVar3 = (double)((ulong)(dVar3 - dVar5) & _DAT_005d91b0);
    if (DAT_005db368 < dVar3) {
      if (dVar6 <= dVar4) {
        dVar6 = dVar4;
      }
      if (dVar6 * DAT_005db370 < dVar3) goto LAB_002632e2;
    }
  }
  local_28 = *(double *)(lVar1 + 0xf8);
  uStack_20 = 0;
  Timer::stopTimer((Timer *)(lVar1 + 0xb8));
  dVar3 = *(double *)(lVar1 + 0xf8);
  dVar5 = *(double *)(lVar1 + 0x118);
  if (local_28 <= *(double *)(lVar1 + 0x118)) {
    dVar5 = local_28;
  }
  uVar2 = -(ulong)(local_28 < *(double *)(lVar1 + 0x110));
  local_30 = (double)(uVar2 & (ulong)*(double *)(lVar1 + 0x110) | ~uVar2 & (ulong)dVar5);
  dVar5 = (double)((ulong)dVar3 & _DAT_005d91b0);
  if ((dVar5 == DAT_005d94e0) ||
     (dVar4 = (double)(_DAT_005d91b0 & (ulong)local_30), dVar4 == DAT_005d94e0)) {
    if ((dVar3 != local_30) || (NAN(dVar3) || NAN(local_30))) {
LAB_002633bd:
      *(double *)(lVar1 + 0xf8) = local_30;
      local_38 = (Timer *)(lVar1 + 0xb8);
      ListenerList<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener,juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>>
      ::
      callCheckedExcluding<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::setPositionAndSendChange(double)::_lambda(juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener&)_1_,juce::ListenerList<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener,juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>
                ((long *)(lVar1 + 0x130),&local_38);
      return;
    }
  }
  else {
    dVar3 = (double)((ulong)(dVar3 - local_30) & _DAT_005d91b0);
    if (DAT_005db368 < dVar3) {
      if (dVar4 <= dVar5) {
        dVar4 = dVar5;
      }
      if (dVar4 * DAT_005db370 < dVar3) goto LAB_002633bd;
    }
  }
  return;
}


