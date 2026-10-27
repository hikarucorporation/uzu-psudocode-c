// Function : Timer
// Namespace: juce:Timer
// Entry    : 00483df0
// Prototype: int Timer(Timer * this)
// Body     : 00483df0 - 004847cc


/* juce::Timer::Timer() */

int __thiscall juce::Timer::Timer(Timer *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  int iVar8;
  Thread *pTVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  DeletedAtShutdown *this_00;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var12;
  ulong uVar13;
  void *pvVar14;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  int *piVar19;
  uint uVar20;
  pthread_mutex_t *ppVar21;
  bool bVar22;
  undefined4 *local_50;
  undefined4 *local_48;
  Timer *local_40;
  pthread_mutex_t *local_38;
  
  *(undefined ***)this = &PTR__Timer_00712bc8;
  *(undefined8 *)(this + 8) = 0xffffffffffffffff;
  *(undefined4 *)(this + 0x10) = 0;
  if ((SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak == '\0') &&
     (iVar8 = __cxa_guard_acquire(&SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak),
     iVar8 != 0)) {
    SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak = 0;
    DAT_0071d128 = (Thread *)0x0;
    DAT_0071d130 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
    __cxa_atexit(SharedResourcePointer<juce::Timer::TimerThread>::Weak::~Weak,
                 &SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak,&__dso_handle);
    __cxa_guard_release(&SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak);
  }
  LOCK();
  bVar22 = SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak == 0;
  if (bVar22) {
    SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak = 1;
  }
  UNLOCK();
  if (!bVar22) {
    LOCK();
    bVar22 = SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak == 0;
    if (bVar22) {
      SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak = 1;
    }
    UNLOCK();
    if (!bVar22) {
      LOCK();
      bVar22 = SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak == 0;
      if (bVar22) {
        SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak = 1;
      }
      UNLOCK();
      if (!bVar22) {
        LOCK();
        bVar22 = SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak == 0;
        if (bVar22) {
          SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak = 1;
        }
        UNLOCK();
        if (!bVar22) {
          LOCK();
          bVar22 = SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak == 0;
          if (bVar22) {
            SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak = 1;
          }
          UNLOCK();
          if (!bVar22) {
            LOCK();
            bVar22 = SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak == 0;
            if (bVar22) {
              SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak = 1;
            }
            UNLOCK();
            if (!bVar22) {
              LOCK();
              bVar22 = SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak == 0;
              if (bVar22) {
                SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak = 1;
              }
              UNLOCK();
              if (!bVar22) {
                LOCK();
                bVar22 = SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak == 0;
                if (bVar22) {
                  SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak = 1;
                }
                UNLOCK();
                if (!bVar22) {
                  LOCK();
                  bVar22 = SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak == 0;
                  if (bVar22) {
                    SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak = 1;
                  }
                  UNLOCK();
                  if (!bVar22) {
                    LOCK();
                    bVar22 = SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak == 0;
                    if (bVar22) {
                      SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak = 1;
                    }
                    UNLOCK();
                    if (!bVar22) {
                      LOCK();
                      bVar22 = SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak == 0;
                      if (bVar22) {
                        SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak = 1;
                      }
                      UNLOCK();
                      if (!bVar22) {
                        LOCK();
                        bVar22 = SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak == 0;
                        if (bVar22) {
                          SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak = 1;
                        }
                        UNLOCK();
                        if (!bVar22) {
                          LOCK();
                          bVar22 = SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak ==
                                   0;
                          if (bVar22) {
                            SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak = 1;
                          }
                          UNLOCK();
                          if (!bVar22) {
                            LOCK();
                            bVar22 = SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak
                                     == 0;
                            if (bVar22) {
                              SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak = 1;
                            }
                            UNLOCK();
                            if (!bVar22) {
                              LOCK();
                              bVar22 = SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak
                                       == 0;
                              if (bVar22) {
                                SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak = 1;
                              }
                              UNLOCK();
                              if (!bVar22) {
                                LOCK();
                                bVar22 = SharedResourcePointer<juce::Timer::TimerThread>::weak()::
                                         weak == 0;
                                if (bVar22) {
                                  SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak = 1;
                                }
                                UNLOCK();
                                if (!bVar22) {
                                  LOCK();
                                  bVar22 = SharedResourcePointer<juce::Timer::TimerThread>::weak()::
                                           weak == 0;
                                  if (bVar22) {
                                    SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak =
                                         1;
                                  }
                                  UNLOCK();
                                  if (!bVar22) {
                                    LOCK();
                                    bVar22 = SharedResourcePointer<juce::Timer::TimerThread>::weak()
                                             ::weak == 0;
                                    if (bVar22) {
                                      SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak
                                           = 1;
                                    }
                                    UNLOCK();
                                    if (!bVar22) {
                                      LOCK();
                                      bVar22 = SharedResourcePointer<juce::Timer::TimerThread>::
                                               weak()::weak == 0;
                                      if (bVar22) {
                                        SharedResourcePointer<juce::Timer::TimerThread>::weak()::
                                        weak = 1;
                                      }
                                      UNLOCK();
                                      if (!bVar22) {
                                        LOCK();
                                        bVar22 = SharedResourcePointer<juce::Timer::TimerThread>::
                                                 weak()::weak == 0;
                                        if (bVar22) {
                                          SharedResourcePointer<juce::Timer::TimerThread>::weak()::
                                          weak = 1;
                                        }
                                        UNLOCK();
                                        if (!bVar22) {
                                          LOCK();
                                          bVar22 = SharedResourcePointer<juce::Timer::TimerThread>::
                                                   weak()::weak == 0;
                                          if (bVar22) {
                                            SharedResourcePointer<juce::Timer::TimerThread>::weak()
                                            ::weak = 1;
                                          }
                                          UNLOCK();
                                          if (!bVar22) {
                                            LOCK();
                                            bVar22 = SharedResourcePointer<juce::Timer::TimerThread>
                                                     ::weak()::weak == 0;
                                            if (bVar22) {
                                              SharedResourcePointer<juce::Timer::TimerThread>::
                                              weak()::weak = 1;
                                            }
                                            UNLOCK();
                                            while (!bVar22) {
                                              sched_yield();
                                              LOCK();
                                              bVar22 = 
                                                  SharedResourcePointer<juce::Timer::TimerThread>::
                                                  weak()::weak == 0;
                                              if (bVar22) {
                                                SharedResourcePointer<juce::Timer::TimerThread>::
                                                weak()::weak = 1;
                                              }
                                              UNLOCK();
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  p_Var15 = DAT_0071d130;
  *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x20) = DAT_0071d130;
  if (p_Var15 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
LAB_00484047:
    *(undefined8 *)(this + 0x18) = 0;
  }
  else {
    iVar8 = *(int *)(p_Var15 + 8);
    do {
      if (iVar8 == 0) {
        *(undefined8 *)(this + 0x20) = 0;
        goto LAB_00484047;
      }
      LOCK();
      iVar2 = *(int *)(p_Var15 + 8);
      bVar22 = iVar8 == iVar2;
      if (bVar22) {
        *(int *)(p_Var15 + 8) = iVar8 + 1;
      }
      else {
        iVar8 = iVar2;
      }
      pTVar9 = DAT_0071d128;
      UNLOCK();
    } while (!bVar22);
    p_Var15 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x20);
    if (p_Var15 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00484047;
    if (*(int *)(p_Var15 + 8) == 0) {
      *(undefined8 *)(this + 0x18) = 0;
      lVar18 = *(long *)(p_Var15 + 8);
      if (lVar18 == 0x100000001) goto LAB_00484023;
LAB_00484431:
      if (*PTR___libc_single_threaded_00715c50 == '\0') {
        LOCK();
        p_Var12 = p_Var15 + 8;
        iVar8 = *(int *)p_Var12;
        *(int *)p_Var12 = *(int *)p_Var12 + -1;
        UNLOCK();
      }
      else {
        iVar8 = (int)lVar18;
        *(int *)(p_Var15 + 8) = iVar8 + -1;
      }
      if (iVar8 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var15);
      }
    }
    else {
      *(Thread **)(this + 0x18) = DAT_0071d128;
      if (pTVar9 != (Thread *)0x0) goto LAB_004846b9;
      lVar18 = *(long *)(p_Var15 + 8);
      if (lVar18 != 0x100000001) goto LAB_00484431;
LAB_00484023:
      *(undefined8 *)(p_Var15 + 8) = 0;
      (**(code **)(*(long *)p_Var15 + 0x10))(p_Var15);
      (**(code **)(*(long *)p_Var15 + 0x18))(p_Var15);
    }
  }
                    /* try { // try from 0048404f to 00484058 has its CatchHandler @ 00484890 */
  pTVar9 = operator_new(0x248);
                    /* try { // try from 0048405f to 00484068 has its CatchHandler @ 00484883 */
  puVar10 = operator_new__(0x27);
  LOCK();
  *puVar10 = 0;
  UNLOCK();
  *(undefined8 *)(puVar10 + 2) = 0x10;
  local_50 = puVar10 + 4;
  *(undefined8 *)(puVar10 + 4) = 0x2e3876204543554a;
  puVar10[6] = 0x31312e30;
  *(undefined1 *)(puVar10 + 7) = 0;
                    /* try { // try from 0048409a to 004840b1 has its CatchHandler @ 00484857 */
  juce::String::appendCharPointer((String *)&local_50,": Timer",0x5e5e24);
  puVar10 = local_50;
  local_48 = local_50;
  piVar19 = local_50 + -4;
  if (piVar19 != &emptyString) {
    LOCK();
    *piVar19 = *piVar19 + 1;
    UNLOCK();
  }
  Thread::Thread(pTVar9,(long *)&local_48,0);
  piVar19 = puVar10 + -4;
  if (piVar19 != &emptyString) {
    LOCK();
    iVar8 = *piVar19;
    *piVar19 = *piVar19 + -1;
    UNLOCK();
    if (iVar8 == 0) {
      operator_delete__(piVar19);
    }
  }
  piVar19 = local_50 + -4;
  if (piVar19 != &emptyString) {
    LOCK();
    iVar8 = *piVar19;
    *piVar19 = *piVar19 + -1;
    UNLOCK();
    if (iVar8 == 0) {
      operator_delete__(piVar19);
    }
  }
  *(undefined ***)pTVar9 = &PTR__TimerThread_00712d00;
  *(undefined ***)(pTVar9 + 0x198) = &PTR__TimerThread_00712d30;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_48);
  pthread_mutexattr_settype((pthread_mutexattr_t *)&local_48,1);
  pthread_mutexattr_setprotocol((pthread_mutexattr_t *)&local_48,1);
  local_38 = (pthread_mutex_t *)(pTVar9 + 0x1a0);
  pthread_mutex_init(local_38,(pthread_mutexattr_t *)&local_48);
  pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_48);
  *(undefined8 *)(pTVar9 + 0x1f8) = 0;
  *(undefined8 *)(pTVar9 + 0x200) = 0;
  *(undefined8 *)(pTVar9 + 0x1e8) = 0;
  *(undefined8 *)(pTVar9 + 0x1f0) = 0;
  *(undefined8 *)(pTVar9 + 0x208) = 0;
  *(undefined8 *)(pTVar9 + 0x1c8) = 0;
  *(undefined8 *)(pTVar9 + 0x1d0) = 0;
  *(undefined8 *)(pTVar9 + 0x1d1) = 0;
  *(undefined8 *)(pTVar9 + 0x1d9) = 0;
  std::condition_variable::condition_variable((condition_variable *)(pTVar9 + 0x210));
  pTVar9[0x240] = (Thread)0x0;
  lVar18 = *(long *)(pTVar9 + 0x1c8);
  if ((ulong)(*(long *)(pTVar9 + 0x1d8) - lVar18) < 0x200) {
    lVar3 = *(long *)(pTVar9 + 0x1d0);
    local_40 = this;
                    /* try { // try from 004841ec to 004841f5 has its CatchHandler @ 004847f5 */
    puVar11 = operator_new(0x200);
    puVar4 = *(undefined8 **)(pTVar9 + 0x1c8);
    puVar5 = *(undefined8 **)(pTVar9 + 0x1d0);
    if ((0 < (long)puVar5 - (long)puVar4) && (puVar4 != puVar5)) {
      puVar16 = puVar4;
      puVar17 = puVar11;
      do {
        uVar6 = puVar16[1];
        *puVar17 = *puVar16;
        puVar17[1] = uVar6;
        puVar16 = puVar16 + 2;
        puVar17 = puVar17 + 2;
      } while (puVar16 != puVar5);
    }
    if (puVar4 != (undefined8 *)0x0) {
      operator_delete(puVar4);
    }
    *(undefined8 **)(pTVar9 + 0x1c8) = puVar11;
    *(undefined8 **)(pTVar9 + 0x1d0) = puVar11 + (lVar3 - lVar18 >> 4) * 2;
    *(undefined8 **)(pTVar9 + 0x1d8) = puVar11 + 0x40;
    this = local_40;
  }
  if (ShutdownDetector::singletonHolder._40_8_ == 0) {
    pthread_mutex_lock((pthread_mutex_t *)ShutdownDetector::singletonHolder);
    if ((ShutdownDetector::singletonHolder._40_8_ == 0) &&
       (SingletonHolder<juce::ShutdownDetector,juce::CriticalSection,false>::get()::alreadyInside ==
        '\0')) {
      SingletonHolder<juce::ShutdownDetector,juce::CriticalSection,false>::get()::alreadyInside = 1;
                    /* try { // try from 004842b3 to 004842bc has its CatchHandler @ 004847cd */
      this_00 = operator_new(8);
      *(undefined8 *)this_00 = 0;
      DeletedAtShutdown::DeletedAtShutdown(this_00);
      *(undefined ***)this_00 = &PTR__ShutdownDetector_00712da0;
      LOCK();
      UNLOCK();
      SingletonHolder<juce::ShutdownDetector,juce::CriticalSection,false>::get()::alreadyInside =
           '\0';
      ShutdownDetector::singletonHolder._40_8_ = this_00;
    }
    pthread_mutex_unlock((pthread_mutex_t *)ShutdownDetector::singletonHolder);
  }
  if ((ShutdownDetector::getListeners()::listeners == '\0') &&
     (iVar8 = __cxa_guard_acquire(&ShutdownDetector::getListeners()::listeners), iVar8 != 0)) {
    __cxa_atexit(ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>
                 ::~ListenerList,&ShutdownDetector::getListeners()::listeners,&__dso_handle);
    __cxa_guard_release(&ShutdownDetector::getListeners()::listeners);
  }
  if (DAT_0071d168 != 2) {
    LOCK();
    bVar22 = DAT_0071d168 == 0;
    if (bVar22) {
      DAT_0071d168 = 1;
    }
    UNLOCK();
    if (bVar22) {
                    /* try { // try from 00484325 to 0048432e has its CatchHandler @ 004847ed */
      p_Var12 = operator_new(0x48);
      *(undefined8 *)(p_Var12 + 8) = 0x100000001;
      *(undefined ***)p_Var12 = &PTR___Sp_counted_base_00712de8;
      ppVar21 = (pthread_mutex_t *)(p_Var12 + 0x10);
      *(undefined8 *)(p_Var12 + 0x10) = 0;
      *(undefined8 *)(p_Var12 + 0x18) = 0;
      *(undefined8 *)(p_Var12 + 0x20) = 0;
      *(undefined8 *)(p_Var12 + 0x28) = 0;
      *(undefined8 *)(p_Var12 + 0x30) = 0;
      *(undefined8 *)(p_Var12 + 0x38) = 0;
      *(undefined8 *)(p_Var12 + 0x40) = 0;
      pthread_mutexattr_init((pthread_mutexattr_t *)&local_48);
      pthread_mutexattr_settype((pthread_mutexattr_t *)&local_48,1);
      pthread_mutexattr_setprotocol((pthread_mutexattr_t *)&local_48,1);
      pthread_mutex_init(ppVar21,(pthread_mutexattr_t *)&local_48);
      pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_48);
      *(undefined8 *)(p_Var12 + 0x38) = 0;
      *(undefined8 *)(p_Var12 + 0x40) = 0;
      p_Var15 = DAT_0071d150;
      ShutdownDetector::getListeners()::listeners = ppVar21;
      if (DAT_0071d150 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        uVar13 = *(ulong *)(DAT_0071d150 + 8);
        if (uVar13 == 0x100000001) {
          p_Var1 = DAT_0071d150 + 8;
          DAT_0071d150 = p_Var12;
          *(undefined8 *)p_Var1 = 0;
          (**(code **)(*(long *)p_Var15 + 0x10))(p_Var15);
          (**(code **)(*(long *)p_Var15 + 0x18))(p_Var15);
          p_Var12 = DAT_0071d150;
        }
        else {
          if (*PTR___libc_single_threaded_00715c50 == '\0') {
            LOCK();
            p_Var1 = DAT_0071d150 + 8;
            uVar13 = (ulong)*(uint *)p_Var1;
            DAT_0071d150 = p_Var12;
            *(uint *)p_Var1 = *(uint *)p_Var1 - 1;
            UNLOCK();
          }
          else {
            p_Var1 = DAT_0071d150 + 8;
            DAT_0071d150 = p_Var12;
            *(int *)p_Var1 = (int)uVar13 + -1;
          }
          p_Var12 = DAT_0071d150;
          if ((int)uVar13 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var15);
            p_Var12 = DAT_0071d150;
          }
        }
      }
                    /* try { // try from 0048446a to 00484473 has its CatchHandler @ 004847e5 */
      DAT_0071d150 = p_Var12;
      p_Var12 = operator_new(0x28);
      *(undefined8 *)(p_Var12 + 8) = 0x100000001;
      *(undefined ***)p_Var12 = &PTR___Sp_counted_base_00712e38;
      DAT_0071d158 = p_Var12 + 0x10;
      *(undefined8 *)(p_Var12 + 0x10) = 0;
      *(undefined8 *)(p_Var12 + 0x18) = 0;
      *(undefined8 *)(p_Var12 + 0x20) = 0;
      p_Var15 = DAT_0071d160;
      if (DAT_0071d160 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        uVar13 = *(ulong *)(DAT_0071d160 + 8);
        if (uVar13 == 0x100000001) {
          p_Var1 = DAT_0071d160 + 8;
          DAT_0071d160 = p_Var12;
          *(undefined8 *)p_Var1 = 0;
          (**(code **)(*(long *)p_Var15 + 0x10))(p_Var15);
          (**(code **)(*(long *)p_Var15 + 0x18))(p_Var15);
          p_Var12 = DAT_0071d160;
        }
        else {
          if (*PTR___libc_single_threaded_00715c50 == '\0') {
            LOCK();
            p_Var1 = DAT_0071d160 + 8;
            uVar13 = (ulong)*(uint *)p_Var1;
            DAT_0071d160 = p_Var12;
            *(uint *)p_Var1 = *(uint *)p_Var1 - 1;
            UNLOCK();
          }
          else {
            p_Var1 = DAT_0071d160 + 8;
            DAT_0071d160 = p_Var12;
            *(int *)p_Var1 = (int)uVar13 + -1;
          }
          p_Var12 = DAT_0071d160;
          if ((int)uVar13 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var15);
            p_Var12 = DAT_0071d160;
          }
        }
      }
      DAT_0071d160 = p_Var12;
      LOCK();
      DAT_0071d168 = 2;
      UNLOCK();
    }
    else {
      while (DAT_0071d168 != 2) {
        sched_yield();
      }
    }
  }
  ppVar21 = ShutdownDetector::getListeners()::listeners;
  pthread_mutex_lock(ShutdownDetector::getListeners()::listeners);
  pthread_mutex_lock(ppVar21);
  if ((long)*(int *)((long)ppVar21 + 0x34) != 0) {
    lVar18 = 0;
    do {
      if (*(Thread **)(ppVar21[1].__align + lVar18) == pTVar9 + 0x198) goto LAB_004845d5;
      lVar18 = lVar18 + 8;
    } while ((long)*(int *)((long)ppVar21 + 0x34) * 8 != lVar18);
  }
  pthread_mutex_unlock(ppVar21);
  pthread_mutex_lock(ppVar21);
  iVar8 = *(int *)((long)ppVar21 + 0x34);
  if ((int)*(uint *)((long)ppVar21 + 0x30) <= iVar8) {
    uVar20 = iVar8 + ((iVar8 - (iVar8 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
    if (*(uint *)((long)ppVar21 + 0x30) != uVar20) {
      if ((int)uVar20 < 1) {
        free((void *)ppVar21[1].__align);
        ppVar21[1].__align = 0;
      }
      else {
        pvVar14 = realloc((void *)ppVar21[1].__align,(ulong)uVar20 << 3);
        ppVar21[1].__align = (long)pvVar14;
      }
    }
    *(uint *)((long)ppVar21 + 0x30) = uVar20;
    iVar8 = *(int *)((long)ppVar21 + 0x34);
  }
  *(int *)((long)ppVar21 + 0x34) = iVar8 + 1;
  *(Thread **)(ppVar21[1].__align + (long)iVar8 * 8) = pTVar9 + 0x198;
LAB_004845d5:
  pthread_mutex_unlock(ppVar21);
  pthread_mutex_unlock(ppVar21);
                    /* try { // try from 004845e5 to 004845ee has its CatchHandler @ 00484828 */
  p_Var15 = operator_new(0x18);
  *(undefined8 *)(p_Var15 + 8) = 0x100000001;
  *(undefined ***)p_Var15 = &PTR___Sp_counted_base_00712ec8;
  *(Thread **)(p_Var15 + 0x10) = pTVar9;
  puVar7 = PTR___libc_single_threaded_00715c50;
  DAT_0071d128 = pTVar9;
  if (*PTR___libc_single_threaded_00715c50 == '\0') {
    LOCK();
    *(int *)(p_Var15 + 0xc) = *(int *)(p_Var15 + 0xc) + 1;
    UNLOCK();
    p_Var12 = DAT_0071d130;
  }
  else {
    *(undefined4 *)(p_Var15 + 0xc) = 2;
    p_Var12 = DAT_0071d130;
  }
  if (p_Var12 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    DAT_0071d130 = p_Var12;
    if (*puVar7 == '\0') {
      LOCK();
      p_Var1 = p_Var12 + 0xc;
      iVar8 = *(int *)p_Var1;
      *(int *)p_Var1 = *(int *)p_Var1 + -1;
      UNLOCK();
    }
    else {
      iVar8 = *(int *)(p_Var12 + 0xc);
      *(int *)(p_Var12 + 0xc) = iVar8 + -1;
    }
    if (iVar8 == 1) {
      (**(code **)(*(long *)p_Var12 + 0x18))();
    }
  }
  DAT_0071d130 = p_Var15;
  *(Thread **)(this + 0x18) = pTVar9;
  *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x20) = p_Var15;
  if (*puVar7 == '\0') {
    LOCK();
    *(int *)(p_Var15 + 8) = *(int *)(p_Var15 + 8) + 1;
    UNLOCK();
    lVar18 = *(long *)(p_Var15 + 8);
  }
  else {
    *(int *)(p_Var15 + 8) = *(int *)(p_Var15 + 8) + 1;
    lVar18 = *(long *)(p_Var15 + 8);
  }
  if (lVar18 == 0x100000001) {
    *(undefined8 *)(p_Var15 + 8) = 0;
    (**(code **)(*(long *)p_Var15 + 0x10))(p_Var15);
    (**(code **)(*(long *)p_Var15 + 0x18))(p_Var15);
  }
  else {
    if (*puVar7 == '\0') {
      LOCK();
      p_Var12 = p_Var15 + 8;
      iVar8 = *(int *)p_Var12;
      *(int *)p_Var12 = *(int *)p_Var12 + -1;
      UNLOCK();
    }
    else {
      iVar8 = (int)lVar18;
      *(int *)(p_Var15 + 8) = iVar8 + -1;
    }
    if (iVar8 == 1) {
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var15);
    }
  }
LAB_004846b9:
  iVar8 = SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak;
  LOCK();
  SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak = 0;
  UNLOCK();
  return iVar8;
}


