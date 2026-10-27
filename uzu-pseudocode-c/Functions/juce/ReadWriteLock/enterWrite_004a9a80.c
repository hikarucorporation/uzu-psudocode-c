// Function : enterWrite
// Namespace: juce:ReadWriteLock
// Entry    : 004a9a80
// Prototype: undefined4 enterWrite(ReadWriteLock * this)
// Body     : 004a9a80 - 004a9d35


/* juce::ReadWriteLock::enterWrite() const */

undefined4 __thiscall juce::ReadWriteLock::enterWrite(ReadWriteLock *this)

{
  undefined4 uVar1;
  int iVar2;
  pthread_t pVar3;
  int iVar4;
  bool bVar5;
  
  pVar3 = pthread_self();
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
                                            bVar5 = *(int *)this == 0;
                                            if (bVar5) {
                                              *(undefined4 *)this = 1;
                                            }
                                            UNLOCK();
                                            while (!bVar5) {
                                              sched_yield();
                                              LOCK();
                                              bVar5 = *(int *)this == 0;
                                              if (bVar5) {
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
  iVar4 = *(int *)(this + 0xf4);
  iVar2 = *(int *)(this + 0xdc);
  if ((iVar4 + iVar2 != 0) && (*(pthread_t *)(this + 0xe0) != pVar3)) {
    while ((iVar4 != 1 || (**(pthread_t **)(this + 0xe8) != pVar3))) {
      *(int *)(this + 0xd8) = *(int *)(this + 0xd8) + 1;
      LOCK();
      *(undefined4 *)this = 0;
      UNLOCK();
                    /* try { // try from 004a9c10 to 004a9c1f has its CatchHandler @ 004a9d36 */
      WaitableEvent::wait(DAT_005d90a0,(WaitableEvent *)(this + 0x70));
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
                                                while( true ) {
                                                  LOCK();
                                                  iVar4 = *(int *)this;
                                                  if (iVar4 == 0) {
                                                    *(undefined4 *)this = 1;
                                                  }
                                                  UNLOCK();
                                                  if (iVar4 == 0) break;
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
      *(int *)(this + 0xd8) = *(int *)(this + 0xd8) + -1;
      iVar4 = *(int *)(this + 0xf4);
      iVar2 = *(int *)(this + 0xdc);
      if ((iVar4 + iVar2 == 0) || (*(pthread_t *)(this + 0xe0) == pVar3)) break;
    }
  }
  *(pthread_t *)(this + 0xe0) = pVar3;
  *(int *)(this + 0xdc) = iVar2 + 1;
  LOCK();
  uVar1 = *(undefined4 *)this;
  *(undefined4 *)this = 0;
  UNLOCK();
  return uVar1;
}


