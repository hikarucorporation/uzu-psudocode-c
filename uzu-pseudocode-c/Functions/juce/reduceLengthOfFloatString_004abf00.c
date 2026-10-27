// Function : reduceLengthOfFloatString
// Namespace: juce
// Entry    : 004abf00
// Prototype: undefined reduceLengthOfFloatString(juce * this, byte * param_1)
// Body     : 004abf00 - 004acb6c


/* juce::reduceLengthOfFloatString(juce::String const&) */

void __thiscall juce::reduceLengthOfFloatString(juce *this,byte *param_1)

{
  int iVar1;
  byte *pbVar2;
  long lVar3;
  String *pSVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  byte *pbVar13;
  ulong uVar14;
  uint uVar15;
  undefined4 *puVar16;
  byte *pbVar17;
  byte *pbVar18;
  uint uVar19;
  byte *pbVar20;
  byte *pbVar21;
  size_t sVar22;
  byte *__src;
  bool bVar23;
  undefined4 *local_80;
  byte *local_78;
  juce *local_70;
  undefined4 *local_68;
  undefined4 *local_60;
  long local_58;
  undefined4 *local_50;
  undefined4 *local_48;
  undefined4 *local_40;
  undefined4 *local_38;
  
  iVar1 = 0;
  iVar8 = 1;
  iVar11 = 0;
  pbVar17 = param_1;
  do {
    bVar10 = *pbVar17;
    if ((char)bVar10 < '\0') {
      do {
        pbVar2 = pbVar17 + 1;
        pbVar17 = pbVar17 + 1;
      } while ((*pbVar2 & 0xc0) == 0x80);
    }
    else {
      pbVar17 = pbVar17 + 1;
      if (bVar10 == 0) break;
    }
    iVar11 = iVar11 + 1;
    iVar1 = iVar1 + -1;
    iVar8 = iVar8 + 1;
  } while( true );
  pbVar17 = param_1;
  if (iVar11 < 0) {
    do {
      if ((pbVar17[-1] & 0xc0) == 0x80) {
        if ((pbVar17[-2] & 0xc0) == 0x80) {
          if ((pbVar17[-3] & 0xc0) == 0x80) {
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
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  else if (iVar11 != 0) {
    do {
      bVar10 = *pbVar17;
      pbVar2 = pbVar17 + 1;
      if (((char)bVar10 < '\0') && ((bVar10 & 0x40) != 0)) {
        if ((bVar10 & 0x20) == 0) {
          pbVar2 = pbVar17 + 2;
        }
        else {
          pbVar2 = pbVar17 + (4 - (ulong)((bVar10 & 0x10) == 0));
        }
      }
      pbVar17 = pbVar2;
      iVar8 = iVar8 + -1;
    } while (1 < iVar8);
  }
  bVar10 = pbVar17[-1];
  if ((bVar10 & 0xc0) == 0x80) {
    bVar10 = pbVar17[-2];
    if ((bVar10 & 0xc0) == 0x80) {
      bVar10 = pbVar17[-3];
      if ((bVar10 & 0xc0) == 0x80) {
        pbVar2 = pbVar17 + -4;
        bVar10 = pbVar17[-4];
      }
      else {
        pbVar2 = pbVar17 + -3;
      }
    }
    else {
      pbVar2 = pbVar17 + -2;
    }
  }
  else {
    pbVar2 = pbVar17 + -1;
  }
  uVar19 = 0;
  pbVar13 = pbVar17;
  pbVar20 = pbVar17;
  pbVar18 = pbVar17;
  __src = pbVar17;
  if (param_1 < pbVar2) {
    pbVar21 = pbVar17;
    do {
      uVar19 = (uint)bVar10;
      if ((char)bVar10 < '\0') {
        if ((bVar10 & 0x40) == 0) {
          uVar19 = uVar19 & 0x7f;
        }
        else {
          uVar19 = uVar19 & 0x10 ^ 0x1f;
          if ((bVar10 & 0x20) == 0) {
            uVar19 = 0x3f;
          }
          uVar19 = uVar19 & bVar10;
          if (((((pbVar2[1] & 0xffffffc0) == 0x80) &&
               (uVar19 = pbVar2[1] & 0x3f | uVar19 << 6, (bVar10 & 0x20) != 0)) &&
              ((pbVar2[2] & 0xffffffc0) == 0x80)) &&
             ((uVar19 = pbVar2[2] & 0x3f | uVar19 << 6, (bVar10 >> 5 & (bVar10 & 0x10) == 0) == 0 &&
              ((pbVar2[3] & 0xffffffc0) == 0x80)))) {
            uVar19 = uVar19 << 6 | pbVar2[3] & 0x3f;
          }
        }
      }
      if (uVar19 == 0x30) {
        pbVar18 = pbVar2 + 1;
        if (((char)bVar10 < '\0') && ((bVar10 & 0x40) != 0)) {
          if ((bVar10 & 0x20) == 0) {
            pbVar18 = pbVar2 + 2;
          }
          else {
            pbVar18 = pbVar2 + (4 - (ulong)((bVar10 & 0x10) == 0));
          }
        }
        if (pbVar18 == pbVar21) {
          if ((pbVar21[-1] & 0xc0) == 0x80) {
            if ((pbVar21[-2] & 0xc0) == 0x80) {
              pbVar18 = pbVar21 + -3;
              pbVar9 = pbVar21 + -3;
              pbVar21 = pbVar21 + -4;
              if ((*pbVar9 & 0xc0) != 0x80) {
                pbVar21 = pbVar18;
              }
            }
            else {
              pbVar21 = pbVar21 + -2;
            }
          }
          else {
            pbVar21 = pbVar21 + -1;
          }
        }
      }
      else {
        if (uVar19 == 0x2e) {
          pbVar9 = pbVar2 + 1;
          if (((char)bVar10 < '\0') && ((bVar10 & 0x40) != 0)) {
            if ((bVar10 & 0x20) == 0) {
              pbVar9 = pbVar2 + 2;
            }
            else {
              pbVar9 = pbVar2 + (4 - (ulong)((bVar10 & 0x10) == 0));
            }
          }
          uVar19 = 0x2e;
          pbVar18 = pbVar21;
          if ((pbVar21 == pbVar9) && (pbVar21 != pbVar17)) {
            bVar10 = *pbVar21;
            uVar12 = (uint)bVar10;
            if ((char)bVar10 < '\0') {
              if ((bVar10 & 0x40) == 0) {
                uVar12 = bVar10 & 0x7f;
              }
              else {
                uVar15 = 0x3f;
                if ((bVar10 & 0x20) != 0) {
                  uVar15 = uVar12 & 0x10 ^ 0x1f;
                }
                uVar12 = uVar15 & bVar10;
                if (((((pbVar21[1] & 0xffffffc0) == 0x80) &&
                     (uVar12 = pbVar21[1] & 0x3f | uVar12 << 6, (bVar10 & 0x20) != 0)) &&
                    ((pbVar21[2] & 0xffffffc0) == 0x80)) &&
                   ((uVar12 = pbVar21[2] & 0x3f | uVar12 << 6,
                    (bVar10 >> 5 & (bVar10 & 0x10) == 0) == 0 && ((pbVar21[3] & 0xffffffc0) == 0x80)
                    ))) {
                  uVar12 = uVar12 << 6 | pbVar21[3] & 0x3f;
                }
              }
            }
            if (((uVar12 == 0x30) && (pbVar18 = pbVar21 + 1, (char)bVar10 < '\0')) &&
               ((bVar10 & 0x40) != 0)) {
              if ((bVar10 & 0x20) == 0) {
                pbVar18 = pbVar21 + 2;
              }
              else {
                pbVar18 = pbVar21 + (4 - (ulong)((bVar10 & 0x10) == 0));
              }
            }
          }
          break;
        }
        if ((uVar19 & 0xffffffdf) != 0x45) goto LAB_004ac4af;
        pbVar18 = pbVar2 + 1;
        if (((char)bVar10 < '\0') && ((bVar10 & 0x40) != 0)) {
          if ((bVar10 & 0x20) == 0) {
            pbVar18 = pbVar2 + 2;
          }
          else {
            pbVar18 = pbVar2 + (4 - (ulong)((bVar10 & 0x10) == 0));
          }
        }
        if (pbVar18 != pbVar17) {
          bVar10 = *pbVar18;
          uVar12 = (uint)bVar10;
          if ((char)bVar10 < '\0') {
            if ((bVar10 & 0x40) == 0) {
              uVar12 = uVar12 & 0x7f;
            }
            else {
              uVar12 = uVar12 & 0x10 ^ 0x1f;
              if ((bVar10 & 0x20) == 0) {
                uVar12 = 0x3f;
              }
              uVar12 = uVar12 & bVar10;
              if (((((pbVar18[1] & 0xc0) == 0x80) &&
                   (uVar12 = pbVar18[1] & 0x3f | uVar12 << 6, (bVar10 & 0x20) != 0)) &&
                  ((pbVar18[2] & 0xffffffc0) == 0x80)) &&
                 ((uVar12 = pbVar18[2] & 0x3f | uVar12 << 6,
                  (bVar10 >> 5 & (bVar10 & 0x10) == 0) == 0 && ((pbVar18[3] & 0xffffffc0) == 0x80)))
                 ) {
                uVar12 = uVar12 << 6 | pbVar18[3] & 0x3f;
              }
            }
          }
          if (uVar12 == 0x2d) {
            pbVar13 = pbVar18 + 1;
            if (((char)bVar10 < '\0') && ((bVar10 & 0x40) != 0)) {
              if ((bVar10 & 0x20) == 0) {
                pbVar18 = pbVar18 + 2;
              }
              else {
                pbVar18 = pbVar18 + (4 - (ulong)((bVar10 & 0x10) == 0));
              }
              goto LAB_004ac2c9;
            }
          }
          else {
LAB_004ac2c9:
            pbVar13 = pbVar18;
          }
          pbVar20 = pbVar17;
          __src = pbVar17;
          if (pbVar13 != pbVar17) {
            bVar10 = *pbVar13;
            uVar12 = (uint)bVar10;
            if ((char)bVar10 < '\0') {
              if ((bVar10 & 0x40) == 0) {
                uVar12 = uVar12 & 0x7f;
              }
              else {
                uVar12 = uVar12 & 0x10 ^ 0x1f;
                if ((bVar10 & 0x20) == 0) {
                  uVar12 = 0x3f;
                }
                uVar12 = uVar12 & bVar10;
                if (((((pbVar13[1] & 0xc0) == 0x80) &&
                     (uVar12 = pbVar13[1] & 0x3f | uVar12 << 6, (bVar10 & 0x20) != 0)) &&
                    ((pbVar13[2] & 0xc0) == 0x80)) &&
                   ((uVar12 = pbVar13[2] & 0x3f | uVar12 << 6,
                    (bVar10 >> 5 & (bVar10 & 0x10) == 0) == 0 && ((pbVar13[3] & 0xffffffc0) == 0x80)
                    ))) {
                  uVar12 = uVar12 << 6 | pbVar13[3] & 0x3f;
                }
              }
            }
            pbVar18 = pbVar13;
            if (((uVar12 == 0x2b) && (pbVar18 = pbVar13 + 1, (char)bVar10 < '\0')) &&
               ((bVar10 & 0x40) != 0)) {
              if ((bVar10 & 0x20) == 0) {
                pbVar18 = pbVar13 + 2;
              }
              else {
                pbVar18 = pbVar13 + (4 - (ulong)((bVar10 & 0x10) == 0));
              }
            }
            do {
              __src = pbVar18;
              pbVar20 = pbVar13;
              if (__src == pbVar17) {
                __src = pbVar17;
                goto LAB_004ac49f;
              }
              pbVar18 = __src + 1;
              bVar10 = *__src;
              uVar12 = (uint)bVar10;
              if ((char)bVar10 < '\0') {
                uVar12 = (uint)bVar10;
                if ((bVar10 & 0x40) == 0) {
                  uVar12 = uVar12 & 0x7f;
                }
                else {
                  bVar23 = (bVar10 & 0x10) == 0;
                  lVar3 = 4 - (ulong)bVar23;
                  uVar15 = uVar12 & 0x10 ^ 0x1f;
                  if ((bVar10 & 0x20) == 0) {
                    lVar3 = 2;
                    uVar15 = 0x3f;
                  }
                  pbVar18 = __src + lVar3;
                  uVar12 = uVar15 & uVar12;
                  if (((((__src[1] & 0xc0) == 0x80) &&
                       (uVar12 = __src[1] & 0x3f | uVar12 << 6, (bVar10 & 0x20) != 0)) &&
                      ((__src[2] & 0xc0) == 0x80)) &&
                     ((uVar12 = __src[2] & 0x3f | uVar12 << 6, (bVar10 >> 5 & bVar23) == 0 &&
                      ((__src[3] & 0xffffffc0) == 0x80)))) {
                    uVar12 = uVar12 << 6 | __src[3] & 0x3f;
                  }
                }
              }
            } while (uVar12 == 0x30);
          }
        }
LAB_004ac49f:
        if (__src == pbVar17) {
          pbVar20 = pbVar2;
        }
        pbVar13 = pbVar2;
        pbVar21 = pbVar2;
      }
LAB_004ac4af:
      bVar10 = pbVar2[-1];
      if ((bVar10 & 0xc0) == 0x80) {
        bVar10 = pbVar2[-2];
        if ((bVar10 & 0xc0) == 0x80) {
          bVar10 = pbVar2[-3];
          if ((bVar10 & 0xc0) == 0x80) {
            bVar10 = pbVar2[-4];
            pbVar2 = pbVar2 + -4;
          }
          else {
            pbVar2 = pbVar2 + -3;
          }
        }
        else {
          pbVar2 = pbVar2 + -2;
        }
      }
      else {
        pbVar2 = pbVar2 + -1;
      }
      pbVar18 = pbVar21;
    } while (param_1 < pbVar2);
  }
  if ((pbVar18 == pbVar13 || uVar19 != 0x2e) && (pbVar20 == __src)) {
    *(byte **)this = param_1;
    pbVar17 = param_1 + -0x10;
    if (pbVar17 != (byte *)&emptyString) {
      LOCK();
      *(int *)pbVar17 = *(int *)pbVar17 + 1;
      UNLOCK();
    }
  }
  else {
    local_70 = this;
    if (pbVar18 == pbVar13) {
      puVar6 = (undefined4 *)&DAT_0061ac58;
      puVar16 = (undefined4 *)&DAT_0061ac58;
      if ((param_1 != (byte *)0x0) && (puVar16 = (undefined4 *)&DAT_0061ac58, *param_1 != 0)) {
        sVar22 = (long)pbVar20 - (long)param_1;
        uVar14 = sVar22 + 4 & 0xfffffffffffffffc;
        local_78 = param_1;
        puVar7 = operator_new__(uVar14 + 0x17);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(ulong *)(puVar7 + 2) = uVar14;
        puVar16 = puVar7 + 4;
        memcpy(puVar16,local_78,sVar22);
        *(undefined1 *)((long)puVar7 + sVar22 + 0x10) = 0;
      }
      local_40 = puVar16;
      if ((__src != (byte *)0x0) && (*__src != 0)) {
        sVar22 = (long)pbVar17 - (long)__src;
        uVar14 = sVar22 + 4 & 0xfffffffffffffffc;
                    /* try { // try from 004ac8a2 to 004ac8a6 has its CatchHandler @ 004acbd0 */
        puVar16 = operator_new__(uVar14 + 0x17);
        LOCK();
        *puVar16 = 0;
        UNLOCK();
        *(ulong *)(puVar16 + 2) = uVar14;
        puVar6 = puVar16 + 4;
        memcpy(puVar6,__src,sVar22);
        *(undefined1 *)((long)puVar16 + sVar22 + 0x10) = 0;
      }
                    /* try { // try from 004ac8d3 to 004ac8e1 has its CatchHandler @ 004acc82 */
      local_80 = puVar6;
      pSVar4 = String::operator+=((String *)&local_40,(String *)&local_80);
      lVar3 = *(long *)pSVar4;
      *(long *)local_70 = lVar3;
      piVar5 = (int *)(lVar3 + -0x10);
      if (piVar5 != &emptyString) {
        LOCK();
        *piVar5 = *piVar5 + 1;
        UNLOCK();
      }
      piVar5 = local_80 + -4;
      if (piVar5 != &emptyString) {
        LOCK();
        iVar1 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          operator_delete__(piVar5);
        }
      }
      piVar5 = local_40 + -4;
      if (piVar5 == &emptyString) {
        return;
      }
    }
    else if (pbVar20 == __src) {
      puVar6 = (undefined4 *)&DAT_0061ac58;
      puVar16 = (undefined4 *)&DAT_0061ac58;
      if ((param_1 != (byte *)0x0) && (puVar16 = (undefined4 *)&DAT_0061ac58, *param_1 != 0)) {
        sVar22 = (long)pbVar18 - (long)param_1;
        uVar14 = sVar22 + 4 & 0xfffffffffffffffc;
        local_78 = param_1;
        puVar7 = operator_new__(uVar14 + 0x17);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(ulong *)(puVar7 + 2) = uVar14;
        puVar16 = puVar7 + 4;
        memcpy(puVar16,local_78,sVar22);
        *(undefined1 *)((long)puVar7 + sVar22 + 0x10) = 0;
      }
      local_48 = puVar16;
      if ((pbVar13 != (byte *)0x0) && (*pbVar13 != 0)) {
        sVar22 = (long)pbVar17 - (long)pbVar13;
        uVar14 = sVar22 + 4 & 0xfffffffffffffffc;
                    /* try { // try from 004ac9b3 to 004ac9b7 has its CatchHandler @ 004acb7a */
        puVar16 = operator_new__(uVar14 + 0x17);
        LOCK();
        *puVar16 = 0;
        UNLOCK();
        *(ulong *)(puVar16 + 2) = uVar14;
        puVar6 = puVar16 + 4;
        memcpy(puVar6,pbVar13,sVar22);
        *(undefined1 *)((long)puVar16 + sVar22 + 0x10) = 0;
      }
                    /* try { // try from 004ac9e4 to 004ac9f2 has its CatchHandler @ 004acbd8 */
      local_80 = puVar6;
      pSVar4 = String::operator+=((String *)&local_48,(String *)&local_80);
      lVar3 = *(long *)pSVar4;
      *(long *)local_70 = lVar3;
      piVar5 = (int *)(lVar3 + -0x10);
      if (piVar5 != &emptyString) {
        LOCK();
        *piVar5 = *piVar5 + 1;
        UNLOCK();
      }
      piVar5 = local_80 + -4;
      if (piVar5 != &emptyString) {
        LOCK();
        iVar1 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          operator_delete__(piVar5);
        }
      }
      piVar5 = local_48 + -4;
      if (piVar5 == &emptyString) {
        return;
      }
    }
    else if (pbVar13 == pbVar20) {
      puVar6 = (undefined4 *)&DAT_0061ac58;
      puVar16 = (undefined4 *)&DAT_0061ac58;
      if ((param_1 != (byte *)0x0) && (puVar16 = (undefined4 *)&DAT_0061ac58, *param_1 != 0)) {
        sVar22 = (long)pbVar18 - (long)param_1;
        uVar14 = sVar22 + 4 & 0xfffffffffffffffc;
        local_78 = param_1;
        puVar7 = operator_new__(uVar14 + 0x17);
        LOCK();
        *puVar7 = 0;
        UNLOCK();
        *(ulong *)(puVar7 + 2) = uVar14;
        puVar16 = puVar7 + 4;
        memcpy(puVar16,local_78,sVar22);
        *(undefined1 *)((long)puVar7 + sVar22 + 0x10) = 0;
      }
      local_50 = puVar16;
      if ((__src != (byte *)0x0) && (*__src != 0)) {
        sVar22 = (long)pbVar17 - (long)__src;
        uVar14 = sVar22 + 4 & 0xfffffffffffffffc;
                    /* try { // try from 004acabf to 004acac3 has its CatchHandler @ 004acb6d */
        puVar16 = operator_new__(uVar14 + 0x17);
        LOCK();
        *puVar16 = 0;
        UNLOCK();
        *(ulong *)(puVar16 + 2) = uVar14;
        puVar6 = puVar16 + 4;
        memcpy(puVar6,__src,sVar22);
        *(undefined1 *)((long)puVar16 + sVar22 + 0x10) = 0;
      }
                    /* try { // try from 004acaf0 to 004acafe has its CatchHandler @ 004acb9c */
      local_80 = puVar6;
      pSVar4 = String::operator+=((String *)&local_50,(String *)&local_80);
      lVar3 = *(long *)pSVar4;
      *(long *)local_70 = lVar3;
      piVar5 = (int *)(lVar3 + -0x10);
      if (piVar5 != &emptyString) {
        LOCK();
        *piVar5 = *piVar5 + 1;
        UNLOCK();
      }
      piVar5 = local_80 + -4;
      if (piVar5 != &emptyString) {
        LOCK();
        iVar1 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          operator_delete__(piVar5);
        }
      }
      piVar5 = local_50 + -4;
      if (piVar5 == &emptyString) {
        return;
      }
    }
    else {
      puVar16 = (undefined4 *)&DAT_0061ac58;
      if ((param_1 != (byte *)0x0) && (puVar16 = (undefined4 *)&DAT_0061ac58, *param_1 != 0)) {
        sVar22 = (long)pbVar18 - (long)param_1;
        uVar14 = sVar22 + 4 & 0xfffffffffffffffc;
        local_78 = param_1;
        local_38 = operator_new__(uVar14 + 0x17);
        LOCK();
        *local_38 = 0;
        UNLOCK();
        *(ulong *)(local_38 + 2) = uVar14;
        puVar16 = local_38 + 4;
        memcpy(puVar16,local_78,sVar22);
        *(undefined1 *)((long)local_38 + sVar22 + 0x10) = 0;
      }
      puVar6 = (undefined4 *)&DAT_0061ac58;
      local_60 = puVar16;
      if ((pbVar13 != (byte *)0x0) && (*pbVar13 != 0)) {
        sVar22 = (long)pbVar20 - (long)pbVar13;
        uVar14 = sVar22 + 4 & 0xfffffffffffffffc;
                    /* try { // try from 004ac6dc to 004ac6e0 has its CatchHandler @ 004acb8f */
        puVar16 = operator_new__(uVar14 + 0x17);
        LOCK();
        *puVar16 = 0;
        UNLOCK();
        *(ulong *)(puVar16 + 2) = uVar14;
        puVar6 = puVar16 + 4;
        memcpy(puVar6,pbVar13,sVar22);
        *(undefined1 *)((long)puVar16 + sVar22 + 0x10) = 0;
      }
                    /* try { // try from 004ac710 to 004ac71e has its CatchHandler @ 004acc51 */
      local_80 = puVar6;
      pSVar4 = String::operator+=((String *)&local_60,(String *)&local_80);
      local_58 = *(long *)pSVar4;
      piVar5 = (int *)(local_58 + -0x10);
      if (piVar5 != &emptyString) {
        LOCK();
        *piVar5 = *piVar5 + 1;
        UNLOCK();
      }
      puVar16 = (undefined4 *)&DAT_0061ac58;
      if ((__src != (byte *)0x0) && (*__src != 0)) {
        sVar22 = (long)pbVar17 - (long)__src;
        uVar14 = sVar22 + 4 & 0xfffffffffffffffc;
                    /* try { // try from 004ac75d to 004ac761 has its CatchHandler @ 004acb87 */
        puVar6 = operator_new__(uVar14 + 0x17);
        LOCK();
        *puVar6 = 0;
        UNLOCK();
        *(ulong *)(puVar6 + 2) = uVar14;
        puVar16 = puVar6 + 4;
        memcpy(puVar16,__src,sVar22);
        *(undefined1 *)((long)puVar6 + sVar22 + 0x10) = 0;
      }
                    /* try { // try from 004ac78e to 004ac79c has its CatchHandler @ 004acc0c */
      local_68 = puVar16;
      pSVar4 = String::operator+=((String *)&local_58,(String *)&local_68);
      lVar3 = *(long *)pSVar4;
      *(long *)local_70 = lVar3;
      piVar5 = (int *)(lVar3 + -0x10);
      if (piVar5 != &emptyString) {
        LOCK();
        *piVar5 = *piVar5 + 1;
        UNLOCK();
      }
      piVar5 = local_68 + -4;
      if (piVar5 != &emptyString) {
        LOCK();
        iVar1 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          operator_delete__(piVar5);
        }
      }
      piVar5 = (int *)(local_58 + -0x10);
      if (piVar5 != &emptyString) {
        LOCK();
        iVar1 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          operator_delete__(piVar5);
        }
      }
      piVar5 = local_80 + -4;
      if (piVar5 != &emptyString) {
        LOCK();
        iVar1 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          operator_delete__(piVar5);
        }
      }
      piVar5 = local_60 + -4;
      if (piVar5 == &emptyString) {
        return;
      }
    }
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar5);
    }
  }
  return;
}


