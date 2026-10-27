// Function : ~DeletedAtShutdown
// Namespace: juce:DeletedAtShutdown
// Entry    : 00480800
// Prototype: int ~DeletedAtShutdown(DeletedAtShutdown * this)
// Body     : 00480800 - 00480a9f


/* juce::DeletedAtShutdown::~DeletedAtShutdown() */

int __thiscall juce::DeletedAtShutdown::~DeletedAtShutdown(DeletedAtShutdown *this)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  bool bVar6;
  
  *(undefined ***)this = &PTR__DeletedAtShutdown_00712b10;
  LOCK();
  bVar6 = deletedAtShutdownLock == 0;
  if (bVar6) {
    deletedAtShutdownLock = 1;
  }
  UNLOCK();
  if (!bVar6) {
    LOCK();
    bVar6 = deletedAtShutdownLock == 0;
    if (bVar6) {
      deletedAtShutdownLock = 1;
    }
    UNLOCK();
    if (!bVar6) {
      LOCK();
      bVar6 = deletedAtShutdownLock == 0;
      if (bVar6) {
        deletedAtShutdownLock = 1;
      }
      UNLOCK();
      if (!bVar6) {
        LOCK();
        bVar6 = deletedAtShutdownLock == 0;
        if (bVar6) {
          deletedAtShutdownLock = 1;
        }
        UNLOCK();
        if (!bVar6) {
          LOCK();
          bVar6 = deletedAtShutdownLock == 0;
          if (bVar6) {
            deletedAtShutdownLock = 1;
          }
          UNLOCK();
          if (!bVar6) {
            LOCK();
            bVar6 = deletedAtShutdownLock == 0;
            if (bVar6) {
              deletedAtShutdownLock = 1;
            }
            UNLOCK();
            if (!bVar6) {
              LOCK();
              bVar6 = deletedAtShutdownLock == 0;
              if (bVar6) {
                deletedAtShutdownLock = 1;
              }
              UNLOCK();
              if (!bVar6) {
                LOCK();
                bVar6 = deletedAtShutdownLock == 0;
                if (bVar6) {
                  deletedAtShutdownLock = 1;
                }
                UNLOCK();
                if (!bVar6) {
                  LOCK();
                  bVar6 = deletedAtShutdownLock == 0;
                  if (bVar6) {
                    deletedAtShutdownLock = 1;
                  }
                  UNLOCK();
                  if (!bVar6) {
                    LOCK();
                    bVar6 = deletedAtShutdownLock == 0;
                    if (bVar6) {
                      deletedAtShutdownLock = 1;
                    }
                    UNLOCK();
                    if (!bVar6) {
                      LOCK();
                      bVar6 = deletedAtShutdownLock == 0;
                      if (bVar6) {
                        deletedAtShutdownLock = 1;
                      }
                      UNLOCK();
                      if (!bVar6) {
                        LOCK();
                        bVar6 = deletedAtShutdownLock == 0;
                        if (bVar6) {
                          deletedAtShutdownLock = 1;
                        }
                        UNLOCK();
                        if (!bVar6) {
                          LOCK();
                          bVar6 = deletedAtShutdownLock == 0;
                          if (bVar6) {
                            deletedAtShutdownLock = 1;
                          }
                          UNLOCK();
                          if (!bVar6) {
                            LOCK();
                            bVar6 = deletedAtShutdownLock == 0;
                            if (bVar6) {
                              deletedAtShutdownLock = 1;
                            }
                            UNLOCK();
                            if (!bVar6) {
                              LOCK();
                              bVar6 = deletedAtShutdownLock == 0;
                              if (bVar6) {
                                deletedAtShutdownLock = 1;
                              }
                              UNLOCK();
                              if (!bVar6) {
                                LOCK();
                                bVar6 = deletedAtShutdownLock == 0;
                                if (bVar6) {
                                  deletedAtShutdownLock = 1;
                                }
                                UNLOCK();
                                if (!bVar6) {
                                  LOCK();
                                  bVar6 = deletedAtShutdownLock == 0;
                                  if (bVar6) {
                                    deletedAtShutdownLock = 1;
                                  }
                                  UNLOCK();
                                  if (!bVar6) {
                                    LOCK();
                                    bVar6 = deletedAtShutdownLock == 0;
                                    if (bVar6) {
                                      deletedAtShutdownLock = 1;
                                    }
                                    UNLOCK();
                                    if (!bVar6) {
                                      LOCK();
                                      bVar6 = deletedAtShutdownLock == 0;
                                      if (bVar6) {
                                        deletedAtShutdownLock = 1;
                                      }
                                      UNLOCK();
                                      if (!bVar6) {
                                        LOCK();
                                        bVar6 = deletedAtShutdownLock == 0;
                                        if (bVar6) {
                                          deletedAtShutdownLock = 1;
                                        }
                                        UNLOCK();
                                        if (!bVar6) {
                                          LOCK();
                                          bVar6 = deletedAtShutdownLock == 0;
                                          if (bVar6) {
                                            deletedAtShutdownLock = 1;
                                          }
                                          UNLOCK();
                                          if (!bVar6) {
                                            LOCK();
                                            bVar6 = deletedAtShutdownLock == 0;
                                            if (bVar6) {
                                              deletedAtShutdownLock = 1;
                                            }
                                            UNLOCK();
                                            while (!bVar6) {
                                              sched_yield();
                                              LOCK();
                                              bVar6 = deletedAtShutdownLock == 0;
                                              if (bVar6) {
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
     (iVar2 = __cxa_guard_acquire(&getDeletedAtShutdownObjects()::objects), iVar2 != 0)) {
    __cxa_atexit(Array<juce::DeletedAtShutdown*,juce::DummyCriticalSection,0>::~Array,
                 &getDeletedAtShutdownObjects()::objects,&__dso_handle);
    __cxa_guard_release(&getDeletedAtShutdownObjects()::objects);
  }
  if (0 < (int)DAT_0071d114) {
    uVar4 = 0;
    do {
      if (*(DeletedAtShutdown **)((long)getDeletedAtShutdownObjects()::objects + uVar4 * 8) == this)
      {
        memmove((void *)((long)getDeletedAtShutdownObjects()::objects + uVar4 * 8),
                (void *)((long)getDeletedAtShutdownObjects()::objects + uVar4 * 8 + 8),
                (long)(int)(~(uint)uVar4 + DAT_0071d114) << 3);
        uVar1 = DAT_0071d114 - 1;
        iVar3 = DAT_0071d114 * 2 + -2;
        iVar2 = 0;
        if (-1 < iVar3) {
          iVar2 = iVar3;
        }
        DAT_0071d114 = uVar1;
        if (iVar2 < (int)DAT_0071d110) {
          uVar5 = 8;
          if (8 < (int)uVar1) {
            uVar5 = uVar1;
          }
          if ((int)uVar5 < (int)DAT_0071d110) {
            getDeletedAtShutdownObjects()::objects =
                 realloc(getDeletedAtShutdownObjects()::objects,(ulong)uVar5 << 3);
            DAT_0071d110 = uVar5;
          }
        }
        break;
      }
      uVar4 = uVar4 + 1;
    } while (DAT_0071d114 != uVar4);
  }
  iVar2 = deletedAtShutdownLock;
  LOCK();
  deletedAtShutdownLock = 0;
  UNLOCK();
  return iVar2;
}


