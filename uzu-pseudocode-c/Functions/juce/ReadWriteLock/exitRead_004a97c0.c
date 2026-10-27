// Function : exitRead
// Namespace: juce:ReadWriteLock
// Entry    : 004a97c0
// Prototype: undefined4 exitRead(ReadWriteLock * this)
// Body     : 004a97c0 - 004a9a2c


/* juce::ReadWriteLock::exitRead() const */

undefined4 __thiscall juce::ReadWriteLock::exitRead(ReadWriteLock *this)

{
  pthread_t *ppVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  pthread_t pVar5;
  void *pvVar6;
  ulong uVar7;
  int iVar8;
  uint uVar9;
  pthread_t *__dest;
  bool bVar10;
  
  pVar5 = pthread_self();
  LOCK();
  iVar4 = *(int *)this;
  if (iVar4 == 0) {
    *(undefined4 *)this = 1;
  }
  UNLOCK();
  if (iVar4 != 0) {
    LOCK();
    iVar4 = *(int *)this;
    if (iVar4 == 0) {
      *(undefined4 *)this = 1;
    }
    UNLOCK();
    if (iVar4 != 0) {
      LOCK();
      iVar4 = *(int *)this;
      if (iVar4 == 0) {
        *(undefined4 *)this = 1;
      }
      UNLOCK();
      if (iVar4 != 0) {
        LOCK();
        iVar4 = *(int *)this;
        if (iVar4 == 0) {
          *(undefined4 *)this = 1;
        }
        UNLOCK();
        if (iVar4 != 0) {
          LOCK();
          iVar4 = *(int *)this;
          if (iVar4 == 0) {
            *(undefined4 *)this = 1;
          }
          UNLOCK();
          if (iVar4 != 0) {
            LOCK();
            iVar4 = *(int *)this;
            if (iVar4 == 0) {
              *(undefined4 *)this = 1;
            }
            UNLOCK();
            if (iVar4 != 0) {
              LOCK();
              iVar4 = *(int *)this;
              if (iVar4 == 0) {
                *(undefined4 *)this = 1;
              }
              UNLOCK();
              if (iVar4 != 0) {
                LOCK();
                iVar4 = *(int *)this;
                if (iVar4 == 0) {
                  *(undefined4 *)this = 1;
                }
                UNLOCK();
                if (iVar4 != 0) {
                  LOCK();
                  iVar4 = *(int *)this;
                  if (iVar4 == 0) {
                    *(undefined4 *)this = 1;
                  }
                  UNLOCK();
                  if (iVar4 != 0) {
                    LOCK();
                    iVar4 = *(int *)this;
                    if (iVar4 == 0) {
                      *(undefined4 *)this = 1;
                    }
                    UNLOCK();
                    if (iVar4 != 0) {
                      LOCK();
                      iVar4 = *(int *)this;
                      if (iVar4 == 0) {
                        *(undefined4 *)this = 1;
                      }
                      UNLOCK();
                      if (iVar4 != 0) {
                        LOCK();
                        iVar4 = *(int *)this;
                        if (iVar4 == 0) {
                          *(undefined4 *)this = 1;
                        }
                        UNLOCK();
                        if (iVar4 != 0) {
                          LOCK();
                          iVar4 = *(int *)this;
                          if (iVar4 == 0) {
                            *(undefined4 *)this = 1;
                          }
                          UNLOCK();
                          if (iVar4 != 0) {
                            LOCK();
                            iVar4 = *(int *)this;
                            if (iVar4 == 0) {
                              *(undefined4 *)this = 1;
                            }
                            UNLOCK();
                            if (iVar4 != 0) {
                              LOCK();
                              iVar4 = *(int *)this;
                              if (iVar4 == 0) {
                                *(undefined4 *)this = 1;
                              }
                              UNLOCK();
                              if (iVar4 != 0) {
                                LOCK();
                                iVar4 = *(int *)this;
                                if (iVar4 == 0) {
                                  *(undefined4 *)this = 1;
                                }
                                UNLOCK();
                                if (iVar4 != 0) {
                                  LOCK();
                                  iVar4 = *(int *)this;
                                  if (iVar4 == 0) {
                                    *(undefined4 *)this = 1;
                                  }
                                  UNLOCK();
                                  if (iVar4 != 0) {
                                    LOCK();
                                    iVar4 = *(int *)this;
                                    if (iVar4 == 0) {
                                      *(undefined4 *)this = 1;
                                    }
                                    UNLOCK();
                                    if (iVar4 != 0) {
                                      LOCK();
                                      iVar4 = *(int *)this;
                                      if (iVar4 == 0) {
                                        *(undefined4 *)this = 1;
                                      }
                                      UNLOCK();
                                      if (iVar4 != 0) {
                                        LOCK();
                                        iVar4 = *(int *)this;
                                        if (iVar4 == 0) {
                                          *(undefined4 *)this = 1;
                                        }
                                        UNLOCK();
                                        if (iVar4 != 0) {
                                          LOCK();
                                          iVar4 = *(int *)this;
                                          if (iVar4 == 0) {
                                            *(undefined4 *)this = 1;
                                          }
                                          UNLOCK();
                                          if (iVar4 != 0) {
                                            LOCK();
                                            bVar10 = *(int *)this == 0;
                                            if (bVar10) {
                                              *(undefined4 *)this = 1;
                                            }
                                            UNLOCK();
                                            while (!bVar10) {
                                              sched_yield();
                                              LOCK();
                                              bVar10 = *(int *)this == 0;
                                              if (bVar10) {
                                                *(undefined4 *)this = 1;
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
  uVar3 = *(uint *)(this + 0xf4);
  if (0 < (int)uVar3) {
    __dest = *(pthread_t **)(this + 0xe8);
    uVar7 = 0;
    do {
      if (*__dest == pVar5) {
        ppVar1 = __dest + 1;
        *(int *)ppVar1 = (int)*ppVar1 + -1;
        if ((int)*ppVar1 == 0) {
          if ((uint)uVar7 < uVar3) {
            memmove(__dest,__dest + 2,(long)(int)(~(uint)uVar7 + uVar3) << 4);
            iVar4 = *(int *)(this + 0xf4);
            uVar3 = iVar4 - 1;
            *(uint *)(this + 0xf4) = uVar3;
            iVar8 = iVar4 * 2 + -2;
            iVar4 = 0;
            if (-1 < iVar8) {
              iVar4 = iVar8;
            }
            if (iVar4 < *(int *)(this + 0xf0)) {
              uVar9 = 4;
              if (4 < (int)uVar3) {
                uVar9 = uVar3;
              }
              if ((int)uVar9 < *(int *)(this + 0xf0)) {
                pvVar6 = realloc(*(void **)(this + 0xe8),(ulong)uVar9 << 4);
                *(void **)(this + 0xe8) = pvVar6;
                *(uint *)(this + 0xf0) = uVar9;
              }
            }
          }
          iVar4 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x10));
          if (iVar4 != 0) {
                    /* try { // try from 004a9a1f to 004a9a2c has its CatchHandler @ 004a9a2d */
                    /* WARNING: Subroutine does not return */
            std::__throw_system_error(iVar4);
          }
          LOCK();
          this[0x68] = (ReadWriteLock)0x1;
          UNLOCK();
          std::condition_variable::notify_all();
          pthread_mutex_unlock((pthread_mutex_t *)(this + 0x10));
          iVar4 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x78));
          if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
            std::__throw_system_error(iVar4);
          }
          LOCK();
          this[0xd0] = (ReadWriteLock)0x1;
          UNLOCK();
          std::condition_variable::notify_all();
          pthread_mutex_unlock((pthread_mutex_t *)(this + 0x78));
        }
        break;
      }
      uVar7 = uVar7 + 1;
      __dest = __dest + 2;
    } while (uVar3 != uVar7);
  }
  LOCK();
  uVar2 = *(undefined4 *)this;
  *(undefined4 *)this = 0;
  UNLOCK();
  return uVar2;
}


