// Function : DeletedAtShutdown
// Namespace: juce:DeletedAtShutdown
// Entry    : 00480580
// Prototype: int DeletedAtShutdown(DeletedAtShutdown * this)
// Body     : 00480580 - 004807fc


/* juce::DeletedAtShutdown::DeletedAtShutdown() */

int __thiscall juce::DeletedAtShutdown::DeletedAtShutdown(DeletedAtShutdown *this)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  bool bVar4;
  
  *(undefined ***)this = &PTR__DeletedAtShutdown_00712b10;
  LOCK();
  bVar4 = deletedAtShutdownLock == 0;
  if (bVar4) {
    deletedAtShutdownLock = 1;
  }
  UNLOCK();
  if (!bVar4) {
    LOCK();
    bVar4 = deletedAtShutdownLock == 0;
    if (bVar4) {
      deletedAtShutdownLock = 1;
    }
    UNLOCK();
    if (!bVar4) {
      LOCK();
      bVar4 = deletedAtShutdownLock == 0;
      if (bVar4) {
        deletedAtShutdownLock = 1;
      }
      UNLOCK();
      if (!bVar4) {
        LOCK();
        bVar4 = deletedAtShutdownLock == 0;
        if (bVar4) {
          deletedAtShutdownLock = 1;
        }
        UNLOCK();
        if (!bVar4) {
          LOCK();
          bVar4 = deletedAtShutdownLock == 0;
          if (bVar4) {
            deletedAtShutdownLock = 1;
          }
          UNLOCK();
          if (!bVar4) {
            LOCK();
            bVar4 = deletedAtShutdownLock == 0;
            if (bVar4) {
              deletedAtShutdownLock = 1;
            }
            UNLOCK();
            if (!bVar4) {
              LOCK();
              bVar4 = deletedAtShutdownLock == 0;
              if (bVar4) {
                deletedAtShutdownLock = 1;
              }
              UNLOCK();
              if (!bVar4) {
                LOCK();
                bVar4 = deletedAtShutdownLock == 0;
                if (bVar4) {
                  deletedAtShutdownLock = 1;
                }
                UNLOCK();
                if (!bVar4) {
                  LOCK();
                  bVar4 = deletedAtShutdownLock == 0;
                  if (bVar4) {
                    deletedAtShutdownLock = 1;
                  }
                  UNLOCK();
                  if (!bVar4) {
                    LOCK();
                    bVar4 = deletedAtShutdownLock == 0;
                    if (bVar4) {
                      deletedAtShutdownLock = 1;
                    }
                    UNLOCK();
                    if (!bVar4) {
                      LOCK();
                      bVar4 = deletedAtShutdownLock == 0;
                      if (bVar4) {
                        deletedAtShutdownLock = 1;
                      }
                      UNLOCK();
                      if (!bVar4) {
                        LOCK();
                        bVar4 = deletedAtShutdownLock == 0;
                        if (bVar4) {
                          deletedAtShutdownLock = 1;
                        }
                        UNLOCK();
                        if (!bVar4) {
                          LOCK();
                          bVar4 = deletedAtShutdownLock == 0;
                          if (bVar4) {
                            deletedAtShutdownLock = 1;
                          }
                          UNLOCK();
                          if (!bVar4) {
                            LOCK();
                            bVar4 = deletedAtShutdownLock == 0;
                            if (bVar4) {
                              deletedAtShutdownLock = 1;
                            }
                            UNLOCK();
                            if (!bVar4) {
                              LOCK();
                              bVar4 = deletedAtShutdownLock == 0;
                              if (bVar4) {
                                deletedAtShutdownLock = 1;
                              }
                              UNLOCK();
                              if (!bVar4) {
                                LOCK();
                                bVar4 = deletedAtShutdownLock == 0;
                                if (bVar4) {
                                  deletedAtShutdownLock = 1;
                                }
                                UNLOCK();
                                if (!bVar4) {
                                  LOCK();
                                  bVar4 = deletedAtShutdownLock == 0;
                                  if (bVar4) {
                                    deletedAtShutdownLock = 1;
                                  }
                                  UNLOCK();
                                  if (!bVar4) {
                                    LOCK();
                                    bVar4 = deletedAtShutdownLock == 0;
                                    if (bVar4) {
                                      deletedAtShutdownLock = 1;
                                    }
                                    UNLOCK();
                                    if (!bVar4) {
                                      LOCK();
                                      bVar4 = deletedAtShutdownLock == 0;
                                      if (bVar4) {
                                        deletedAtShutdownLock = 1;
                                      }
                                      UNLOCK();
                                      if (!bVar4) {
                                        LOCK();
                                        bVar4 = deletedAtShutdownLock == 0;
                                        if (bVar4) {
                                          deletedAtShutdownLock = 1;
                                        }
                                        UNLOCK();
                                        if (!bVar4) {
                                          LOCK();
                                          bVar4 = deletedAtShutdownLock == 0;
                                          if (bVar4) {
                                            deletedAtShutdownLock = 1;
                                          }
                                          UNLOCK();
                                          if (!bVar4) {
                                            LOCK();
                                            bVar4 = deletedAtShutdownLock == 0;
                                            if (bVar4) {
                                              deletedAtShutdownLock = 1;
                                            }
                                            UNLOCK();
                                            while (!bVar4) {
                                              sched_yield();
                                              LOCK();
                                              bVar4 = deletedAtShutdownLock == 0;
                                              if (bVar4) {
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
     (iVar1 = __cxa_guard_acquire(&getDeletedAtShutdownObjects()::objects), iVar1 != 0)) {
    __cxa_atexit(Array<juce::DeletedAtShutdown*,juce::DummyCriticalSection,0>::~Array,
                 &getDeletedAtShutdownObjects()::objects,&__dso_handle);
    __cxa_guard_release(&getDeletedAtShutdownObjects()::objects);
  }
  if ((int)DAT_0071d110 <= DAT_0071d114) {
    uVar3 = DAT_0071d114 + ((DAT_0071d114 - (DAT_0071d114 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
    if (DAT_0071d110 != uVar3) {
      if ((int)uVar3 < 1) {
        free(getDeletedAtShutdownObjects()::objects);
        getDeletedAtShutdownObjects()::objects = (void *)0x0;
      }
      else {
        getDeletedAtShutdownObjects()::objects =
             realloc(getDeletedAtShutdownObjects()::objects,(ulong)uVar3 << 3);
      }
    }
    DAT_0071d110 = uVar3;
  }
  lVar2 = (long)DAT_0071d114;
  DAT_0071d114 = DAT_0071d114 + 1;
  *(DeletedAtShutdown **)((long)getDeletedAtShutdownObjects()::objects + lVar2 * 8) = this;
  iVar1 = deletedAtShutdownLock;
  LOCK();
  deletedAtShutdownLock = 0;
  UNLOCK();
  return iVar1;
}


