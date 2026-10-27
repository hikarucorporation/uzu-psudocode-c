// Function : resetTimerCounter
// Namespace: juce:Timer:TimerThread
// Entry    : 00483b60
// Prototype: undefined resetTimerCounter(TimerThread * this, long param_1)
// Body     : 00483b60 - 00483cbc


/* juce::Timer::TimerThread::resetTimerCounter(juce::Timer*) */

void __thiscall juce::Timer::TimerThread::resetTimerCounter(TimerThread *this,long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined4 uVar10;
  long lVar11;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x1a0));
  uVar9 = *(ulong *)(param_1 + 8);
  lVar7 = *(long *)(this + 0x1c8);
  lVar6 = uVar9 * 0x10;
  iVar3 = *(int *)(param_1 + 0x10);
  iVar5 = *(int *)(lVar7 + 8 + lVar6);
  if (iVar3 == iVar5) goto LAB_00483ca3;
  *(int *)(lVar7 + 8 + lVar6) = iVar3;
  if (iVar5 < iVar3) {
    lVar6 = *(long *)(this + 0x1d0) - lVar7 >> 4;
    uVar1 = lVar6 - 1;
    if (uVar9 < uVar1) {
      lVar8 = uVar9 * 0x10;
      lVar11 = *(long *)(lVar7 + lVar8);
      uVar10 = *(undefined4 *)(lVar7 + 0xc + lVar8);
      if (uVar9 + 1 != lVar6) {
        do {
          if (iVar3 <= *(int *)(lVar7 + 0x18 + lVar8)) break;
          puVar2 = (undefined8 *)(lVar7 + 0x10 + lVar8);
          uVar4 = puVar2[1];
          *(undefined8 *)(lVar7 + lVar8) = *puVar2;
          ((undefined8 *)(lVar7 + lVar8))[1] = uVar4;
          lVar7 = *(long *)(this + 0x1c8);
          *(ulong *)(*(long *)(lVar7 + lVar8) + 8) = uVar9;
          uVar9 = uVar9 + 1;
          lVar8 = lVar8 + 0x10;
        } while (uVar1 != uVar9);
      }
LAB_00483c4e:
      lVar6 = uVar9 * 0x10;
      *(long *)(lVar7 + lVar6) = lVar11;
      *(int *)(lVar7 + lVar6 + 8) = iVar3;
      *(undefined4 *)(lVar7 + lVar6 + 0xc) = uVar10;
      *(ulong *)(lVar11 + 8) = uVar9;
    }
  }
  else if (uVar9 != 0) {
    lVar11 = *(long *)(lVar7 + lVar6);
    uVar10 = *(undefined4 *)(lVar7 + 0xc + lVar6);
    do {
      if (*(int *)(lVar7 + -8 + lVar6) <= iVar3) goto LAB_00483c4e;
      puVar2 = (undefined8 *)(lVar7 + -0x10 + lVar6);
      uVar4 = puVar2[1];
      *(undefined8 *)(lVar7 + lVar6) = *puVar2;
      ((undefined8 *)(lVar7 + lVar6))[1] = uVar4;
      lVar7 = *(long *)(this + 0x1c8);
      *(ulong *)(*(long *)(lVar7 + lVar6) + 8) = uVar9;
      uVar9 = uVar9 - 1;
      lVar6 = lVar6 + -0x10;
    } while (uVar9 != 0);
    uVar9 = 0;
    goto LAB_00483c4e;
  }
  iVar5 = pthread_mutex_lock((pthread_mutex_t *)(this + 0xf8));
  if (iVar5 != 0) {
                    /* try { // try from 00483cb6 to 00483cbc has its CatchHandler @ 00483cbd */
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar5);
  }
  LOCK();
  this[0x150] = (TimerThread)0x1;
  UNLOCK();
  std::condition_variable::notify_all();
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0xf8));
LAB_00483ca3:
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x1a0));
  return;
}


