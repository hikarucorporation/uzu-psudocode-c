// Function : ~ShutdownDetector
// Namespace: juce:ShutdownDetector
// Entry    : 00484e40
// Prototype: undefined ~ShutdownDetector(ShutdownDetector * this)
// Body     : 00484e40 - 00485304


/* juce::ShutdownDetector::~ShutdownDetector() */

void __thiscall juce::ShutdownDetector::~ShutdownDetector(ShutdownDetector *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  undefined8 *puVar2;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  pthread_mutex_t *__mutex;
  undefined8 *puVar12;
  int iVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long *plVar22;
  int local_70;
  int local_6c;
  ShutdownDetector *local_68;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_60;
  undefined8 *local_58;
  ulong local_50;
  undefined8 *local_48;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_40;
  int *local_38;
  
  *(undefined ***)this = &PTR__ShutdownDetector_00712da0;
  if ((getListeners()::listeners == '\0') &&
     (iVar13 = __cxa_guard_acquire(&getListeners()::listeners), iVar13 != 0)) {
    __cxa_atexit(ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>
                 ::~ListenerList,&getListeners()::listeners,&__dso_handle);
    __cxa_guard_release(&getListeners()::listeners);
  }
  this_00 = DAT_0071d150;
  __mutex = getListeners()::listeners;
  if (DAT_0071d168 != 2) goto LAB_0048528b;
  if (DAT_0071d150 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (*PTR___libc_single_threaded_00715c50 == '\0') {
      LOCK();
      *(int *)(DAT_0071d150 + 8) = *(int *)(DAT_0071d150 + 8) + 1;
      UNLOCK();
    }
    else {
      *(int *)(DAT_0071d150 + 8) = *(int *)(DAT_0071d150 + 8) + 1;
    }
  }
  pthread_mutex_lock(__mutex);
  local_70 = 0;
  pthread_mutex_lock(__mutex);
  iVar13 = *(int *)((long)__mutex + 0x34);
  pthread_mutex_unlock(__mutex);
  puVar12 = DAT_0071d158;
  plVar5 = (long *)DAT_0071d158[1];
  local_6c = iVar13;
  if (plVar5 == (long *)DAT_0071d158[2]) {
    local_58 = DAT_0071d158;
    plVar6 = (long *)*DAT_0071d158;
    local_68 = (ShutdownDetector *)((long)plVar5 - (long)plVar6);
    local_60 = this_00;
    if (local_68 == (ShutdownDetector *)0x7ffffffffffffff8) {
                    /* try { // try from 004852f9 to 00485304 has its CatchHandler @ 00485305 */
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_realloc_insert");
    }
    uVar18 = (long)local_68 >> 3;
    uVar15 = 1;
    if (local_68 != (ShutdownDetector *)0x0) {
      uVar15 = uVar18;
    }
    local_50 = uVar15 + uVar18;
    if (local_50 >> 0x3c != 0) {
      local_50 = 0xfffffffffffffff;
    }
    if (CARRY8(uVar15,uVar18)) {
      local_50 = 0xfffffffffffffff;
    }
    if (local_50 == 0) {
      plVar14 = (long *)0x0;
    }
    else {
                    /* try { // try from 00484f75 to 00484f79 has its CatchHandler @ 00485305 */
      plVar14 = operator_new(local_50 * 8);
    }
    puVar12 = local_58;
    plVar14[uVar18] = (long)&local_70;
    if ((long)local_68 < 1) {
      plVar22 = plVar14 + uVar18;
    }
    else {
      plVar22 = plVar14;
      if (plVar6 != plVar5) {
        plVar16 = plVar6;
        if (0x17 < (long)local_68 - 8U) {
          uVar21 = ((long)local_68 - 8U >> 3) + 1;
          uVar15 = uVar21 & 0xfffffffffffffffc;
          uVar17 = (uVar15 - 4 >> 2) + 1;
          uVar18 = (ulong)((uint)uVar17 & 3);
          if (uVar15 - 4 < 0xc) {
            lVar19 = 0;
          }
          else {
            uVar17 = uVar17 & 0x7ffffffffffffffc;
            lVar19 = 0;
            do {
              lVar20 = (plVar6 + lVar19)[1];
              lVar7 = plVar6[lVar19 + 2];
              lVar8 = (plVar6 + lVar19 + 2)[1];
              plVar14[lVar19] = plVar6[lVar19];
              (plVar14 + lVar19)[1] = lVar20;
              plVar14[lVar19 + 2] = lVar7;
              (plVar14 + lVar19 + 2)[1] = lVar8;
              lVar20 = (plVar6 + lVar19 + 4)[1];
              lVar7 = plVar6[lVar19 + 6];
              lVar8 = (plVar6 + lVar19 + 6)[1];
              plVar14[lVar19 + 4] = plVar6[lVar19 + 4];
              (plVar14 + lVar19 + 4)[1] = lVar20;
              plVar14[lVar19 + 6] = lVar7;
              (plVar14 + lVar19 + 6)[1] = lVar8;
              lVar20 = (plVar6 + lVar19 + 8)[1];
              lVar7 = plVar6[lVar19 + 10];
              lVar8 = (plVar6 + lVar19 + 10)[1];
              plVar14[lVar19 + 8] = plVar6[lVar19 + 8];
              (plVar14 + lVar19 + 8)[1] = lVar20;
              plVar14[lVar19 + 10] = lVar7;
              (plVar14 + lVar19 + 10)[1] = lVar8;
              lVar20 = (plVar6 + lVar19 + 0xc)[1];
              lVar7 = plVar6[lVar19 + 0xe];
              lVar8 = (plVar6 + lVar19 + 0xe)[1];
              plVar14[lVar19 + 0xc] = plVar6[lVar19 + 0xc];
              (plVar14 + lVar19 + 0xc)[1] = lVar20;
              plVar14[lVar19 + 0xe] = lVar7;
              (plVar14 + lVar19 + 0xe)[1] = lVar8;
              lVar19 = lVar19 + 0x10;
              uVar17 = uVar17 - 4;
            } while (uVar17 != 0);
          }
          if (uVar18 != 0) {
            lVar20 = 0;
            do {
              puVar4 = (undefined8 *)((long)plVar6 + lVar20 + lVar19 * 8);
              uVar9 = puVar4[1];
              puVar2 = (undefined8 *)((long)plVar6 + lVar20 + lVar19 * 8 + 0x10);
              uVar10 = *puVar2;
              uVar11 = puVar2[1];
              puVar2 = (undefined8 *)((long)plVar14 + lVar20 + lVar19 * 8);
              *puVar2 = *puVar4;
              puVar2[1] = uVar9;
              puVar2 = (undefined8 *)((long)plVar14 + lVar20 + lVar19 * 8 + 0x10);
              *puVar2 = uVar10;
              puVar2[1] = uVar11;
              lVar20 = lVar20 + 0x20;
            } while (uVar18 * 0x20 != lVar20);
          }
          plVar22 = plVar14 + uVar15;
          if (uVar21 == uVar15) goto LAB_004850e4;
          plVar16 = plVar6 + uVar15;
        }
        do {
          *plVar22 = *plVar16;
          plVar16 = plVar16 + 1;
          plVar22 = plVar22 + 1;
        } while (plVar16 != plVar5);
      }
    }
LAB_004850e4:
    local_68 = this;
    if (plVar6 != (long *)0x0) {
      operator_delete(plVar6);
    }
    *puVar12 = plVar14;
    puVar12[1] = plVar22 + 1;
    puVar12[2] = plVar14 + local_50;
    local_48 = DAT_0071d158;
    p_Var1 = DAT_0071d160;
    this = local_68;
    this_00 = local_60;
  }
  else {
    *plVar5 = (long)&local_70;
    puVar12[1] = puVar12[1] + 8;
    local_48 = DAT_0071d158;
    p_Var1 = DAT_0071d160;
  }
  DAT_0071d158 = local_48;
  DAT_0071d160 = p_Var1;
  if (p_Var1 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (*PTR___libc_single_threaded_00715c50 == '\0') {
      LOCK();
      *(int *)(p_Var1 + 8) = *(int *)(p_Var1 + 8) + 1;
      UNLOCK();
    }
    else {
      *(int *)(p_Var1 + 8) = *(int *)(p_Var1 + 8) + 1;
    }
  }
  local_38 = &local_70;
  local_40 = p_Var1;
  for (; iVar13 = local_70, local_70 < local_6c; local_70 = local_70 + 1) {
    pthread_mutex_lock(__mutex);
    plVar5 = *(long **)(__mutex[1].__align + (long)iVar13 * 8);
    pthread_mutex_unlock(__mutex);
    if (plVar5 != (long *)0x0) {
                    /* try { // try from 00485194 to 00485199 has its CatchHandler @ 0048530a */
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>
  ::
  callCheckedExcluding<juce::ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>::callCheckedExcluding<juce::ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>::DummyBailOutChecker>(juce::ShutdownDetector::Listener*,juce::ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>::DummyBailOutChecker_const&,void(juce::ShutdownDetector::Listener::*)())::{lambda(juce::ShutdownDetector::Listener&)#1},juce::ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>::DummyBailOutChecker>(juce::ShutdownDetector::Listener*,juce::ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>::DummyBailOutChecker_const&,juce::ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>::callCheckedExcluding<juce::ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>::DummyBailOutChecker>(juce::ShutdownDetector::Listener*,juce::ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>::DummyBailOutChecker_const&,void(juce::ShutdownDetector::Listener::*)())::{lambda(juce::ShutdownDetector::Listener&)#1}&&)
  ::{lambda()#1}::operator()((_lambda___1_ *)&local_48);
  if (p_Var1 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
LAB_00485207:
    pthread_mutex_unlock(__mutex);
  }
  else if (*(long *)(p_Var1 + 8) == 0x100000001) {
    *(undefined8 *)(p_Var1 + 8) = 0;
    (**(code **)(*(long *)p_Var1 + 0x10))(p_Var1);
    (**(code **)(*(long *)p_Var1 + 0x18))(p_Var1);
    pthread_mutex_unlock(__mutex);
  }
  else {
    if (*PTR___libc_single_threaded_00715c50 == '\0') {
      LOCK();
      p_Var3 = p_Var1 + 8;
      iVar13 = *(int *)p_Var3;
      *(int *)p_Var3 = *(int *)p_Var3 + -1;
      UNLOCK();
    }
    else {
      iVar13 = (int)*(long *)(p_Var1 + 8);
      *(int *)(p_Var1 + 8) = iVar13 + -1;
    }
    if (iVar13 != 1) goto LAB_00485207;
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var1);
    pthread_mutex_unlock(__mutex);
  }
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
        iVar13 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar13 = (int)*(long *)(this_00 + 8);
        *(int *)(this_00 + 8) = iVar13 + -1;
      }
      if (iVar13 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this_00);
      }
    }
  }
LAB_0048528b:
  LOCK();
  if (this == (ShutdownDetector *)singletonHolder._40_8_) {
    singletonHolder._40_8_ = 0;
  }
  UNLOCK();
  DeletedAtShutdown::~DeletedAtShutdown((DeletedAtShutdown *)this);
  return;
}


