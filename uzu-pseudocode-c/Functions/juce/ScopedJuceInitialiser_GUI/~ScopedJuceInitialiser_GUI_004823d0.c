// Function : ~ScopedJuceInitialiser_GUI
// Namespace: juce:ScopedJuceInitialiser_GUI
// Entry    : 004823d0
// Prototype: undefined ~ScopedJuceInitialiser_GUI(void)
// Body     : 004823d0 - 00482c8e


/* juce::ScopedJuceInitialiser_GUI::~ScopedJuceInitialiser_GUI() */

void __thiscall juce::ScopedJuceInitialiser_GUI::~ScopedJuceInitialiser_GUI(void)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  undefined8 *puVar2;
  long *plVar3;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var4;
  long *plVar5;
  undefined *puVar6;
  undefined8 uVar7;
  void *pvVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  void *pvVar14;
  uint uVar15;
  int iVar16;
  bool bVar17;
  
  numScopedInitInstances = numScopedInitInstances + -1;
  if (numScopedInitInstances != 0) {
    return;
  }
  LOCK();
  bVar17 = deletedAtShutdownLock == 0;
  if (bVar17) {
    deletedAtShutdownLock = 1;
  }
  UNLOCK();
  if (!bVar17) {
    LOCK();
    bVar17 = deletedAtShutdownLock == 0;
    if (bVar17) {
      deletedAtShutdownLock = 1;
    }
    UNLOCK();
    if (!bVar17) {
      LOCK();
      bVar17 = deletedAtShutdownLock == 0;
      if (bVar17) {
        deletedAtShutdownLock = 1;
      }
      UNLOCK();
      if (!bVar17) {
        LOCK();
        bVar17 = deletedAtShutdownLock == 0;
        if (bVar17) {
          deletedAtShutdownLock = 1;
        }
        UNLOCK();
        if (!bVar17) {
          LOCK();
          bVar17 = deletedAtShutdownLock == 0;
          if (bVar17) {
            deletedAtShutdownLock = 1;
          }
          UNLOCK();
          if (!bVar17) {
            LOCK();
            bVar17 = deletedAtShutdownLock == 0;
            if (bVar17) {
              deletedAtShutdownLock = 1;
            }
            UNLOCK();
            if (!bVar17) {
              LOCK();
              bVar17 = deletedAtShutdownLock == 0;
              if (bVar17) {
                deletedAtShutdownLock = 1;
              }
              UNLOCK();
              if (!bVar17) {
                LOCK();
                bVar17 = deletedAtShutdownLock == 0;
                if (bVar17) {
                  deletedAtShutdownLock = 1;
                }
                UNLOCK();
                if (!bVar17) {
                  LOCK();
                  bVar17 = deletedAtShutdownLock == 0;
                  if (bVar17) {
                    deletedAtShutdownLock = 1;
                  }
                  UNLOCK();
                  if (!bVar17) {
                    LOCK();
                    bVar17 = deletedAtShutdownLock == 0;
                    if (bVar17) {
                      deletedAtShutdownLock = 1;
                    }
                    UNLOCK();
                    if (!bVar17) {
                      LOCK();
                      bVar17 = deletedAtShutdownLock == 0;
                      if (bVar17) {
                        deletedAtShutdownLock = 1;
                      }
                      UNLOCK();
                      if (!bVar17) {
                        LOCK();
                        bVar17 = deletedAtShutdownLock == 0;
                        if (bVar17) {
                          deletedAtShutdownLock = 1;
                        }
                        UNLOCK();
                        if (!bVar17) {
                          LOCK();
                          bVar17 = deletedAtShutdownLock == 0;
                          if (bVar17) {
                            deletedAtShutdownLock = 1;
                          }
                          UNLOCK();
                          if (!bVar17) {
                            LOCK();
                            bVar17 = deletedAtShutdownLock == 0;
                            if (bVar17) {
                              deletedAtShutdownLock = 1;
                            }
                            UNLOCK();
                            if (!bVar17) {
                              LOCK();
                              bVar17 = deletedAtShutdownLock == 0;
                              if (bVar17) {
                                deletedAtShutdownLock = 1;
                              }
                              UNLOCK();
                              if (!bVar17) {
                                LOCK();
                                bVar17 = deletedAtShutdownLock == 0;
                                if (bVar17) {
                                  deletedAtShutdownLock = 1;
                                }
                                UNLOCK();
                                if (!bVar17) {
                                  LOCK();
                                  bVar17 = deletedAtShutdownLock == 0;
                                  if (bVar17) {
                                    deletedAtShutdownLock = 1;
                                  }
                                  UNLOCK();
                                  if (!bVar17) {
                                    LOCK();
                                    bVar17 = deletedAtShutdownLock == 0;
                                    if (bVar17) {
                                      deletedAtShutdownLock = 1;
                                    }
                                    UNLOCK();
                                    if (!bVar17) {
                                      LOCK();
                                      bVar17 = deletedAtShutdownLock == 0;
                                      if (bVar17) {
                                        deletedAtShutdownLock = 1;
                                      }
                                      UNLOCK();
                                      if (!bVar17) {
                                        LOCK();
                                        bVar17 = deletedAtShutdownLock == 0;
                                        if (bVar17) {
                                          deletedAtShutdownLock = 1;
                                        }
                                        UNLOCK();
                                        if (!bVar17) {
                                          LOCK();
                                          bVar17 = deletedAtShutdownLock == 0;
                                          if (bVar17) {
                                            deletedAtShutdownLock = 1;
                                          }
                                          UNLOCK();
                                          if (!bVar17) {
                                            LOCK();
                                            bVar17 = deletedAtShutdownLock == 0;
                                            if (bVar17) {
                                              deletedAtShutdownLock = 1;
                                            }
                                            UNLOCK();
                                            while (!bVar17) {
                                              sched_yield();
                                              LOCK();
                                              bVar17 = deletedAtShutdownLock == 0;
                                              if (bVar17) {
                                                deletedAtShutdownLock = 1;
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
  if ((getDeletedAtShutdownObjects()::objects == '\0') &&
     (iVar16 = __cxa_guard_acquire(&getDeletedAtShutdownObjects()::objects), iVar16 != 0)) {
    __cxa_atexit(Array<juce::DeletedAtShutdown*,juce::DummyCriticalSection,0>::~Array,
                 &getDeletedAtShutdownObjects()::objects,&__dso_handle);
    __cxa_guard_release(&getDeletedAtShutdownObjects()::objects);
  }
  pvVar14 = getDeletedAtShutdownObjects()::objects;
  uVar9 = (ulong)DAT_0071d114;
  if ((int)DAT_0071d114 < 1) {
    pvVar8 = (void *)0x0;
    LOCK();
    deletedAtShutdownLock = 0;
    UNLOCK();
  }
  else {
    uVar15 = DAT_0071d114 + (DAT_0071d114 >> 1) + 8 & 0xfffffff8;
    if ((int)uVar15 < 1) {
      pvVar8 = (void *)0x0;
    }
    else {
      pvVar8 = malloc((ulong)uVar15 << 3);
    }
    memcpy(pvVar8,pvVar14,uVar9 * 8);
    LOCK();
    deletedAtShutdownLock = 0;
    UNLOCK();
    do {
      plVar5 = *(long **)((long)pvVar8 + (uVar9 - 1 & 0xffffffff) * 8);
      LOCK();
      bVar17 = deletedAtShutdownLock == 0;
      if (bVar17) {
        deletedAtShutdownLock = 1;
      }
      UNLOCK();
      if (!bVar17) {
        LOCK();
        bVar17 = deletedAtShutdownLock == 0;
        if (bVar17) {
          deletedAtShutdownLock = 1;
        }
        UNLOCK();
        if (!bVar17) {
          LOCK();
          bVar17 = deletedAtShutdownLock == 0;
          if (bVar17) {
            deletedAtShutdownLock = 1;
          }
          UNLOCK();
          if (!bVar17) {
            LOCK();
            bVar17 = deletedAtShutdownLock == 0;
            if (bVar17) {
              deletedAtShutdownLock = 1;
            }
            UNLOCK();
            if (!bVar17) {
              LOCK();
              bVar17 = deletedAtShutdownLock == 0;
              if (bVar17) {
                deletedAtShutdownLock = 1;
              }
              UNLOCK();
              if (!bVar17) {
                LOCK();
                bVar17 = deletedAtShutdownLock == 0;
                if (bVar17) {
                  deletedAtShutdownLock = 1;
                }
                UNLOCK();
                if (!bVar17) {
                  LOCK();
                  bVar17 = deletedAtShutdownLock == 0;
                  if (bVar17) {
                    deletedAtShutdownLock = 1;
                  }
                  UNLOCK();
                  if (!bVar17) {
                    LOCK();
                    bVar17 = deletedAtShutdownLock == 0;
                    if (bVar17) {
                      deletedAtShutdownLock = 1;
                    }
                    UNLOCK();
                    if (!bVar17) {
                      LOCK();
                      bVar17 = deletedAtShutdownLock == 0;
                      if (bVar17) {
                        deletedAtShutdownLock = 1;
                      }
                      UNLOCK();
                      if (!bVar17) {
                        LOCK();
                        bVar17 = deletedAtShutdownLock == 0;
                        if (bVar17) {
                          deletedAtShutdownLock = 1;
                        }
                        UNLOCK();
                        if (!bVar17) {
                          LOCK();
                          bVar17 = deletedAtShutdownLock == 0;
                          if (bVar17) {
                            deletedAtShutdownLock = 1;
                          }
                          UNLOCK();
                          if (!bVar17) {
                            LOCK();
                            bVar17 = deletedAtShutdownLock == 0;
                            if (bVar17) {
                              deletedAtShutdownLock = 1;
                            }
                            UNLOCK();
                            if (!bVar17) {
                              LOCK();
                              bVar17 = deletedAtShutdownLock == 0;
                              if (bVar17) {
                                deletedAtShutdownLock = 1;
                              }
                              UNLOCK();
                              if (!bVar17) {
                                LOCK();
                                bVar17 = deletedAtShutdownLock == 0;
                                if (bVar17) {
                                  deletedAtShutdownLock = 1;
                                }
                                UNLOCK();
                                if (!bVar17) {
                                  LOCK();
                                  bVar17 = deletedAtShutdownLock == 0;
                                  if (bVar17) {
                                    deletedAtShutdownLock = 1;
                                  }
                                  UNLOCK();
                                  if (!bVar17) {
                                    LOCK();
                                    bVar17 = deletedAtShutdownLock == 0;
                                    if (bVar17) {
                                      deletedAtShutdownLock = 1;
                                    }
                                    UNLOCK();
                                    if (!bVar17) {
                                      LOCK();
                                      bVar17 = deletedAtShutdownLock == 0;
                                      if (bVar17) {
                                        deletedAtShutdownLock = 1;
                                      }
                                      UNLOCK();
                                      if (!bVar17) {
                                        LOCK();
                                        bVar17 = deletedAtShutdownLock == 0;
                                        if (bVar17) {
                                          deletedAtShutdownLock = 1;
                                        }
                                        UNLOCK();
                                        if (!bVar17) {
                                          LOCK();
                                          bVar17 = deletedAtShutdownLock == 0;
                                          if (bVar17) {
                                            deletedAtShutdownLock = 1;
                                          }
                                          UNLOCK();
                                          if (!bVar17) {
                                            LOCK();
                                            bVar17 = deletedAtShutdownLock == 0;
                                            if (bVar17) {
                                              deletedAtShutdownLock = 1;
                                            }
                                            UNLOCK();
                                            if (!bVar17) {
                                              LOCK();
                                              bVar17 = deletedAtShutdownLock == 0;
                                              if (bVar17) {
                                                deletedAtShutdownLock = 1;
                                              }
                                              UNLOCK();
                                              if (!bVar17) {
                                                while( true ) {
                                                  LOCK();
                                                  bVar17 = deletedAtShutdownLock == 0;
                                                  if (bVar17) {
                                                    deletedAtShutdownLock = 1;
                                                  }
                                                  UNLOCK();
                                                  if (bVar17) break;
                                                  sched_yield();
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
      if ((getDeletedAtShutdownObjects()::objects == '\0') &&
         (iVar16 = __cxa_guard_acquire(&getDeletedAtShutdownObjects()::objects), iVar16 != 0)) {
        __cxa_atexit(Array<juce::DeletedAtShutdown*,juce::DummyCriticalSection,0>::~Array,
                     &getDeletedAtShutdownObjects()::objects,&__dso_handle);
        __cxa_guard_release(&getDeletedAtShutdownObjects()::objects);
      }
      if ((long)(int)DAT_0071d114 != 0) {
        lVar12 = 0;
        do {
          if (*(long **)((long)getDeletedAtShutdownObjects()::objects + lVar12) == plVar5) {
            LOCK();
            deletedAtShutdownLock = 0;
            UNLOCK();
            if (plVar5 != (long *)0x0) {
              (**(code **)(*plVar5 + 8))(plVar5);
            }
            goto LAB_00482848;
          }
          lVar12 = lVar12 + 8;
        } while ((long)(int)DAT_0071d114 * 8 != lVar12);
      }
      LOCK();
      deletedAtShutdownLock = 0;
      UNLOCK();
LAB_00482848:
      bVar17 = 1 < (long)uVar9;
      uVar9 = uVar9 - 1;
    } while (bVar17);
  }
  if ((getDeletedAtShutdownObjects()::objects == '\0') &&
     (iVar16 = __cxa_guard_acquire(&getDeletedAtShutdownObjects()::objects), iVar16 != 0)) {
    __cxa_atexit(Array<juce::DeletedAtShutdown*,juce::DummyCriticalSection,0>::~Array,
                 &getDeletedAtShutdownObjects()::objects,&__dso_handle);
    __cxa_guard_release(&getDeletedAtShutdownObjects()::objects);
  }
  DAT_0071d114 = 0;
  if (DAT_0071d110 != 0) {
    free(getDeletedAtShutdownObjects()::objects);
    getDeletedAtShutdownObjects()::objects = (void *)0x0;
  }
  DAT_0071d110 = 0;
  free(pvVar8);
  plVar5 = MessageManager::instance;
  if (MessageManager::instance == (long *)0x0) {
    MessageManager::instance = (long *)0x0;
    return;
  }
  plVar10 = (long *)*MessageManager::instance;
  *MessageManager::instance = 0;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 8))();
  }
  pthread_mutex_lock((pthread_mutex_t *)InternalMessageQueue::singletonHolder);
  uVar7 = InternalMessageQueue::singletonHolder._40_8_;
  LOCK();
  InternalMessageQueue::singletonHolder._40_8_ = 0;
  UNLOCK();
  if (uVar7 != 0) {
    if (InternalRunLoop::singletonHolder._40_8_ != 0) {
                    /* try { // try from 0048266e to 00482684 has its CatchHandler @ 00482c97 */
      InternalRunLoop::unregisterFdCallback
                ((InternalRunLoop *)InternalRunLoop::singletonHolder._40_8_,*(int *)(uVar7 + 0x3c));
    }
    close(*(int *)(uVar7 + 0x3c));
    close(*(int *)(uVar7 + 0x38));
    LOCK();
    if (uVar7 == InternalMessageQueue::singletonHolder._40_8_) {
      InternalMessageQueue::singletonHolder._40_8_ = 0;
    }
    UNLOCK();
    uVar15 = *(uint *)(uVar7 + 0x34);
    uVar9 = (ulong)uVar15;
    if (0 < (int)uVar15) {
      iVar16 = -uVar15;
      uVar13 = uVar9;
      while( true ) {
        uVar11 = (ulong)((int)uVar13 - 1);
        lVar12 = *(long *)(uVar7 + 0x28);
        plVar10 = *(long **)(lVar12 + uVar11 * 8);
        memmove((void *)(lVar12 + uVar11 * 8),(void *)(lVar12 + uVar11 * 8 + 8),
                (long)((int)uVar9 + iVar16) << 3);
        *(int *)(uVar7 + 0x34) = *(int *)(uVar7 + 0x34) + -1;
        if (plVar10 != (long *)0x0) {
          LOCK();
          plVar3 = plVar10 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)(*plVar10 + 8))(plVar10);
          }
        }
        if (uVar13 < 2) break;
        uVar9 = (ulong)*(uint *)(uVar7 + 0x34);
        iVar16 = iVar16 + 1;
        uVar13 = uVar13 - 1;
      }
    }
    *(undefined4 *)(uVar7 + 0x34) = 0;
    free(*(void **)(uVar7 + 0x28));
    pthread_mutex_destroy((pthread_mutex_t *)uVar7);
    operator_delete((void *)uVar7);
  }
  pthread_mutex_unlock((pthread_mutex_t *)InternalMessageQueue::singletonHolder);
  pthread_mutex_lock((pthread_mutex_t *)InternalRunLoop::singletonHolder);
  uVar7 = InternalRunLoop::singletonHolder._40_8_;
  LOCK();
  InternalRunLoop::singletonHolder._40_8_ = 0;
  UNLOCK();
  if (uVar7 == 0) goto LAB_00482b9f;
  if (*(int *)(uVar7 + 0xa8) == 2) {
    puVar2 = *(undefined8 **)(uVar7 + 0x88);
    *(undefined4 *)((long)puVar2 + 0xc) = 0;
    if (*(int *)(puVar2 + 1) != 0) {
      free((void *)*puVar2);
      *puVar2 = 0;
    }
    *(undefined4 *)(puVar2 + 1) = 0;
    plVar3 = (long *)(*(undefined8 **)(uVar7 + 0x98))[1];
    for (plVar10 = (long *)**(undefined8 **)(uVar7 + 0x98); plVar10 != plVar3; plVar10 = plVar10 + 1
        ) {
      *(undefined4 *)(*plVar10 + 4) = 0;
    }
  }
  p_Var4 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(uVar7 + 0xa0);
  if (p_Var4 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
LAB_00482a86:
    p_Var4 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(uVar7 + 0x90);
  }
  else {
    uVar9 = *(ulong *)(p_Var4 + 8);
    if (uVar9 == 0x100000001) {
      *(undefined8 *)(p_Var4 + 8) = 0;
      (**(code **)(*(long *)p_Var4 + 0x10))(p_Var4);
      (**(code **)(*(long *)p_Var4 + 0x18))(p_Var4);
      p_Var4 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(uVar7 + 0x90);
    }
    else {
      if (*PTR___libc_single_threaded_00715c50 == '\0') {
        LOCK();
        p_Var1 = p_Var4 + 8;
        uVar9 = (ulong)*(uint *)p_Var1;
        *(uint *)p_Var1 = *(uint *)p_Var1 - 1;
        UNLOCK();
      }
      else {
        *(int *)(p_Var4 + 8) = (int)uVar9 + -1;
      }
      if ((int)uVar9 != 1) goto LAB_00482a86;
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var4);
      p_Var4 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(uVar7 + 0x90);
    }
  }
  if (p_Var4 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    uVar9 = *(ulong *)(p_Var4 + 8);
    if (uVar9 == 0x100000001) {
      *(undefined8 *)(p_Var4 + 8) = 0;
      (**(code **)(*(long *)p_Var4 + 0x10))(p_Var4);
      (**(code **)(*(long *)p_Var4 + 0x18))(p_Var4);
    }
    else {
      if (*PTR___libc_single_threaded_00715c50 == '\0') {
        LOCK();
        p_Var1 = p_Var4 + 8;
        uVar9 = (ulong)*(uint *)p_Var1;
        *(uint *)p_Var1 = *(uint *)p_Var1 - 1;
        UNLOCK();
      }
      else {
        *(int *)(p_Var4 + 8) = (int)uVar9 + -1;
      }
      if ((int)uVar9 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var4);
      }
    }
  }
  if (*(void **)(uVar7 + 0x70) != (void *)0x0) {
    operator_delete(*(void **)(uVar7 + 0x70));
  }
  puVar6 = PTR___libc_single_threaded_00715c50;
  pvVar14 = *(void **)(uVar7 + 0x58);
  pvVar8 = *(void **)(uVar7 + 0x60);
  if (pvVar14 != pvVar8) {
    do {
      p_Var4 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)((long)pvVar14 + 8);
      if (p_Var4 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        if (*(long *)(p_Var4 + 8) == 0x100000001) {
          *(undefined8 *)(p_Var4 + 8) = 0;
          (**(code **)(*(long *)p_Var4 + 0x10))(p_Var4);
          (**(code **)(*(long *)p_Var4 + 0x18))(p_Var4);
        }
        else {
          if (*puVar6 == '\0') {
            LOCK();
            p_Var1 = p_Var4 + 8;
            iVar16 = *(int *)p_Var1;
            *(int *)p_Var1 = *(int *)p_Var1 + -1;
            UNLOCK();
          }
          else {
            iVar16 = (int)*(long *)(p_Var4 + 8);
            *(int *)(p_Var4 + 8) = iVar16 + -1;
          }
          if (iVar16 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var4);
          }
        }
      }
      pvVar14 = (void *)((long)pvVar14 + 0x10);
    } while (pvVar14 != pvVar8);
    pvVar14 = *(void **)(uVar7 + 0x58);
  }
  if (pvVar14 != (void *)0x0) {
    operator_delete(pvVar14);
  }
                    /* try { // try from 00482b8a to 00482b8e has its CatchHandler @ 00482c8f */
  std::
  _Rb_tree<int,std::pair<int_const,std::shared_ptr<std::function<void()>>>,std::_Select1st<std::pair<int_const,std::shared_ptr<std::function<void()>>>>,std::less<int>,std::allocator<std::pair<int_const,std::shared_ptr<std::function<void()>>>>>
  ::_M_erase(*(void **)(uVar7 + 0x38));
  pthread_mutex_destroy((pthread_mutex_t *)uVar7);
  operator_delete((void *)uVar7);
LAB_00482b9f:
  pthread_mutex_unlock((pthread_mutex_t *)InternalRunLoop::singletonHolder);
  MessageManager::instance = (long *)0x0;
  plVar10 = (long *)*plVar5;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 8))();
  }
  operator_delete(plVar5);
  MessageManager::instance = (long *)0x0;
  return;
}


