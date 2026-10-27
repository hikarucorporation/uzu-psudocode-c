// Function : signalThreadShouldExit
// Namespace: juce:Thread
// Entry    : 004aa730
// Prototype: undefined signalThreadShouldExit(Thread * this)
// Body     : 004aa730 - 004aab04


/* juce::Thread::signalThreadShouldExit() */

void __thiscall juce::Thread::signalThreadShouldExit(Thread *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  undefined8 *puVar2;
  int iVar3;
  pthread_mutex_t *__mutex;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long *plVar20;
  int local_70;
  int local_6c;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_68;
  long local_60;
  ulong local_58;
  undefined8 *local_50;
  undefined8 local_48;
  long local_40;
  int *local_38;
  
  LOCK();
  this[0x165] = (Thread)0x1;
  UNLOCK();
  if (*(int *)(this + 0x188) != 2) {
    return;
  }
  __mutex = *(pthread_mutex_t **)(this + 0x168);
  this_00 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x170);
  if (this_00 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (*PTR___libc_single_threaded_00715c50 == '\0') {
      LOCK();
      *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
      UNLOCK();
    }
    else {
      *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
    }
  }
  pthread_mutex_lock(__mutex);
  local_70 = 0;
  pthread_mutex_lock(__mutex);
  iVar3 = *(int *)((long)__mutex + 0x34);
  pthread_mutex_unlock(__mutex);
  puVar4 = *(undefined8 **)(this + 0x178);
  plVar5 = (long *)puVar4[1];
  local_6c = iVar3;
  if (plVar5 != (long *)puVar4[2]) {
    *plVar5 = (long)&local_70;
    puVar4[1] = puVar4[1] + 8;
    local_48 = *(undefined8 *)(this + 0x178);
    local_40 = *(long *)(this + 0x180);
    goto joined_r0x004aa9f4;
  }
  plVar6 = (long *)*puVar4;
  lVar17 = (long)plVar5 - (long)plVar6;
  local_68 = this_00;
  if (lVar17 == 0x7ffffffffffffff8) {
                    /* try { // try from 004aaaf9 to 004aab04 has its CatchHandler @ 004aab05 */
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  uVar19 = lVar17 >> 3;
  uVar13 = 1;
  if (lVar17 != 0) {
    uVar13 = uVar19;
  }
  local_58 = uVar13 + uVar19;
  if (local_58 >> 0x3c != 0) {
    local_58 = 0xfffffffffffffff;
  }
  if (CARRY8(uVar13,uVar19)) {
    local_58 = 0xfffffffffffffff;
  }
  local_50 = puVar4;
  if (local_58 == 0) {
    plVar12 = (long *)0x0;
    *(int **)(uVar19 * 8) = &local_70;
    if (lVar17 < 1) goto LAB_004aa8d2;
LAB_004aa872:
    plVar20 = plVar12;
    if (plVar6 != plVar5) {
      plVar14 = plVar6;
      if (0x17 < lVar17 - 8U) {
        uVar18 = (lVar17 - 8U >> 3) + 1;
        uVar13 = uVar18 & 0xfffffffffffffffc;
        uVar15 = (uVar13 - 4 >> 2) + 1;
        uVar19 = (ulong)((uint)uVar15 & 3);
        if (uVar13 - 4 < 0xc) {
          lVar17 = 0;
        }
        else {
          uVar15 = uVar15 & 0x7ffffffffffffffc;
          lVar17 = 0;
          do {
            lVar16 = (plVar6 + lVar17)[1];
            lVar7 = plVar6[lVar17 + 2];
            lVar8 = (plVar6 + lVar17 + 2)[1];
            plVar12[lVar17] = plVar6[lVar17];
            (plVar12 + lVar17)[1] = lVar16;
            plVar12[lVar17 + 2] = lVar7;
            (plVar12 + lVar17 + 2)[1] = lVar8;
            lVar16 = (plVar6 + lVar17 + 4)[1];
            lVar7 = plVar6[lVar17 + 6];
            lVar8 = (plVar6 + lVar17 + 6)[1];
            plVar12[lVar17 + 4] = plVar6[lVar17 + 4];
            (plVar12 + lVar17 + 4)[1] = lVar16;
            plVar12[lVar17 + 6] = lVar7;
            (plVar12 + lVar17 + 6)[1] = lVar8;
            lVar16 = (plVar6 + lVar17 + 8)[1];
            lVar7 = plVar6[lVar17 + 10];
            lVar8 = (plVar6 + lVar17 + 10)[1];
            plVar12[lVar17 + 8] = plVar6[lVar17 + 8];
            (plVar12 + lVar17 + 8)[1] = lVar16;
            plVar12[lVar17 + 10] = lVar7;
            (plVar12 + lVar17 + 10)[1] = lVar8;
            lVar16 = (plVar6 + lVar17 + 0xc)[1];
            lVar7 = plVar6[lVar17 + 0xe];
            lVar8 = (plVar6 + lVar17 + 0xe)[1];
            plVar12[lVar17 + 0xc] = plVar6[lVar17 + 0xc];
            (plVar12 + lVar17 + 0xc)[1] = lVar16;
            plVar12[lVar17 + 0xe] = lVar7;
            (plVar12 + lVar17 + 0xe)[1] = lVar8;
            lVar17 = lVar17 + 0x10;
            uVar15 = uVar15 - 4;
          } while (uVar15 != 0);
        }
        if (uVar19 != 0) {
          lVar16 = 0;
          do {
            puVar2 = (undefined8 *)((long)plVar6 + lVar16 + lVar17 * 8);
            uVar9 = puVar2[1];
            puVar4 = (undefined8 *)((long)plVar6 + lVar16 + lVar17 * 8 + 0x10);
            uVar10 = *puVar4;
            uVar11 = puVar4[1];
            puVar4 = (undefined8 *)((long)plVar12 + lVar16 + lVar17 * 8);
            *puVar4 = *puVar2;
            puVar4[1] = uVar9;
            puVar4 = (undefined8 *)((long)plVar12 + lVar16 + lVar17 * 8 + 0x10);
            *puVar4 = uVar10;
            puVar4[1] = uVar11;
            lVar16 = lVar16 + 0x20;
          } while (uVar19 * 0x20 != lVar16);
        }
        plVar20 = plVar12 + uVar13;
        if (uVar18 == uVar13) goto LAB_004aa9b4;
        plVar14 = plVar6 + uVar13;
      }
      do {
        *plVar20 = *plVar14;
        plVar14 = plVar14 + 1;
        plVar20 = plVar20 + 1;
      } while (plVar14 != plVar5);
    }
  }
  else {
    local_60 = lVar17;
                    /* try { // try from 004aa857 to 004aa85b has its CatchHandler @ 004aab05 */
    plVar12 = operator_new(local_58 * 8);
    plVar12[uVar19] = (long)&local_70;
    lVar17 = local_60;
    if (0 < local_60) goto LAB_004aa872;
LAB_004aa8d2:
    plVar20 = plVar12 + uVar19;
  }
LAB_004aa9b4:
  if (plVar6 != (long *)0x0) {
    operator_delete(plVar6);
  }
  *local_50 = plVar12;
  local_50[1] = plVar20 + 1;
  local_50[2] = plVar12 + local_58;
  local_48 = *(undefined8 *)(this + 0x178);
  local_40 = *(long *)(this + 0x180);
  this_00 = local_68;
joined_r0x004aa9f4:
  if (local_40 != 0) {
    if (*PTR___libc_single_threaded_00715c50 == '\0') {
      LOCK();
      *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
      UNLOCK();
    }
    else {
      *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    }
  }
  local_38 = &local_70;
  for (; iVar3 = local_70, local_70 < local_6c; local_70 = local_70 + 1) {
    pthread_mutex_lock(__mutex);
    plVar5 = *(long **)(__mutex[1].__align + (long)iVar3 * 8);
    pthread_mutex_unlock(__mutex);
    if (plVar5 != (long *)0x0) {
                    /* try { // try from 004aaa64 to 004aaa69 has its CatchHandler @ 004aab0a */
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  ScopeGuard<juce::ListenerList<juce::Thread::Listener,juce::Array<juce::Thread::Listener*,juce::CriticalSection,0>>::callCheckedExcluding<juce::Thread::signalThreadShouldExit()::$_22,juce::ListenerList<juce::Thread::Listener,juce::Array<juce::Thread::Listener*,juce::CriticalSection,0>>::DummyBailOutChecker>(juce::Thread::Listener*,juce::ListenerList<juce::Thread::Listener,juce::Array<juce::Thread::Listener*,juce::CriticalSection,0>>::DummyBailOutChecker_const&,juce::Thread::signalThreadShouldExit()::$_22&&)::{lambda()#1}>
  ::~ScopeGuard((ScopeGuard<juce::ListenerList<juce::Thread::Listener,juce::Array<juce::Thread::Listener*,juce::CriticalSection,0>>::callCheckedExcluding<juce::Thread::signalThreadShouldExit()::__22,juce::ListenerList<juce::Thread::Listener,juce::Array<juce::Thread::Listener*,juce::CriticalSection,0>>::DummyBailOutChecker>(juce::Thread::Listener*,juce::ListenerList<juce::Thread::Listener,juce::Array<juce::Thread::Listener*,juce::CriticalSection,0>>::DummyBailOutChecker_const&,juce::Thread::signalThreadShouldExit()::__22&&)::_lambda()_1_>
                 *)&local_48);
  pthread_mutex_unlock(__mutex);
  if (this_00 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (*(long *)(this_00 + 8) == 0x100000001) {
      *(undefined8 *)(this_00 + 8) = 0;
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
      (**(code **)(*(long *)this_00 + 0x18))(this_00);
    }
    else {
      if (*PTR___libc_single_threaded_00715c50 == '\0') {
        LOCK();
        p_Var1 = this_00 + 8;
        iVar3 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar3 = (int)*(long *)(this_00 + 8);
        *(int *)(this_00 + 8) = iVar3 + -1;
      }
      if (iVar3 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this_00);
      }
    }
  }
  return;
}


