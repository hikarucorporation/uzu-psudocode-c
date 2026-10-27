// Function : replaceWithData
// Namespace: juce:File
// Entry    : 004a27b0
// Prototype: ulong replaceWithData(File * this, void * param_1, ulong param_2)
// Body     : 004a27b0 - 004a40dc


/* WARNING: Removing unreachable block (ram,0x004a2829) */
/* WARNING: Removing unreachable block (ram,0x004a2836) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::File::replaceWithData(void const*, unsigned long) const */

ulong __thiscall juce::File::replaceWithData(File *this,void *param_1,ulong param_2)

{
  __time_t _Var1;
  File *pFVar2;
  uint uVar3;
  long lVar4;
  undefined4 *puVar5;
  String *pSVar6;
  int *piVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  uint uVar11;
  byte bVar12;
  size_t sVar13;
  size_t sVar14;
  long lVar15;
  byte *pbVar16;
  wint_t __wc;
  byte *pbVar17;
  byte bVar18;
  byte *pbVar19;
  int iVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  bool bVar24;
  bool bVar25;
  byte *local_108;
  byte *local_100;
  long local_f8;
  byte *local_f0;
  byte *local_e8;
  byte *local_e0;
  byte *local_d8;
  byte *local_d0;
  timespec local_c8;
  undefined1 local_b8 [12];
  char acStack_ac [4];
  undefined8 local_a8;
  File *local_78;
  byte *local_70;
  undefined4 *local_68;
  byte *local_60;
  byte *local_58;
  byte *local_50;
  int local_44;
  void *local_40;
  ulong local_38;
  
  if (param_2 == 0) {
    uVar9 = deleteFile(this);
    return uVar9;
  }
  local_40 = param_1;
  local_38 = param_2;
  getPathUpToLastSlash(&local_c8.tv_sec,(undefined8 *)this);
  pbVar17 = (byte *)(local_c8.tv_sec + -0x10);
  if (pbVar17 != (byte *)&emptyString) {
    LOCK();
    *(int *)pbVar17 = *(int *)pbVar17 + 1;
    UNLOCK();
  }
  LOCK();
  UNLOCK();
  local_d0 = (byte *)local_c8.tv_sec;
  pbVar17 = (byte *)(local_c8.tv_sec + -0x10);
  if (pbVar17 != (byte *)&emptyString) {
    LOCK();
    iVar20 = *(int *)pbVar17;
    *(int *)pbVar17 = *(int *)pbVar17 + -1;
    UNLOCK();
    if (iVar20 == 0) {
      operator_delete__(pbVar17);
    }
  }
  pbVar17 = *(byte **)this;
  bVar18 = *pbVar17;
  local_78 = this;
  if (bVar18 == 0) {
LAB_004a2b3d:
    pbVar16 = pbVar17 + -0x10;
    local_e0 = pbVar17;
    if (pbVar16 != (byte *)&emptyString) {
      LOCK();
      *(int *)pbVar16 = *(int *)pbVar16 + 1;
      UNLOCK();
    }
  }
  else {
    iVar20 = -1;
    iVar8 = 0;
    pbVar16 = pbVar17;
    bVar12 = bVar18;
    do {
      pbVar19 = pbVar16 + 1;
      uVar3 = (uint)bVar12;
      if ((char)bVar12 < '\0') {
        if ((bVar12 & 0x40) == 0) {
          uVar3 = uVar3 & 0x7f;
          goto LAB_004a28a3;
        }
        if ((bVar12 & 0x20) == 0) {
          uVar21 = 0x3f;
          lVar4 = 0;
          bVar25 = false;
          bVar24 = false;
        }
        else {
          bVar25 = true;
          if ((bVar12 & 0x10) == 0) {
            uVar21 = 0x1f;
            lVar4 = 1;
            bVar24 = false;
          }
          else {
            uVar21 = 0xf;
            lVar4 = 2;
            bVar24 = true;
          }
        }
        uVar3 = uVar21 & uVar3;
        bVar12 = pbVar16[1];
        if ((bVar12 & 0xffffffc0) == 0x80) {
          pbVar23 = pbVar16 + lVar4 + 2;
          uVar3 = bVar12 & 0x3f | uVar3 << 6;
          pbVar19 = pbVar23;
          if (!bVar25) goto LAB_004a28a3;
          pbVar19 = pbVar16 + 2;
          bVar12 = *pbVar19;
          if ((bVar12 & 0xffffffc0) == 0x80) {
            uVar3 = bVar12 & 0x3f | uVar3 << 6;
            pbVar19 = pbVar23;
            if (bVar24) {
              pbVar19 = pbVar16 + 3;
              bVar12 = *pbVar19;
              if ((bVar12 & 0xffffffc0) != 0x80) goto LAB_004a28a7;
              uVar3 = uVar3 << 6 | bVar12 & 0x3f;
              pbVar19 = pbVar23;
            }
            goto LAB_004a28a3;
          }
          goto LAB_004a28a7;
        }
      }
      else {
LAB_004a28a3:
        bVar12 = *pbVar19;
LAB_004a28a7:
      }
      pbVar16 = pbVar19;
      if (uVar3 == 0x2f) {
        iVar20 = iVar8;
      }
      iVar8 = iVar8 + 1;
    } while (bVar12 != 0);
    iVar8 = -1;
    iVar10 = 0;
    pbVar16 = pbVar17;
    bVar12 = bVar18;
    do {
      pbVar19 = pbVar16 + 1;
      uVar3 = (uint)bVar12;
      if ((char)bVar12 < '\0') {
        if ((bVar12 & 0x40) == 0) {
          uVar3 = uVar3 & 0x7f;
          goto LAB_004a29b3;
        }
        if ((bVar12 & 0x20) == 0) {
          uVar21 = 0x3f;
          lVar4 = 0;
          bVar25 = false;
          bVar24 = false;
        }
        else {
          bVar25 = true;
          if ((bVar12 & 0x10) == 0) {
            uVar21 = 0x1f;
            lVar4 = 1;
            bVar24 = false;
          }
          else {
            uVar21 = 0xf;
            lVar4 = 2;
            bVar24 = true;
          }
        }
        uVar3 = uVar21 & uVar3;
        bVar12 = pbVar16[1];
        if ((bVar12 & 0xc0) == 0x80) {
          pbVar23 = pbVar16 + lVar4 + 2;
          uVar3 = bVar12 & 0x3f | uVar3 << 6;
          pbVar19 = pbVar23;
          if (!bVar25) goto LAB_004a29b3;
          pbVar19 = pbVar16 + 2;
          bVar12 = *pbVar19;
          if ((bVar12 & 0xc0) == 0x80) {
            uVar3 = bVar12 & 0x3f | uVar3 << 6;
            pbVar19 = pbVar23;
            if (bVar24) {
              pbVar19 = pbVar16 + 3;
              bVar12 = *pbVar19;
              if ((bVar12 & 0xc0) != 0x80) goto LAB_004a29b8;
              uVar3 = uVar3 << 6 | bVar12 & 0x3f;
              pbVar19 = pbVar23;
            }
            goto LAB_004a29b3;
          }
          goto LAB_004a29b8;
        }
      }
      else {
LAB_004a29b3:
        bVar12 = *pbVar19;
LAB_004a29b8:
      }
      pbVar16 = pbVar19;
      if (uVar3 == 0x2e) {
        iVar8 = iVar10;
      }
      iVar10 = iVar10 + 1;
    } while (bVar12 != 0);
    if (iVar20 + 1 < iVar8) {
                    /* try { // try from 004a2a9f to 004a2ab3 has its CatchHandler @ 004a4121 */
      juce::String::substring(&local_e0,(undefined8 *)this,iVar20 + 1,iVar8);
    }
    else {
      if (iVar20 < 0) goto LAB_004a2b3d;
      iVar20 = iVar20 + 2;
      do {
        pbVar16 = pbVar17 + 1;
        if (((char)bVar18 < '\0') && ((bVar18 & 0x40) != 0)) {
          if ((bVar18 & 0x20) == 0) {
            pbVar16 = pbVar17 + 2;
          }
          else {
            pbVar16 = pbVar17 + (4 - (ulong)((bVar18 & 0x10) == 0));
          }
        }
        iVar20 = iVar20 + -1;
        if (iVar20 < 2) {
                    /* try { // try from 004a2b59 to 004a2b5d has its CatchHandler @ 004a4121 */
          local_e0 = (byte *)StringHolderUtils::createFromCharPointer<juce::CharPointer_UTF8>
                                       (pbVar16);
          goto LAB_004a2b63;
        }
        bVar18 = *pbVar16;
        pbVar17 = pbVar16;
      } while (bVar18 != 0);
      local_e0 = &DAT_0061ac58;
    }
  }
LAB_004a2b63:
                    /* try { // try from 004a2b63 to 004a2b7a has its CatchHandler @ 004a41aa */
  juce::String::appendCharPointer((String *)&local_e0,&DAT_005e5e5d,0x5e5e62);
  local_60 = local_e0;
  pbVar17 = local_e0 + -0x10;
  if (pbVar17 != (byte *)&emptyString) {
    LOCK();
    *(int *)pbVar17 = *(int *)pbVar17 + 1;
    UNLOCK();
  }
  lVar4 = __tls_get_addr(&PTR_007153d8);
  if (*(char *)(lVar4 + 0x98) == '\x01') {
    pbVar17 = *(byte **)(lVar4 + 0x90);
  }
  else {
    local_c8.tv_sec = 1;
    Random::setSeedRandomly((Random *)&local_c8);
    *(__time_t *)(lVar4 + 0x90) = local_c8.tv_sec;
    *(undefined1 *)(lVar4 + 0x98) = 1;
    pbVar17 = (byte *)local_c8.tv_sec;
  }
  uVar9 = (long)pbVar17 * 0x5deece66d + 0xb;
  *(ulong *)(lVar4 + 0x90) = uVar9 & 0xffffffffffff;
  uVar9 = uVar9 >> 0x10;
  acStack_ac[3] = 0;
  sVar14 = 0;
  lVar4 = -4;
  do {
    lVar15 = lVar4;
    sVar13 = sVar14;
    uVar3 = (uint)uVar9;
    acStack_ac[lVar15 + 6] = "0123456789abcdef"[uVar3 & 0xf];
    uVar9 = uVar9 >> 4 & 0xfffffff;
    sVar14 = sVar13 + 1;
    lVar4 = lVar15 + -1;
  } while (0xf < uVar3);
  uVar9 = -(lVar15 + -1) & 0xfffffffffffffffc;
                    /* try { // try from 004a2c3f to 004a2c43 has its CatchHandler @ 004a41a2 */
  puVar5 = operator_new__(uVar9 + 0x17);
  LOCK();
  *puVar5 = 0;
  UNLOCK();
  *(ulong *)(puVar5 + 2) = uVar9;
  memcpy(puVar5 + 4,acStack_ac + lVar15 + 6,sVar14);
  *(undefined1 *)((long)puVar5 + sVar13 + 0x11) = 0;
                    /* try { // try from 004a2c78 to 004a2c8c has its CatchHandler @ 004a419a */
  local_68 = puVar5 + 4;
  pSVar6 = juce::String::operator+=((String *)&local_60,(String *)&local_68);
  pFVar2 = local_78;
  local_d8 = *(byte **)pSVar6;
  pbVar17 = local_d8 + -0x10;
  if (pbVar17 != (byte *)&emptyString) {
    LOCK();
    *(int *)pbVar17 = *(int *)pbVar17 + 1;
    UNLOCK();
  }
  local_e8 = *(byte **)this;
  bVar18 = *local_e8;
  if (bVar18 == 0) {
LAB_004a2f51:
    local_e8 = &DAT_0061ac58;
LAB_004a2f58:
  }
  else {
    iVar20 = -1;
    iVar8 = 0;
    pbVar17 = local_e8;
    bVar12 = bVar18;
    do {
      pbVar16 = pbVar17 + 1;
      uVar3 = (uint)bVar12;
      if ((char)bVar12 < '\0') {
        if ((bVar12 & 0x40) == 0) {
          uVar3 = uVar3 & 0x7f;
          goto LAB_004a2ce3;
        }
        if ((bVar12 & 0x20) == 0) {
          uVar21 = 0x3f;
          lVar4 = 0;
          bVar25 = false;
          bVar24 = false;
        }
        else {
          bVar25 = true;
          if ((bVar12 & 0x10) == 0) {
            uVar21 = 0x1f;
            lVar4 = 1;
            bVar24 = false;
          }
          else {
            uVar21 = 0xf;
            lVar4 = 2;
            bVar24 = true;
          }
        }
        uVar3 = uVar21 & uVar3;
        bVar12 = pbVar17[1];
        if ((bVar12 & 0xffffffc0) == 0x80) {
          pbVar19 = pbVar17 + lVar4 + 2;
          uVar3 = bVar12 & 0x3f | uVar3 << 6;
          pbVar16 = pbVar19;
          if (bVar25) {
            pbVar16 = pbVar17 + 2;
            bVar12 = *pbVar16;
            if ((bVar12 & 0xffffffc0) != 0x80) goto LAB_004a2ce8;
            uVar3 = bVar12 & 0x3f | uVar3 << 6;
            pbVar16 = pbVar19;
            if (bVar24) {
              pbVar16 = pbVar17 + 3;
              bVar12 = *pbVar16;
              if ((bVar12 & 0xc0) != 0x80) goto LAB_004a2ce8;
              uVar3 = uVar3 << 6 | bVar12 & 0x3f;
              pbVar16 = pbVar19;
            }
          }
          goto LAB_004a2ce3;
        }
      }
      else {
LAB_004a2ce3:
        bVar12 = *pbVar16;
      }
LAB_004a2ce8:
      if (uVar3 == 0x2e) {
        iVar20 = iVar8;
      }
      iVar8 = iVar8 + 1;
      pbVar17 = pbVar16;
    } while (bVar12 != 0);
    iVar8 = -1;
    iVar10 = 0;
    pbVar17 = local_e8;
    bVar12 = bVar18;
    do {
      pbVar16 = pbVar17 + 1;
      uVar3 = (uint)bVar12;
      if ((char)bVar12 < '\0') {
        if ((bVar12 & 0x40) == 0) {
          uVar3 = uVar3 & 0x7f;
          goto LAB_004a2df3;
        }
        if ((bVar12 & 0x20) == 0) {
          uVar21 = 0x3f;
          lVar4 = 0;
          bVar25 = false;
          bVar24 = false;
        }
        else {
          bVar25 = true;
          if ((bVar12 & 0x10) == 0) {
            uVar21 = 0x1f;
            lVar4 = 1;
            bVar24 = false;
          }
          else {
            uVar21 = 0xf;
            lVar4 = 2;
            bVar24 = true;
          }
        }
        uVar3 = uVar21 & uVar3;
        bVar12 = pbVar17[1];
        if ((bVar12 & 0xc0) == 0x80) {
          pbVar19 = pbVar17 + lVar4 + 2;
          uVar3 = bVar12 & 0x3f | uVar3 << 6;
          pbVar16 = pbVar19;
          if (!bVar25) goto LAB_004a2df3;
          pbVar16 = pbVar17 + 2;
          bVar12 = *pbVar16;
          if ((bVar12 & 0xc0) == 0x80) {
            uVar3 = bVar12 & 0x3f | uVar3 << 6;
            pbVar16 = pbVar19;
            if (bVar24) {
              pbVar16 = pbVar17 + 3;
              bVar12 = *pbVar16;
              if ((bVar12 & 0xc0) != 0x80) goto LAB_004a2df8;
              uVar3 = uVar3 << 6 | bVar12 & 0x3f;
              pbVar16 = pbVar19;
            }
            goto LAB_004a2df3;
          }
          goto LAB_004a2df8;
        }
      }
      else {
LAB_004a2df3:
        bVar12 = *pbVar16;
LAB_004a2df8:
      }
      pbVar17 = pbVar16;
      if (uVar3 == 0x2f) {
        iVar8 = iVar10;
      }
      iVar10 = iVar10 + 1;
    } while (bVar12 != 0);
    this = local_78;
    if (iVar20 <= iVar8) goto LAB_004a2f51;
    if (iVar20 < 1) {
      pbVar17 = local_e8 + -0x10;
      if (pbVar17 != (byte *)&emptyString) {
        LOCK();
        *(int *)pbVar17 = *(int *)pbVar17 + 1;
        UNLOCK();
      }
    }
    else {
      iVar20 = iVar20 + 1;
      do {
        pbVar17 = local_e8 + 1;
        if (((char)bVar18 < '\0') && ((bVar18 & 0x40) != 0)) {
          if ((bVar18 & 0x20) == 0) {
            pbVar17 = local_e8 + 2;
          }
          else {
            pbVar17 = local_e8 + (4 - (ulong)((bVar18 & 0x10) == 0));
          }
        }
        iVar20 = iVar20 + -1;
        if (iVar20 < 2) {
                    /* try { // try from 004a313c to 004a3140 has its CatchHandler @ 004a40f5 */
          local_e8 = (byte *)StringHolderUtils::createFromCharPointer<juce::CharPointer_UTF8>
                                       (pbVar17);
          this = pFVar2;
          goto LAB_004a2f58;
        }
        bVar18 = *pbVar17;
        local_e8 = pbVar17;
      } while (bVar18 != 0);
      local_e8 = &DAT_0061ac58;
    }
  }
                    /* try { // try from 004a2f5d to 004a2f72 has its CatchHandler @ 004a4192 */
  operator+((juce *)&local_c8,&DAT_005db3b5,(String *)&local_d8);
  pbVar17 = local_d8;
  local_d8 = (byte *)local_c8.tv_sec;
  local_c8.tv_sec = (__time_t)pbVar17;
  pbVar17 = pbVar17 + -0x10;
  if (pbVar17 != (byte *)&emptyString) {
    LOCK();
    iVar20 = *(int *)pbVar17;
    *(int *)pbVar17 = *(int *)pbVar17 + -1;
    UNLOCK();
    if (iVar20 == 0) {
      operator_delete__(pbVar17);
    }
  }
  local_50 = local_d8;
  pbVar17 = local_d8 + -0x10;
  if (pbVar17 != (byte *)&emptyString) {
    LOCK();
    *(int *)pbVar17 = *(int *)pbVar17 + 1;
    UNLOCK();
  }
                    /* try { // try from 004a2fca to 004a2fdb has its CatchHandler @ 004a4182 */
  pSVar6 = juce::String::operator+=((String *)&local_50,(String *)&local_e8);
  pbVar16 = *(byte **)pSVar6;
  pbVar17 = pbVar16 + -0x10;
  if (pbVar17 != (byte *)&emptyString) {
    LOCK();
    *(int *)pbVar17 = *(int *)pbVar17 + 1;
    UNLOCK();
  }
                    /* try { // try from 004a2ff4 to 004a3002 has its CatchHandler @ 004a4150 */
  getChildFile((File *)&local_100,&local_d0,pbVar16);
  if (pbVar17 != (byte *)&emptyString) {
    LOCK();
    iVar20 = *(int *)pbVar17;
    *(int *)pbVar17 = *(int *)pbVar17 + -1;
    UNLOCK();
    if (iVar20 == 0) {
      operator_delete__(pbVar17);
    }
  }
  pbVar17 = local_50 + -0x10;
  if (pbVar17 == (byte *)&emptyString) {
LAB_004a304e:
    bVar18 = *local_100;
  }
  else {
    LOCK();
    iVar20 = *(int *)pbVar17;
    *(int *)pbVar17 = *(int *)pbVar17 + -1;
    UNLOCK();
    if (iVar20 != 0) goto LAB_004a304e;
    operator_delete__(pbVar17);
    bVar18 = *local_100;
  }
  if (bVar18 != 0) {
    iVar20 = access((char *)local_100,0);
    if (iVar20 == 0) {
      local_108 = local_d8;
      pbVar17 = local_d8 + -0x10;
      if (pbVar17 != (byte *)&emptyString) {
        LOCK();
        *(int *)pbVar17 = *(int *)pbVar17 + 1;
        UNLOCK();
      }
                    /* try { // try from 004a3088 to 004a3094 has its CatchHandler @ 004a4102 */
      juce::String::trim(&local_c8.tv_sec,(long *)&local_108);
      _Var1 = local_c8.tv_sec;
      if (*(byte *)local_c8.tv_sec == 0) {
        bVar25 = false;
      }
      else {
        sVar14 = strlen((char *)local_c8.tv_sec);
        pbVar17 = (byte *)(_Var1 + (sVar14 - 1));
        bVar18 = *(byte *)(_Var1 + (sVar14 - 1));
        if ((bVar18 & 0xc0) == 0x80) {
          bVar18 = *(byte *)(_Var1 + (sVar14 - 2));
          pbVar17 = (byte *)(_Var1 + (sVar14 - 2));
          if ((bVar18 & 0xc0) == 0x80) {
            bVar18 = *(byte *)(_Var1 + (sVar14 - 3));
            pbVar17 = (byte *)(_Var1 + (sVar14 - 3));
            if ((bVar18 & 0xc0) == 0x80) {
              bVar18 = *(byte *)(_Var1 + (sVar14 - 4));
              pbVar17 = (byte *)(_Var1 + (sVar14 - 4));
            }
          }
        }
        uVar3 = (uint)bVar18;
        if ((char)bVar18 < '\0') {
          if ((bVar18 & 0x40) == 0) {
            uVar3 = bVar18 & 0x7f;
          }
          else {
            uVar3 = 0x3f;
            if ((bVar18 & 0x20) != 0) {
              uVar3 = bVar18 & 0x10 ^ 0x1f;
            }
            uVar3 = bVar18 & uVar3;
            if (((((pbVar17[1] & 0xffffffc0) == 0x80) &&
                 (uVar3 = pbVar17[1] & 0x3f | uVar3 << 6, (bVar18 & 0x20) != 0)) &&
                ((pbVar17[2] & 0xffffffc0) == 0x80)) &&
               ((uVar3 = pbVar17[2] & 0x3f | uVar3 << 6, (bVar18 >> 5 & (bVar18 & 0x10) == 0) == 0
                && ((pbVar17[3] & 0xffffffc0) == 0x80)))) {
              uVar3 = uVar3 << 6 | pbVar17[3] & 0x3f;
            }
          }
        }
        bVar25 = uVar3 == 0x29;
      }
      if ((undefined1 *)_Var1 != &DAT_0061ac58) {
        pbVar17 = (byte *)(_Var1 + -0x10);
        LOCK();
        iVar20 = *(int *)pbVar17;
        *(int *)pbVar17 = *(int *)pbVar17 + -1;
        UNLOCK();
        if (iVar20 == 0) {
          operator_delete__(pbVar17);
        }
      }
      if (bVar25) {
        uVar9 = 1;
        bVar18 = *local_108;
        bVar25 = true;
        if (bVar18 != 0) {
          iVar20 = -1;
          iVar8 = 0;
          pbVar17 = local_108;
          bVar12 = bVar18;
          do {
            pbVar16 = pbVar17 + 1;
            uVar3 = (uint)bVar12;
            if ((char)bVar12 < '\0') {
              if ((bVar12 & 0x40) == 0) {
                uVar3 = uVar3 & 0x7f;
                goto LAB_004a3234;
              }
              if ((bVar12 & 0x20) == 0) {
                uVar21 = 0x3f;
                lVar4 = 0;
                bVar25 = false;
                bVar24 = false;
              }
              else {
                bVar25 = true;
                if ((bVar12 & 0x10) == 0) {
                  uVar21 = 0x1f;
                  lVar4 = 1;
                  bVar24 = false;
                }
                else {
                  uVar21 = 0xf;
                  lVar4 = 2;
                  bVar24 = true;
                }
              }
              uVar3 = uVar21 & uVar3;
              bVar12 = pbVar17[1];
              if ((bVar12 & 0xffffffc0) == 0x80) {
                pbVar19 = pbVar17 + lVar4 + 2;
                uVar3 = bVar12 & 0x3f | uVar3 << 6;
                pbVar16 = pbVar19;
                if (!bVar25) goto LAB_004a3234;
                pbVar16 = pbVar17 + 2;
                bVar12 = *pbVar16;
                if ((bVar12 & 0xffffffc0) == 0x80) {
                  uVar3 = bVar12 & 0x3f | uVar3 << 6;
                  pbVar16 = pbVar19;
                  if (bVar24) {
                    pbVar16 = pbVar17 + 3;
                    bVar12 = *pbVar16;
                    if ((bVar12 & 0xffffffc0) != 0x80) goto LAB_004a3238;
                    uVar3 = uVar3 << 6 | bVar12 & 0x3f;
                    pbVar16 = pbVar19;
                  }
                  goto LAB_004a3234;
                }
                goto LAB_004a3238;
              }
            }
            else {
LAB_004a3234:
              bVar12 = *pbVar16;
LAB_004a3238:
            }
            pbVar17 = pbVar16;
            if (uVar3 == 0x28) {
              iVar20 = iVar8;
            }
            iVar8 = iVar8 + 1;
          } while (bVar12 != 0);
          iVar8 = -1;
          iVar10 = 0;
          pbVar17 = local_108;
          do {
            pbVar16 = pbVar17 + 1;
            uVar3 = (uint)bVar18;
            if ((char)bVar18 < '\0') {
              if ((bVar18 & 0x40) == 0) {
                uVar3 = uVar3 & 0x7f;
                goto LAB_004a3336;
              }
              if ((bVar18 & 0x20) == 0) {
                uVar21 = 0x3f;
                lVar4 = 0;
                bVar25 = false;
                bVar24 = false;
              }
              else {
                bVar25 = true;
                if ((bVar18 & 0x10) == 0) {
                  uVar21 = 0x1f;
                  lVar4 = 1;
                  bVar24 = false;
                }
                else {
                  uVar21 = 0xf;
                  lVar4 = 2;
                  bVar24 = true;
                }
              }
              uVar3 = uVar21 & uVar3;
              bVar18 = pbVar17[1];
              if ((bVar18 & 0xffffffc0) == 0x80) {
                pbVar19 = pbVar17 + lVar4 + 2;
                uVar3 = bVar18 & 0x3f | uVar3 << 6;
                pbVar16 = pbVar19;
                if (bVar25) {
                  pbVar16 = pbVar17 + 2;
                  bVar18 = *pbVar16;
                  if ((bVar18 & 0xc0) != 0x80) goto LAB_004a333b;
                  uVar3 = bVar18 & 0x3f | uVar3 << 6;
                  pbVar16 = pbVar19;
                  if (bVar24) {
                    pbVar16 = pbVar17 + 3;
                    bVar18 = *pbVar16;
                    if ((bVar18 & 0xffffffc0) != 0x80) goto LAB_004a333b;
                    uVar3 = uVar3 << 6 | bVar18 & 0x3f;
                    pbVar16 = pbVar19;
                  }
                }
                goto LAB_004a3336;
              }
            }
            else {
LAB_004a3336:
              bVar18 = *pbVar16;
            }
LAB_004a333b:
            if (uVar3 == 0x29) {
              iVar8 = iVar10;
            }
            iVar10 = iVar10 + 1;
            pbVar17 = pbVar16;
          } while (bVar18 != 0);
          bVar25 = true;
          if ((0 < iVar20) && (iVar20 < iVar8)) {
            local_44 = iVar20 + 1;
                    /* try { // try from 004a3441 to 004a3456 has its CatchHandler @ 004a40ed */
            juce::String::substring(&local_c8.tv_sec,&local_108,local_44,iVar8);
            bVar18 = *(byte *)local_c8.tv_sec;
            bVar24 = true;
            if (bVar18 != 0) {
              pbVar17 = (byte *)local_c8.tv_sec;
              do {
                pbVar16 = pbVar17 + 1;
                uVar3 = (uint)bVar18;
                if ((char)bVar18 < '\0') {
                  if ((bVar18 & 0x40) == 0) {
                    uVar3 = uVar3 & 0x7f;
                    goto LAB_004a3545;
                  }
                  if ((bVar18 & 0x20) == 0) {
                    uVar21 = 0x3f;
                    lVar4 = 0;
                    bVar25 = false;
                    bVar24 = false;
                  }
                  else {
                    bVar25 = true;
                    if ((bVar18 & 0x10) == 0) {
                      uVar21 = 0x1f;
                      lVar4 = 1;
                      bVar24 = false;
                    }
                    else {
                      uVar21 = 0xf;
                      lVar4 = 2;
                      bVar24 = true;
                    }
                  }
                  uVar3 = uVar3 & uVar21;
                  if ((pbVar17[1] & 0xffffffc0) != 0x80) goto LAB_004a3545;
                  pbVar16 = pbVar17 + lVar4 + 2;
                  uVar3 = pbVar17[1] & 0x3f | uVar3 << 6;
                  if (!bVar25) goto LAB_004a3545;
                  local_f0 = pbVar17 + 2;
                  if ((*local_f0 & 0xc0) == 0x80) {
                    uVar3 = *local_f0 & 0x3f | uVar3 << 6;
                    if (bVar24) {
                      local_f0 = pbVar17 + 3;
                      if ((*local_f0 & 0xffffffc0) != 0x80) goto LAB_004a354a;
                      uVar3 = uVar3 << 6 | *local_f0 & 0x3f;
                    }
                    goto LAB_004a3545;
                  }
                }
                else {
LAB_004a3545:
                  local_f0 = pbVar16;
                }
LAB_004a354a:
                uVar21 = 0x30;
                pbVar17 = &DAT_005e5e52;
                while( true ) {
                  pbVar16 = pbVar17 + 1;
                  if ((char)uVar21 < '\0') {
                    if ((uVar21 & 0x40) == 0) {
                      uVar21 = uVar21 & 0x7f;
                    }
                    else {
                      if ((uVar21 & 0x20) == 0) {
                        uVar11 = 0x3f;
                        lVar4 = 0;
                        bVar25 = false;
                        bVar24 = false;
                      }
                      else {
                        bVar25 = true;
                        if ((uVar21 & 0x10) == 0) {
                          uVar11 = 0x1f;
                          lVar4 = 1;
                          bVar24 = false;
                        }
                        else {
                          uVar11 = 0xf;
                          lVar4 = 2;
                          bVar24 = true;
                        }
                      }
                      uVar21 = uVar21 & uVar11;
                      if ((pbVar17[1] & 0xc0) == 0x80) {
                        pbVar19 = pbVar17 + lVar4 + 2;
                        uVar21 = pbVar17[1] & 0x3f | uVar21 << 6;
                        pbVar16 = pbVar19;
                        if (bVar25) {
                          bVar18 = pbVar17[2];
                          pbVar16 = pbVar17 + 2;
                          if ((bVar18 & 0xc0) == 0x80) {
                            uVar21 = bVar18 & 0x3f | uVar21 << 6;
                            pbVar16 = pbVar19;
                            if (bVar24) {
                              uVar11 = (uint)pbVar17[3];
                              pbVar16 = pbVar17 + 3;
                              if ((uVar11 & 0xffffffc0) == 0x80) {
                                uVar21 = uVar21 << 6 | uVar11 & 0x3f;
                                pbVar16 = pbVar19;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  pbVar17 = pbVar16;
                  if (uVar21 == uVar3) break;
                  uVar21 = (uint)*pbVar17;
                  if (*pbVar17 == 0) {
                    bVar24 = false;
                    goto joined_r0x004a40d2;
                  }
                }
                bVar18 = *local_f0;
                pbVar17 = local_f0;
              } while (bVar18 != 0);
              bVar24 = true;
            }
joined_r0x004a40d2:
            if ((undefined1 *)local_c8.tv_sec != &DAT_0061ac58) {
              pbVar17 = (byte *)(local_c8.tv_sec + -0x10);
              LOCK();
              iVar10 = *(int *)pbVar17;
              *(int *)pbVar17 = *(int *)pbVar17 + -1;
              UNLOCK();
              if (iVar10 == 0) {
                operator_delete__(pbVar17);
              }
            }
            bVar25 = true;
            if (bVar24) {
                    /* try { // try from 004a3f62 to 004a3f77 has its CatchHandler @ 004a40e5 */
              juce::String::substring(&local_c8.tv_sec,&local_108,local_44,iVar8);
              _Var1 = local_c8.tv_sec;
              uVar9 = strtol((char *)local_c8.tv_sec,(char **)0x0,10);
              pbVar17 = (byte *)(_Var1 + -0x10);
              if (pbVar17 != (byte *)&emptyString) {
                LOCK();
                iVar8 = *(int *)pbVar17;
                *(int *)pbVar17 = *(int *)pbVar17 + -1;
                UNLOCK();
                if (iVar8 == 0) {
                  operator_delete__(pbVar17);
                }
              }
              pbVar17 = local_108;
              pbVar16 = local_108;
              do {
                bVar18 = *pbVar16;
                if (bVar18 == 0) {
                  if (local_108 != &DAT_0061ac58) {
                    LOCK();
                    *(int *)(local_108 + -0x10) = *(int *)(local_108 + -0x10) + 1;
                    UNLOCK();
                  }
                  pbVar16 = local_108;
                  goto LAB_004a4058;
                }
                pbVar19 = pbVar16 + 1;
                if (((char)bVar18 < '\0') && ((bVar18 & 0x40) != 0)) {
                  if ((bVar18 & 0x20) == 0) {
                    pbVar19 = pbVar16 + 2;
                  }
                  else {
                    pbVar19 = pbVar16 + (4 - (ulong)((bVar18 & 0x10) == 0));
                  }
                }
                iVar20 = iVar20 + -1;
                pbVar16 = pbVar19;
              } while (iVar20 != 0);
              pbVar16 = &DAT_0061ac58;
              if ((local_108 != (byte *)0x0) && (*local_108 != 0)) {
                sVar14 = (long)pbVar19 - (long)local_108;
                uVar22 = sVar14 + 4 & 0xfffffffffffffffc;
                    /* try { // try from 004a402c to 004a4030 has its CatchHandler @ 004a40dd */
                puVar5 = operator_new__(uVar22 + 0x17);
                LOCK();
                *puVar5 = 0;
                UNLOCK();
                *(ulong *)(puVar5 + 2) = uVar22;
                memcpy(puVar5 + 4,pbVar17,sVar14);
                *(undefined1 *)((long)puVar5 + sVar14 + 0x10) = 0;
                pbVar16 = (byte *)(puVar5 + 4);
              }
LAB_004a4058:
              pbVar17 = local_108 + -0x10;
              local_108 = pbVar16;
              if (pbVar17 == (byte *)&emptyString) {
                bVar25 = true;
              }
              else {
                LOCK();
                iVar20 = *(int *)pbVar17;
                *(int *)pbVar17 = *(int *)pbVar17 + -1;
                UNLOCK();
                bVar25 = true;
                if (iVar20 == 0) {
                  operator_delete__(pbVar17);
                }
              }
            }
          }
        }
      }
      else {
        uVar9 = 1;
        bVar25 = false;
      }
LAB_004a36c0:
      local_70 = local_108;
      pbVar17 = local_108 + -0x10;
      if (pbVar17 != (byte *)&emptyString) {
        LOCK();
        *(int *)pbVar17 = *(int *)pbVar17 + 1;
        UNLOCK();
      }
      uVar3 = (uint)uVar9;
      if (!bVar25) {
        bVar18 = *local_108;
        if (bVar18 != 0) {
          iVar8 = 0;
          iVar10 = 1;
          iVar20 = 0;
          pbVar17 = local_108;
          bVar12 = bVar18;
          do {
            pbVar16 = pbVar17 + 1;
            if ((char)bVar12 < '\0') {
              do {
                bVar12 = pbVar17[1];
                pbVar16 = pbVar17 + 1;
                pbVar17 = pbVar16;
              } while ((bVar12 & 0xc0) == 0x80);
            }
            else {
              if (bVar12 == 0) goto LAB_004a37d0;
              bVar12 = *pbVar16;
            }
            iVar20 = iVar20 + 1;
            iVar8 = iVar8 + 1;
            iVar10 = iVar10 + -1;
            pbVar17 = pbVar16;
          } while( true );
        }
        __wc = 0;
        goto LAB_004a38c1;
      }
      local_c8.tv_sec._0_2_ = 0x28;
      sVar14 = strlen((char *)&local_c8);
                    /* try { // try from 004a36fb to 004a3987 has its CatchHandler @ 004a4220 */
      juce::String::appendCharPointer
                ((String *)&local_70,&local_c8,(long)(local_b8 + (sVar14 - 0x10)));
      uVar21 = uVar3 + 1;
      if ((int)uVar3 < -1) {
        pbVar17 = (byte *)((long)&local_c8.tv_nsec + 6);
        uVar21 = ~uVar3;
        do {
          *pbVar17 = (char)uVar21 + (char)(uVar21 / 10) * -10 | 0x30;
          pbVar17 = pbVar17 + -1;
          bVar24 = 9 < uVar21;
          uVar21 = uVar21 / 10;
        } while (bVar24);
        *pbVar17 = 0x2d;
      }
      else {
        pbVar17 = (byte *)((long)&local_c8.tv_nsec + 7);
        do {
          pbVar17[-1] = (char)uVar21 + (char)(uVar21 / 10) * -10 | 0x30;
          pbVar17 = pbVar17 + -1;
          bVar24 = 9 < uVar21;
          uVar21 = uVar21 / 10;
        } while (bVar24);
      }
      local_c8.tv_nsec = local_c8.tv_nsec & 0xffffffffffffff;
      juce::String::appendCharPointer((String *)&local_70,pbVar17,(long)local_b8);
      local_c8.tv_sec = CONCAT62(local_c8.tv_sec._2_6_,0x29);
      sVar14 = strlen((char *)&local_c8);
      juce::String::appendCharPointer
                ((String *)&local_70,&local_c8,(long)(local_b8 + (sVar14 - 0x10)));
      goto LAB_004a3988;
    }
  }
LAB_004a3c11:
  pbVar17 = local_e8 + -0x10;
  if (pbVar17 != (byte *)&emptyString) {
    LOCK();
    iVar20 = *(int *)pbVar17;
    *(int *)pbVar17 = *(int *)pbVar17 + -1;
    UNLOCK();
    if (iVar20 == 0) {
      operator_delete__(pbVar17);
    }
  }
  pbVar17 = local_d8 + -0x10;
  if (pbVar17 != (byte *)&emptyString) {
    LOCK();
    iVar20 = *(int *)pbVar17;
    *(int *)pbVar17 = *(int *)pbVar17 + -1;
    UNLOCK();
    if (iVar20 == 0) {
      operator_delete__(pbVar17);
    }
  }
  piVar7 = local_68 + -4;
  if (piVar7 != &emptyString) {
    LOCK();
    iVar20 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar20 == 0) {
      operator_delete__(piVar7);
    }
  }
  pbVar17 = local_60 + -0x10;
  if (pbVar17 != (byte *)&emptyString) {
    LOCK();
    iVar20 = *(int *)pbVar17;
    *(int *)pbVar17 = *(int *)pbVar17 + -1;
    UNLOCK();
    if (iVar20 == 0) {
      operator_delete__(pbVar17);
    }
  }
  pbVar17 = local_e0 + -0x10;
  if (pbVar17 != (byte *)&emptyString) {
    LOCK();
    iVar20 = *(int *)pbVar17;
    *(int *)pbVar17 = *(int *)pbVar17 + -1;
    UNLOCK();
    if (iVar20 == 0) {
      operator_delete__(pbVar17);
    }
  }
  local_d0 = local_d0 + -0x10;
  if (local_d0 != (byte *)&emptyString) {
    LOCK();
    iVar20 = *(int *)local_d0;
    *(int *)local_d0 = *(int *)local_d0 + -1;
    UNLOCK();
    if (iVar20 == 0) {
      operator_delete__(local_d0);
    }
  }
  local_f8 = *(long *)this;
  piVar7 = (int *)(local_f8 + -0x10);
  if (piVar7 != &emptyString) {
    LOCK();
    *piVar7 = *piVar7 + 1;
    UNLOCK();
  }
                    /* try { // try from 004a3d1e to 004a3d31 has its CatchHandler @ 004a41b2 */
  FileOutputStream::FileOutputStream((FileOutputStream *)&local_c8,(long *)&local_100,0x2000);
  if (*local_a8 == '\0') {
                    /* try { // try from 004a3d3c to 004a3d55 has its CatchHandler @ 004a410f */
    FileOutputStream::write((FileOutputStream *)&local_c8,local_40,local_38);
  }
  FileOutputStream::~FileOutputStream((FileOutputStream *)&local_c8);
  if (*local_100 != 0) {
    uVar9 = 0;
    iVar20 = access((char *)local_100,0);
    if (iVar20 != 0) goto LAB_004a3ec4;
                    /* try { // try from 004a3d84 to 004a3d90 has its CatchHandler @ 004a41b2 */
    uVar22 = replaceFileIn((File *)&local_100,(File *)&local_f8);
    uVar9 = 1;
    if ((char)uVar22 != '\0') goto LAB_004a3ec4;
    local_c8.tv_sec = (__time_t)ram0x005de300;
    local_c8.tv_nsec = _UNK_005de308;
    do {
                    /* try { // try from 004a3db0 to 004a3dba has its CatchHandler @ 004a41b4 */
      iVar20 = nanosleep(&local_c8,&local_c8);
      if (iVar20 != -1) break;
      piVar7 = __errno_location();
    } while (*piVar7 == 4);
                    /* try { // try from 004a3dca to 004a3dd6 has its CatchHandler @ 004a41b2 */
    uVar22 = replaceFileIn((File *)&local_100,(File *)&local_f8);
    if ((char)uVar22 != '\0') goto LAB_004a3ec4;
    local_c8.tv_sec = (__time_t)ram0x005de300;
    local_c8.tv_nsec = _UNK_005de308;
    do {
                    /* try { // try from 004a3df0 to 004a3dfa has its CatchHandler @ 004a412e */
      iVar20 = nanosleep(&local_c8,&local_c8);
      if (iVar20 != -1) break;
      piVar7 = __errno_location();
    } while (*piVar7 == 4);
                    /* try { // try from 004a3e0a to 004a3e16 has its CatchHandler @ 004a41b2 */
    uVar22 = replaceFileIn((File *)&local_100,(File *)&local_f8);
    if ((char)uVar22 != '\0') goto LAB_004a3ec4;
    local_c8.tv_sec = (__time_t)ram0x005de300;
    local_c8.tv_nsec = _UNK_005de308;
    do {
                    /* try { // try from 004a3e30 to 004a3e3a has its CatchHandler @ 004a4129 */
      iVar20 = nanosleep(&local_c8,&local_c8);
      if (iVar20 != -1) break;
      piVar7 = __errno_location();
    } while (*piVar7 == 4);
                    /* try { // try from 004a3e4a to 004a3e56 has its CatchHandler @ 004a41b2 */
    uVar22 = replaceFileIn((File *)&local_100,(File *)&local_f8);
    if ((char)uVar22 != '\0') goto LAB_004a3ec4;
    local_c8.tv_sec = (__time_t)ram0x005de300;
    local_c8.tv_nsec = _UNK_005de308;
    do {
                    /* try { // try from 004a3e6c to 004a3e76 has its CatchHandler @ 004a410a */
      iVar20 = nanosleep(&local_c8,&local_c8);
      if (iVar20 != -1) break;
      piVar7 = __errno_location();
    } while (*piVar7 == 4);
                    /* try { // try from 004a3e86 to 004a3e92 has its CatchHandler @ 004a41b2 */
    uVar22 = replaceFileIn((File *)&local_100,(File *)&local_f8);
    if ((char)uVar22 != '\0') goto LAB_004a3ec4;
    local_c8.tv_sec = (__time_t)ram0x005de300;
    local_c8.tv_nsec = _UNK_005de308;
    do {
                    /* try { // try from 004a3ea8 to 004a3eb2 has its CatchHandler @ 004a40fd */
      iVar20 = nanosleep(&local_c8,&local_c8);
      if (iVar20 != -1) break;
      piVar7 = __errno_location();
    } while (*piVar7 == 4);
  }
  uVar9 = 0;
LAB_004a3ec4:
                    /* try { // try from 004a3ec4 to 004a3ecd has its CatchHandler @ 004a4133 */
  TemporaryFile::deleteTemporaryFile((TemporaryFile *)&local_100);
  piVar7 = (int *)(local_f8 + -0x10);
  if (piVar7 != &emptyString) {
    LOCK();
    iVar20 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar20 == 0) {
      operator_delete__(piVar7);
    }
  }
  pbVar17 = local_100 + -0x10;
  if (pbVar17 != (byte *)&emptyString) {
    LOCK();
    iVar20 = *(int *)pbVar17;
    *(int *)pbVar17 = *(int *)pbVar17 + -1;
    UNLOCK();
    if (iVar20 == 0) {
      operator_delete__(pbVar17);
    }
  }
  return uVar9;
LAB_004a37d0:
  pbVar17 = local_108;
  if (iVar20 < 1) {
    do {
      bVar18 = pbVar17[-1];
      if ((bVar18 & 0xc0) == 0x80) {
        bVar18 = pbVar17[-2];
        if ((bVar18 & 0xc0) == 0x80) {
          bVar18 = pbVar17[-3];
          if ((bVar18 & 0xc0) == 0x80) {
            bVar18 = pbVar17[-4];
            pbVar17 = pbVar17 + -4;
          }
          else {
            pbVar17 = pbVar17 + -3;
          }
        }
        else {
          pbVar17 = pbVar17 + -2;
        }
      }
      else {
        pbVar17 = pbVar17 + -1;
      }
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  else {
    pbVar16 = local_108;
    if (iVar20 != 1) {
      do {
        pbVar17 = pbVar16 + 1;
        if (((char)bVar18 < '\0') && ((bVar18 & 0x40) != 0)) {
          if ((bVar18 & 0x20) == 0) {
            pbVar17 = pbVar16 + 2;
          }
          else {
            pbVar17 = pbVar16 + (4 - (ulong)((bVar18 & 0x10) == 0));
          }
        }
        bVar18 = *pbVar17;
        iVar8 = iVar8 + -1;
        pbVar16 = pbVar17;
      } while (1 < iVar8);
    }
  }
  __wc = (wint_t)bVar18;
  if ((char)bVar18 < '\0') {
    if ((bVar18 & 0x40) == 0) {
      __wc = bVar18 & 0x7f;
    }
    else {
      uVar21 = __wc & 0x10 ^ 0x1f;
      if ((bVar18 & 0x20) == 0) {
        uVar21 = 0x3f;
      }
      __wc = __wc & uVar21;
      if (((((pbVar17[1] & 0xffffffc0) == 0x80) &&
           (__wc = pbVar17[1] & 0x3f | __wc << 6, (bVar18 & 0x20) != 0)) &&
          ((pbVar17[2] & 0xffffffc0) == 0x80)) &&
         ((__wc = pbVar17[2] & 0x3f | __wc << 6, (bVar18 >> 5 & (bVar18 & 0x10) == 0) == 0 &&
          ((pbVar17[3] & 0xffffffc0) == 0x80)))) {
        __wc = __wc << 6 | pbVar17[3] & 0x3f;
      }
    }
  }
LAB_004a38c1:
  iVar20 = iswdigit(__wc);
  if (iVar20 != 0) {
    local_c8.tv_sec = CONCAT62(local_c8.tv_sec._2_6_,0x5f);
    sVar14 = strlen((char *)&local_c8);
    juce::String::appendCharPointer
              ((String *)&local_70,&local_c8,(long)(local_b8 + (sVar14 - 0x10)));
  }
  uVar21 = uVar3 + 1;
  if ((int)uVar3 < -1) {
    pbVar17 = (byte *)((long)&local_c8.tv_nsec + 6);
    uVar21 = ~uVar3;
    do {
      *pbVar17 = (char)uVar21 + (char)(uVar21 / 10) * -10 | 0x30;
      pbVar17 = pbVar17 + -1;
      bVar24 = 9 < uVar21;
      uVar21 = uVar21 / 10;
    } while (bVar24);
    *pbVar17 = 0x2d;
  }
  else {
    pbVar17 = (byte *)((long)&local_c8.tv_nsec + 7);
    do {
      pbVar17[-1] = (char)uVar21 + (char)(uVar21 / 10) * -10 | 0x30;
      pbVar17 = pbVar17 + -1;
      bVar24 = 9 < uVar21;
      uVar21 = uVar21 / 10;
    } while (bVar24);
  }
  local_c8.tv_nsec = local_c8.tv_nsec & 0xffffffffffffff;
  juce::String::appendCharPointer((String *)&local_70,pbVar17,(long)local_b8);
LAB_004a3988:
  uVar9 = (ulong)(uVar3 + 1);
  local_58 = local_70;
  pbVar17 = local_70 + -0x10;
  if (pbVar17 != (byte *)&emptyString) {
    LOCK();
    *(int *)pbVar17 = *(int *)pbVar17 + 1;
    UNLOCK();
  }
                    /* try { // try from 004a39af to 004a39c0 has its CatchHandler @ 004a41f1 */
  pSVar6 = juce::String::operator+=((String *)&local_58,(String *)&local_e8);
  pbVar16 = *(byte **)pSVar6;
  pbVar17 = pbVar16 + -0x10;
  if (pbVar17 != (byte *)&emptyString) {
    LOCK();
    *(int *)pbVar17 = *(int *)pbVar17 + 1;
    UNLOCK();
  }
                    /* try { // try from 004a39da to 004a39e6 has its CatchHandler @ 004a41c9 */
  getChildFile((File *)&local_c8,&local_d0,pbVar16);
  _Var1 = local_c8.tv_sec;
  pbVar16 = local_100;
  local_100 = (byte *)local_c8.tv_sec;
  local_c8.tv_sec = (__time_t)pbVar16;
  pbVar19 = pbVar16 + -0x10;
  if (pbVar19 != (byte *)&emptyString) {
    LOCK();
    iVar20 = *(int *)pbVar19;
    *(int *)pbVar19 = *(int *)pbVar19 + -1;
    UNLOCK();
    if (iVar20 == 0) {
      operator_delete__(pbVar19);
    }
  }
  if (pbVar17 != (byte *)&emptyString) {
    LOCK();
    iVar20 = *(int *)pbVar17;
    *(int *)pbVar17 = *(int *)pbVar17 + -1;
    UNLOCK();
    if (iVar20 == 0) {
      operator_delete__(pbVar17);
    }
  }
  pbVar17 = local_58 + -0x10;
  if (pbVar17 != (byte *)&emptyString) {
    LOCK();
    iVar20 = *(int *)pbVar17;
    *(int *)pbVar17 = *(int *)pbVar17 + -1;
    UNLOCK();
    if (iVar20 == 0) {
      operator_delete__(pbVar17);
    }
  }
  pbVar17 = local_70 + -0x10;
  if (pbVar17 != (byte *)&emptyString) {
    LOCK();
    iVar20 = *(int *)pbVar17;
    *(int *)pbVar17 = *(int *)pbVar17 + -1;
    UNLOCK();
    if (iVar20 == 0) {
      operator_delete__(pbVar17);
    }
  }
  if ((*local_100 == 0) || (iVar20 = access((char *)local_100,0), iVar20 != 0)) goto LAB_004a3be3;
  goto LAB_004a36c0;
LAB_004a3be3:
  pbVar17 = local_108 + -0x10;
  if (pbVar17 != (byte *)&emptyString) {
    LOCK();
    iVar20 = *(int *)pbVar17;
    *(int *)pbVar17 = *(int *)pbVar17 + -1;
    UNLOCK();
    if (iVar20 == 0) {
      operator_delete__(pbVar17);
    }
  }
  this = local_78;
  goto LAB_004a3c11;
}


