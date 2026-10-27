// Function : hasFileExtension
// Namespace: juce:File
// Entry    : 004a19c0
// Prototype: ulong hasFileExtension(File * this, byte * param_1)
// Body     : 004a19c0 - 004a24db


/* WARNING: Type propagation algorithm not settling */
/* juce::File::hasFileExtension(juce::StringRef) const */

ulong __thiscall juce::File::hasFileExtension(File *this,byte *param_1)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  wint_t wVar4;
  wint_t wVar5;
  size_t sVar6;
  size_t sVar7;
  undefined4 *puVar8;
  ulong uVar9;
  uint uVar10;
  byte bVar11;
  uint uVar12;
  byte *unaff_RBP;
  byte *pbVar13;
  ulong uVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  int iVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte *local_48;
  byte *local_40;
  byte *local_38;
  
  bVar3 = *param_1;
  if (bVar3 == 0) {
    pbVar21 = *(byte **)this;
    bVar3 = *pbVar21;
    iVar18 = -1;
    if (bVar3 == 0) {
      iVar15 = -1;
    }
    else {
      iVar15 = 0;
      pbVar13 = pbVar21;
      bVar11 = bVar3;
      iVar18 = -1;
      do {
        pbVar20 = pbVar13 + 1;
        uVar10 = (uint)bVar11;
        if ((char)bVar11 < '\0') {
          if ((bVar11 & 0x40) == 0) {
            uVar10 = uVar10 & 0x7f;
            goto LAB_004a1be0;
          }
          if ((bVar11 & 0x20) == 0) {
            uVar12 = 0x3f;
            lVar17 = 0;
            bVar1 = false;
            bVar2 = false;
          }
          else {
            bVar1 = true;
            if ((bVar11 & 0x10) == 0) {
              uVar12 = 0x1f;
              lVar17 = 1;
              bVar2 = false;
            }
            else {
              uVar12 = 0xf;
              lVar17 = 2;
              bVar2 = true;
            }
          }
          uVar10 = uVar12 & uVar10;
          bVar11 = pbVar13[1];
          if ((bVar11 & 0xffffffc0) == 0x80) {
            pbVar19 = pbVar13 + lVar17 + 2;
            uVar10 = bVar11 & 0x3f | uVar10 << 6;
            pbVar20 = pbVar19;
            if (!bVar1) goto LAB_004a1be0;
            pbVar20 = pbVar13 + 2;
            bVar11 = *pbVar20;
            if ((bVar11 & 0xffffffc0) == 0x80) {
              uVar10 = bVar11 & 0x3f | uVar10 << 6;
              pbVar20 = pbVar19;
              if (bVar2) {
                pbVar20 = pbVar13 + 3;
                bVar11 = *pbVar20;
                if ((bVar11 & 0xc0) != 0x80) goto LAB_004a1be4;
                uVar10 = uVar10 << 6 | bVar11 & 0x3f;
                pbVar20 = pbVar19;
              }
              goto LAB_004a1be0;
            }
            goto LAB_004a1be4;
          }
        }
        else {
LAB_004a1be0:
          bVar11 = *pbVar20;
LAB_004a1be4:
        }
        pbVar13 = pbVar20;
        if (uVar10 == 0x2e) {
          iVar18 = iVar15;
        }
        iVar15 = iVar15 + 1;
      } while (bVar11 != 0);
      iVar15 = -1;
      iVar16 = 0;
      do {
        pbVar13 = pbVar21 + 1;
        unaff_RBP = (byte *)(ulong)bVar3;
        if ((char)bVar3 < '\0') {
          if ((bVar3 & 0x40) == 0) {
            unaff_RBP = (byte *)(ulong)(bVar3 & 0x7f);
            goto LAB_004a1ff0;
          }
          if ((bVar3 & 0x20) == 0) {
            uVar10 = 0x3f;
            lVar17 = 0;
            bVar1 = false;
            bVar2 = false;
          }
          else {
            bVar1 = true;
            if ((bVar3 & 0x10) == 0) {
              uVar10 = 0x1f;
              lVar17 = 1;
              bVar2 = false;
            }
            else {
              uVar10 = 0xf;
              lVar17 = 2;
              bVar2 = true;
            }
          }
          uVar10 = uVar10 & bVar3;
          bVar3 = pbVar21[1];
          unaff_RBP = (byte *)0x0;
          if ((bVar3 & 0xc0) == 0x80) {
            pbVar20 = pbVar21 + lVar17 + 2;
            uVar10 = bVar3 & 0x3f | uVar10 << 6;
            unaff_RBP = (byte *)(ulong)uVar10;
            pbVar13 = pbVar20;
            if (!bVar1) goto LAB_004a1ff0;
            pbVar13 = pbVar21 + 2;
            bVar3 = *pbVar13;
            if ((bVar3 & 0xc0) == 0x80) {
              uVar10 = bVar3 & 0x3f | uVar10 << 6;
              unaff_RBP = (byte *)(ulong)uVar10;
              pbVar13 = pbVar20;
              if (bVar2) {
                pbVar13 = pbVar21 + 3;
                bVar3 = *pbVar13;
                if ((bVar3 & 0xc0) != 0x80) goto LAB_004a1ff3;
                unaff_RBP = (byte *)(ulong)(uVar10 << 6 | bVar3 & 0x3f);
                pbVar13 = pbVar20;
              }
              goto LAB_004a1ff0;
            }
            goto LAB_004a1ff3;
          }
        }
        else {
LAB_004a1ff0:
          bVar3 = *pbVar13;
LAB_004a1ff3:
          uVar10 = (uint)unaff_RBP;
        }
        if (uVar10 == 0x2f) {
          iVar15 = iVar16;
        }
        iVar16 = iVar16 + 1;
        pbVar21 = pbVar13;
      } while (bVar3 != 0);
    }
    uVar14 = CONCAT71((int7)((ulong)unaff_RBP >> 8),iVar18 <= iVar15);
    goto LAB_004a24cb;
  }
  iVar18 = 0;
  pbVar21 = param_1;
  do {
    pbVar13 = pbVar21 + 1;
    uVar10 = (uint)bVar3;
    if ((char)bVar3 < '\0') {
      if ((bVar3 & 0x40) == 0) {
        uVar10 = uVar10 & 0x7f;
      }
      else {
        if ((bVar3 & 0x20) == 0) {
          uVar12 = 0x3f;
          unaff_RBP = (byte *)0x0;
          bVar1 = false;
          bVar2 = false;
        }
        else {
          bVar1 = true;
          if ((bVar3 & 0x10) == 0) {
            uVar12 = 0x1f;
            unaff_RBP = (byte *)0x1;
            bVar2 = false;
          }
          else {
            uVar12 = 0xf;
            unaff_RBP = (byte *)0x2;
            bVar2 = true;
          }
        }
        uVar10 = uVar10 & uVar12;
        if ((pbVar21[1] & 0xc0) == 0x80) {
          pbVar20 = pbVar21 + (long)unaff_RBP + 2;
          uVar10 = pbVar21[1] & 0x3f | uVar10 << 6;
          pbVar13 = pbVar20;
          if (bVar1) {
            bVar3 = pbVar21[2];
            unaff_RBP = (byte *)0x0;
            pbVar13 = pbVar21 + 2;
            if ((bVar3 & 0xc0) == 0x80) {
              unaff_RBP = (byte *)0x0;
              uVar10 = bVar3 & 0x3f | uVar10 << 6;
              pbVar13 = pbVar20;
              if (bVar2) {
                uVar12 = (uint)pbVar21[3];
                pbVar13 = pbVar21 + 3;
                if ((uVar12 & 0xffffffc0) == 0x80) {
                  uVar10 = uVar10 << 6 | uVar12 & 0x3f;
                  pbVar13 = pbVar20;
                }
              }
            }
          }
        }
      }
    }
    pbVar21 = pbVar13;
    if (uVar10 == 0x3b) {
      local_40 = (byte *)StringHolderUtils::createFromCharPointer<juce::CharPointer_UTF8>(param_1);
      if (iVar18 != 0) {
        unaff_RBP = local_40;
        iVar15 = iVar18;
        goto LAB_004a1ee9;
      }
      local_48 = &DAT_0061ac58;
      iVar18 = 0;
      goto LAB_004a20b6;
    }
    iVar18 = iVar18 + 1;
    bVar3 = *pbVar21;
  } while (bVar3 != 0);
  pbVar21 = *(byte **)this;
  sVar6 = strlen((char *)pbVar21);
  sVar7 = strlen((char *)param_1);
  pbVar13 = param_1 + sVar7;
  if ((0 < (long)sVar6) && (0 < (long)sVar7)) {
    pbVar20 = pbVar21 + sVar6;
    do {
      bVar3 = pbVar20[-1];
      if ((bVar3 & 0xc0) == 0x80) {
        bVar3 = pbVar20[-2];
        if ((bVar3 & 0xc0) != 0x80) {
          pbVar20 = pbVar20 + -2;
          bVar11 = pbVar13[-1];
          goto joined_r0x004a1cae;
        }
        bVar3 = pbVar20[-3];
        if ((bVar3 & 0xc0) == 0x80) {
          bVar3 = pbVar20[-4];
          pbVar20 = pbVar20 + -4;
          bVar11 = pbVar13[-1];
          goto joined_r0x004a1cae;
        }
        pbVar20 = pbVar20 + -3;
        if ((pbVar13[-1] & 0xc0) == 0x80) goto LAB_004a1cb0;
LAB_004a1cf0:
        pbVar13 = pbVar13 + -1;
      }
      else {
        pbVar20 = pbVar20 + -1;
        bVar11 = pbVar13[-1];
joined_r0x004a1cae:
        if ((bVar11 & 0xc0) != 0x80) goto LAB_004a1cf0;
LAB_004a1cb0:
        if ((pbVar13[-2] & 0xc0) == 0x80) {
          if ((pbVar13[-3] & 0xc0) == 0x80) {
            pbVar13 = pbVar13 + -4;
          }
          else {
            pbVar13 = pbVar13 + -3;
          }
        }
        else {
          pbVar13 = pbVar13 + -2;
        }
      }
      uVar10 = (uint)bVar3;
      if ((char)bVar3 < '\0') {
        if ((bVar3 & 0x40) == 0) {
          uVar10 = uVar10 & 0x7f;
        }
        else {
          uVar12 = uVar10 & 0x10 ^ 0x1f;
          if ((bVar3 & 0x20) == 0) {
            uVar12 = 0x3f;
          }
          uVar10 = uVar10 & uVar12;
          if ((((pbVar20[1] & 0xffffffc0) == 0x80) &&
              (uVar10 = pbVar20[1] & 0x3f | uVar10 << 6, (bVar3 & 0x20) != 0)) &&
             (((pbVar20[2] & 0xffffffc0) == 0x80 &&
              ((uVar10 = pbVar20[2] & 0x3f | uVar10 << 6, (bVar3 >> 5 & (bVar3 & 0x10) == 0) == 0 &&
               ((pbVar20[3] & 0xffffffc0) == 0x80)))))) {
            uVar10 = uVar10 << 6 | pbVar20[3] & 0x3f;
          }
        }
      }
      wVar4 = towlower(uVar10);
      bVar3 = *pbVar13;
      uVar10 = (uint)bVar3;
      if ((char)bVar3 < '\0') {
        uVar12 = (uint)bVar3;
        if ((bVar3 & 0x40) == 0) {
          wVar5 = towlower(uVar12 & 0x7f);
        }
        else {
          uVar10 = 0x3f;
          if ((bVar3 & 0x20) != 0) {
            uVar10 = uVar12 & 0x10 ^ 0x1f;
          }
          uVar10 = uVar10 & uVar12;
          if ((pbVar13[1] & 0xffffffc0) != 0x80) goto LAB_004a1e90;
          uVar10 = pbVar13[1] & 0x3f | uVar10 << 6;
          if (((bVar3 & 0x20) == 0) || ((pbVar13[2] & 0xffffffc0) != 0x80)) {
            wVar5 = towlower(uVar10);
          }
          else {
            uVar10 = pbVar13[2] & 0x3f | uVar10 << 6;
            if (((bVar3 >> 5 & (bVar3 & 0x10) == 0) != 0) || ((pbVar13[3] & 0xffffffc0) != 0x80))
            goto LAB_004a1e90;
            wVar5 = towlower(uVar10 << 6 | pbVar13[3] & 0x3f);
          }
        }
      }
      else {
LAB_004a1e90:
        wVar5 = towlower(uVar10);
      }
      if (wVar4 != wVar5) goto LAB_004a201e;
      pbVar21 = *(byte **)this;
    } while ((pbVar21 < pbVar20) && (param_1 < pbVar13));
  }
  if (pbVar13 == param_1) {
    bVar3 = *param_1;
    uVar10 = (uint)bVar3;
    if ((char)bVar3 < '\0') {
      if ((bVar3 & 0x40) == 0) {
        uVar10 = bVar3 & 0x7f;
      }
      else {
        uVar12 = 0x3f;
        if ((bVar3 & 0x20) != 0) {
          uVar12 = uVar10 & 0x10 ^ 0x1f;
        }
        uVar10 = uVar10 & uVar12;
        if (((((param_1[1] & 0xffffffc0) == 0x80) &&
             (uVar10 = param_1[1] & 0x3f | uVar10 << 6, (bVar3 & 0x20) != 0)) &&
            ((param_1[2] & 0xffffffc0) == 0x80)) &&
           ((uVar10 = param_1[2] & 0x3f | uVar10 << 6, (bVar3 >> 5 & (bVar3 & 0x10) == 0) == 0 &&
            ((param_1[3] & 0xffffffc0) == 0x80)))) {
          uVar10 = uVar10 << 6 | param_1[3] & 0x3f;
        }
      }
    }
    uVar14 = CONCAT71((int7)((ulong)pbVar13 >> 8),1);
    if (uVar10 != 0x2e) {
      uVar14 = 0;
      pbVar13 = pbVar21;
      do {
        bVar11 = *pbVar13;
        if ((char)bVar11 < '\0') {
          do {
            pbVar20 = pbVar13 + 1;
            pbVar13 = pbVar13 + 1;
          } while ((*pbVar20 & 0xc0) == 0x80);
        }
        else {
          pbVar13 = pbVar13 + 1;
          if (bVar11 == 0) goto LAB_004a23a2;
        }
        uVar14 = uVar14 + 1;
      } while( true );
    }
    goto LAB_004a24cb;
  }
  goto LAB_004a201e;
  while( true ) {
    pbVar21 = unaff_RBP + 1;
    if (((char)bVar3 < '\0') && ((bVar3 & 0x40) != 0)) {
      if ((bVar3 & 0x20) == 0) {
        pbVar21 = unaff_RBP + 2;
      }
      else {
        pbVar21 = unaff_RBP + (4 - (ulong)((bVar3 & 0x10) == 0));
      }
    }
    unaff_RBP = pbVar21;
    iVar15 = iVar15 + -1;
    if (iVar15 == 0) break;
LAB_004a1ee9:
    bVar3 = *unaff_RBP;
    if (bVar3 == 0) {
      pbVar21 = local_40 + -0x10;
      local_48 = local_40;
      if (pbVar21 != (byte *)&emptyString) {
        LOCK();
        *(int *)pbVar21 = *(int *)pbVar21 + 1;
        UNLOCK();
      }
      goto LAB_004a20b6;
    }
  }
  pbVar21 = &DAT_0061ac58;
  if ((local_40 != (byte *)0x0) && (*local_40 != 0)) {
    unaff_RBP = unaff_RBP + -(long)local_40;
                    /* try { // try from 004a2083 to 004a2087 has its CatchHandler @ 004a24dc */
    puVar8 = operator_new__(((ulong)(unaff_RBP + 4) & 0xfffffffffffffffc) + 0x17);
    LOCK();
    *puVar8 = 0;
    UNLOCK();
    *(ulong *)(puVar8 + 2) = (ulong)(unaff_RBP + 4) & 0xfffffffffffffffc;
    pbVar21 = (byte *)(puVar8 + 4);
    memcpy(pbVar21,local_40,(size_t)unaff_RBP);
    *(byte *)((long)(puVar8 + 4) + (long)unaff_RBP) = 0;
  }
  local_48 = pbVar21;
