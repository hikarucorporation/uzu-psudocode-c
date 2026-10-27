// Function : exitWrite
// Namespace: juce:ReadWriteLock
// Entry    : 004a9e90
// Prototype: undefined4 exitWrite(ReadWriteLock * this)
// Body     : 004a9e90 - 004aa03a


/* juce::ReadWriteLock::exitWrite() const */

undefined4 __thiscall juce::ReadWriteLock::exitWrite(ReadWriteLock *this)

{
  ReadWriteLock *pRVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  
  LOCK();
  iVar3 = *(int *)this;
  if (iVar3 == 0) {
    *(undefined4 *)this = 1;
  }
  UNLOCK();
  if (iVar3 != 0) {
    LOCK();
    iVar3 = *(int *)this;
    if (iVar3 == 0) {
      *(undefined4 *)this = 1;
    }
    UNLOCK();
    if (iVar3 != 0) {
      LOCK();
      iVar3 = *(int *)this;
      if (iVar3 == 0) {
        *(undefined4 *)this = 1;
      }
      UNLOCK();
      if (iVar3 != 0) {
        LOCK();
        iVar3 = *(int *)this;
        if (iVar3 == 0) {
          *(undefined4 *)this = 1;
        }
        UNLOCK();
        if (iVar3 != 0) {
          LOCK();
          iVar3 = *(int *)this;
          if (iVar3 == 0) {
            *(undefined4 *)this = 1;
          }
          UNLOCK();
          if (iVar3 != 0) {
            LOCK();
            iVar3 = *(int *)this;
            if (iVar3 == 0) {
              *(undefined4 *)this = 1;
            }
            UNLOCK();
            if (iVar3 != 0) {
              LOCK();
              iVar3 = *(int *)this;
              if (iVar3 == 0) {
                *(undefined4 *)this = 1;
              }
              UNLOCK();
              if (iVar3 != 0) {
                LOCK();
                iVar3 = *(int *)this;
                if (iVar3 == 0) {
                  *(undefined4 *)this = 1;
                }
                UNLOCK();
                if (iVar3 != 0) {
                  LOCK();
                  iVar3 = *(int *)this;
                  if (iVar3 == 0) {
                    *(undefined4 *)this = 1;
                  }
                  UNLOCK();
                  if (iVar3 != 0) {
                    LOCK();
                    iVar3 = *(int *)this;
                    if (iVar3 == 0) {
                      *(undefined4 *)this = 1;
                    }
                    UNLOCK();
                    if (iVar3 != 0) {
                      LOCK();
                      iVar3 = *(int *)this;
                      if (iVar3 == 0) {
                        *(undefined4 *)this = 1;
                      }
                      UNLOCK();
                      if (iVar3 != 0) {
                        LOCK();
                        iVar3 = *(int *)this;
                        if (iVar3 == 0) {
                          *(undefined4 *)this = 1;
                        }
                        UNLOCK();
                        if (iVar3 != 0) {
                          LOCK();
                          iVar3 = *(int *)this;
                          if (iVar3 == 0) {
                            *(undefined4 *)this = 1;
                          }
                          UNLOCK();
                          if (iVar3 != 0) {
                            LOCK();
                            iVar3 = *(int *)this;
                            if (iVar3 == 0) {
                              *(undefined4 *)this = 1;
                            }
                            UNLOCK();
                            if (iVar3 != 0) {
                              LOCK();
                              iVar3 = *(int *)this;
                              if (iVar3 == 0) {
                                *(undefined4 *)this = 1;
                              }
                              UNLOCK();
                              if (iVar3 != 0) {
                                LOCK();
                                iVar3 = *(int *)this;
                                if (iVar3 == 0) {
                                  *(undefined4 *)this = 1;
                                }
                                UNLOCK();
                                if (iVar3 != 0) {
                                  LOCK();
                                  iVar3 = *(int *)this;
                                  if (iVar3 == 0) {
                                    *(undefined4 *)this = 1;
                                  }
                                  UNLOCK();
                                  if (iVar3 != 0) {
                                    LOCK();
                                    iVar3 = *(int *)this;
                                    if (iVar3 == 0) {
                                      *(undefined4 *)this = 1;
                                    }
                                    UNLOCK();
                                    if (iVar3 != 0) {
                                      LOCK();
                                      iVar3 = *(int *)this;
                                      if (iVar3 == 0) {
                                        *(undefined4 *)this = 1;
                                      }
                                      UNLOCK();
                                      if (iVar3 != 0) {
                                        LOCK();
                                        iVar3 = *(int *)this;
                                        if (iVar3 == 0) {
                                          *(undefined4 *)this = 1;
                                        }
                                        UNLOCK();
                                        if (iVar3 != 0) {
                                          LOCK();
                                          iVar3 = *(int *)this;
                                          if (iVar3 == 0) {
                                            *(undefined4 *)this = 1;
                                          }
                                          UNLOCK();
                                          if (iVar3 != 0) {
                                            LOCK();
                                            bVar4 = *(int *)this == 0;
                                            if (bVar4) {
                                              *(undefined4 *)this = 1;
                                            }
                                            UNLOCK();
                                            while (!bVar4) {
                                              sched_yield();
                                              LOCK();
                                              bVar4 = *(int *)this == 0;
                                              if (bVar4) {
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
  pRVar1 = this + 0xdc;
  *(int *)pRVar1 = *(int *)pRVar1 + -1;
  if (*(int *)pRVar1 == 0) {
    *(undefined8 *)(this + 0xe0) = 0;
    iVar3 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x10));
    if (iVar3 != 0) {
                    /* try { // try from 004aa02d to 004aa03a has its CatchHandler @ 004aa03b */
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar3);
    }
    LOCK();
    this[0x68] = (ReadWriteLock)0x1;
    UNLOCK();
    std::condition_variable::notify_all();
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x10));
    iVar3 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x78));
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar3);
    }
    LOCK();
    this[0xd0] = (ReadWriteLock)0x1;
    UNLOCK();
    std::condition_variable::notify_all();
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x78));
  }
  LOCK();
  uVar2 = *(undefined4 *)this;
  *(undefined4 *)this = 0;
  UNLOCK();
  return uVar2;
}


