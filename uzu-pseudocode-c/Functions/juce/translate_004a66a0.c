// Function : translate
// Namespace: juce
// Entry    : 004a66a0
// Prototype: juce * translate(juce * this, byte * param_1)
// Body     : 004a66a0 - 004a6d9a


/* juce::translate(char const*) */

juce * __thiscall juce::translate(juce *this,byte *param_1)

{
  uint uVar1;
  bool bVar2;
  wint_t wVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  byte bVar8;
  char cVar9;
  wint_t wVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  byte *pbVar15;
  long *plVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  bool bVar20;
  
  pbVar17 = &DAT_0061ac58;
  if ((param_1 != (byte *)0x0) && (bVar8 = *param_1, bVar8 != 0)) {
    lVar12 = 0;
    pbVar17 = param_1;
    do {
      pbVar17 = pbVar17 + 1;
      lVar11 = lVar12 + (ulong)(bVar8 >> 7);
      lVar12 = lVar11 + 1;
      bVar8 = *pbVar17;
    } while (bVar8 != 0);
    uVar13 = lVar11 + 5U & 0xfffffffffffffffc;
    puVar6 = operator_new__(uVar13 + 0x17);
    LOCK();
    *puVar6 = 0;
    UNLOCK();
    *(ulong *)(puVar6 + 2) = uVar13;
    pbVar17 = (byte *)(puVar6 + 4);
    bVar8 = *param_1;
    pbVar7 = pbVar17;
    if (bVar8 != 0) {
      do {
        param_1 = param_1 + 1;
        if ((char)bVar8 < '\0') {
          *pbVar7 = bVar8 >> 6 | 0xc0;
          pbVar7[1] = bVar8 & 0x3f | 0x80;
          pbVar7 = pbVar7 + 1;
        }
        else {
          *pbVar7 = bVar8;
        }
        pbVar7 = pbVar7 + 1;
        bVar8 = *param_1;
      } while (bVar8 != 0);
    }
    *pbVar7 = 0;
  }
  LOCK();
  bVar20 = (anonymous_namespace)::currentMappingsLock == 0;
  if (bVar20) {
    (anonymous_namespace)::currentMappingsLock = 1;
  }
  UNLOCK();
  if (!bVar20) {
    LOCK();
    bVar20 = (anonymous_namespace)::currentMappingsLock == 0;
    if (bVar20) {
      (anonymous_namespace)::currentMappingsLock = 1;
    }
    UNLOCK();
    if (!bVar20) {
      LOCK();
      bVar20 = (anonymous_namespace)::currentMappingsLock == 0;
      if (bVar20) {
        (anonymous_namespace)::currentMappingsLock = 1;
      }
      UNLOCK();
      if (!bVar20) {
        LOCK();
        bVar20 = (anonymous_namespace)::currentMappingsLock == 0;
        if (bVar20) {
          (anonymous_namespace)::currentMappingsLock = 1;
        }
        UNLOCK();
        if (!bVar20) {
          LOCK();
          bVar20 = (anonymous_namespace)::currentMappingsLock == 0;
          if (bVar20) {
            (anonymous_namespace)::currentMappingsLock = 1;
          }
          UNLOCK();
          if (!bVar20) {
            LOCK();
            bVar20 = (anonymous_namespace)::currentMappingsLock == 0;
            if (bVar20) {
              (anonymous_namespace)::currentMappingsLock = 1;
            }
            UNLOCK();
            if (!bVar20) {
              LOCK();
              bVar20 = (anonymous_namespace)::currentMappingsLock == 0;
              if (bVar20) {
                (anonymous_namespace)::currentMappingsLock = 1;
              }
              UNLOCK();
              if (!bVar20) {
                LOCK();
                bVar20 = (anonymous_namespace)::currentMappingsLock == 0;
                if (bVar20) {
                  (anonymous_namespace)::currentMappingsLock = 1;
                }
                UNLOCK();
                if (!bVar20) {
                  LOCK();
                  bVar20 = (anonymous_namespace)::currentMappingsLock == 0;
                  if (bVar20) {
                    (anonymous_namespace)::currentMappingsLock = 1;
                  }
                  UNLOCK();
                  if (!bVar20) {
                    LOCK();
                    bVar20 = (anonymous_namespace)::currentMappingsLock == 0;
                    if (bVar20) {
                      (anonymous_namespace)::currentMappingsLock = 1;
                    }
                    UNLOCK();
                    if (!bVar20) {
                      LOCK();
                      bVar20 = (anonymous_namespace)::currentMappingsLock == 0;
                      if (bVar20) {
                        (anonymous_namespace)::currentMappingsLock = 1;
                      }
                      UNLOCK();
                      if (!bVar20) {
                        LOCK();
                        bVar20 = (anonymous_namespace)::currentMappingsLock == 0;
                        if (bVar20) {
                          (anonymous_namespace)::currentMappingsLock = 1;
                        }
                        UNLOCK();
                        if (!bVar20) {
                          LOCK();
                          bVar20 = (anonymous_namespace)::currentMappingsLock == 0;
                          if (bVar20) {
                            (anonymous_namespace)::currentMappingsLock = 1;
                          }
                          UNLOCK();
                          if (!bVar20) {
                            LOCK();
                            bVar20 = (anonymous_namespace)::currentMappingsLock == 0;
                            if (bVar20) {
                              (anonymous_namespace)::currentMappingsLock = 1;
                            }
                            UNLOCK();
                            if (!bVar20) {
                              LOCK();
                              bVar20 = (anonymous_namespace)::currentMappingsLock == 0;
                              if (bVar20) {
                                (anonymous_namespace)::currentMappingsLock = 1;
                              }
                              UNLOCK();
                              if (!bVar20) {
                                LOCK();
                                bVar20 = (anonymous_namespace)::currentMappingsLock == 0;
                                if (bVar20) {
                                  (anonymous_namespace)::currentMappingsLock = 1;
                                }
                                UNLOCK();
                                if (!bVar20) {
                                  LOCK();
                                  bVar20 = (anonymous_namespace)::currentMappingsLock == 0;
                                  if (bVar20) {
                                    (anonymous_namespace)::currentMappingsLock = 1;
                                  }
                                  UNLOCK();
                                  if (!bVar20) {
                                    LOCK();
                                    bVar20 = (anonymous_namespace)::currentMappingsLock == 0;
                                    if (bVar20) {
                                      (anonymous_namespace)::currentMappingsLock = 1;
                                    }
                                    UNLOCK();
                                    if (!bVar20) {
                                      LOCK();
                                      bVar20 = (anonymous_namespace)::currentMappingsLock == 0;
                                      if (bVar20) {
                                        (anonymous_namespace)::currentMappingsLock = 1;
                                      }
                                      UNLOCK();
                                      if (!bVar20) {
                                        LOCK();
                                        bVar20 = (anonymous_namespace)::currentMappingsLock == 0;
                                        if (bVar20) {
                                          (anonymous_namespace)::currentMappingsLock = 1;
                                        }
                                        UNLOCK();
                                        if (!bVar20) {
                                          LOCK();
                                          bVar20 = (anonymous_namespace)::currentMappingsLock == 0;
                                          if (bVar20) {
                                            (anonymous_namespace)::currentMappingsLock = 1;
                                          }
                                          UNLOCK();
                                          if (!bVar20) {
                                            LOCK();
                                            bVar20 = (anonymous_namespace)::currentMappingsLock == 0
                                            ;
                                            if (bVar20) {
                                              (anonymous_namespace)::currentMappingsLock = 1;
                                            }
                                            UNLOCK();
                                            while (!bVar20) {
                                              sched_yield();
                                              LOCK();
                                              bVar20 = (anonymous_namespace)::currentMappingsLock ==
                                                       0;
                                              if (bVar20) {
                                                (anonymous_namespace)::currentMappingsLock = 1;
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
  if ((anonymous_namespace)::currentMappings != 0) {
    lVar12 = (anonymous_namespace)::currentMappings;
    if (*(long *)((anonymous_namespace)::currentMappings + 0x40) != 0) {
LAB_004a6954:
      uVar1 = *(uint *)(lVar12 + 0x24);
      if (*(char *)(lVar12 + 0x38) == '\0') {
        if (0 < (int)uVar1) {
          lVar11 = *(long *)(lVar12 + 0x18);
          uVar13 = 0;
          do {
            uVar14 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                               (pbVar17,*(byte **)(lVar11 + uVar13 * 8));
            if (uVar14 == 0) goto LAB_004a6934;
            uVar13 = uVar13 + 1;
          } while (uVar1 != uVar13);
        }
      }
      else if (0 < (int)uVar1) {
        uVar13 = 0;
        do {
          pbVar7 = *(byte **)(*(long *)(lVar12 + 0x18) + uVar13 * 8);
          plVar16 = (long *)(lVar12 + 0x40);
          pbVar18 = pbVar17;
          do {
            pbVar19 = pbVar7 + 1;
            bVar8 = *pbVar7;
            uVar14 = (uint)bVar8;
            if ((char)bVar8 < '\0') {
              if ((bVar8 & 0x40) == 0) {
                uVar14 = bVar8 & 0x7f;
                goto LAB_004a6a90;
              }
              if ((bVar8 & 0x20) == 0) {
                uVar14 = 0x3f;
                lVar11 = 0;
                bVar20 = false;
                bVar2 = false;
              }
              else {
                bVar20 = true;
                if ((bVar8 & 0x10) == 0) {
                  uVar14 = 0x1f;
                  lVar11 = 1;
                  bVar2 = false;
                }
                else {
                  uVar14 = 0xf;
                  lVar11 = 2;
                  bVar2 = true;
                }
              }
              uVar14 = bVar8 & uVar14;
              if ((pbVar7[1] & 0xffffffc0) != 0x80) goto LAB_004a6a90;
              pbVar19 = pbVar7 + lVar11 + 2;
              uVar14 = pbVar7[1] & 0x3f | uVar14 << 6;
              if (!bVar20) goto LAB_004a6a90;
              pbVar15 = pbVar7 + 2;
              if ((*pbVar15 & 0xffffffc0) == 0x80) {
                uVar14 = *pbVar15 & 0x3f | uVar14 << 6;
                if (!bVar2) goto LAB_004a6a90;
                pbVar15 = pbVar7 + 3;
                if ((*pbVar15 & 0xffffffc0) == 0x80) {
                  uVar14 = uVar14 << 6 | *pbVar15 & 0x3f;
                  goto LAB_004a6a90;
                }
                goto LAB_004a6a93;
              }
              pbVar7 = pbVar18 + 1;
              bVar8 = *pbVar18;
              wVar10 = (wint_t)bVar8;
              if ((char)bVar8 < '\0') goto LAB_004a6aa3;
LAB_004a6b70:
              pbVar19 = pbVar7;
LAB_004a6b73:
              uVar4 = 0;
              if (uVar14 != wVar10) {
LAB_004a6b7e:
                wVar3 = towupper(uVar14);
                wVar10 = towupper(wVar10);
                uVar4 = (int)(wVar3 - wVar10) >> 0x1f | 1;
                if (wVar3 - wVar10 == 0) {
                  uVar4 = 0;
                }
              }
            }
            else {
LAB_004a6a90:
              pbVar15 = pbVar19;
LAB_004a6a93:
              pbVar7 = pbVar18 + 1;
              bVar8 = *pbVar18;
              wVar10 = (wint_t)bVar8;
              if (-1 < (char)bVar8) goto LAB_004a6b70;
LAB_004a6aa3:
              pbVar7 = pbVar18 + 1;
              if ((bVar8 & 0x40) == 0) {
                wVar10 = bVar8 & 0x7f;
                goto LAB_004a6b70;
              }
              if ((bVar8 & 0x20) == 0) {
                uVar4 = 0x3f;
                lVar11 = 0;
                bVar20 = false;
                bVar2 = false;
              }
              else {
                bVar20 = true;
                if ((bVar8 & 0x10) == 0) {
                  uVar4 = 0x1f;
                  lVar11 = 1;
                  bVar2 = false;
                }
                else {
                  uVar4 = 0xf;
                  lVar11 = 2;
                  bVar2 = true;
                }
              }
              wVar10 = bVar8 & uVar4;
              if ((pbVar18[1] & 0xffffffc0) != 0x80) goto LAB_004a6b70;
              pbVar7 = pbVar18 + lVar11 + 2;
              wVar10 = pbVar18[1] & 0x3f | wVar10 << 6;
              if (!bVar20) goto LAB_004a6b70;
              pbVar19 = pbVar18 + 2;
              if ((*pbVar19 & 0xffffffc0) == 0x80) {
                wVar10 = *pbVar19 & 0x3f | wVar10 << 6;
                if (!bVar2) goto LAB_004a6b70;
                pbVar19 = pbVar18 + 3;
                if ((*pbVar19 & 0xffffffc0) == 0x80) {
                  wVar10 = wVar10 << 6 | *pbVar19 & 0x3f;
                  goto LAB_004a6b70;
                }
                goto LAB_004a6b73;
              }
              uVar4 = 0;
              if (uVar14 != wVar10) goto LAB_004a6b7e;
            }
            cVar9 = (uVar14 == 0) * '\x02';
            plVar16 = (long *)((ulong)plVar16 & 0xffffffff);
            if (uVar4 != 0) {
              plVar16 = (long *)(ulong)uVar4;
              cVar9 = '\x01';
            }
            pbVar7 = pbVar15;
            pbVar18 = pbVar19;
          } while (cVar9 == '\0');
          if ((cVar9 != '\x01') || ((int)plVar16 == 0)) goto LAB_004a6934;
          uVar13 = uVar13 + 1;
        } while (uVar13 != uVar1);
      }
      goto LAB_004a6940;
    }
LAB_004a6c42:
    uVar1 = *(uint *)(lVar12 + 0x24);
    if (*(char *)(lVar12 + 0x38) == '\0') {
      if (0 < (int)uVar1) {
        lVar11 = *(long *)(lVar12 + 0x18);
        uVar13 = 0;
        do {
          uVar14 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                             (pbVar17,*(byte **)(lVar11 + uVar13 * 8));
          if (uVar14 == 0) goto LAB_004a6cab;
          uVar13 = uVar13 + 1;
        } while (uVar1 != uVar13);
      }
    }
    else if (0 < (int)uVar1) {
      uVar13 = 0;
      do {
        uVar14 = CharacterFunctions::
                 compareIgnoreCase<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                           (*(byte **)(*(long *)(lVar12 + 0x18) + uVar13 * 8),pbVar17);
        if (uVar14 == 0) goto LAB_004a6cab;
        uVar13 = uVar13 + 1;
      } while (uVar1 != uVar13);
    }
  }
LAB_004a6cc8:
  *(byte **)this = pbVar17;
  pbVar7 = pbVar17 + -0x10;
  if (pbVar7 == (byte *)&emptyString) goto LAB_004a6cdf;
LAB_004a6cdb:
  LOCK();
  *(int *)pbVar7 = *(int *)pbVar7 + 1;
  UNLOCK();
LAB_004a6cdf:
  LOCK();
  (anonymous_namespace)::currentMappingsLock = 0;
  UNLOCK();
  pbVar17 = pbVar17 + -0x10;
  if (pbVar17 != (byte *)&emptyString) {
    LOCK();
    iVar5 = *(int *)pbVar17;
    *(int *)pbVar17 = *(int *)pbVar17 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      operator_delete__(pbVar17);
    }
  }
  return this;
LAB_004a6934:
  if ((uVar13 & 0x80000000) == 0) goto LAB_004a6c42;
LAB_004a6940:
  lVar12 = *(long *)(lVar12 + 0x40);
  if (*(long *)(lVar12 + 0x40) == 0) goto LAB_004a6c42;
  goto LAB_004a6954;
LAB_004a6cab:
  if ((int)(uint)uVar13 < 0) goto LAB_004a6cc8;
  if ((uint)uVar13 < *(uint *)(lVar12 + 0x34)) {
    plVar16 = (long *)((uVar13 & 0xffffffff) * 8 + *(long *)(lVar12 + 0x28));
  }
  else {
    plVar16 = (long *)&StringArray::operator[](int)::empty;
    if ((StringArray::operator[](int)::empty == '\0') &&
       (iVar5 = __cxa_guard_acquire(&StringArray::operator[](int)::empty), iVar5 != 0)) {
      StringArray::operator[](int)::empty = &DAT_0061ac58;
      plVar16 = (long *)&StringArray::operator[](int)::empty;
      __cxa_atexit(String::~String,&StringArray::operator[](int)::empty,&__dso_handle);
      __cxa_guard_release(&StringArray::operator[](int)::empty);
    }
  }
  lVar12 = *plVar16;
  *(long *)this = lVar12;
  pbVar7 = (byte *)(lVar12 + -0x10);
  if (pbVar7 == (byte *)&emptyString) goto LAB_004a6cdf;
  goto LAB_004a6cdb;
}


