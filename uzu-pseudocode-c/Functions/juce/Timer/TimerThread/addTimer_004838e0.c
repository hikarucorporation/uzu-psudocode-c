// Function : addTimer
// Namespace: juce:Timer:TimerThread
// Entry    : 004838e0
// Prototype: undefined addTimer(TimerThread * this, long param_1)
// Body     : 004838e0 - 00483b39


/* juce::Timer::TimerThread::addTimer(juce::Timer*) */

void __thiscall juce::Timer::TimerThread::addTimer(TimerThread *this,long param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x1a0));
  if (*(long *)(this + 0x10) == 0) {
                    /* try { // try from 0048390c to 00483918 has its CatchHandler @ 00483b3a */
    Thread::startThread((Thread *)this,1);
  }
  plVar3 = *(long **)(this + 0x1c8);
  plVar4 = *(long **)(this + 0x1d0);
  lVar13 = (long)plVar4 - (long)plVar3;
  uVar15 = lVar13 >> 4;
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  if (plVar4 == *(long **)(this + 0x1d8)) {
    if (lVar13 == 0x7ffffffffffffff0) {
                    /* try { // try from 00483b2e to 00483b39 has its CatchHandler @ 00483b41 */
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_realloc_insert");
    }
    uVar8 = 1;
    if (lVar13 != 0) {
      uVar8 = uVar15;
    }
    uVar11 = uVar8 + uVar15;
    if (uVar11 >> 0x3b != 0) {
      uVar11 = 0x7ffffffffffffff;
    }
    if (CARRY8(uVar8,uVar15)) {
      uVar11 = 0x7ffffffffffffff;
    }
                    /* try { // try from 004839b9 to 004839c0 has its CatchHandler @ 00483b41 */
    plVar9 = operator_new(uVar11 * 0x10);
    plVar9[uVar15 * 2] = param_1;
    *(undefined4 *)(plVar9 + uVar15 * 2 + 1) = uVar2;
    if (lVar13 < 1) {
      plVar14 = plVar9 + uVar15 * 2;
    }
    else {
      plVar14 = plVar9;
      if (plVar3 != plVar4) {
        plVar10 = plVar3;
        do {
          lVar5 = plVar10[1];
          *plVar14 = *plVar10;
          plVar14[1] = lVar5;
          plVar10 = plVar10 + 2;
          plVar14 = plVar14 + 2;
        } while (plVar10 != plVar4);
      }
    }
    if (plVar3 != (long *)0x0) {
      operator_delete(plVar3);
    }
    *(long **)(this + 0x1c8) = plVar9;
    *(long **)(this + 0x1d0) = plVar14 + 2;
    *(long **)(this + 0x1d8) = plVar9 + uVar11 * 2;
    *(ulong *)(param_1 + 8) = uVar15;
  }
  else {
    *plVar4 = param_1;
    *(undefined4 *)(plVar4 + 1) = uVar2;
    *(long *)(this + 0x1d0) = *(long *)(this + 0x1d0) + 0x10;
    *(ulong *)(param_1 + 8) = uVar15;
  }
  if (lVar13 != 0) {
    lVar13 = *(long *)(this + 0x1c8);
    lVar12 = uVar15 * 0x10;
    lVar5 = *(long *)(lVar13 + lVar12);
    iVar7 = *(int *)(lVar13 + 8 + lVar12);
    uVar2 = *(undefined4 *)(lVar13 + 0xc + lVar12);
    do {
      if (*(int *)(lVar13 + -8 + lVar12) <= iVar7) goto LAB_00483aae;
      puVar1 = (undefined8 *)(lVar13 + -0x10 + lVar12);
      uVar6 = puVar1[1];
      *(undefined8 *)(lVar13 + lVar12) = *puVar1;
      ((undefined8 *)(lVar13 + lVar12))[1] = uVar6;
      lVar13 = *(long *)(this + 0x1c8);
      *(ulong *)(*(long *)(lVar13 + lVar12) + 8) = uVar15;
      uVar15 = uVar15 - 1;
      lVar12 = lVar12 + -0x10;
    } while (uVar15 != 0);
    uVar15 = 0;
LAB_00483aae:
    lVar12 = uVar15 * 0x10;
    *(long *)(lVar13 + lVar12) = lVar5;
    *(int *)(lVar13 + 8 + lVar12) = iVar7;
    *(undefined4 *)(lVar13 + 0xc + lVar12) = uVar2;
    *(ulong *)(lVar5 + 8) = uVar15;
  }
  iVar7 = pthread_mutex_lock((pthread_mutex_t *)(this + 0xf8));
  if (iVar7 != 0) {
                    /* try { // try from 00483b22 to 00483b2d has its CatchHandler @ 00483b43 */
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar7);
  }
  LOCK();
  this[0x150] = (TimerThread)0x1;
  UNLOCK();
  std::condition_variable::notify_all();
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0xf8));
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x1a0));
  return;
}


