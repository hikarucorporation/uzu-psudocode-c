// Function : readNextElement
// Namespace: juce:XmlDocument
// Entry    : 0048d8c0
// Prototype: undefined8 * readNextElement(XmlDocument * param_1)
// Body     : 0048d8c0 - 0048e93f


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::XmlDocument::readNextElement(bool) */

undefined8 * __cdecl juce::XmlDocument::readNextElement(XmlDocument *param_1)

{
  XmlDocument *pXVar1;
  byte bVar2;
  XmlDocument XVar3;
  char *__src;
  undefined8 uVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  int *piVar12;
  undefined4 *puVar13;
  uint uVar14;
  long lVar15;
  byte *pbVar16;
  size_t __n;
  uint uVar17;
  uint uVar18;
  int *piVar19;
  uint uVar20;
  String *this;
  ulong uVar21;
  undefined4 *local_78;
  undefined8 *local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  undefined4 *local_48;
  StringPool *local_40;
  undefined8 *local_38;
  
  skipNextWhiteSpace(param_1);
  if (param_1[0x10] == (XmlDocument)0x0) {
    pbVar10 = *(byte **)(param_1 + 8);
    bVar5 = *pbVar10;
    uVar14 = (uint)bVar5;
    if ((char)bVar5 < '\0') {
      uVar14 = (uint)bVar5;
      if ((bVar5 & 0x40) == 0) {
        uVar14 = uVar14 & 0x7f;
      }
      else {
        uVar6 = 0x3f;
        if ((bVar5 & 0x20) != 0) {
          uVar6 = uVar14 & 0x10 ^ 0x1f;
        }
        uVar14 = uVar6 & uVar14;
        if (((((pbVar10[1] & 0xffffffc0) == 0x80) &&
             (uVar14 = pbVar10[1] & 0x3f | uVar14 << 6, (bVar5 & 0x20) != 0)) &&
            ((pbVar10[2] & 0xc0) == 0x80)) &&
           ((uVar14 = pbVar10[2] & 0x3f | uVar14 << 6, (bVar5 >> 5 & (bVar5 & 0x10) == 0) == 0 &&
            ((pbVar10[3] & 0xffffffc0) == 0x80)))) {
          uVar14 = uVar14 << 6 | pbVar10[3] & 0x3f;
        }
      }
    }
    if (uVar14 == 0x3c) {
      pbVar8 = pbVar10 + 1;
      *(byte **)(param_1 + 8) = pbVar8;
      bVar5 = *pbVar10;
      if (((char)bVar5 < '\0') && ((bVar5 & 0x40) != 0)) {
        lVar15 = 2;
        if ((bVar5 & 0x20) != 0) {
          lVar15 = 4 - (ulong)((bVar5 & 0x10) == 0);
        }
        pbVar8 = pbVar10 + lVar15;
        *(byte **)(param_1 + 8) = pbVar8;
      }
      pbVar8 = XmlIdentifierChars::findEndOfToken(pbVar8);
      pbVar10 = *(byte **)(param_1 + 8);
      if (pbVar8 == pbVar10) {
        skipNextWhiteSpace(param_1);
        pbVar8 = XmlIdentifierChars::findEndOfToken(*(byte **)(param_1 + 8));
        pbVar10 = *(byte **)(param_1 + 8);
        if (pbVar8 == pbVar10) {
          piVar12 = operator_new__(0x2b);
          LOCK();
          *piVar12 = 0;
          UNLOCK();
          piVar12[2] = 0x14;
          uVar4 = s_malformed_headernot_enough_input_005de290._56_8_;
          piVar12[3] = 0;
          *(undefined8 *)(piVar12 + 4) = s_malformed_headernot_enough_input_005de290._48_8_;
          *(undefined8 *)(piVar12 + 6) = uVar4;
          *(undefined1 *)(piVar12 + 8) = 0;
          LOCK();
          *piVar12 = *piVar12 + 1;
          UNLOCK();
          LOCK();
          lVar15 = *(long *)(param_1 + 0x18);
          *(int **)(param_1 + 0x18) = piVar12 + 4;
          UNLOCK();
          piVar19 = (int *)(lVar15 + -0x10);
          if (piVar19 != &emptyString) {
            LOCK();
            iVar7 = *piVar19;
            *piVar19 = *piVar19 + -1;
            UNLOCK();
            if (iVar7 == 0) {
              operator_delete__(piVar19);
            }
          }
          param_1[0x11] = (XmlDocument)0x1;
          LOCK();
          iVar7 = *piVar12;
          *piVar12 = *piVar12 + -1;
          UNLOCK();
          if (iVar7 == 0) {
            operator_delete__(piVar12);
            return (undefined8 *)0x0;
          }
          return (undefined8 *)0x0;
        }
      }
      puVar9 = operator_new(0x20);
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
      if (StringPool::getGlobalPool()::pool == '\0') {
        iVar7 = __cxa_guard_acquire(&StringPool::getGlobalPool()::pool);
        if (iVar7 != 0) {
          StringPool::getGlobalPool()::pool = 0;
          _DAT_0071d1c8 = 0;
          pthread_mutexattr_init((pthread_mutexattr_t *)&local_78);
          pthread_mutexattr_settype((pthread_mutexattr_t *)&local_78,1);
          pthread_mutexattr_setprotocol((pthread_mutexattr_t *)&local_78,1);
          pthread_mutex_init((pthread_mutex_t *)&DAT_0071d1d0,(pthread_mutexattr_t *)&local_78);
          pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_78);
          _DAT_0071d1f8 = 0;
          __cxa_atexit(StringPool::~StringPool,&StringPool::getGlobalPool()::pool,&__dso_handle);
          __cxa_guard_release(&StringPool::getGlobalPool()::pool);
        }
      }
      local_40 = (StringPool *)(puVar9 + 3);
                    /* try { // try from 0048da33 to 0048da42 has its CatchHandler @ 0048e9ff */
      StringPool::getPooledString(local_40,(char *)pbVar10,(char *)pbVar8);
      pXVar1 = param_1 + 8;
      *(byte **)(param_1 + 8) = pbVar8;
      puVar11 = puVar9 + 2;
      local_48 = (undefined4 *)&DAT_0061ac58;
      local_70 = puVar9;
      do {
        skipNextWhiteSpace(param_1);
        puVar9 = local_70;
        pbVar10 = *(byte **)(param_1 + 8);
        bVar5 = *pbVar10;
        uVar14 = (uint)bVar5;
        if ((char)bVar5 < '\0') {
          if ((bVar5 & 0x40) == 0) {
            uVar14 = uVar14 & 0x7f;
          }
          else {
            uVar14 = uVar14 & 0x10 ^ 0x1f;
            if ((bVar5 & 0x20) == 0) {
              uVar14 = 0x3f;
            }
            uVar14 = uVar14 & bVar5;
            if (((((pbVar10[1] & 0xffffffc0) == 0x80) &&
                 (uVar14 = pbVar10[1] & 0x3f | uVar14 << 6, (bVar5 & 0x20) != 0)) &&
                ((pbVar10[2] & 0xffffffc0) == 0x80)) &&
               ((uVar14 = pbVar10[2] & 0x3f | uVar14 << 6, (bVar5 >> 5 & (bVar5 & 0x10) == 0) == 0
                && ((pbVar10[3] & 0xffffffc0) == 0x80)))) {
              uVar14 = uVar14 << 6 | pbVar10[3] & 0x3f;
            }
          }
        }
        if (uVar14 == 0x2f) {
          pbVar8 = pbVar10 + 1;
          pbVar16 = pbVar8;
          if (((char)bVar5 < '\0') && ((bVar5 & 0x40) != 0)) {
            if ((bVar5 & 0x20) == 0) {
              pbVar16 = pbVar10 + 2;
              goto LAB_0048db7e;
            }
            pbVar16 = pbVar10 + (4 - (ulong)((bVar5 & 0x10) == 0));
            bVar5 = *pbVar16;
          }
          else {
LAB_0048db7e:
            bVar5 = *pbVar16;
          }
          uVar6 = (uint)bVar5;
          if ((char)bVar5 < '\0') {
            uVar6 = (uint)bVar5;
            if ((bVar5 & 0x40) == 0) {
              uVar6 = uVar6 & 0x7f;
            }
            else {
              uVar17 = uVar6 & 0x10 ^ 0x1f;
              if ((bVar5 & 0x20) == 0) {
                uVar17 = 0x3f;
              }
              uVar6 = uVar17 & uVar6;
              if (((((pbVar16[1] & 0xffffffc0) == 0x80) &&
                   (uVar6 = pbVar16[1] & 0x3f | uVar6 << 6, (bVar5 & 0x20) != 0)) &&
                  ((pbVar16[2] & 0xffffffc0) == 0x80)) &&
                 ((uVar6 = pbVar16[2] & 0x3f | uVar6 << 6, (bVar5 >> 5 & (bVar5 & 0x10) == 0) == 0
                  && ((pbVar16[3] & 0xc0) == 0x80)))) {
                uVar6 = uVar6 << 6 | pbVar16[3] & 0x3f;
              }
            }
          }
          if (uVar6 == 0x3e) {
            *(byte **)(param_1 + 8) = pbVar8;
            bVar5 = *pbVar10;
            if (((char)bVar5 < '\0') && ((bVar5 & 0x40) != 0)) {
              lVar15 = 2;
              if ((bVar5 & 0x20) != 0) {
                lVar15 = 4 - (ulong)((bVar5 & 0x10) == 0);
              }
              pbVar8 = pbVar10 + lVar15;
              *(byte **)(param_1 + 8) = pbVar8;
            }
            *(byte **)(param_1 + 8) = pbVar8 + 1;
            bVar5 = *pbVar8;
            if (-1 < (char)bVar5) {
              return local_70;
            }
            if ((bVar5 & 0x40) == 0) {
              return local_70;
            }
            lVar15 = 2;
            if ((bVar5 & 0x20) != 0) {
              lVar15 = 4 - (ulong)((bVar5 & 0x10) == 0);
            }
            *(byte **)(param_1 + 8) = pbVar8 + lVar15;
            return local_70;
          }
LAB_0048dc49:
          uVar6 = 1 << ((byte)uVar14 & 0x1f) &
                  *(uint *)(XmlIdentifierChars::isIdentifierChar(wchar_t)::legalChars +
                           (ulong)(uVar14 >> 5) * 4);
        }
        else {
          if (uVar14 == 0x3e) {
            *(byte **)(param_1 + 8) = pbVar10 + 1;
            bVar5 = *pbVar10;
            if (((char)bVar5 < '\0') && ((bVar5 & 0x40) != 0)) {
              lVar15 = 2;
              if ((bVar5 & 0x20) != 0) {
                lVar15 = 4 - (ulong)((bVar5 & 0x10) == 0);
              }
              *(byte **)(param_1 + 8) = pbVar10 + lVar15;
            }
            readChildElements(param_1,(long)local_70);
            return puVar9;
          }
          if (uVar14 < 0xa0) goto LAB_0048dc49;
          uVar6 = iswalnum(uVar14);
        }
        puVar9 = local_70;
        if (uVar6 == 0) {
          if (param_1[0x10] != (XmlDocument)0x0) {
            return local_70;
          }
          operator+((juce *)&local_50,(byte *)"illegal character found in ",(String *)local_40);
                    /* try { // try from 0048e4f4 to 0048e509 has its CatchHandler @ 0048e998 */
          juce::String::appendCharPointer((String *)&local_50,": \'",0x5e3cd5);
          local_68 = local_50;
          piVar12 = (int *)(local_50 + -0x10);
          if (piVar12 != &emptyString) {
            LOCK();
            *piVar12 = *piVar12 + 1;
            UNLOCK();
          }
          local_78 = (undefined4 *)(ulong)uVar14;
                    /* try { // try from 0048e533 to 0048e53f has its CatchHandler @ 0048e96c */
          juce::String::appendCharPointer<juce::CharPointer_UTF32>(&local_68,(uint *)&local_78);
          local_60 = local_68;
          piVar12 = (int *)(local_68 + -0x10);
          if (piVar12 != &emptyString) {
            LOCK();
            *piVar12 = *piVar12 + 1;
            UNLOCK();
          }
                    /* try { // try from 0048e55e to 0048e575 has its CatchHandler @ 0048e940 */
          juce::String::appendCharPointer((String *)&local_60,"\'",0x5e3cd5);
          piVar12 = (int *)(local_60 + -0x10);
          if (piVar12 != &emptyString) {
            LOCK();
            *piVar12 = *piVar12 + 1;
            UNLOCK();
            LOCK();
            *piVar12 = *piVar12 + 1;
            UNLOCK();
          }
          LOCK();
          lVar15 = *(long *)(param_1 + 0x18);
          *(long *)(param_1 + 0x18) = local_60;
          UNLOCK();
          piVar19 = (int *)(lVar15 + -0x10);
          if (piVar19 != &emptyString) {
            LOCK();
            iVar7 = *piVar19;
            *piVar19 = *piVar19 + -1;
            UNLOCK();
            if (iVar7 == 0) {
              operator_delete__(piVar19);
            }
          }
          param_1[0x11] = (XmlDocument)0x1;
          if (piVar12 != &emptyString) {
            LOCK();
            iVar7 = *piVar12;
            *piVar12 = *piVar12 + -1;
            UNLOCK();
            if (iVar7 == 0) {
              operator_delete__(piVar12);
            }
          }
          piVar12 = (int *)(local_60 + -0x10);
          if (piVar12 != &emptyString) {
            LOCK();
            iVar7 = *piVar12;
            *piVar12 = *piVar12 + -1;
            UNLOCK();
            if (iVar7 == 0) {
              operator_delete__(piVar12);
            }
          }
          piVar12 = (int *)(local_68 + -0x10);
          if (piVar12 != &emptyString) {
            LOCK();
            iVar7 = *piVar12;
            *piVar12 = *piVar12 + -1;
            UNLOCK();
            if (iVar7 == 0) {
              operator_delete__(piVar12);
            }
          }
          piVar12 = (int *)(local_50 + -0x10);
          if (piVar12 == &emptyString) {
            return puVar9;
          }
LAB_0048e7bf:
          LOCK();
          iVar7 = *piVar12;
          *piVar12 = *piVar12 + -1;
          UNLOCK();
          if (iVar7 == 0) {
            operator_delete__(piVar12);
            return puVar9;
          }
          return puVar9;
        }
        local_38 = puVar11;
        pbVar10 = XmlIdentifierChars::findEndOfToken(*(byte **)pXVar1);
        __src = *(char **)pXVar1;
        __n = (long)pbVar10 - (long)__src;
        if (__n == 0) {
          return local_70;
        }
        *(byte **)(param_1 + 8) = pbVar10;
        skipNextWhiteSpace(param_1);
        pbVar16 = *(byte **)(param_1 + 8);
        pbVar8 = pbVar16 + 1;
        *(byte **)(param_1 + 8) = pbVar8;
        bVar5 = *pbVar16;
        uVar14 = (uint)bVar5;
        if ((char)bVar5 < '\0') {
          if ((bVar5 & 0x40) == 0) {
            uVar14 = uVar14 & 0x7f;
          }
          else {
            uVar18 = uVar14 & 0x20;
            uVar17 = uVar14 & 0x10;
            uVar6 = uVar17 ^ 0x1f;
            if ((bVar5 & 0x20) == 0) {
              uVar6 = 0x3f;
            }
            uVar14 = uVar6 & uVar14;
            bVar2 = *pbVar8;
            if ((bVar2 & 0xffffffc0) == 0x80) {
              pbVar8 = pbVar16 + 2;
              uVar14 = bVar2 & 0x3f | uVar14 << 6;
              *(byte **)pXVar1 = pbVar8;
              if (((bVar5 & 0x20) != 0) && (bVar5 = *pbVar8, (bVar5 & 0xffffffc0) == 0x80)) {
                pbVar8 = pbVar16 + 3;
                *(byte **)pXVar1 = pbVar8;
                uVar14 = bVar5 & 0x3f | uVar14 << 6;
                if (((byte)((byte)(uVar17 >> 4) & (byte)(uVar18 >> 5)) != 0) &&
                   (bVar5 = *pbVar8, (bVar5 & 0xffffffc0) == 0x80)) {
                  pbVar8 = pbVar16 + 4;
                  *(byte **)pXVar1 = pbVar8;
                  uVar14 = uVar14 << 6 | bVar5 & 0x3f;
                }
              }
            }
          }
        }
        if (uVar14 != 0x3d) {
          if (uVar14 == 0) {
            param_1[0x10] = (XmlDocument)0x1;
            *(byte **)(param_1 + 8) = pbVar8 + -1;
            if ((((pbVar8[-1] & 0xc0) == 0x80) &&
                (*(byte **)pXVar1 = pbVar8 + -2, (pbVar8[-2] & 0xc0) == 0x80)) &&
               (*(byte **)pXVar1 = pbVar8 + -3, (pbVar8[-3] & 0xc0) == 0x80)) {
              *(byte **)pXVar1 = pbVar8 + -4;
            }
          }
          puVar9 = local_70;
          if ((__src != (char *)0x0) && (*__src != '\0')) {
            uVar21 = __n + 4 & 0xfffffffffffffffc;
            puVar13 = operator_new__(uVar21 + 0x17);
            puVar9 = local_70;
            LOCK();
            *puVar13 = 0;
            UNLOCK();
            *(ulong *)(puVar13 + 2) = uVar21;
            local_48 = puVar13 + 4;
            memcpy(local_48,__src,__n);
            *(undefined1 *)((long)puVar13 + __n + 0x10) = 0;
          }
          local_78 = local_48;
                    /* try { // try from 0048e6eb to 0048e6fe has its CatchHandler @ 0048e9ce */
          operator+((juce *)&local_58,(byte *)"expected \'=\' after attribute \'",
                    (String *)&local_78);
                    /* try { // try from 0048e6ff to 0048e716 has its CatchHandler @ 0048e9a2 */
          juce::String::appendCharPointer((String *)&local_58,"\'",0x5e3cd5);
          piVar12 = (int *)(local_58 + -0x10);
          if (piVar12 != &emptyString) {
            LOCK();
            *piVar12 = *piVar12 + 1;
            UNLOCK();
            LOCK();
            *piVar12 = *piVar12 + 1;
            UNLOCK();
          }
          LOCK();
          lVar15 = *(long *)(param_1 + 0x18);
          *(long *)(param_1 + 0x18) = local_58;
          UNLOCK();
          piVar19 = (int *)(lVar15 + -0x10);
          if (piVar19 != &emptyString) {
            LOCK();
            iVar7 = *piVar19;
            *piVar19 = *piVar19 + -1;
            UNLOCK();
            if (iVar7 == 0) {
              operator_delete__(piVar19);
            }
          }
          param_1[0x11] = (XmlDocument)0x1;
          if (piVar12 != &emptyString) {
            LOCK();
            iVar7 = *piVar12;
            *piVar12 = *piVar12 + -1;
            UNLOCK();
            if (iVar7 == 0) {
              operator_delete__(piVar12);
            }
          }
          piVar12 = (int *)(local_58 + -0x10);
          if (piVar12 != &emptyString) {
            LOCK();
            iVar7 = *piVar12;
            *piVar12 = *piVar12 + -1;
            UNLOCK();
            if (iVar7 == 0) {
              operator_delete__(piVar12);
            }
          }
          piVar12 = local_78 + -4;
          if (piVar12 == &emptyString) {
            return puVar9;
          }
          goto LAB_0048e7bf;
        }
        skipNextWhiteSpace(param_1);
        pbVar8 = *(byte **)(param_1 + 8);
        bVar5 = *pbVar8;
        uVar14 = (uint)bVar5;
        if ((char)bVar5 < '\0') {
          uVar14 = (uint)bVar5;
          if ((bVar5 & 0x40) == 0) {
            uVar14 = uVar14 & 0x7f;
          }
          else {
            uVar6 = uVar14 & 0x10 ^ 0x1f;
            if ((bVar5 & 0x20) == 0) {
              uVar6 = 0x3f;
            }
            uVar14 = uVar6 & uVar14;
            if ((((pbVar8[1] & 0xffffffc0) == 0x80) &&
                (uVar14 = pbVar8[1] & 0x3f | uVar14 << 6, (bVar5 & 0x20) != 0)) &&
               (((pbVar8[2] & 0xffffffc0) == 0x80 &&
                ((uVar14 = pbVar8[2] & 0x3f | uVar14 << 6, (bVar5 >> 5 & (bVar5 & 0x10) == 0) == 0
                 && ((pbVar8[3] & 0xffffffc0) == 0x80)))))) {
              uVar14 = uVar14 << 6 | pbVar8[3] & 0x3f;
            }
          }
        }
        if ((uVar14 != 0x27) && (uVar14 != 0x22)) {
          return local_70;
        }
        puVar11 = operator_new(0x18);
        if ((StringPool::getGlobalPool()::pool == '\0') &&
           (iVar7 = __cxa_guard_acquire(&StringPool::getGlobalPool()::pool), iVar7 != 0)) {
          StringPool::getGlobalPool()::pool = 0;
          _DAT_0071d1c8 = 0;
          pthread_mutexattr_init((pthread_mutexattr_t *)&local_78);
          pthread_mutexattr_settype((pthread_mutexattr_t *)&local_78,1);
          pthread_mutexattr_setprotocol((pthread_mutexattr_t *)&local_78,1);
          pthread_mutex_init((pthread_mutex_t *)&DAT_0071d1d0,(pthread_mutexattr_t *)&local_78);
          pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_78);
          _DAT_0071d1f8 = 0;
          __cxa_atexit(StringPool::~StringPool,&StringPool::getGlobalPool()::pool,&__dso_handle);
          __cxa_guard_release(&StringPool::getGlobalPool()::pool);
        }
                    /* try { // try from 0048de49 to 0048de56 has its CatchHandler @ 0048ea01 */
        StringPool::getPooledString((StringPool *)&local_78,__src,(char *)pbVar10);
        *puVar11 = 0;
        puVar11[1] = local_78;
        piVar12 = local_78 + -4;
        if (piVar12 != &emptyString) {
          LOCK();
          *piVar12 = *piVar12 + 1;
          UNLOCK();
        }
        puVar11[2] = &DAT_0061ac58;
        piVar12 = local_78 + -4;
        if (piVar12 != &emptyString) {
          LOCK();
          iVar7 = *piVar12;
          *piVar12 = *piVar12 + -1;
          UNLOCK();
          if (iVar7 == 0) {
            operator_delete__(piVar12);
          }
        }
        pbVar8 = *(byte **)pXVar1;
        pbVar10 = pbVar8 + 1;
        *(byte **)pXVar1 = pbVar10;
        bVar5 = *pbVar8;
        uVar14 = (uint)bVar5;
        if ((char)bVar5 < '\0') {
          if ((bVar5 & 0x40) == 0) {
            uVar14 = uVar14 & 0x7f;
          }
          else {
            uVar17 = uVar14 & 0x20;
            uVar6 = uVar14 & 0x10;
            uVar18 = uVar6 ^ 0x1f;
            if ((bVar5 & 0x20) == 0) {
              uVar18 = 0x3f;
            }
            uVar14 = uVar18 & uVar14;
            bVar2 = *pbVar10;
            if ((bVar2 & 0xc0) == 0x80) {
              pbVar10 = pbVar8 + 2;
              uVar14 = bVar2 & 0x3f | uVar14 << 6;
              *(byte **)pXVar1 = pbVar10;
              if (((bVar5 & 0x20) != 0) && (bVar5 = *pbVar10, (bVar5 & 0xffffffc0) == 0x80)) {
                pbVar10 = pbVar8 + 3;
                *(byte **)pXVar1 = pbVar10;
                uVar14 = bVar5 & 0x3f | uVar14 << 6;
                if (((byte)((byte)(uVar6 >> 4) & (byte)(uVar17 >> 5)) != 0) &&
                   (bVar5 = *pbVar10, (bVar5 & 0xffffffc0) == 0x80)) {
                  pbVar10 = pbVar8 + 4;
                  *(byte **)pXVar1 = pbVar10;
                  uVar14 = uVar14 << 6 | bVar5 & 0x3f;
                }
              }
            }
          }
        }
        if (uVar14 == 0) {
          param_1[0x10] = (XmlDocument)0x1;
          *(byte **)(param_1 + 8) = pbVar10 + -1;
          if ((((pbVar10[-1] & 0xc0) == 0x80) &&
              (*(byte **)pXVar1 = pbVar10 + -2, (pbVar10[-2] & 0xc0) == 0x80)) &&
             (*(byte **)pXVar1 = pbVar10 + -3, (pbVar10[-3] & 0xc0) == 0x80)) {
            *(byte **)pXVar1 = pbVar10 + -4;
          }
        }
        else if (param_1[0x10] == (XmlDocument)0x0) {
          this = (String *)(puVar11 + 2);
          do {
            pbVar8 = pbVar10 + 1;
            *(byte **)pXVar1 = pbVar8;
            bVar5 = *pbVar10;
            uVar6 = (uint)bVar5;
            if ((char)bVar5 < '\0') {
              if ((bVar5 & 0x40) == 0) {
                uVar6 = uVar6 & 0x7f;
              }
              else {
                uVar18 = uVar6 & 0x20;
                uVar20 = uVar6 & 0x10;
                uVar17 = uVar20 ^ 0x1f;
                if ((bVar5 & 0x20) == 0) {
                  uVar17 = 0x3f;
                }
                uVar6 = uVar17 & uVar6;
                bVar2 = *pbVar8;
                if ((bVar2 & 0xc0) == 0x80) {
                  pbVar8 = pbVar10 + 2;
                  uVar6 = bVar2 & 0x3f | uVar6 << 6;
                  *(byte **)pXVar1 = pbVar8;
                  if (((bVar5 & 0x20) != 0) && (bVar5 = *pbVar8, (bVar5 & 0xffffffc0) == 0x80)) {
                    pbVar8 = pbVar10 + 3;
                    *(byte **)pXVar1 = pbVar8;
                    uVar6 = bVar5 & 0x3f | uVar6 << 6;
                    if (((byte)((byte)(uVar20 >> 4) & (byte)(uVar18 >> 5)) != 0) &&
                       (bVar5 = *pbVar8, (bVar5 & 0xffffffc0) == 0x80)) {
                      pbVar8 = pbVar10 + 4;
                      *(byte **)pXVar1 = pbVar8;
                      uVar6 = uVar6 << 6 | bVar5 & 0x3f;
                    }
                  }
                }
              }
            }
            if (uVar6 == 0) {
              param_1[0x10] = (XmlDocument)0x1;
              pbVar10 = pbVar8 + -1;
              *(byte **)(param_1 + 8) = pbVar10;
              if ((pbVar8[-1] & 0xc0) == 0x80) {
                pbVar10 = pbVar8 + -2;
                *(byte **)pXVar1 = pbVar10;
                if ((pbVar8[-2] & 0xc0) == 0x80) {
                  pbVar10 = pbVar8 + -3;
                  *(byte **)pXVar1 = pbVar10;
                  if ((pbVar8[-3] & 0xc0) == 0x80) {
                    pbVar8 = pbVar8 + -4;
                    *(byte **)pXVar1 = pbVar8;
                    goto LAB_0048e074;
                  }
                }
              }
            }
            else {
LAB_0048e074:
              pbVar10 = pbVar8;
            }
            if (uVar6 == uVar14) break;
            pbVar8 = pbVar10 + -1;
            *(byte **)pXVar1 = pbVar8;
            bVar5 = pbVar10[-1];
            if ((bVar5 & 0xc0) == 0x80) {
              pbVar8 = pbVar10 + -2;
              *(byte **)pXVar1 = pbVar8;
              bVar5 = pbVar10[-2];
              if ((bVar5 & 0xc0) == 0x80) {
                pbVar8 = pbVar10 + -3;
                *(byte **)pXVar1 = pbVar8;
                bVar5 = pbVar10[-3];
                if ((bVar5 & 0xc0) == 0x80) {
                  pbVar8 = pbVar10 + -4;
                  *(byte **)pXVar1 = pbVar8;
                  bVar5 = pbVar10[-4];
                }
              }
            }
            pbVar10 = pbVar8;
            if (uVar6 == 0x26) {
              readEntity(param_1,this);
              XVar3 = param_1[0x10];
            }
            else {
              while( true ) {
                uVar6 = (uint)bVar5;
                if ((char)bVar5 < '\0') {
                  if ((bVar5 & 0x40) == 0) {
                    uVar6 = bVar5 & 0x7f;
                  }
                  else {
                    uVar17 = uVar6 & 0x10 ^ 0x1f;
                    if ((bVar5 & 0x20) == 0) {
                      uVar17 = 0x3f;
                    }
                    uVar6 = uVar6 & uVar17;
                    if ((((pbVar10[1] & 0xffffffc0) == 0x80) &&
                        (uVar6 = pbVar10[1] & 0x3f | uVar6 << 6, (bVar5 & 0x20) != 0)) &&
                       (((pbVar10[2] & 0xffffffc0) == 0x80 &&
                        ((uVar6 = pbVar10[2] & 0x3f | uVar6 << 6,
                         (bVar5 >> 5 & (bVar5 & 0x10) == 0) == 0 &&
                         ((pbVar10[3] & 0xffffffc0) == 0x80)))))) {
                      uVar6 = uVar6 << 6 | pbVar10[3] & 0x3f;
                    }
                  }
                }
                if (uVar6 == uVar14) {
                  juce::String::appendCharPointer(this,pbVar8,(long)pbVar10);
                  pbVar10 = *(byte **)pXVar1;
                  *(byte **)pXVar1 = pbVar10 + 1;
                  bVar5 = *pbVar10;
                  if (((char)bVar5 < '\0') && ((bVar5 & 0x40) != 0)) {
                    lVar15 = 4 - (ulong)((bVar5 & 0x10) == 0);
                    if ((bVar5 & 0x20) == 0) {
                      lVar15 = 2;
                    }
                    *(byte **)pXVar1 = pbVar10 + lVar15;
                  }
                  goto LAB_0048da80;
                }
                if (uVar6 == 0) {
                  piVar12 = operator_new__(0x2b);
                  LOCK();
                  *piVar12 = 0;
                  UNLOCK();
                  piVar12[2] = 0x14;
                  uVar4 = s_malformed_headernot_enough_input_005de290._40_8_;
                  piVar12[3] = 0;
                  *(undefined8 *)(piVar12 + 4) = s_malformed_headernot_enough_input_005de290._32_8_;
                  *(undefined8 *)(piVar12 + 6) = uVar4;
                  *(undefined1 *)(piVar12 + 8) = 0;
                  LOCK();
                  *piVar12 = *piVar12 + 1;
                  UNLOCK();
                  LOCK();
                  lVar15 = *(long *)(param_1 + 0x18);
                  *(int **)(param_1 + 0x18) = piVar12 + 4;
                  UNLOCK();
                  piVar19 = (int *)(lVar15 + -0x10);
                  if (piVar19 != &emptyString) {
                    LOCK();
                    iVar7 = *piVar19;
                    *piVar19 = *piVar19 + -1;
                    UNLOCK();
                    if (iVar7 == 0) {
                      operator_delete__(piVar19);
                    }
                  }
                  param_1[0x11] = (XmlDocument)0x1;
                  LOCK();
                  iVar7 = *piVar12;
                  *piVar12 = *piVar12 + -1;
                  UNLOCK();
                  if (iVar7 == 0) {
                    operator_delete__(piVar12);
                  }
                  param_1[0x10] = (XmlDocument)0x1;
                  goto LAB_0048da80;
                }
                if (uVar6 == 0x26) break;
                pbVar16 = pbVar10 + 1;
                *(byte **)pXVar1 = pbVar16;
                bVar5 = *pbVar10;
                if (((char)bVar5 < '\0') && ((bVar5 & 0x40) != 0)) {
                  lVar15 = 4 - (ulong)((bVar5 & 0x10) == 0);
                  if ((bVar5 & 0x20) == 0) {
                    lVar15 = 2;
                  }
                  pbVar16 = pbVar10 + lVar15;
                  *(byte **)pXVar1 = pbVar16;
                }
                bVar5 = *pbVar16;
                pbVar10 = pbVar16;
              }
              juce::String::appendCharPointer(this,pbVar8,(long)pbVar10);
              XVar3 = param_1[0x10];
            }
            if (XVar3 != (XmlDocument)0x0) break;
            pbVar10 = *(byte **)pXVar1;
          } while( true );
        }
LAB_0048da80:
        *local_38 = puVar11;
      } while( true );
    }
  }
  return (undefined8 *)0x0;
}


