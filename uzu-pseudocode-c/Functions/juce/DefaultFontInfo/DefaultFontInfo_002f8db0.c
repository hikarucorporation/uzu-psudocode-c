// Function : DefaultFontInfo
// Namespace: juce:DefaultFontInfo
// Entry    : 002f8db0
// Prototype: undefined DefaultFontInfo(void)
// Body     : 002f8db0 - 002f96c1


/* juce::DefaultFontInfo::DefaultFontInfo() */

void __thiscall juce::DefaultFontInfo::DefaultFontInfo(void)

{
  char cVar1;
  byte bVar2;
  long *plVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FTTypefaceList *pFVar7;
  undefined8 uVar8;
  byte *pbVar9;
  undefined **ppuVar10;
  undefined4 *puVar11;
  char *pcVar12;
  byte *pbVar13;
  byte *pbVar14;
  int iVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  String *pSVar19;
  ulong uVar20;
  int *piVar21;
  long lVar22;
  String *pSVar23;
  String *local_38;
  undefined8 uStack_30;
  
  local_38 = (String *)0x0;
  uStack_30 = 0;
  if (FTTypefaceList::singletonHolder == (FTTypefaceList *)0x0) {
                    /* try { // try from 002f8dd0 to 002f8dd9 has its CatchHandler @ 002f975b */
    pFVar7 = operator_new(0x28);
                    /* try { // try from 002f8ddd to 002f8de4 has its CatchHandler @ 002f96dc */
    FTTypefaceList::FTTypefaceList(pFVar7);
    LOCK();
    UNLOCK();
    FTTypefaceList::singletonHolder = pFVar7;
  }
  plVar3 = *(long **)(FTTypefaceList::singletonHolder + 0x18);
  for (plVar16 = *(long **)(FTTypefaceList::singletonHolder + 0x10); plVar16 != plVar3;
      plVar16 = plVar16 + 1) {
    if ((*(byte *)(*plVar16 + 0x1c) & 8) != 0) {
      StringArray::addIfNotAlreadyThere((ulong *)&local_38,(undefined8 *)(*plVar16 + 8));
    }
  }
                    /* try { // try from 002f8e30 to 002f8e45 has its CatchHandler @ 002f975b */
  pickBestFont<char_const*const(&)[6]>
            ((DefaultFontInfo *)
             &Font::Native::getDefaultPlatformTypefaceForFont(juce::Font_const&)::defaultInfo,
             (long *)&local_38,&getDefaultSansSerifFontName()::targets);
  if (0 < (int)uStack_30._4_4_) {
    lVar17 = 0;
    do {
      piVar21 = (int *)(*(long *)(local_38 + lVar17 * 8) + -0x10);
      if (piVar21 != &emptyString) {
        LOCK();
        iVar15 = *piVar21;
        *piVar21 = *piVar21 + -1;
        UNLOCK();
        if (iVar15 == 0) {
          operator_delete__(piVar21);
        }
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 < (int)uStack_30._4_4_);
  }
  free(local_38);
  local_38 = (String *)0x0;
  uStack_30 = 0;
  if (FTTypefaceList::singletonHolder == (FTTypefaceList *)0x0) {
                    /* try { // try from 002f8eaf to 002f8eb8 has its CatchHandler @ 002f971f */
    pFVar7 = operator_new(0x28);
                    /* try { // try from 002f8ebc to 002f8ec3 has its CatchHandler @ 002f96cf */
    FTTypefaceList::FTTypefaceList(pFVar7);
    LOCK();
    UNLOCK();
    FTTypefaceList::singletonHolder = pFVar7;
  }
  plVar3 = *(long **)(FTTypefaceList::singletonHolder + 0x18);
  for (plVar16 = *(long **)(FTTypefaceList::singletonHolder + 0x10); plVar16 != plVar3;
      plVar16 = plVar16 + 1) {
    if ((*(byte *)(*plVar16 + 0x1c) & 0xc) == 0) {
      StringArray::addIfNotAlreadyThere((ulong *)&local_38,(undefined8 *)(*plVar16 + 8));
    }
  }
                    /* try { // try from 002f8f00 to 002f8f15 has its CatchHandler @ 002f971f */
  pickBestFont<char_const*const(&)[6]>
            ((DefaultFontInfo *)&DAT_0071cbd8,(long *)&local_38,&getDefaultSerifFontName()::targets)
  ;
  if (0 < (int)uStack_30._4_4_) {
    lVar17 = 0;
    do {
      piVar21 = (int *)(*(long *)(local_38 + lVar17 * 8) + -0x10);
      if (piVar21 != &emptyString) {
        LOCK();
        iVar15 = *piVar21;
        *piVar21 = *piVar21 + -1;
        UNLOCK();
        if (iVar15 == 0) {
          operator_delete__(piVar21);
        }
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 < (int)uStack_30._4_4_);
  }
  free(local_38);
  local_38 = (String *)0x0;
  uStack_30 = 0;
  if (FTTypefaceList::singletonHolder == (FTTypefaceList *)0x0) {
                    /* try { // try from 002f8f7f to 002f8f88 has its CatchHandler @ 002f96e9 */
    pFVar7 = operator_new(0x28);
                    /* try { // try from 002f8f8c to 002f8f93 has its CatchHandler @ 002f96c2 */
    FTTypefaceList::FTTypefaceList(pFVar7);
    LOCK();
    UNLOCK();
    FTTypefaceList::singletonHolder = pFVar7;
  }
  plVar3 = *(long **)(FTTypefaceList::singletonHolder + 0x18);
  plVar16 = *(long **)(FTTypefaceList::singletonHolder + 0x10);
  pSVar23 = local_38;
  while( true ) {
    local_38 = pSVar23;
    if (plVar16 == plVar3) break;
    if ((*(byte *)(*plVar16 + 0x1c) & 4) != 0) {
      StringArray::addIfNotAlreadyThere((ulong *)&local_38,(undefined8 *)(*plVar16 + 8));
    }
    plVar16 = plVar16 + 1;
    pSVar23 = local_38;
  }
  uStack_30._4_4_ = (uint)((ulong)uStack_30 >> 0x20);
  uVar6 = uStack_30._4_4_;
  uVar20 = (ulong)uStack_30._4_4_;
  bVar4 = 0 < (int)uStack_30._4_4_;
  if (bVar4) {
    uVar18 = 0;
    do {
      uVar5 = CharacterFunctions::compareIgnoreCase<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                        (*(byte **)(pSVar23 + uVar18 * 8),(byte *)"DejaVu Sans Mono");
      pSVar19 = local_38;
      if (uVar5 == 0) {
        if ((uVar18 & 0x80000000) == 0) {
          ppuVar10 = &getDefaultMonospacedFontName()::targets;
          goto LAB_002f9587;
        }
        break;
      }
      uVar18 = uVar18 + 1;
    } while (uVar20 != uVar18);
    if (0 < (int)uVar6) {
      uVar18 = 0;
      do {
        uVar5 = CharacterFunctions::compareIgnoreCase<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                          (*(byte **)(pSVar19 + uVar18 * 8),(byte *)"Bitstream Vera Sans Mono");
        pSVar23 = local_38;
        if (uVar5 == 0) {
          if ((uVar18 & 0x80000000) == 0) {
            ppuVar10 = &PTR_s_Bitstream_Vera_Sans_Mono_00712508;
            goto LAB_002f9587;
          }
          break;
        }
        uVar18 = uVar18 + 1;
      } while (uVar20 != uVar18);
      if (0 < (int)uVar6) {
        uVar18 = 0;
        do {
          uVar5 = CharacterFunctions::
                  compareIgnoreCase<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                            (*(byte **)(pSVar23 + uVar18 * 8),(byte *)0x5e5209);
          pSVar19 = local_38;
          if (uVar5 == 0) {
            if ((uVar18 & 0x80000000) == 0) {
              ppuVar10 = &PTR_s_Sans_Mono_005e51fa_0xf_00712510;
              goto LAB_002f9587;
            }
            break;
          }
          uVar18 = uVar18 + 1;
        } while (uVar20 != uVar18);
        if (0 < (int)uVar6) {
          uVar18 = 0;
          do {
            uVar5 = CharacterFunctions::
                    compareIgnoreCase<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                              (*(byte **)(pSVar19 + uVar18 * 8),(byte *)"Liberation Mono");
            pSVar23 = local_38;
            if (uVar5 == 0) {
              if ((uVar18 & 0x80000000) == 0) {
                ppuVar10 = &PTR_s_Liberation_Mono_00712518;
                goto LAB_002f9587;
              }
              break;
            }
            uVar18 = uVar18 + 1;
          } while (uVar20 != uVar18);
          if (0 < (int)uVar6) {
            uVar18 = 0;
            do {
              uVar5 = CharacterFunctions::
                      compareIgnoreCase<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                                (*(byte **)(pSVar23 + uVar18 * 8),(byte *)"Courier");
              pSVar19 = local_38;
              if (uVar5 == 0) {
                if ((uVar18 & 0x80000000) == 0) {
                  ppuVar10 = &PTR_s_Courier_00712520;
                  goto LAB_002f9587;
                }
                break;
              }
              uVar18 = uVar18 + 1;
            } while (uVar20 != uVar18);
            if (0 < (int)uVar6) {
              uVar18 = 0;
              do {
                uVar5 = CharacterFunctions::
                        compareIgnoreCase<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                                  (*(byte **)(pSVar19 + uVar18 * 8),(byte *)"DejaVu Mono");
                pSVar23 = local_38;
                if (uVar5 == 0) {
                  if ((uVar18 & 0x80000000) == 0) {
                    ppuVar10 = &PTR_s_DejaVu_Mono_00712528;
                    goto LAB_002f9587;
                  }
                  break;
                }
                uVar18 = uVar18 + 1;
              } while (uVar20 != uVar18);
              if (0 < (int)uVar6) {
                uVar18 = 0;
LAB_002f91c1:
                uVar5 = CharacterFunctions::
                        compareIgnoreCase<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                                  (*(byte **)(pSVar23 + uVar18 * 8),(byte *)0x5e521e);
                if (uVar5 != 0) goto code_r0x002f91d5;
                if ((uVar18 & 0x80000000) == 0) {
                  ppuVar10 = &PTR_s_Mono_005e5213_0xb_00712530;
LAB_002f9587:
                  pbVar14 = *ppuVar10;
                  pbVar9 = &DAT_0061ac58;
                  if ((pbVar14 != (byte *)0x0) && (bVar2 = *pbVar14, bVar2 != 0)) {
                    lVar17 = 0;
                    pbVar9 = pbVar14;
                    do {
                      pbVar9 = pbVar9 + 1;
                      lVar22 = lVar17 + (ulong)(bVar2 >> 7);
                      lVar17 = lVar22 + 1;
                      bVar2 = *pbVar9;
                    } while (bVar2 != 0);
                    uVar20 = lVar22 + 5U & 0xfffffffffffffffc;
                    /* try { // try from 002f95d4 to 002f95d8 has its CatchHandler @ 002f96e9 */
                    puVar11 = operator_new__(uVar20 + 0x17);
                    LOCK();
                    *puVar11 = 0;
                    UNLOCK();
                    *(ulong *)(puVar11 + 2) = uVar20;
                    pbVar9 = (byte *)(puVar11 + 4);
                    bVar2 = *pbVar14;
                    pbVar13 = pbVar9;
                    if (bVar2 != 0) {
                      do {
                        pbVar14 = pbVar14 + 1;
                        if ((char)bVar2 < '\0') {
                          *pbVar13 = bVar2 >> 6 | 0xc0;
                          pbVar13[1] = bVar2 & 0x3f | 0x80;
                          pbVar13 = pbVar13 + 1;
                        }
                        else {
                          *pbVar13 = bVar2;
                        }
                        pbVar13 = pbVar13 + 1;
                        bVar2 = *pbVar14;
                      } while (bVar2 != 0);
                    }
                    *pbVar13 = 0;
                  }
                  goto LAB_002f9632;
                }
                goto LAB_002f91e4;
              }
            }
          }
        }
      }
    }
  }
  pSVar23 = local_38;
LAB_002f91e4:
  if (uVar20 != 0) {
    lVar17 = (long)(int)uVar6;
    pSVar19 = pSVar23;
LAB_002f9200:
    iVar15 = 0;
    pcVar12 = "DejaVu Sans Mono";
    do {
      cVar1 = *pcVar12;
      if (cVar1 < '\0') {
        do {
          pbVar14 = (byte *)(pcVar12 + 1);
          pcVar12 = pcVar12 + 1;
        } while ((*pbVar14 & 0xc0) == 0x80);
      }
      else {
        pcVar12 = pcVar12 + 1;
        if (cVar1 == '\0') goto LAB_002f9250;
      }
      iVar15 = iVar15 + 1;
    } while( true );
  }
  goto LAB_002f9541;
code_r0x002f91d5:
  uVar18 = uVar18 + 1;
  if (uVar20 == uVar18) goto LAB_002f91e4;
  goto LAB_002f91c1;
LAB_002f9250:
  uVar6 = CharacterFunctions::compareIgnoreCaseUpTo<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                    (*(byte **)pSVar19,(byte *)"DejaVu Sans Mono",iVar15);
  if (uVar6 == 0) goto LAB_002f954d;
  pSVar19 = pSVar19 + 8;
  if (pSVar19 == pSVar23 + lVar17 * 8) goto code_r0x002f926c;
  goto LAB_002f9200;
code_r0x002f926c:
  pSVar19 = pSVar23;
LAB_002f9280:
  iVar15 = 0;
  pcVar12 = "Bitstream Vera Sans Mono";
  do {
    cVar1 = *pcVar12;
    if (cVar1 < '\0') {
      do {
        pbVar14 = (byte *)(pcVar12 + 1);
        pcVar12 = pcVar12 + 1;
      } while ((*pbVar14 & 0xc0) == 0x80);
    }
    else {
      pcVar12 = pcVar12 + 1;
      if (cVar1 == '\0') break;
    }
    iVar15 = iVar15 + 1;
  } while( true );
  uVar6 = CharacterFunctions::compareIgnoreCaseUpTo<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                    (*(byte **)pSVar19,(byte *)"Bitstream Vera Sans Mono",iVar15);
  if (uVar6 == 0) goto LAB_002f954d;
  pSVar19 = pSVar19 + 8;
  if (pSVar19 == pSVar23 + lVar17 * 8) goto code_r0x002f92ec;
  goto LAB_002f9280;
LAB_002f954d:
  DAT_0071cbe0 = *(byte **)pSVar19;
  goto LAB_002f9550;
LAB_002f9699:
  DAT_0071cbe0 = *(byte **)pSVar19;
LAB_002f9550:
  pbVar14 = DAT_0071cbe0 + -0x10;
  if (pbVar14 != (byte *)&emptyString) {
    LOCK();
    *(int *)pbVar14 = *(int *)pbVar14 + 1;
    UNLOCK();
  }
  goto LAB_002f9639;
code_r0x002f92ec:
  lVar22 = lVar17 * 8;
  pSVar19 = pSVar23;
  do {
    uVar8 = juce::String::startsWithIgnoreCase(pSVar19,(byte *)0x5e5209);
    if ((char)uVar8 != '\0') goto LAB_002f954d;
    pSVar19 = pSVar19 + 8;
    lVar22 = lVar22 + -8;
  } while (lVar22 != 0);
  lVar22 = lVar17 * 8;
  pSVar19 = pSVar23;
  do {
    uVar8 = juce::String::startsWithIgnoreCase(pSVar19,(byte *)"Liberation Mono");
    if ((char)uVar8 != '\0') goto LAB_002f954d;
    pSVar19 = pSVar19 + 8;
    lVar22 = lVar22 + -8;
  } while (lVar22 != 0);
  lVar22 = lVar17 * 8;
  pSVar19 = pSVar23;
  do {
    uVar8 = juce::String::startsWithIgnoreCase(pSVar19,(byte *)"Courier");
    if ((char)uVar8 != '\0') goto LAB_002f954d;
    pSVar19 = pSVar19 + 8;
    lVar22 = lVar22 + -8;
  } while (lVar22 != 0);
  lVar22 = lVar17 * 8;
  pSVar19 = pSVar23;
  do {
    uVar8 = juce::String::startsWithIgnoreCase(pSVar19,(byte *)"DejaVu Mono");
    if ((char)uVar8 != '\0') goto LAB_002f954d;
    pSVar19 = pSVar19 + 8;
    lVar22 = lVar22 + -8;
  } while (lVar22 != 0);
  lVar22 = lVar17 * 8;
  pSVar19 = pSVar23;
  do {
    uVar8 = juce::String::startsWithIgnoreCase(pSVar19,(byte *)0x5e521e);
    if ((char)uVar8 != '\0') goto LAB_002f954d;
    pSVar19 = pSVar19 + 8;
    lVar22 = lVar22 + -8;
  } while (lVar22 != 0);
  lVar22 = lVar17 * 8;
  pSVar19 = pSVar23;
  do {
    uVar8 = juce::String::containsIgnoreCase(pSVar19,(byte *)"DejaVu Sans Mono");
    if ((char)uVar8 != '\0') goto LAB_002f9699;
    pSVar19 = pSVar19 + 8;
    lVar22 = lVar22 + -8;
  } while (lVar22 != 0);
  lVar22 = lVar17 * 8;
  pSVar19 = pSVar23;
  do {
    uVar8 = juce::String::containsIgnoreCase(pSVar19,(byte *)"Bitstream Vera Sans Mono");
    if ((char)uVar8 != '\0') goto LAB_002f9699;
    pSVar19 = pSVar19 + 8;
    lVar22 = lVar22 + -8;
  } while (lVar22 != 0);
  lVar22 = lVar17 * 8;
  pSVar19 = pSVar23;
  do {
    uVar8 = juce::String::containsIgnoreCase(pSVar19,(byte *)0x5e5209);
    if ((char)uVar8 != '\0') goto LAB_002f9699;
    pSVar19 = pSVar19 + 8;
    lVar22 = lVar22 + -8;
  } while (lVar22 != 0);
  lVar22 = lVar17 * 8;
  pSVar19 = pSVar23;
  do {
    uVar8 = juce::String::containsIgnoreCase(pSVar19,(byte *)"Liberation Mono");
    if ((char)uVar8 != '\0') goto LAB_002f9699;
    pSVar19 = pSVar19 + 8;
    lVar22 = lVar22 + -8;
  } while (lVar22 != 0);
  lVar22 = lVar17 * 8;
  pSVar19 = pSVar23;
  do {
    uVar8 = juce::String::containsIgnoreCase(pSVar19,(byte *)"Courier");
    if ((char)uVar8 != '\0') goto LAB_002f9699;
    pSVar19 = pSVar19 + 8;
    lVar22 = lVar22 + -8;
  } while (lVar22 != 0);
  lVar22 = lVar17 * 8;
  pSVar19 = pSVar23;
  do {
    uVar8 = juce::String::containsIgnoreCase(pSVar19,(byte *)"DejaVu Mono");
    if ((char)uVar8 != '\0') goto LAB_002f9699;
    pSVar19 = pSVar19 + 8;
    lVar22 = lVar22 + -8;
  } while (lVar22 != 0);
  lVar22 = lVar17 * 8;
  pSVar19 = pSVar23;
  do {
    uVar8 = juce::String::containsIgnoreCase(pSVar19,(byte *)0x5e521e);
    if ((char)uVar8 != '\0') goto LAB_002f9699;
    pSVar19 = pSVar19 + 8;
    lVar22 = lVar22 + -8;
  } while (lVar22 != 0);
  lVar22 = 0;
  do {
    DAT_0071cbe0 = *(byte **)(pSVar23 + lVar22);
    if (*DAT_0071cbe0 != 0) {
      pbVar14 = DAT_0071cbe0 + -0x10;
      if (pbVar14 != (byte *)&emptyString) {
        LOCK();
        *(int *)pbVar14 = *(int *)pbVar14 + 1;
        UNLOCK();
      }
      goto LAB_002f9639;
    }
    lVar22 = lVar22 + 8;
  } while (lVar17 * 8 != lVar22);
LAB_002f9541:
  pbVar9 = &DAT_0061ac58;
LAB_002f9632:
  DAT_0071cbe0 = pbVar9;
LAB_002f9639:
  if (0 < (int)uStack_30._4_4_) {
    lVar17 = 0;
    do {
      piVar21 = (int *)(*(long *)(local_38 + lVar17 * 8) + -0x10);
      if (piVar21 != &emptyString) {
        LOCK();
        iVar15 = *piVar21;
        *piVar21 = *piVar21 + -1;
        UNLOCK();
        if (iVar15 == 0) {
          operator_delete__(piVar21);
        }
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 < (int)uStack_30._4_4_);
  }
  free(local_38);
  return;
}


