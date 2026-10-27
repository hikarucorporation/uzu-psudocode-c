// Function : next
// Namespace: juce:DirectoryIterator
// Entry    : 00497a90
// Prototype: ulong next(DirectoryIterator * this, byte * param_1, char * param_2, __off_t * param_3, long * param_4, long * param_5, long param_6)
// Body     : 00497a90 - 004984ad


/* WARNING: Removing unreachable block (ram,0x00498107) */
/* WARNING: Removing unreachable block (ram,0x00498133) */
/* juce::DirectoryIterator::next(bool*, bool*, long long*, juce::Time*, juce::Time*, bool*) */

ulong __thiscall
juce::DirectoryIterator::next
          (DirectoryIterator *this,byte *param_1,char *param_2,__off_t *param_3,long *param_4,
          long *param_5,long param_6)

{
  char *__name;
  char *pcVar1;
  uint uVar2;
  char cVar3;
  default_delete<juce::DirectoryIterator> *pdVar4;
  bool bVar5;
  DirectoryIterator *pDVar6;
  __dev_t _Var7;
  int iVar8;
  byte *pbVar9;
  dirent *pdVar10;
  char *pcVar11;
  undefined4 *puVar12;
  File *pFVar13;
  String *pSVar14;
  __off_t _Var15;
  int *piVar16;
  DirectoryIterator *this_00;
  undefined8 uVar17;
  byte *extraout_RAX;
  byte *extraout_RAX_00;
  uint uVar18;
  char *pcVar19;
  long lVar20;
  byte *pbVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  uint uVar25;
  DIR *__dirp;
  byte *pbVar26;
  uint *puVar27;
  long lVar28;
  ulong uVar29;
  byte bVar30;
  bool bVar31;
  bool bVar32;
  bool bVar33;
  char local_12a;
  byte local_129;
  File *local_128;
  DirectoryIterator *local_120;
  byte *local_118;
  char *local_110;
  uint local_104;
  char *local_100;
  long *local_f8;
  long *local_f0;
  __off_t *local_e8;
  long local_e0;
  uint local_d4;
  byte *local_d0;
  DirectoryIterator *local_c8;
  stat64 local_c0;
  
  local_c8 = this + 0x18;
  local_120 = this;
  local_100 = param_2;
  local_f8 = param_4;
  local_f0 = param_5;
  local_e8 = param_3;
  local_d0 = param_1;
  do {
    local_120[0x35] = (DirectoryIterator)0x1;
    if (*(DirectoryIterator **)(local_120 + 0x38) != (DirectoryIterator *)0x0) {
      pbVar9 = (byte *)next(*(DirectoryIterator **)(local_120 + 0x38),local_d0,param_2,local_e8,
                            local_f8,local_f0,param_6);
      if ((char)pbVar9 != '\0') {
        local_129 = 1;
        break;
      }
      pdVar4 = *(default_delete<juce::DirectoryIterator> **)(local_120 + 0x38);
      *(long *)(local_120 + 0x38) = 0;
      if (pdVar4 != (default_delete<juce::DirectoryIterator> *)0x0) {
        std::default_delete<juce::DirectoryIterator>::operator()(pdVar4);
      }
    }
    local_118 = &DAT_0061ac58;
    local_12a = '\0';
    local_104 = 0;
LAB_00497b5e:
    do {
      bVar31 = param_2 == (char *)0x0;
      bVar32 = ((byte)local_120[0x30] & 4) == 0;
      local_110 = &local_12a;
      if (bVar32 && bVar31) {
        local_110 = (char *)0x0;
      }
      plVar22 = *(long **)(local_120 + 0x10);
      __dirp = (DIR *)plVar22[2];
      if (__dirp == (DIR *)0x0) {
LAB_00498450:
        param_2 = local_100;
        goto LAB_00498455;
      }
      pcVar11 = (char *)0x0;
      while( true ) {
                    /* try { // try from 00497ba0 to 00497bcd has its CatchHandler @ 00498510 */
        pdVar10 = readdir(__dirp);
        if (pdVar10 == (dirent *)0x0) goto LAB_00498450;
        if (pcVar11 == (char *)0x0) {
          pcVar11 = (char *)plVar22[1];
        }
        __name = pdVar10->d_name;
        iVar8 = fnmatch(pcVar11,__name,0x10);
        if (iVar8 == 0) break;
        __dirp = (DIR *)plVar22[2];
      }
      bVar30 = *__name;
      pbVar9 = &DAT_0061ac58;
      if (bVar30 != 0) {
        lVar28 = 0;
        pcVar11 = __name;
        while( true ) {
          uVar18 = (uint)bVar30;
          pcVar1 = pcVar11 + 1;
          if ((char)bVar30 < '\0') {
            if ((bVar30 & 0x40) == 0) {
              uVar18 = bVar30 & 0x7f;
            }
            else {
              if ((bVar30 & 0x20) == 0) {
                uVar18 = 0x3f;
                lVar20 = 0;
                bVar33 = false;
                bVar5 = false;
              }
              else {
                bVar33 = true;
                if ((bVar30 & 0x10) == 0) {
                  uVar18 = 0x1f;
                  lVar20 = 1;
                  bVar5 = false;
                }
                else {
                  uVar18 = 0xf;
                  lVar20 = 2;
                  bVar5 = true;
                }
              }
              uVar18 = bVar30 & uVar18;
              if ((pcVar11[1] & 0xc0U) == 0x80) {
                pcVar19 = pcVar11 + lVar20 + 2;
                uVar18 = (byte)pcVar11[1] & 0x3f | uVar18 << 6;
                pcVar1 = pcVar19;
                if (bVar33) {
                  uVar25 = (uint)(byte)pcVar11[2];
                  pcVar1 = pcVar11 + 2;
                  if ((uVar25 & 0xffffffc0) == 0x80) {
                    uVar18 = uVar25 & 0x3f | uVar18 << 6;
                    pcVar1 = pcVar19;
                    if (bVar5) {
                      uVar25 = (uint)(byte)pcVar11[3];
                      pcVar1 = pcVar11 + 3;
                      if ((uVar25 & 0xffffffc0) == 0x80) {
                        uVar18 = uVar18 << 6 | uVar25 & 0x3f;
                        pcVar1 = pcVar19;
                      }
                    }
                  }
                }
              }
            }
          }
          pcVar11 = pcVar1;
          if (uVar18 == 0) break;
          lVar20 = 1;
          if ((0x7f < uVar18) && (lVar20 = 2, 0x7ff < uVar18)) {
            lVar20 = 4 - (ulong)(uVar18 < 0x10000);
          }
          lVar28 = lVar28 + lVar20;
          bVar30 = *pcVar11;
        }
        uVar29 = lVar28 + 4U & 0xfffffffffffffffc;
                    /* try { // try from 00497d2d to 00497d31 has its CatchHandler @ 004984df */
        puVar12 = operator_new__(uVar29 + 0x17);
        LOCK();
        *puVar12 = 0;
        UNLOCK();
        *(ulong *)(puVar12 + 2) = uVar29;
        pbVar9 = (byte *)(puVar12 + 4);
        cVar3 = *__name;
        *(char *)(puVar12 + 4) = cVar3;
        if (cVar3 != '\0') {
          lVar28 = 0;
          do {
            cVar3 = pdVar10->d_name[lVar28 + 1];
            *(char *)((long)puVar12 + lVar28 + 0x11) = cVar3;
            lVar28 = lVar28 + 1;
          } while (cVar3 != '\0');
        }
      }
      pbVar26 = local_118 + -0x10;
      local_118 = pbVar9;
      if (pbVar26 != (byte *)&emptyString) {
        LOCK();
        iVar8 = *(int *)pbVar26;
        *(int *)pbVar26 = *(int *)pbVar26 + -1;
        UNLOCK();
        if (iVar8 == 0) {
          operator_delete__(pbVar26);
        }
      }
      local_128 = (File *)*plVar22;
      pFVar13 = local_128 + -0x10;
      if (pFVar13 != (File *)&emptyString) {
        LOCK();
        *(int *)pFVar13 = *(int *)pFVar13 + 1;
        UNLOCK();
      }
                    /* try { // try from 00497db6 to 00497dc4 has its CatchHandler @ 004984e4 */
      pSVar14 = juce::String::operator+=((String *)&local_128,(String *)&local_118);
      pcVar11 = *(char **)pSVar14;
      piVar16 = (int *)(pcVar11 + -0x10);
      if (piVar16 != &emptyString) {
        LOCK();
        *piVar16 = *piVar16 + 1;
        UNLOCK();
      }
      if (*pcVar11 == '\0') {
        bVar33 = false;
      }
      else {
        iVar8 = stat64(pcVar11,&local_c0);
        bVar33 = iVar8 == 0;
      }
      local_d4 = local_c0.st_mode;
      if (local_e8 != (__off_t *)0x0) {
        if (bVar33 == false) {
          _Var15 = 0;
        }
        else {
          _Var15 = local_c0.st_size;
        }
        *local_e8 = _Var15;
      }
      if (local_f8 != (long *)0x0) {
        lVar28 = local_c0.st_mtim.tv_sec * 1000;
        if (bVar33 == false) {
          lVar28 = 0;
        }
        *local_f8 = lVar28;
      }
      if (local_f0 != (long *)0x0) {
        lVar28 = local_c0.st_ctim.tv_sec * 1000;
        if (bVar33 == false) {
          lVar28 = 0;
        }
        *local_f0 = lVar28;
      }
      if (param_6 != 0) {
        iVar8 = access(pcVar11,2);
        *(bool *)param_6 = iVar8 != 0;
      }
      if (piVar16 != &emptyString) {
        LOCK();
        iVar8 = *piVar16;
        *piVar16 = *piVar16 + -1;
        UNLOCK();
        if (iVar8 == 0) {
          operator_delete__(piVar16);
        }
      }
      pFVar13 = local_128 + -0x10;
      if (pFVar13 == (File *)&emptyString) {
LAB_00497ebe:
        if (!bVar32 || !bVar31) {
LAB_00497edc:
          bVar30 = *local_118;
          uVar18 = (uint)bVar30;
          if ((char)bVar30 < '\0') {
            uVar18 = (uint)bVar30;
            if ((bVar30 & 0x40) == 0) {
              uVar18 = uVar18 & 0x7f;
            }
            else {
              uVar25 = uVar18 & 0x10 ^ 0x1f;
              if ((bVar30 & 0x20) == 0) {
                uVar25 = 0x3f;
              }
              uVar18 = uVar25 & uVar18;
              if (((((local_118[1] & 0xffffffc0) == 0x80) &&
                   (uVar18 = local_118[1] & 0x3f | uVar18 << 6, (bVar30 & 0x20) != 0)) &&
                  ((local_118[2] & 0xffffffc0) == 0x80)) &&
                 ((uVar18 = local_118[2] & 0x3f | uVar18 << 6,
                  (bVar30 >> 5 & (bVar30 & 0x10) == 0) == 0 && ((local_118[3] & 0xffffffc0) == 0x80)
                  ))) {
                uVar18 = uVar18 << 6 | local_118[3] & 0x3f;
              }
            }
          }
          *local_110 = uVar18 == 0x2e;
        }
      }
      else {
        LOCK();
        iVar8 = *(int *)pFVar13;
        *(int *)pFVar13 = *(int *)pFVar13 + -1;
        UNLOCK();
        if (iVar8 != 0) goto LAB_00497ebe;
        operator_delete__(pFVar13);
        if (!bVar32 || !bVar31) goto LAB_00497edc;
      }
      pDVar6 = local_120;
      *(int *)(local_120 + 0x28) = *(int *)(local_120 + 0x28) + 1;
      pbVar9 = local_118;
      do {
        while( true ) {
          bVar30 = *pbVar9;
          uVar18 = (uint)bVar30;
          param_2 = local_100;
          if (bVar30 == 0) goto LAB_00497b5e;
          pbVar26 = pbVar9 + 1;
          if ((char)bVar30 < '\0') break;
LAB_00498083:
          pbVar9 = pbVar26;
          if (uVar18 != 0x2e) goto LAB_0049809a;
        }
        if ((bVar30 & 0x40) == 0) {
          uVar18 = bVar30 & 0x7f;
          goto LAB_00498083;
        }
        if ((bVar30 & 0x20) == 0) {
          uVar18 = 0x3f;
          lVar28 = 0;
          bVar31 = false;
          bVar32 = false;
        }
        else {
          bVar31 = true;
          if ((bVar30 & 0x10) == 0) {
            uVar18 = 0x1f;
            lVar28 = 1;
            bVar32 = false;
          }
          else {
            uVar18 = 0xf;
            lVar28 = 2;
            bVar32 = true;
          }
        }
        uVar18 = bVar30 & uVar18;
        if ((pbVar9[1] & 0xc0) != 0x80) goto LAB_00498083;
        pbVar21 = pbVar9 + lVar28 + 2;
        uVar18 = pbVar9[1] & 0x3f | uVar18 << 6;
        pbVar26 = pbVar21;
        if (!bVar31) goto LAB_00498083;
        bVar30 = pbVar9[2];
        if ((bVar30 & 0xc0) == 0x80) {
          uVar18 = bVar30 & 0x3f | uVar18 << 6;
          if (bVar32) {
            pbVar26 = pbVar9 + 3;
            if ((*pbVar26 & 0xffffffc0) == 0x80) {
              uVar18 = uVar18 << 6 | *pbVar26 & 0x3f;
              pbVar26 = pbVar21;
            }
          }
          goto LAB_00498083;
        }
        pbVar9 = pbVar9 + 2;
      } while (uVar18 == 0x2e);
LAB_0049809a:
      local_e0 = *(long *)(local_120 + 0x20);
      piVar16 = (int *)(local_e0 + -0x10);
      if (piVar16 != &emptyString) {
        LOCK();
        *piVar16 = *piVar16 + 1;
        UNLOCK();
      }
                    /* try { // try from 004980b5 to 004980c3 has its CatchHandler @ 004984d5 */
      pSVar14 = juce::String::operator+=((String *)&local_e0,(String *)&local_118);
      local_128 = *(File **)pSVar14;
      pFVar13 = local_128 + -0x10;
      if (pFVar13 != (File *)&emptyString) {
        LOCK();
        *(int *)pFVar13 = *(int *)pFVar13 + 1;
        UNLOCK();
        LOCK();
        *(int *)pFVar13 = *(int *)pFVar13 + 1;
        UNLOCK();
      }
      LOCK();
      UNLOCK();
      uVar18 = local_d4 >> 0xe;
      if (pFVar13 != (File *)&emptyString) {
        LOCK();
        iVar8 = *(int *)pFVar13;
        *(int *)pFVar13 = *(int *)pFVar13 + -1;
        UNLOCK();
        if (iVar8 == 0) {
          operator_delete__(pFVar13);
        }
      }
      bVar30 = bVar33 & (byte)uVar18 & 1;
      piVar16 = (int *)(local_e0 + -0x10);
      if (piVar16 == &emptyString) {
LAB_00498162:
        if (bVar30 != 0) goto LAB_0049816b;
LAB_004982ca:
        uVar18 = *(uint *)(pDVar6 + 0x30);
        if (((byte)uVar18 >> 1 & 1) != 0) goto LAB_004982db;
LAB_004983bd:
        local_104 = local_104 & 0xff;
        if (*(long *)(local_120 + 0x38) != 0) {
          local_104 = 1;
        }
        uVar18 = (uint)(*(long *)(local_120 + 0x38) != 0) * 5;
        pFVar13 = local_128 + -0x10;
        param_2 = local_100;
        pbVar9 = (byte *)0x0;
        uVar25 = uVar18;
        if (pFVar13 != (File *)&emptyString) {
LAB_004983fc:
          LOCK();
          uVar2 = *(uint *)pFVar13;
          *(uint *)pFVar13 = *(uint *)pFVar13 - 1;
          UNLOCK();
          pbVar9 = (byte *)(ulong)uVar2;
          uVar25 = uVar18;
          if (uVar2 == 0) {
            operator_delete__(pFVar13);
            pbVar9 = extraout_RAX;
          }
        }
      }
      else {
        LOCK();
        iVar8 = *piVar16;
        *piVar16 = *piVar16 + -1;
        UNLOCK();
        if (iVar8 != 0) goto LAB_00498162;
        operator_delete__(piVar16);
        if (bVar30 == 0) goto LAB_004982ca;
LAB_0049816b:
        if ((pDVar6[0x34] != (DirectoryIterator)0x0) &&
           ((((byte)pDVar6[0x30] & 4) == 0 || (local_12a == '\0')))) {
                    /* try { // try from 00498198 to 0049826f has its CatchHandler @ 004984bb */
          if ((*(int *)(pDVar6 + 0x48) != 2) && (bVar31 = File::isSymbolicLink(local_128), bVar31))
          {
            if (*(int *)(pDVar6 + 0x48) != 1) goto LAB_004982ac;
            lVar28 = *(long *)(pDVar6 + 0x50);
            File::getLinkedTarget((File *)&local_c0,(long *)&local_128);
            _Var7 = local_c0.st_dev;
            lVar20 = *(long *)(lVar28 + 0x10);
            lVar28 = lVar28 + 8;
            if (lVar20 == 0) {
LAB_00498230:
              lVar24 = lVar28;
            }
            else {
              lVar23 = lVar28;
              do {
                while( true ) {
                  lVar24 = lVar20;
                  if ((*(byte **)(lVar24 + 0x20) != (byte *)_Var7) &&
                     (uVar18 = CharacterFunctions::
                               compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                                         (*(byte **)(lVar24 + 0x20),(byte *)_Var7), (int)uVar18 < 0)
                     ) break;
                  lVar20 = *(long *)(lVar24 + 0x10);
                  lVar23 = lVar24;
                  if (*(long *)(lVar24 + 0x10) == 0) goto LAB_00498216;
                }
                plVar22 = (long *)(lVar24 + 0x18);
                lVar20 = *plVar22;
                lVar24 = lVar23;
              } while (*plVar22 != 0);
LAB_00498216:
              if (lVar24 == lVar28) goto LAB_00498230;
              if ((byte *)_Var7 != *(byte **)(lVar24 + 0x20)) {
                uVar18 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                                   ((byte *)_Var7,*(byte **)(lVar24 + 0x20));
                if ((int)uVar18 < 0) goto LAB_00498230;
              }
            }
            lVar28 = *(long *)(pDVar6 + 0x50);
            pbVar9 = (byte *)(_Var7 + -0x10);
            if (pbVar9 != (byte *)&emptyString) {
              LOCK();
              iVar8 = *(int *)pbVar9;
              *(int *)pbVar9 = *(int *)pbVar9 + -1;
              UNLOCK();
              if (iVar8 == 0) {
                operator_delete__(pbVar9);
              }
            }
            if (lVar24 != lVar28 + 8) goto LAB_004982ac;
          }
          this_00 = operator_new(0x60);
                    /* try { // try from 0049827f to 00498299 has its CatchHandler @ 004984ae */
          DirectoryIterator(this_00,(long *)&local_128,(DirectoryIterator)0x1,(long *)local_c8,
                            *(undefined4 *)(pDVar6 + 0x30),*(int *)(pDVar6 + 0x48),
                            *(undefined8 **)(pDVar6 + 0x50));
          pdVar4 = *(default_delete<juce::DirectoryIterator> **)(pDVar6 + 0x38);
          *(DirectoryIterator **)(pDVar6 + 0x38) = this_00;
          if (pdVar4 != (default_delete<juce::DirectoryIterator> *)0x0) {
            std::default_delete<juce::DirectoryIterator>::operator()(pdVar4);
          }
        }
LAB_004982ac:
        uVar18 = *(uint *)(pDVar6 + 0x30);
        if ((uVar18 & 1) == 0) goto LAB_004983bd;
LAB_004982db:
        pbVar9 = local_118;
        iVar8 = *(int *)(local_120 + 0xc);
        if ((local_120[0x34] != (DirectoryIterator)0x0) || (1 < iVar8)) {
          if (iVar8 != 0) {
            lVar28 = *(long *)local_120;
            lVar20 = 0;
            do {
              uVar17 = WildCardMatcher<juce::CharPointer_UTF8>::matches
                                 (*(byte **)(lVar28 + lVar20),pbVar9);
              if ((char)uVar17 != '\0') goto LAB_004982f6;
              lVar20 = lVar20 + 8;
            } while ((long)iVar8 * 8 != lVar20);
          }
          goto LAB_004983bd;
        }
LAB_004982f6:
        param_2 = local_100;
        if (((uVar18 & 4) != 0) && (local_12a == '\x01')) goto LAB_004983bd;
        pFVar13 = local_128 + -0x10;
        if (pFVar13 != (File *)&emptyString) {
          LOCK();
          *(int *)pFVar13 = *(int *)pFVar13 + 1;
          UNLOCK();
        }
        LOCK();
        lVar28 = *(long *)(local_120 + 0x40);
        *(File **)(local_120 + 0x40) = local_128;
        UNLOCK();
        piVar16 = (int *)(lVar28 + -0x10);
        if (piVar16 != &emptyString) {
          LOCK();
          iVar8 = *piVar16;
          *piVar16 = *piVar16 + -1;
          UNLOCK();
          if (iVar8 == 0) {
            operator_delete__(piVar16);
          }
        }
        if (param_2 != (char *)0x0) {
          *param_2 = local_12a;
        }
        uVar18 = 1;
        uVar25 = 1;
        local_129 = 1;
        if (local_d0 != (byte *)0x0) {
          *local_d0 = bVar30;
        }
        pFVar13 = local_128 + -0x10;
        pbVar9 = local_d0;
        if (pFVar13 != (File *)&emptyString) goto LAB_004983fc;
      }
    } while (uVar25 == 0);
    if (uVar25 == 5) {
LAB_00498455:
      local_129 = local_129 & (byte)((ulong)local_104 & 0xffffffffffffff01);
      pbVar9 = (byte *)((ulong)local_104 & 0xffffffffffffff01 ^ 1);
      uVar25 = (uint)pbVar9 & 0xff;
      puVar27 = (uint *)(local_118 + -0x10);
      if (puVar27 != &emptyString) goto LAB_00498476;
    }
    else {
      puVar27 = (uint *)(local_118 + -0x10);
      if (puVar27 != &emptyString) {
LAB_00498476:
        LOCK();
        uVar18 = *puVar27;
        pbVar9 = (byte *)(ulong)uVar18;
        *puVar27 = *puVar27 - 1;
        UNLOCK();
        if (uVar18 == 0) {
          operator_delete__(puVar27);
          pbVar9 = extraout_RAX_00;
        }
      }
    }
  } while (uVar25 == 0);
  return CONCAT71((int7)((ulong)pbVar9 >> 8),local_129) & 0xffffffffffffff01;
}


