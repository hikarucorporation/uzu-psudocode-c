// Function : moveTo
// Namespace: juce:AnimatedPosition_juce__AnimatedPositionBehaviours__ContinuousWithMomentum_
// Entry    : 00269fe0
// Prototype: undefined moveTo(double param_1, AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum> * this)
// Body     : 00269fe0 - 0026a12b


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::moveTo(double)
    */

void __thiscall
juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::moveTo
          (double param_1,
          AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum> *this)

{
  ulong uVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  ulong uVar6;
  timeval local_28;
  double local_18;
  
  local_18 = param_1;
  gettimeofday(&local_28,(__timezone_ptr_t)0x0);
  uVar1 = _DAT_005d91b0;
  lVar2 = local_28.tv_usec / 1000 + local_28.tv_sec * 1000;
  dVar3 = *(double *)(this + 0x40);
  dVar4 = (double)(lVar2 - *(long *)(this + 0x70)) * DAT_00651e50;
  if (dVar4 <= _DAT_0065c588) {
    dVar4 = _DAT_0065c588;
  }
  dVar4 = (local_18 - dVar3) / dVar4;
  uVar6 = -(ulong)(DAT_005de658 < (double)((ulong)dVar4 & _DAT_005d91b0)) & (ulong)dVar4;
  *(ulong *)(this + 0x50) = uVar6;
  *(ulong *)(this + 0x28) = uVar6;
  *(long *)(this + 0x70) = lVar2;
  dVar4 = *(double *)(this + 0x60);
  if (local_18 <= *(double *)(this + 0x60)) {
    dVar4 = local_18;
  }
  uVar6 = -(ulong)(local_18 < *(double *)(this + 0x58));
  local_28.tv_usec = uVar6 & (ulong)*(double *)(this + 0x58) | ~uVar6 & (ulong)dVar4;
  dVar4 = (double)((ulong)dVar3 & uVar1);
  if ((dVar4 == DAT_005d94e0) || (dVar5 = (double)(uVar1 & local_28.tv_usec), dVar5 == DAT_005d94e0)
     ) {
    if ((dVar3 != (double)local_28.tv_usec) || (NAN(dVar3) || NAN((double)local_28.tv_usec))) {
LAB_0026a108:
      *(__suseconds_t *)(this + 0x40) = local_28.tv_usec;
      local_28.tv_sec = (__time_t)this;
      ListenerList<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener,juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>>
      ::
      callCheckedExcluding<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::setPositionAndSendChange(double)::_lambda(juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener&)_1_,juce::ListenerList<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener,juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>
                ((long *)(this + 0x78),&local_28.tv_sec);
      return;
    }
  }
  else {
    dVar3 = (double)((ulong)(dVar3 - (double)local_28.tv_usec) & _DAT_005d91b0);
    if (DAT_005db368 < dVar3) {
      if (dVar5 <= dVar4) {
        dVar5 = dVar4;
      }
      if (dVar5 * DAT_005db370 < dVar3) goto LAB_0026a108;
    }
  }
  return;
}