LAB_004a20b6:
                    /* try { // try from 004a20b6 to 004a20c2 has its CatchHandler @ 004a250f */
  juce::String::trimEnd((long *)&local_38,(long *)&local_48);
                    /* try { // try from 004a20c8 to 004a20d2 has its CatchHandler @ 004a24e3 */
  uVar9 = hasFileExtension(this,local_38);
  uVar14 = CONCAT71((int7)((ulong)unaff_RBP >> 8),1);
  if ((char)uVar9 == '\0') {
    iVar18 = iVar18 + 2;
    do {
      pbVar21 = param_1 + 1;
      bVar3 = *param_1;
      if (((char)bVar3 < '\0') && ((bVar3 & 0x40) != 0)) {
        if ((bVar3 & 0x20) == 0) {
          pbVar21 = param_1 + 2;
        }
        else {
          pbVar21 = param_1 + (4 - (ulong)((bVar3 & 0x10) == 0));
        }
      }
      iVar18 = iVar18 + -1;
      param_1 = pbVar21;
    } while (1 < iVar18);
LAB_004a2130:
    pbVar13 = pbVar21;
    bVar3 = *pbVar13;
    uVar10 = (uint)bVar3;
    if ((char)bVar3 < '\0') {
      uVar12 = (uint)bVar3;
      if ((bVar3 & 0x40) == 0) {
        iVar18 = iswspace(uVar12 & 0x7f);
      }
      else {
        uVar10 = uVar12 & 0x10 ^ 0x1f;
        if ((bVar3 & 0x20) == 0) {
          uVar10 = 0x3f;
        }
        uVar10 = uVar10 & uVar12;
        if ((pbVar13[1] & 0xffffffc0) != 0x80) goto LAB_004a21f0;
        uVar10 = pbVar13[1] & 0x3f | uVar10 << 6;
        if (((bVar3 & 0x20) == 0) || ((pbVar13[2] & 0xffffffc0) != 0x80)) {
          iVar18 = iswspace(uVar10);
        }
        else {
          uVar10 = pbVar13[2] & 0x3f | uVar10 << 6;
          if (((bVar3 >> 5 & (bVar3 & 0x10) == 0) != 0) || ((pbVar13[3] & 0xffffffc0) != 0x80))
          goto LAB_004a21f0;
          iVar18 = iswspace(uVar10 << 6 | pbVar13[3] & 0x3f);
        }
      }
    }
    else {
LAB_004a21f0:
      iVar18 = iswspace(uVar10);
    }
    if (iVar18 != 0) {
      bVar3 = *pbVar13;
      pbVar21 = pbVar13 + 1;
      if ((((char)bVar3 < '\0') && ((bVar3 & 0x40) != 0)) &&
         (pbVar21 = pbVar13 + 2, (bVar3 & 0x20) != 0)) {
        pbVar21 = pbVar13 + (4 - (ulong)((bVar3 & 0x10) == 0));
      }
      goto LAB_004a2130;
    }
                    /* try { // try from 004a223f to 004a2249 has its CatchHandler @ 004a24e1 */
    uVar14 = hasFileExtension(this,pbVar13);
    uVar14 = uVar14 & 0xffffffff;
  }
  local_38 = local_38 + -0x10;
  if (local_38 != (byte *)&emptyString) {
    LOCK();
    iVar18 = *(int *)local_38;
    *(int *)local_38 = *(int *)local_38 + -1;
    UNLOCK();
    if (iVar18 == 0) {
      operator_delete__(local_38);
    }
  }
  pbVar21 = local_48 + -0x10;
  if (pbVar21 != (byte *)&emptyString) {
    LOCK();
    iVar18 = *(int *)pbVar21;
    *(int *)pbVar21 = *(int *)pbVar21 + -1;
    UNLOCK();
    if (iVar18 == 0) {
      operator_delete__(pbVar21);
    }
  }
  pbVar21 = local_40 + -0x10;
  if (pbVar21 != (byte *)&emptyString) {
    LOCK();
    iVar18 = *(int *)pbVar21;
    *(int *)pbVar21 = *(int *)pbVar21 + -1;
    UNLOCK();
    if (iVar18 == 0) {
      operator_delete__(pbVar21);
    }
  }
  goto LAB_004a24cb;
