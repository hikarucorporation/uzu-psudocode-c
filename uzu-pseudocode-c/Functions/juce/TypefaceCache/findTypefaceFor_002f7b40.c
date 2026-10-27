// Function : findTypefaceFor
// Namespace: juce:TypefaceCache
// Entry    : 002f7b40
// Prototype: undefined findTypefaceFor(long * param_1, long param_2, long * param_3, undefined8 param_4, uint * param_5, ulong param_6)
// Body     : 002f7b40 - 002f834a


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::TypefaceCache::findTypefaceFor(juce::Font const&) */

void __cdecl
juce::TypefaceCache::findTypefaceFor
          (long *param_1,long param_2,long *param_3,undefined8 param_4,uint *param_5,ulong param_6)

{
  ReadWriteLock *this;
  byte *pbVar1;
  byte *pbVar2;
  int *piVar3;
  byte *pbVar4;
  byte *pbVar5;
  long lVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  uint uVar12;
  int iVar13;
  byte *pbVar14;
  pthread_t pVar15;
  long lVar16;
  Desktop *this_00;
  LookAndFeel_V4 *pLVar17;
  long *plVar18;
  byte *pbVar19;
  void *__ptr;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  undefined8 extraout_RDX;
  undefined8 *puVar23;
  long lVar24;
  long *plVar25;
  bool bVar26;
  byte *local_68;
  undefined8 uStack_60;
  long *local_50 [2];
  long *local_40;
  long *local_38;
  
  lVar16 = *param_3;
  pbVar4 = *(byte **)(lVar16 + 0x18);
  pbVar2 = pbVar4 + -0x10;
  if (pbVar2 != (byte *)&emptyString) {
    LOCK();
    *(int *)pbVar2 = *(int *)pbVar2 + 1;
    UNLOCK();
    lVar16 = *param_3;
  }
  pbVar5 = *(byte **)(lVar16 + 0x20);
  pbVar14 = pbVar5 + -0x10;
  if (pbVar14 != (byte *)&emptyString) {
    LOCK();
    *(int *)pbVar14 = *(int *)pbVar14 + 1;
    UNLOCK();
  }
  this = (ReadWriteLock *)(param_2 + 0x10);
  pVar15 = pthread_self();
  while( true ) {
    LOCK();
    iVar13 = *(int *)this;
    if (iVar13 == 0) {
      *(undefined4 *)this = 1;
    }
    UNLOCK();
    if (iVar13 != 0) {
      LOCK();
      iVar13 = *(int *)this;
      if (iVar13 == 0) {
        *(undefined4 *)this = 1;
      }
      UNLOCK();
      if (iVar13 != 0) {
        LOCK();
        iVar13 = *(int *)this;
        if (iVar13 == 0) {
          *(undefined4 *)this = 1;
        }
        UNLOCK();
        if (iVar13 != 0) {
          LOCK();
          iVar13 = *(int *)this;
          if (iVar13 == 0) {
            *(undefined4 *)this = 1;
          }
          UNLOCK();
          if (iVar13 != 0) {
            LOCK();
            iVar13 = *(int *)this;
            if (iVar13 == 0) {
              *(undefined4 *)this = 1;
            }
            UNLOCK();
            if (iVar13 != 0) {
              LOCK();
              iVar13 = *(int *)this;
              if (iVar13 == 0) {
                *(undefined4 *)this = 1;
              }
              UNLOCK();
              if (iVar13 != 0) {
                LOCK();
                iVar13 = *(int *)this;
                if (iVar13 == 0) {
                  *(undefined4 *)this = 1;
                }
                UNLOCK();
                if (iVar13 != 0) {
                  LOCK();
                  iVar13 = *(int *)this;
                  if (iVar13 == 0) {
                    *(undefined4 *)this = 1;
                  }
                  UNLOCK();
                  if (iVar13 != 0) {
                    LOCK();
                    iVar13 = *(int *)this;
                    if (iVar13 == 0) {
                      *(undefined4 *)this = 1;
                    }
                    UNLOCK();
                    if (iVar13 != 0) {
                      LOCK();
                      iVar13 = *(int *)this;
                      if (iVar13 == 0) {
                        *(undefined4 *)this = 1;
                      }
                      UNLOCK();
                      if (iVar13 != 0) {
                        LOCK();
                        iVar13 = *(int *)this;
                        if (iVar13 == 0) {
                          *(undefined4 *)this = 1;
                        }
                        UNLOCK();
                        if (iVar13 != 0) {
                          LOCK();
                          iVar13 = *(int *)this;
                          if (iVar13 == 0) {
                            *(undefined4 *)this = 1;
                          }
                          UNLOCK();
                          if (iVar13 != 0) {
                            LOCK();
                            iVar13 = *(int *)this;
                            if (iVar13 == 0) {
                              *(undefined4 *)this = 1;
                            }
                            UNLOCK();
                            if (iVar13 != 0) {
                              LOCK();
                              iVar13 = *(int *)this;
                              if (iVar13 == 0) {
                                *(undefined4 *)this = 1;
                              }
                              UNLOCK();
                              if (iVar13 != 0) {
                                LOCK();
                                iVar13 = *(int *)this;
                                if (iVar13 == 0) {
                                  *(undefined4 *)this = 1;
                                }
                                UNLOCK();
                                if (iVar13 != 0) {
                                  LOCK();
                                  iVar13 = *(int *)this;
                                  if (iVar13 == 0) {
                                    *(undefined4 *)this = 1;
                                  }
                                  UNLOCK();
                                  if (iVar13 != 0) {
                                    LOCK();
                                    iVar13 = *(int *)this;
                                    if (iVar13 == 0) {
                                      *(undefined4 *)this = 1;
                                    }
                                    UNLOCK();
                                    if (iVar13 != 0) {
                                      LOCK();
                                      iVar13 = *(int *)this;
                                      if (iVar13 == 0) {
                                        *(undefined4 *)this = 1;
                                      }
                                      UNLOCK();
                                      if (iVar13 != 0) {
                                        LOCK();
                                        iVar13 = *(int *)this;
                                        if (iVar13 == 0) {
                                          *(undefined4 *)this = 1;
                                        }
                                        UNLOCK();
                                        if (iVar13 != 0) {
                                          LOCK();
                                          iVar13 = *(int *)this;
                                          if (iVar13 == 0) {
                                            *(undefined4 *)this = 1;
                                          }
                                          UNLOCK();
                                          if (iVar13 != 0) {
                                            LOCK();
                                            iVar13 = *(int *)this;
                                            if (iVar13 == 0) {
                                              *(undefined4 *)this = 1;
                                            }
                                            UNLOCK();
                                            if (iVar13 != 0) {
                                              LOCK();
                                              bVar26 = *(int *)this == 0;
                                              if (bVar26) {
                                                *(undefined4 *)this = 1;
                                              }
                                              UNLOCK();
                                              while (!bVar26) {
                                                sched_yield();
                                                LOCK();
                                                bVar26 = *(int *)this == 0;
                                                if (bVar26) {
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
    __ptr = *(void **)(param_2 + 0xf8);
    iVar13 = *(int *)(param_2 + 0x104);
    lVar16 = (long)iVar13;
    if (lVar16 != 0) {
      uVar20 = lVar16 * 0x10;
      uVar22 = 0;
      do {
        if (*(pthread_t *)((long)__ptr + uVar22) == pVar15) {
          piVar3 = (int *)((long)__ptr + uVar22 + 8);
          *piVar3 = *piVar3 + 1;
          goto LAB_002f7d3f;
        }
        uVar22 = uVar22 + 0x10;
      } while (uVar20 != uVar22);
    }
    if ((*(int *)(param_2 + 0xe8) + *(int *)(param_2 + 0xec) == 0) ||
       ((*(pthread_t *)(param_2 + 0xf0) == pVar15 && (0 < *(int *)(param_2 + 0xec))))) break;
    LOCK();
    *(undefined4 *)this = 0;
    UNLOCK();
                    /* try { // try from 002f7d20 to 002f7d2f has its CatchHandler @ 002f846a */
    WaitableEvent::wait(DAT_005d90a0,(WaitableEvent *)(param_2 + 0x18));
  }
  if ((int)*(uint *)(param_2 + 0x100) <= iVar13) {
    uVar12 = iVar13 + ((iVar13 - (iVar13 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
    if (*(uint *)(param_2 + 0x100) != uVar12) {
      if ((int)uVar12 < 1) {
        free(__ptr);
        *(undefined8 *)(param_2 + 0xf8) = 0;
        __ptr = (void *)0x0;
      }
      else {
        __ptr = realloc(__ptr,(ulong)uVar12 << 4);
        *(void **)(param_2 + 0xf8) = __ptr;
      }
    }
    *(uint *)(param_2 + 0x100) = uVar12;
    iVar13 = *(int *)(param_2 + 0x104);
    lVar16 = (long)iVar13;
  }
  uVar20 = (ulong)(iVar13 + 1U);
  *(uint *)(param_2 + 0x104) = iVar13 + 1U;
  *(pthread_t *)((long)__ptr + lVar16 * 0x10) = pVar15;
  *(undefined4 *)((long)__ptr + lVar16 * 0x10 + 8) = 1;
LAB_002f7d3f:
  LOCK();
  *(undefined4 *)(param_2 + 0x10) = 0;
  UNLOCK();
  if ((long)*(int *)(param_2 + 0x114) != 0) {
    lVar16 = *(long *)(param_2 + 0x108);
    lVar24 = (long)*(int *)(param_2 + 0x114) << 5;
    do {
      pbVar7 = *(byte **)(lVar16 + -0x20 + lVar24);
      if ((((pbVar7 == pbVar4) ||
           (uVar12 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                               (pbVar7,pbVar4), uVar12 == 0)) &&
          ((pbVar7 = *(byte **)(lVar16 + -0x18 + lVar24), pbVar7 == pbVar5 ||
           (uVar12 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                               (pbVar7,pbVar5), uVar12 == 0)))) &&
         (lVar6 = *(long *)(lVar16 + -8 + lVar24), lVar6 != 0)) {
        lVar21 = *(long *)(param_2 + 0x118) + 1;
        *(long *)(param_2 + 0x118) = lVar21;
        *(long *)(lVar16 + -0x10 + lVar24) = lVar21;
        *param_1 = lVar6;
        LOCK();
        *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
        UNLOCK();
        ReadWriteLock::exitRead(this);
        goto joined_r0x002f8100;
      }
      lVar24 = lVar24 + -0x20;
    } while (lVar24 != 0);
  }
  ReadWriteLock::exitRead(this);
  ReadWriteLock::enterWrite(this);
  if (pbVar2 != (byte *)&emptyString) {
    LOCK();
    *(int *)pbVar2 = *(int *)pbVar2 + 1;
    UNLOCK();
  }
  if (pbVar14 != (byte *)&emptyString) {
    LOCK();
    *(int *)pbVar14 = *(int *)pbVar14 + 1;
    UNLOCK();
  }
  lVar16 = *(long *)(param_2 + 0x118) + 1;
  *(long *)(param_2 + 0x118) = lVar16;
  if (juce_getTypefaceForFont == 0) {
    local_38 = param_3;
    std::__invoke<juce::Font::getDefaultTypefaceForFont(juce::Font_const&)::__25>
              ((Native *)&local_40,&local_38,extraout_RDX,uVar20,param_5,param_6);
    if (local_40 == (long *)0x0) {
                    /* try { // try from 002f817c to 002f8187 has its CatchHandler @ 002f839e */
      Font::Native::getDefaultPlatformTypefaceForFont((Native *)local_50,param_3);
    }
    else {
      local_50[0] = local_40;
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
      if (local_40 != (long *)0x0) {
        LOCK();
        plVar18 = local_40 + 1;
        *(int *)plVar18 = (int)*plVar18 + -1;
        UNLOCK();
        if ((int)*plVar18 == 0) {
          (**(code **)(*local_40 + 8))();
        }
      }
    }
  }
  else {
    if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002f7e2b to 002f7e34 has its CatchHandler @ 002f83b3 */
      this_00 = operator_new(0x1d0);
                    /* try { // try from 002f7e38 to 002f7e3f has its CatchHandler @ 002f83a0 */
      Desktop::Desktop(this_00);
      Desktop::instance = this_00;
    }
    pLVar17 = Desktop::getDefaultLookAndFeel(Desktop::instance);
                    /* try { // try from 002f7e52 to 002f7efc has its CatchHandler @ 002f83bb */
    (**(code **)(*(long *)pLVar17 + 0x48))((Native *)local_50,pLVar17,param_3);
  }
  if (local_50[0] == (long *)0x0) {
    *param_1 = 0;
    local_68 = pbVar4;
    uStack_60 = pbVar5;
    goto LAB_002f7f61;
  }
  puVar23 = *(undefined8 **)(param_2 + 0x108);
  if (1 < (ulong)(long)*(int *)(param_2 + 0x114)) {
    lVar24 = (long)*(int *)(param_2 + 0x114) * 0x20 + -0x20;
    puVar8 = puVar23;
    do {
      puVar11 = puVar8 + 4;
      if ((ulong)puVar23[2] <= (ulong)puVar8[6]) {
        puVar11 = puVar23;
      }
      puVar23 = puVar11;
      lVar24 = lVar24 + -0x20;
      puVar8 = puVar8 + 4;
    } while (lVar24 != 0);
  }
  local_68 = (byte *)*puVar23;
  pbVar7 = (byte *)puVar23[1];
  *puVar23 = pbVar4;
  uStack_60._0_4_ = SUB84(pbVar5,0);
  uStack_60._4_4_ = (undefined4)((ulong)pbVar5 >> 0x20);
  *(undefined4 *)(puVar23 + 1) = (undefined4)uStack_60;
  *(undefined4 *)((long)puVar23 + 0xc) = uStack_60._4_4_;
  puVar23[2] = lVar16;
  plVar18 = (long *)puVar23[3];
  puVar23[3] = local_50[0];
  local_50[0] = plVar18;
  if (*(long *)(param_2 + 8) == 0) {
    if ((getFontPlaceholderNames()::names == '\0') &&
       (iVar13 = __cxa_guard_acquire(&getFontPlaceholderNames()::names), iVar13 != 0)) {
                    /* try { // try from 002f82d0 to 002f82d4 has its CatchHandler @ 002f8383 */
      FontPlaceholderNames::FontPlaceholderNames();
      __cxa_atexit(FontPlaceholderNames::~FontPlaceholderNames,&getFontPlaceholderNames()::names,
                   &__dso_handle);
      __cxa_guard_release(&getFontPlaceholderNames()::names);
    }
    pbVar9 = getFontPlaceholderNames()::names;
    pbVar19 = getFontPlaceholderNames()::names + -0x10;
    if (pbVar19 != (byte *)&emptyString) {
      LOCK();
      *(int *)pbVar19 = *(int *)pbVar19 + 1;
      UNLOCK();
    }
    if ((getFontPlaceholderNames()::names == '\0') &&
       (iVar13 = __cxa_guard_acquire(&getFontPlaceholderNames()::names), iVar13 != 0)) {
                    /* try { // try from 002f831b to 002f831f has its CatchHandler @ 002f834b */
      FontPlaceholderNames::FontPlaceholderNames();
      __cxa_atexit(FontPlaceholderNames::~FontPlaceholderNames,&getFontPlaceholderNames()::names,
                   &__dso_handle);
      __cxa_guard_release(&getFontPlaceholderNames()::names);
    }
    pbVar10 = DAT_0071cd48;
    pbVar1 = DAT_0071cd48 + -0x10;
    if (pbVar1 != (byte *)&emptyString) {
      LOCK();
      *(int *)pbVar1 = *(int *)pbVar1 + 1;
      UNLOCK();
    }
    if ((pbVar4 != pbVar9) &&
       (uVar12 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                           (pbVar4,pbVar9), uVar12 != 0)) {
      if (pbVar1 != (byte *)&emptyString) {
        LOCK();
        iVar13 = *(int *)pbVar1;
        *(int *)pbVar1 = *(int *)pbVar1 + -1;
        UNLOCK();
        if (iVar13 == 0) {
          operator_delete__(pbVar1);
        }
      }
      if (pbVar19 != (byte *)&emptyString) {
        LOCK();
        iVar13 = *(int *)pbVar19;
        *(int *)pbVar19 = *(int *)pbVar19 + -1;
        UNLOCK();
        if (iVar13 == 0) {
          operator_delete__(pbVar19);
        }
      }
      goto LAB_002f7ebe;
    }
    if (pbVar5 == pbVar10) {
      bVar26 = true;
    }
    else {
      uVar12 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                         (pbVar5,pbVar10);
      bVar26 = uVar12 == 0;
    }
    if (pbVar1 != (byte *)&emptyString) {
      LOCK();
      iVar13 = *(int *)pbVar1;
      *(int *)pbVar1 = *(int *)pbVar1 + -1;
      UNLOCK();
      if (iVar13 == 0) {
        operator_delete__(pbVar1);
      }
    }
    if (pbVar19 != (byte *)&emptyString) {
      LOCK();
      iVar13 = *(int *)pbVar19;
      *(int *)pbVar19 = *(int *)pbVar19 + -1;
      UNLOCK();
      if (iVar13 == 0) {
        operator_delete__(pbVar19);
      }
    }
    if (!bVar26) goto LAB_002f7ebe;
    plVar18 = (long *)puVar23[3];
    plVar25 = *(long **)(param_2 + 8);
    if (plVar18 == (long *)0x0) {
      *(undefined8 *)(param_2 + 8) = 0;
LAB_002f824e:
      if (plVar25 != (long *)0x0) {
        LOCK();
        plVar18 = plVar25 + 1;
        *(int *)plVar18 = (int)*plVar18 + -1;
        UNLOCK();
        if ((int)*plVar18 == 0) {
          (**(code **)(*plVar25 + 8))();
        }
      }
      goto LAB_002f7ebe;
    }
    if (plVar25 != plVar18) {
      LOCK();
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      UNLOCK();
      plVar25 = *(long **)(param_2 + 8);
      *(long **)(param_2 + 8) = plVar18;
      goto LAB_002f824e;
    }
    *param_1 = (long)plVar18;
LAB_002f7ecf:
    LOCK();
    *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
    UNLOCK();
  }
  else {
LAB_002f7ebe:
    plVar18 = (long *)puVar23[3];
    *param_1 = (long)plVar18;
    if (plVar18 != (long *)0x0) goto LAB_002f7ecf;
  }
  uStack_60 = pbVar7;
  if (local_50[0] != (long *)0x0) {
    LOCK();
    plVar18 = local_50[0] + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 == 0) {
      (**(code **)(*local_50[0] + 8))();
    }
  }
LAB_002f7f61:
  uStack_60 = uStack_60 + -0x10;
  if (uStack_60 != (byte *)&emptyString) {
    LOCK();
    iVar13 = *(int *)uStack_60;
    *(int *)uStack_60 = *(int *)uStack_60 + -1;
    UNLOCK();
    if (iVar13 == 0) {
      operator_delete__(uStack_60);
    }
  }
  local_68 = local_68 + -0x10;
  if (local_68 != (byte *)&emptyString) {
    LOCK();
    iVar13 = *(int *)local_68;
    *(int *)local_68 = *(int *)local_68 + -1;
    UNLOCK();
    if (iVar13 == 0) {
      operator_delete__(local_68);
    }
  }
  ReadWriteLock::exitWrite(this);
joined_r0x002f8100:
  if (pbVar14 != (byte *)&emptyString) {
    LOCK();
    iVar13 = *(int *)pbVar14;
    *(int *)pbVar14 = *(int *)pbVar14 + -1;
    UNLOCK();
    if (iVar13 == 0) {
      operator_delete__(pbVar14);
    }
  }
  if (pbVar2 != (byte *)&emptyString) {
    LOCK();
    iVar13 = *(int *)pbVar2;
    *(int *)pbVar2 = *(int *)pbVar2 + -1;
    UNLOCK();
    if (iVar13 == 0) {
      operator_delete__(pbVar2);
    }
  }
  return;
}


