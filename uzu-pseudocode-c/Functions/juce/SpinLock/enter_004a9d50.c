// Function : enter
// Namespace: juce:SpinLock
// Entry    : 004a9d50
// Prototype: int enter(SpinLock * this)
// Body     : 004a9d50 - 004a9e81


/* juce::SpinLock::enter() const */

int __thiscall juce::SpinLock::enter(SpinLock *this)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = 0;
  LOCK();
  iVar1 = *(int *)this;
  if (iVar1 == 0) {
    *(undefined4 *)this = 1;
  }
  else {
    iVar2 = iVar1;
  }
  UNLOCK();
  if (iVar1 != 0) {
    iVar2 = 0;
    LOCK();
    iVar1 = *(int *)this;
    if (iVar1 == 0) {
      *(undefined4 *)this = 1;
    }
    else {
      iVar2 = iVar1;
    }
    UNLOCK();
    if (iVar1 != 0) {
      iVar2 = 0;
      LOCK();
      iVar1 = *(int *)this;
      if (iVar1 == 0) {
        *(undefined4 *)this = 1;
      }
      else {
        iVar2 = iVar1;
      }
      UNLOCK();
      if (iVar1 != 0) {
        iVar2 = 0;
        LOCK();
        iVar1 = *(int *)this;
        if (iVar1 == 0) {
          *(undefined4 *)this = 1;
        }
        else {
          iVar2 = iVar1;
        }
        UNLOCK();
        if (iVar1 != 0) {
          iVar2 = 0;
          LOCK();
          iVar1 = *(int *)this;
          if (iVar1 == 0) {
            *(undefined4 *)this = 1;
          }
          else {
            iVar2 = iVar1;
          }
          UNLOCK();
          if (iVar1 != 0) {
            iVar2 = 0;
            LOCK();
            iVar1 = *(int *)this;
            if (iVar1 == 0) {
              *(undefined4 *)this = 1;
            }
            else {
              iVar2 = iVar1;
            }
            UNLOCK();
            if (iVar1 != 0) {
              iVar2 = 0;
              LOCK();
              iVar1 = *(int *)this;
              if (iVar1 == 0) {
                *(undefined4 *)this = 1;
              }
              else {
                iVar2 = iVar1;
              }
              UNLOCK();
              if (iVar1 != 0) {
                iVar2 = 0;
                LOCK();
                iVar1 = *(int *)this;
                if (iVar1 == 0) {
                  *(undefined4 *)this = 1;
                }
                else {
                  iVar2 = iVar1;
                }
                UNLOCK();
                if (iVar1 != 0) {
                  iVar2 = 0;
                  LOCK();
                  iVar1 = *(int *)this;
                  if (iVar1 == 0) {
                    *(undefined4 *)this = 1;
                  }
                  else {
                    iVar2 = iVar1;
                  }
                  UNLOCK();
                  if (iVar1 != 0) {
                    iVar2 = 0;
                    LOCK();
                    iVar1 = *(int *)this;
                    if (iVar1 == 0) {
                      *(undefined4 *)this = 1;
                    }
                    else {
                      iVar2 = iVar1;
                    }
                    UNLOCK();
                    if (iVar1 != 0) {
                      iVar2 = 0;
                      LOCK();
                      iVar1 = *(int *)this;
                      if (iVar1 == 0) {
                        *(undefined4 *)this = 1;
                      }
                      else {
                        iVar2 = iVar1;
                      }
                      UNLOCK();
                      if (iVar1 != 0) {
                        iVar2 = 0;
                        LOCK();
                        iVar1 = *(int *)this;
                        if (iVar1 == 0) {
                          *(undefined4 *)this = 1;
                        }
                        else {
                          iVar2 = iVar1;
                        }
                        UNLOCK();
                        if (iVar1 != 0) {
                          iVar2 = 0;
                          LOCK();
                          iVar1 = *(int *)this;
                          if (iVar1 == 0) {
                            *(undefined4 *)this = 1;
                          }
                          else {
                            iVar2 = iVar1;
                          }
                          UNLOCK();
                          if (iVar1 != 0) {
                            iVar2 = 0;
                            LOCK();
                            iVar1 = *(int *)this;
                            if (iVar1 == 0) {
                              *(undefined4 *)this = 1;
                            }
                            else {
                              iVar2 = iVar1;
                            }
                            UNLOCK();
                            if (iVar1 != 0) {
                              iVar2 = 0;
                              LOCK();
                              iVar1 = *(int *)this;
                              if (iVar1 == 0) {
                                *(undefined4 *)this = 1;
                              }
                              else {
                                iVar2 = iVar1;
                              }
                              UNLOCK();
                              if (iVar1 != 0) {
                                iVar2 = 0;
                                LOCK();
                                iVar1 = *(int *)this;
                                if (iVar1 == 0) {
                                  *(undefined4 *)this = 1;
                                }
                                else {
                                  iVar2 = iVar1;
                                }
                                UNLOCK();
                                if (iVar1 != 0) {
                                  iVar2 = 0;
                                  LOCK();
                                  iVar1 = *(int *)this;
                                  if (iVar1 == 0) {
                                    *(undefined4 *)this = 1;
                                  }
                                  else {
                                    iVar2 = iVar1;
                                  }
                                  UNLOCK();
                                  if (iVar1 != 0) {
                                    iVar2 = 0;
                                    LOCK();
                                    iVar1 = *(int *)this;
                                    if (iVar1 == 0) {
                                      *(undefined4 *)this = 1;
                                    }
                                    else {
                                      iVar2 = iVar1;
                                    }
                                    UNLOCK();
                                    if (iVar1 != 0) {
                                      iVar2 = 0;
                                      LOCK();
                                      iVar1 = *(int *)this;
                                      if (iVar1 == 0) {
                                        *(undefined4 *)this = 1;
                                      }
                                      else {
                                        iVar2 = iVar1;
                                      }
                                      UNLOCK();
                                      if (iVar1 != 0) {
                                        iVar2 = 0;
                                        LOCK();
                                        iVar1 = *(int *)this;
                                        if (iVar1 == 0) {
                                          *(undefined4 *)this = 1;
                                        }
                                        else {
                                          iVar2 = iVar1;
                                        }
                                        UNLOCK();
                                        if (iVar1 != 0) {
                                          iVar2 = 0;
                                          LOCK();
                                          iVar1 = *(int *)this;
                                          if (iVar1 == 0) {
                                            *(undefined4 *)this = 1;
                                          }
                                          else {
                                            iVar2 = iVar1;
                                          }
                                          UNLOCK();
                                          if (iVar1 != 0) {
                                            iVar2 = 0;
                                            LOCK();
                                            bVar3 = *(int *)this == 0;
                                            if (bVar3) {
                                              *(undefined4 *)this = 1;
                                            }
                                            else {
                                              iVar2 = *(int *)this;
                                            }
                                            UNLOCK();
                                            while (!bVar3) {
                                              sched_yield();
                                              iVar2 = 0;
                                              LOCK();
                                              bVar3 = *(int *)this == 0;
                                              if (bVar3) {
                                                *(undefined4 *)this = 1;
                                              }
                                              else {
                                                iVar2 = *(int *)this;
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
  return iVar2;
}