LAB_004a23a2:
  uVar10 = 0;
  uVar9 = uVar14 & 0xffffffff;
  do {
    pbVar13 = param_1 + 1;
    if ((char)bVar3 < '\0') {
      do {
        bVar3 = param_1[1];
        pbVar13 = param_1 + 1;
        param_1 = pbVar13;
      } while ((bVar3 & 0xc0) == 0x80);
    }
    else {
      if (bVar3 == 0) break;
      bVar3 = *pbVar13;
    }
    uVar10 = uVar10 + 1;
    uVar9 = (ulong)((int)uVar9 - 1);
    param_1 = pbVar13;
  } while( true );
  iVar18 = ~uVar10 + (int)uVar14;
  if (-1 < iVar18) {
    pbVar13 = pbVar21;
    if (iVar18 != 0) {
      do {
        pbVar21 = pbVar13 + 1;
        bVar3 = *pbVar13;
        if (((char)bVar3 < '\0') && ((bVar3 & 0x40) != 0)) {
          if ((bVar3 & 0x20) == 0) {
            pbVar21 = pbVar13 + 2;
          }
          else {
            pbVar21 = pbVar13 + (4 - (ulong)((bVar3 & 0x10) == 0));
          }
        }
        uVar10 = (int)uVar9 - 1;
        uVar9 = (ulong)uVar10;
        pbVar13 = pbVar21;
      } while (1 < (int)uVar10);
    }
    bVar3 = *pbVar21;
    uVar10 = (uint)bVar3;
    if ((char)bVar3 < '\0') {
      uVar10 = (uint)bVar3;
      if ((bVar3 & 0x40) == 0) {
        uVar10 = uVar10 & 0x7f;
      }
      else {
        uVar12 = 0x3f;
        if ((bVar3 & 0x20) != 0) {
          uVar12 = uVar10 & 0x10 ^ 0x1f;
        }
        uVar10 = uVar12 & uVar10;
        uVar14 = 0;
        if ((pbVar21[1] & 0xffffffc0) == 0x80) {
          uVar10 = pbVar21[1] & 0x3f | uVar10 << 6;
          uVar14 = (ulong)uVar10;
          if (((bVar3 & 0x20) != 0) && ((pbVar21[2] & 0xc0) == 0x80)) {
            uVar14 = (ulong)(uVar10 << 6);
            uVar10 = pbVar21[2] & 0x3f | uVar10 << 6;
            if (((bVar3 >> 5 & (bVar3 & 0x10) == 0) == 0) && ((pbVar21[3] & 0xffffffc0) == 0x80)) {
              uVar10 = uVar10 << 6 | pbVar21[3] & 0x3f;
            }
          }
        }
      }
    }
    uVar14 = CONCAT71((int7)(uVar14 >> 8),uVar10 == 0x2e);
    goto LAB_004a24cb;
  }
LAB_004a201e:
  uVar14 = 0;
LAB_004a24cb:
  return uVar14 & 0xffffffff;
}


