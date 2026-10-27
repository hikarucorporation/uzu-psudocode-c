// Function : __invoke
// Namespace: juce:Thread:createNativeThread_juce__Thread__Priority_:__31
// Entry    : 004ab030
// Prototype: undefined8 __invoke(long * param_1)
// Body     : 004ab030 - 004ab4c6


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* __invoke(void*) */

undefined8 __cdecl
juce::Thread::createNativeThread(juce::Thread::Priority)::$_31::__invoke(long *param_1)

{
  int *piVar1;
  pthread_t pVar2;
  char cVar3;
  uint uVar4;
  char *__name;
  void *pvVar5;
  void *pvVar6;
  undefined8 *puVar7;
  int iVar8;
  pthread_t __target_thread;
  pthread_t *ppVar9;
  ulong uVar10;
  undefined8 *puVar11;
  bool bVar12;
  cpu_set_t local_a8;
  
  if ((getCurrentThreadHolder()::currentThreadHolder == '\0') &&
     (iVar8 = __cxa_guard_acquire(&getCurrentThreadHolder()::currentThreadHolder), iVar8 != 0)) {
    __cxa_atexit(ReferenceCountedObjectPtr<juce::CurrentThreadHolder>::~ReferenceCountedObjectPtr,
                 &getCurrentThreadHolder()::currentThreadHolder,&__dso_handle);
    __cxa_guard_release(&getCurrentThreadHolder()::currentThreadHolder);
  }
  LOCK();
  bVar12 = currentThreadHolderLock == 0;
  if (bVar12) {
    currentThreadHolderLock = 1;
  }
  UNLOCK();
  if (!bVar12) {
    LOCK();
    bVar12 = currentThreadHolderLock == 0;
    if (bVar12) {
      currentThreadHolderLock = 1;
    }
    UNLOCK();
    if (!bVar12) {
      LOCK();
      bVar12 = currentThreadHolderLock == 0;
      if (bVar12) {
        currentThreadHolderLock = 1;
      }
      UNLOCK();
      if (!bVar12) {
        LOCK();
        bVar12 = currentThreadHolderLock == 0;
        if (bVar12) {
          currentThreadHolderLock = 1;
        }
        UNLOCK();
        if (!bVar12) {
          LOCK();
          bVar12 = currentThreadHolderLock == 0;
          if (bVar12) {
            currentThreadHolderLock = 1;
          }
          UNLOCK();
          if (!bVar12) {
            LOCK();
            bVar12 = currentThreadHolderLock == 0;
            if (bVar12) {
              currentThreadHolderLock = 1;
            }
            UNLOCK();
            if (!bVar12) {
              LOCK();
              bVar12 = currentThreadHolderLock == 0;
              if (bVar12) {
                currentThreadHolderLock = 1;
              }
              UNLOCK();
              if (!bVar12) {
                LOCK();
                bVar12 = currentThreadHolderLock == 0;
                if (bVar12) {
                  currentThreadHolderLock = 1;
                }
                UNLOCK();
                if (!bVar12) {
                  LOCK();
                  bVar12 = currentThreadHolderLock == 0;
                  if (bVar12) {
                    currentThreadHolderLock = 1;
                  }
                  UNLOCK();
                  if (!bVar12) {
                    LOCK();
                    bVar12 = currentThreadHolderLock == 0;
                    if (bVar12) {
                      currentThreadHolderLock = 1;
                    }
                    UNLOCK();
                    if (!bVar12) {
                      LOCK();
                      bVar12 = currentThreadHolderLock == 0;
                      if (bVar12) {
                        currentThreadHolderLock = 1;
                      }
                      UNLOCK();
                      if (!bVar12) {
                        LOCK();
                        bVar12 = currentThreadHolderLock == 0;
                        if (bVar12) {
                          currentThreadHolderLock = 1;
                        }
                        UNLOCK();
                        if (!bVar12) {
                          LOCK();
                          bVar12 = currentThreadHolderLock == 0;
                          if (bVar12) {
                            currentThreadHolderLock = 1;
                          }
                          UNLOCK();
                          if (!bVar12) {
                            LOCK();
                            bVar12 = currentThreadHolderLock == 0;
                            if (bVar12) {
                              currentThreadHolderLock = 1;
                            }
                            UNLOCK();
                            if (!bVar12) {
                              LOCK();
                              bVar12 = currentThreadHolderLock == 0;
                              if (bVar12) {
                                currentThreadHolderLock = 1;
                              }
                              UNLOCK();
                              if (!bVar12) {
                                LOCK();
                                bVar12 = currentThreadHolderLock == 0;
                                if (bVar12) {
                                  currentThreadHolderLock = 1;
                                }
                                UNLOCK();
                                if (!bVar12) {
                                  LOCK();
                                  bVar12 = currentThreadHolderLock == 0;
                                  if (bVar12) {
                                    currentThreadHolderLock = 1;
                                  }
                                  UNLOCK();
                                  if (!bVar12) {
                                    LOCK();
                                    bVar12 = currentThreadHolderLock == 0;
                                    if (bVar12) {
                                      currentThreadHolderLock = 1;
                                    }
                                    UNLOCK();
                                    if (!bVar12) {
                                      LOCK();
                                      bVar12 = currentThreadHolderLock == 0;
                                      if (bVar12) {
                                        currentThreadHolderLock = 1;
                                      }
                                      UNLOCK();
                                      if (!bVar12) {
                                        LOCK();
                                        bVar12 = currentThreadHolderLock == 0;
                                        if (bVar12) {
                                          currentThreadHolderLock = 1;
                                        }
                                        UNLOCK();
                                        if (!bVar12) {
                                          LOCK();
                                          bVar12 = currentThreadHolderLock == 0;
                                          if (bVar12) {
                                            currentThreadHolderLock = 1;
                                          }
                                          UNLOCK();
                                          if (!bVar12) {
                                            LOCK();
                                            bVar12 = currentThreadHolderLock == 0;
                                            if (bVar12) {
                                              currentThreadHolderLock = 1;
                                            }
                                            UNLOCK();
                                            while (!bVar12) {
                                              sched_yield();
                                              LOCK();
                                              bVar12 = currentThreadHolderLock == 0;
                                              if (bVar12) {
                                                currentThreadHolderLock = 1;
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
  puVar11 = getCurrentThreadHolder()::currentThreadHolder;
  if (getCurrentThreadHolder()::currentThreadHolder == (undefined8 *)0x0) {
                    /* try { // try from 004ab336 to 004ab33f has its CatchHandler @ 004ab4c7 */
    puVar11 = operator_new(0x18);
    *(undefined4 *)(puVar11 + 1) = 0;
    *puVar11 = &PTR__CurrentThreadHolder_00713d38;
    puVar11[2] = 0;
    LOCK();
    *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
    puVar7 = getCurrentThreadHolder()::currentThreadHolder;
    UNLOCK();
    if (getCurrentThreadHolder()::currentThreadHolder != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(getCurrentThreadHolder()::currentThreadHolder + 1);
      getCurrentThreadHolder()::currentThreadHolder = puVar11;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        pvVar6 = (void *)puVar7[2];
        while (pvVar6 != (void *)0x0) {
          pvVar5 = *(void **)((long)pvVar6 + 8);
          operator_delete(pvVar6);
          pvVar6 = pvVar5;
        }
        operator_delete(puVar7);
      }
      puVar11 = getCurrentThreadHolder()::currentThreadHolder;
      if (getCurrentThreadHolder()::currentThreadHolder == (undefined8 *)0x0) {
        puVar11 = (undefined8 *)0x0;
        goto LAB_004ab1f2;
      }
    }
  }
  getCurrentThreadHolder()::currentThreadHolder = puVar11;
  puVar11 = getCurrentThreadHolder()::currentThreadHolder;
  LOCK();
  *(int *)(getCurrentThreadHolder()::currentThreadHolder + 1) =
       *(int *)(getCurrentThreadHolder()::currentThreadHolder + 1) + 1;
  UNLOCK();
LAB_004ab1f2:
  LOCK();
  currentThreadHolderLock = 0;
  UNLOCK();
  __target_thread = pthread_self();
  for (ppVar9 = (pthread_t *)puVar11[2]; ppVar9 != (pthread_t *)0x0; ppVar9 = (pthread_t *)ppVar9[1]
      ) {
    if (*ppVar9 == __target_thread) goto LAB_004ab280;
  }
  for (ppVar9 = (pthread_t *)puVar11[2]; ppVar9 != (pthread_t *)0x0; ppVar9 = (pthread_t *)ppVar9[1]
      ) {
    LOCK();
    pVar2 = *ppVar9;
    if (pVar2 == 0) {
      *ppVar9 = __target_thread;
    }
    UNLOCK();
    if (pVar2 == 0) {
      ppVar9[2] = 0;
      ppVar9[2] = (pthread_t)param_1;
      __name = (char *)param_1[1];
      cVar3 = *__name;
      goto joined_r0x004ab47d;
    }
  }
                    /* try { // try from 004ab246 to 004ab24f has its CatchHandler @ 004ab4d4 */
  ppVar9 = operator_new(0x18);
  pVar2 = puVar11[2];
  *ppVar9 = __target_thread;
  ppVar9[1] = pVar2;
  ppVar9[2] = 0;
  LOCK();
  bVar12 = pVar2 == puVar11[2];
  if (bVar12) {
    puVar11[2] = ppVar9;
  }
  UNLOCK();
  while (!bVar12) {
    pVar2 = puVar11[2];
    ppVar9[1] = pVar2;
    LOCK();
    bVar12 = pVar2 == puVar11[2];
    if (bVar12) {
      puVar11[2] = ppVar9;
    }
    UNLOCK();
  }
LAB_004ab280:
  ppVar9[2] = (pthread_t)param_1;
  __name = (char *)param_1[1];
  cVar3 = *__name;
joined_r0x004ab47d:
  if (cVar3 != '\0') {
    pthread_setname_np(__target_thread,__name);
  }
                    /* try { // try from 004ab29c to 004ab2a8 has its CatchHandler @ 004ab4ee */
  uVar10 = WaitableEvent::wait(DAT_005db348,(WaitableEvent *)(param_1 + 0x11));
  if ((char)uVar10 != '\0') {
    uVar4 = *(uint *)(param_1 + 0x2c);
    if (uVar4 != 0) {
      local_a8.__bits[0xe] = 0;
      local_a8.__bits[0xf] = 0;
      local_a8.__bits[0xc] = 0;
      local_a8.__bits[0xd] = 0;
      local_a8.__bits[10] = 0;
      local_a8.__bits[0xb] = 0;
      local_a8.__bits[8] = 0;
      local_a8.__bits[9] = 0;
      local_a8.__bits[6] = 0;
      local_a8.__bits[7] = 0;
      local_a8.__bits[4] = 0;
      local_a8.__bits[5] = 0;
      local_a8.__bits[2] = 0;
      local_a8.__bits[3] = 0;
      local_a8.__bits[0] = 0;
      local_a8.__bits[1] = 0;
      uVar10 = 0;
      do {
        if ((uVar4 >> ((uint)uVar10 & 0x1f) & 1) != 0) {
          local_a8.__bits[uVar10 >> 6] = local_a8.__bits[uVar10 >> 6] | 1L << ((byte)uVar10 & 0x3f);
        }
        if ((uVar4 >> ((uint)(uVar10 + 1) & 0x1f) & 1) != 0) {
          local_a8.__bits[uVar10 >> 6] =
               local_a8.__bits[uVar10 >> 6] | 1L << ((byte)(uVar10 + 1) & 0x3f);
        }
        uVar10 = uVar10 + 2;
      } while (uVar10 != 0x20);
      pthread_setaffinity_np(__target_thread,0x80,&local_a8);
      sched_yield();
    }
                    /* try { // try from 004ab3d9 to 004ab3de has its CatchHandler @ 004ab4dc */
    (**(code **)(*param_1 + 0x10))(param_1);
  }
  for (ppVar9 = (pthread_t *)puVar11[2]; ppVar9 != (pthread_t *)0x0; ppVar9 = (pthread_t *)ppVar9[1]
      ) {
    LOCK();
    pVar2 = *ppVar9;
    if (__target_thread == pVar2) {
      *ppVar9 = 0;
    }
    UNLOCK();
    if (__target_thread == pVar2) break;
  }
  LOCK();
  param_1[3] = 0;
  UNLOCK();
  LOCK();
  param_1[2] = 0;
  UNLOCK();
  if (*(char *)((long)param_1 + 0x164) != '\0') {
    (**(code **)(*param_1 + 8))(param_1);
  }
  if (puVar11 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar11 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      pvVar6 = (void *)puVar11[2];
      while (pvVar6 != (void *)0x0) {
        pvVar5 = *(void **)((long)pvVar6 + 8);
        operator_delete(pvVar6);
        pvVar6 = pvVar5;
      }
      operator_delete(puVar11);
    }
  }
  return 0;
}


