// Function : messageCallback
// Namespace: juce:Timer:TimerThread:CallTimersMessage
// Entry    : 00485b10
// Prototype: ulong messageCallback(void)
// Body     : 00485b10 - 004860c2


/* juce::Timer::TimerThread::CallTimersMessage::messageCallback() */

ulong juce::Timer::TimerThread::CallTimersMessage::messageCallback(void)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  pthread_mutex_t *__mutex;
  undefined8 *puVar3;
  int iVar4;
  undefined4 uVar5;
  long *plVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  long *plVar12;
  undefined4 extraout_var;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  bool bVar19;
  timespec local_60;
  long local_50;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_48;
  char local_40;
  long local_38;
  
  if ((SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak == '\0') &&
     (iVar11 = __cxa_guard_acquire(&SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak),
     iVar11 != 0)) {
    SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak = 0;
    DAT_0071d128 = 0;
    DAT_0071d130 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
    __cxa_atexit(SharedResourcePointer<juce::Timer::TimerThread>::Weak::~Weak,
                 &SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak,&__dso_handle);
    __cxa_guard_release(&SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak);
  }
  LOCK();
  bVar19 = SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak == 0;
  if (bVar19) {
    SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak = 1;
  }
  UNLOCK();
  if (!bVar19) {
    LOCK();
    bVar19 = SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak == 0;
    if (bVar19) {
      SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak = 1;
    }
    UNLOCK();
    if (!bVar19) {
      LOCK();
      bVar19 = SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak == 0;
      if (bVar19) {
        SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak = 1;
      }
      UNLOCK();
      if (!bVar19) {
        LOCK();
        bVar19 = SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak == 0;
        if (bVar19) {
          SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak = 1;
        }
        UNLOCK();
        if (!bVar19) {
          LOCK();
          bVar19 = SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak == 0;
          if (bVar19) {
            SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak = 1;
          }
          UNLOCK();
          if (!bVar19) {
            LOCK();
            bVar19 = SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak == 0;
            if (bVar19) {
              SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak = 1;
            }
            UNLOCK();
            if (!bVar19) {
              LOCK();
              bVar19 = SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak == 0;
              if (bVar19) {
                SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak = 1;
              }
              UNLOCK();
              if (!bVar19) {
                LOCK();
                bVar19 = SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak == 0;
                if (bVar19) {
                  SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak = 1;
                }
                UNLOCK();
                if (!bVar19) {
                  LOCK();
                  bVar19 = SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak == 0;
                  if (bVar19) {
                    SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak = 1;
                  }
                  UNLOCK();
                  if (!bVar19) {
                    LOCK();
                    bVar19 = SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak == 0;
                    if (bVar19) {
                      SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak = 1;
                    }
                    UNLOCK();
                    if (!bVar19) {
                      LOCK();
                      bVar19 = SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak == 0;
                      if (bVar19) {
                        SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak = 1;
                      }
                      UNLOCK();
                      if (!bVar19) {
                        LOCK();
                        bVar19 = SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak == 0;
                        if (bVar19) {
                          SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak = 1;
                        }
                        UNLOCK();
                        if (!bVar19) {
                          LOCK();
                          bVar19 = SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak ==
                                   0;
                          if (bVar19) {
                            SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak = 1;
                          }
                          UNLOCK();
                          if (!bVar19) {
                            LOCK();
                            bVar19 = SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak
                                     == 0;
                            if (bVar19) {
                              SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak = 1;
                            }
                            UNLOCK();
                            if (!bVar19) {
                              LOCK();
                              bVar19 = SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak
                                       == 0;
                              if (bVar19) {
                                SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak = 1;
                              }
                              UNLOCK();
                              if (!bVar19) {
                                LOCK();
                                bVar19 = SharedResourcePointer<juce::Timer::TimerThread>::weak()::
                                         weak == 0;
                                if (bVar19) {
                                  SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak = 1;
                                }
                                UNLOCK();
                                if (!bVar19) {
                                  LOCK();
                                  bVar19 = SharedResourcePointer<juce::Timer::TimerThread>::weak()::
                                           weak == 0;
                                  if (bVar19) {
                                    SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak =
                                         1;
                                  }
                                  UNLOCK();
                                  if (!bVar19) {
                                    LOCK();
                                    bVar19 = SharedResourcePointer<juce::Timer::TimerThread>::weak()
                                             ::weak == 0;
                                    if (bVar19) {
                                      SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak
                                           = 1;
                                    }
                                    UNLOCK();
                                    if (!bVar19) {
                                      LOCK();
                                      bVar19 = SharedResourcePointer<juce::Timer::TimerThread>::
                                               weak()::weak == 0;
                                      if (bVar19) {
                                        SharedResourcePointer<juce::Timer::TimerThread>::weak()::
                                        weak = 1;
                                      }
                                      UNLOCK();
                                      if (!bVar19) {
                                        LOCK();
                                        bVar19 = SharedResourcePointer<juce::Timer::TimerThread>::
                                                 weak()::weak == 0;
                                        if (bVar19) {
                                          SharedResourcePointer<juce::Timer::TimerThread>::weak()::
                                          weak = 1;
                                        }
                                        UNLOCK();
                                        if (!bVar19) {
                                          LOCK();
                                          bVar19 = SharedResourcePointer<juce::Timer::TimerThread>::
                                                   weak()::weak == 0;
                                          if (bVar19) {
                                            SharedResourcePointer<juce::Timer::TimerThread>::weak()
                                            ::weak = 1;
                                          }
                                          UNLOCK();
                                          if (!bVar19) {
                                            LOCK();
                                            bVar19 = SharedResourcePointer<juce::Timer::TimerThread>
                                                     ::weak()::weak == 0;
                                            if (bVar19) {
                                              SharedResourcePointer<juce::Timer::TimerThread>::
                                              weak()::weak = 1;
                                            }
                                            UNLOCK();
                                            while (!bVar19) {
                                              sched_yield();
                                              LOCK();
                                              bVar19 = 
                                                  SharedResourcePointer<juce::Timer::TimerThread>::
                                                  weak()::weak == 0;
                                              if (bVar19) {
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
  p_Var2 = DAT_0071d130;
  if (DAT_0071d130 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
LAB_00485f02:
    uVar18 = SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak;
    LOCK();
    SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak = 0;
    uVar13 = (ulong)uVar18;
    UNLOCK();
  }
  else {
    iVar11 = *(int *)(DAT_0071d130 + 8);
    do {
      if (iVar11 == 0) goto LAB_00485f02;
      LOCK();
      iVar4 = *(int *)(p_Var2 + 8);
      bVar19 = iVar11 == iVar4;
      if (bVar19) {
        *(int *)(p_Var2 + 8) = iVar11 + 1;
      }
      else {
        iVar11 = iVar4;
      }
      lVar10 = DAT_0071d128;
      UNLOCK();
    } while (!bVar19);
    LOCK();
    SharedResourcePointer<juce::Timer::TimerThread>::weak()::weak = 0;
    UNLOCK();
    if ((*(int *)(p_Var2 + 8) == 0) || (DAT_0071d128 == 0)) {
      uVar13 = *(ulong *)(p_Var2 + 8);
      if (uVar13 == 0x100000001) {
        *(undefined8 *)(p_Var2 + 8) = 0;
        (**(code **)(*(long *)p_Var2 + 0x10))(p_Var2);
                    /* WARNING: Could not recover jumptable at 0x00485f57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar13 = (**(code **)(*(long *)p_Var2 + 0x18))(p_Var2);
        return uVar13;
      }
      if (*PTR___libc_single_threaded_00715c50 == '\0') {
        LOCK();
        p_Var1 = p_Var2 + 8;
        uVar18 = *(uint *)p_Var1;
        uVar13 = (ulong)uVar18;
        *(uint *)p_Var1 = *(uint *)p_Var1 - 1;
        UNLOCK();
      }
      else {
        uVar18 = (uint)uVar13;
        *(uint *)(p_Var2 + 8) = uVar18 - 1;
      }
      if (uVar18 == 1) {
        uVar13 = std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var2)
        ;
        return uVar13;
      }
    }
    else {
      local_50 = DAT_0071d128;
      local_48 = p_Var2;
      local_40 = '\x01';
      clock_gettime(1,&local_60);
      auVar8 = SEXT816(local_60.tv_nsec / 1000 + local_60.tv_sec * 1000000) *
               SEXT816(0x20c49ba5e353f7cf);
      uVar18 = (int)(auVar8._8_8_ >> 7) - (auVar8._12_4_ >> 0x1f);
      if ((_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 <= uVar18) ||
         (uVar18 < _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 - 1000)) {
        LOCK();
        UNLOCK();
        _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 = uVar18;
      }
      __mutex = (pthread_mutex_t *)(lVar10 + 0x1a0);
      pthread_mutex_lock(__mutex);
      local_38 = lVar10 + 0x120;
      do {
        plVar12 = *(long **)(lVar10 + 0x1c8);
        plVar6 = *(long **)(lVar10 + 0x1d0);
        if ((plVar12 == plVar6) || (0 < (int)plVar12[1])) break;
        plVar7 = (long *)*plVar12;
        iVar11 = (int)plVar7[2];
        *(int *)(plVar12 + 1) = iVar11;
        lVar14 = (long)plVar6 - (long)plVar12;
        if (lVar14 != 0x10) {
          uVar5 = *(undefined4 *)((long)plVar12 + 0xc);
          lVar16 = 0;
          lVar17 = 0;
          do {
            if (iVar11 <= *(int *)((long)plVar12 + lVar16 + 0x18)) break;
            puVar3 = (undefined8 *)((long)plVar12 + lVar16 + 0x10);
            uVar9 = puVar3[1];
            *(undefined8 *)((long)plVar12 + lVar16) = *puVar3;
            ((undefined8 *)((long)plVar12 + lVar16))[1] = uVar9;
            plVar12 = *(long **)(lVar10 + 0x1c8);
            *(long *)(*(long *)((long)plVar12 + lVar16) + 8) = lVar17;
            lVar17 = lVar17 + 1;
            lVar16 = lVar16 + 0x10;
          } while ((lVar14 >> 4) + -1 != lVar17);
          plVar12[lVar17 * 2] = (long)plVar7;
          *(int *)(plVar12 + lVar17 * 2 + 1) = iVar11;
          *(undefined4 *)((long)plVar12 + lVar17 * 0x10 + 0xc) = uVar5;
          plVar7[1] = lVar17;
        }
        iVar11 = pthread_mutex_lock((pthread_mutex_t *)(lVar10 + 0xf8));
        if (iVar11 != 0) {
                    /* try { // try from 00486062 to 00486068 has its CatchHandler @ 004860d2 */
                    /* WARNING: Subroutine does not return */
          std::__throw_system_error(iVar11);
        }
        LOCK();
        *(undefined1 *)(lVar10 + 0x150) = 1;
        UNLOCK();
        std::condition_variable::notify_all();
        pthread_mutex_unlock((pthread_mutex_t *)(lVar10 + 0xf8));
        pthread_mutex_unlock(__mutex);
                    /* try { // try from 00485e88 to 00485e8d has its CatchHandler @ 004860c5 */
        (**(code **)(*plVar7 + 0x10))(plVar7);
        clock_gettime(1,&local_60);
        auVar8 = SEXT816(local_60.tv_nsec / 1000 + local_60.tv_sec * 1000000) *
                 SEXT816(0x20c49ba5e353f7cf);
        uVar15 = (int)(auVar8._8_8_ >> 7) - (auVar8._12_4_ >> 0x1f);
        if ((_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 <= uVar15) ||
           (uVar15 < _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 - 1000)) {
          LOCK();
          UNLOCK();
          _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 = uVar15;
        }
        pthread_mutex_lock(__mutex);
      } while (uVar15 <= uVar18 + 100);
      iVar11 = pthread_mutex_lock((pthread_mutex_t *)(lVar10 + 0x1e8));
      if (iVar11 != 0) {
                    /* try { // try from 004860bc to 004860c2 has its CatchHandler @ 004860c3 */
                    /* WARNING: Subroutine does not return */
        std::__throw_system_error(iVar11);
      }
      LOCK();
      *(undefined1 *)(lVar10 + 0x240) = 1;
      UNLOCK();
      std::condition_variable::notify_all();
      pthread_mutex_unlock((pthread_mutex_t *)(lVar10 + 0x1e8));
      iVar11 = pthread_mutex_unlock(__mutex);
      p_Var2 = local_48;
      uVar13 = CONCAT44(extraout_var,iVar11);
      if ((local_40 != '\0') &&
         (local_40 = 0, local_48 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0)) {
        uVar13 = *(ulong *)(local_48 + 8);
        if (uVar13 == 0x100000001) {
          *(undefined8 *)(local_48 + 8) = 0;
          (**(code **)(*(long *)local_48 + 0x10))(local_48);
          uVar13 = (**(code **)(*(long *)p_Var2 + 0x18))(p_Var2);
        }
        else {
          if (*PTR___libc_single_threaded_00715c50 == '\0') {
            LOCK();
            p_Var2 = local_48 + 8;
            uVar13 = (ulong)*(uint *)p_Var2;
            *(uint *)p_Var2 = *(uint *)p_Var2 - 1;
            UNLOCK();
          }
          else {
            *(int *)(local_48 + 8) = (int)uVar13 + -1;
          }
          if ((int)uVar13 == 1) {
            uVar13 = std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                               (local_48);
          }
        }
      }
    }
  }
  return uVar13;
}


