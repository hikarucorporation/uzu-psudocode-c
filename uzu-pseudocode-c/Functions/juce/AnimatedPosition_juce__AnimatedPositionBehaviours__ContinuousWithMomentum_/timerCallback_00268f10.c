// Function : timerCallback
// Namespace: juce:AnimatedPosition_juce__AnimatedPositionBehaviours__ContinuousWithMomentum_
// Entry    : 00268f10
// Prototype: undefined timerCallback(AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum> * this)
// Body     : 00268f10 - 00269109


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::timerCallback()
    */

void __thiscall
juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::timerCallback
          (AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum> *this)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  timeval local_28;
  double local_18;
  undefined8 uStack_10;
  
  gettimeofday(&local_28,(__timezone_ptr_t)0x0);
  lVar2 = local_28.tv_usec / 1000 + local_28.tv_sec * 1000;
  dVar6 = (double)(lVar2 - *(long *)(this + 0x68)) * DAT_00651e50;
  dVar4 = DAT_005de650;
  if (dVar6 <= DAT_005de650) {
    dVar4 = dVar6;
  }
  dVar4 = (double)(-(ulong)(dVar6 < DAT_00651e50) & (ulong)DAT_00651e50 |
                  ~-(ulong)(dVar6 < DAT_00651e50) & (ulong)dVar4);
  *(long *)(this + 0x68) = lVar2;
  dVar5 = *(double *)(this + 0x30) * *(double *)(this + 0x28);
  *(double *)(this + 0x28) = dVar5;
  dVar6 = (double)(_DAT_005d91b0 & (ulong)dVar5);
  if (*(double *)(this + 0x38) <= dVar6) {
    local_18 = dVar4 * dVar5 + *(double *)(this + 0x40);
    uStack_10 = 0;
    if (dVar6 != DAT_005d94e0) {
      if ((DAT_005db368 < dVar6) && (DAT_005db370 * dVar6 < dVar6)) goto LAB_002690df;
      goto LAB_00268fd0;
    }
    if ((dVar5 == 0.0) && (!NAN(dVar5))) goto LAB_00268fd0;
LAB_002690df:
    iVar1 = *(int *)(this + 0x10);
    *(undefined4 *)(this + 0x10) = 0x10;
    if (iVar1 == 0) {
                    /* try { // try from 002690fd to 00269104 has its CatchHandler @ 0026910a */
      Timer::TimerThread::addTimer(*(TimerThread **)(this + 0x18),(long)this);
    }
    else {
      Timer::TimerThread::resetTimerCounter(*(TimerThread **)(this + 0x18),(long)this);
    }
  }
  else {
    *(undefined8 *)(this + 0x28) = 0;
    local_18 = dVar4 * 0.0 + *(double *)(this + 0x40);
LAB_00268fd0:
    uStack_10 = 0;
    Timer::stopTimer((Timer *)this);
  }
  dVar4 = *(double *)(this + 0x40);
  dVar6 = *(double *)(this + 0x60);
  if (local_18 <= *(double *)(this + 0x60)) {
    dVar6 = local_18;
  }
  uVar3 = -(ulong)(local_18 < *(double *)(this + 0x58));
  local_28.tv_usec = uVar3 & (ulong)*(double *)(this + 0x58) | ~uVar3 & (ulong)dVar6;
  dVar6 = (double)((ulong)dVar4 & _DAT_005d91b0);
  if ((dVar6 == DAT_005d94e0) ||
     (dVar5 = (double)(_DAT_005d91b0 & local_28.tv_usec), dVar5 == DAT_005d94e0)) {
    if ((dVar4 != (double)local_28.tv_usec) || (NAN(dVar4) || NAN((double)local_28.tv_usec))) {
LAB_002690ab:
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
    dVar4 = (double)((ulong)(dVar4 - (double)local_28.tv_usec) & _DAT_005d91b0);
    if (DAT_005db368 < dVar4) {
      if (dVar5 <= dVar6) {
        dVar5 = dVar6;
      }
      if (dVar5 * DAT_005db370 < dVar4) goto LAB_002690ab;
    }
  }
  return;
}


