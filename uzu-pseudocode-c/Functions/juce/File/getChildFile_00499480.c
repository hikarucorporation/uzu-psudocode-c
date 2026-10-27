// Function : getChildFile
// Namespace: juce:File
// Entry    : 00499480
// Prototype: File * getChildFile(File * param_1, undefined8 * param_2, byte * param_3)
// Body     : 00499480 - 00499d0a


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::File::getChildFile(juce::StringRef) const */

File * __cdecl juce::File::getChildFile(File *param_1,undefined8 *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  size_t sVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  ulong uVar10;
  uint uVar11;
  byte *pbVar12;
  uint uVar13;
  uint *in_R8;
  ulong in_R9;
  long lVar14;
  byte *pbVar15;
  bool bVar16;
  byte *local_50;
  byte *local_48;
  byte *local_40;
  File *local_38;
  
  bVar2 = *param_3;
  uVar10 = (ulong)bVar2;
  if ((char)bVar2 < '\0') {
    if ((bVar2 & 0x40) == 0) {
      uVar10 = (ulong)(bVar2 & 0x7f);
    }
    else {
      bVar16 = (bVar2 & 0x10) == 0;
      in_R8 = (uint *)CONCAT71((int7)((ulong)in_R8 >> 8),bVar16);
      uVar13 = 0x3f;
      if ((bVar2 & 0x20) != 0) {
        uVar13 = bVar2 & 0x10 ^ 0x1f;
      }
      uVar13 = bVar2 & uVar13;
      uVar10 = (ulong)uVar13;
      if ((param_3[1] & 0xffffffc0) == 0x80) {
        uVar13 = param_3[1] & 0x3f | uVar13 << 6;
        uVar10 = (ulong)uVar13;
        if (((bVar2 & 0x20) != 0) && ((param_3[2] & 0xffffffc0) == 0x80)) {
          uVar13 = param_3[2] & 0x3f | uVar13 << 6;
          uVar10 = (ulong)uVar13;
          if (((bVar2 >> 5 & bVar16) == 0) && ((param_3[3] & 0xffffffc0) == 0x80)) {
            uVar10 = (ulong)(uVar13 << 6 | param_3[3] & 0x3f);
          }
        }
      }
    }
  }
  if (((int)uVar10 == 0x7e) || ((int)uVar10 == 0x2f)) {
    pbVar4 = (byte *)StringHolderUtils::createFromCharPointer<juce::CharPointer_UTF8>(param_3);
                    /* try { // try from 0049953f to 0049954b has its CatchHandler @ 00499d4b */
    local_50 = pbVar4;
    parseAbsolutePath(param_1,(uint *)&local_50,extraout_RDX,uVar10,in_R8,in_R9);
    pbVar4 = pbVar4 + -0x10;
    if (pbVar4 == (byte *)&emptyString) {
      return param_1;
    }
    LOCK();
    iVar3 = *(int *)pbVar4;
    *(int *)pbVar4 = *(int *)pbVar4 + -1;
    UNLOCK();
    if (iVar3 != 0) {
      return param_1;
    }
  }
  else {
    local_50 = (byte *)*param_2;
    pbVar4 = local_50 + -0x10;
    if (pbVar4 != (byte *)&emptyString) {
      LOCK();
      *(int *)pbVar4 = *(int *)pbVar4 + 1;
      UNLOCK();
      bVar2 = *param_3;
    }
    pbVar4 = (byte *)(ulong)bVar2;
    do {
      bVar2 = (byte)pbVar4;
      uVar13 = (uint)pbVar4;
      pbVar12 = pbVar4;
      if ((char)bVar2 < '\0') {
        if (((ulong)pbVar4 & 0x40) == 0) {
          pbVar12 = (byte *)(ulong)(uVar13 & 0x7f);
        }
        else {
          uVar11 = uVar13 & 0x10 ^ 0x1f;
          if (((ulong)pbVar4 & 0x20) == 0) {
            uVar11 = 0x3f;
          }
          pbVar12 = (byte *)(ulong)(uVar11 & uVar13);
          if ((param_3[1] & 0xffffffc0) == 0x80) {
            uVar13 = param_3[1] & 0x3f | (uVar11 & uVar13) << 6;
            pbVar12 = (byte *)(ulong)uVar13;
            if ((((ulong)pbVar4 & 0x20) != 0) && ((param_3[2] & 0xffffffc0) == 0x80)) {
              uVar13 = param_3[2] & 0x3f | uVar13 << 6;
              pbVar12 = (byte *)(ulong)uVar13;
              if (((bVar2 >> 5 & ((ulong)pbVar4 & 0x10) == 0) == 0) &&
                 ((param_3[3] & 0xffffffc0) == 0x80)) {
                pbVar12 = (byte *)(ulong)(uVar13 << 6 | param_3[3] & 0x3f);
              }
            }
          }
        }
      }
      if ((int)pbVar12 != 0x2e) break;
      pbVar12 = param_3 + 1;
      if (((char)bVar2 < '\0') && (((ulong)pbVar4 & 0x40) != 0)) {
        if (((ulong)pbVar4 & 0x20) == 0) {
          pbVar12 = param_3 + 2;
        }
        else {
          pbVar12 = param_3 + (4 - (ulong)(((ulong)pbVar4 & 0x10) == 0));
        }
      }
      bVar2 = *pbVar12;
      uVar13 = (uint)bVar2;
      if ((char)bVar2 < '\0') {
        if ((bVar2 & 0x40) == 0) {
          uVar13 = uVar13 & 0x7f;
        }
        else {
          bVar16 = (bVar2 & 0x10) == 0;
          in_R8 = (uint *)CONCAT71((int7)((ulong)in_R8 >> 8),bVar16);
          uVar13 = uVar13 & 0x10 ^ 0x1f;
          if ((bVar2 & 0x20) == 0) {
            uVar13 = 0x3f;
          }
          uVar13 = uVar13 & bVar2;
          bVar1 = pbVar12[1];
          in_R9 = (ulong)bVar1;
          if ((bVar1 & 0xc0) == 0x80) {
            in_R9 = (ulong)(bVar1 & 0x3f);
            uVar13 = bVar1 & 0x3f | uVar13 << 6;
            if ((bVar2 & 0x20) != 0) {
              bVar1 = pbVar12[2];
              in_R9 = (ulong)bVar1;
              if ((bVar1 & 0xc0) == 0x80) {
                in_R9 = (ulong)(bVar1 & 0x3f);
                uVar13 = bVar1 & 0x3f | uVar13 << 6;
                if ((bVar2 >> 5 & bVar16) == 0) {
                  bVar1 = pbVar12[3];
                  in_R8 = (uint *)(ulong)bVar1;
                  if ((bVar1 & 0xc0) == 0x80) {
                    in_R8 = (uint *)(ulong)(bVar1 & 0x3f);
                    uVar13 = uVar13 << 6 | bVar1 & 0x3f;
                  }
                }
              }
            }
          }
        }
      }
      pbVar7 = (byte *)(ulong)bVar2;
      if (uVar13 == 0x2f) {
LAB_00499757:
        while( true ) {
          pbVar4 = pbVar7;
          bVar2 = (byte)pbVar4;
          uVar13 = (uint)bVar2;
          if ((char)bVar2 < '\0') {
            if (((ulong)pbVar4 & 0x40) == 0) {
              uVar13 = uVar13 & 0x7f;
            }
            else {
              bVar16 = ((ulong)pbVar4 & 0x10) == 0;
              in_R8 = (uint *)CONCAT71((int7)((ulong)in_R8 >> 8),bVar16);
              uVar11 = uVar13 & 0x10 ^ 0x1f;
              if (((ulong)pbVar4 & 0x20) == 0) {
                uVar11 = 0x3f;
              }
              uVar13 = uVar11 & uVar13;
              if (((((pbVar12[1] & 0xffffffc0) == 0x80) &&
                   (uVar13 = pbVar12[1] & 0x3f | uVar13 << 6, ((ulong)pbVar4 & 0x20) != 0)) &&
                  ((pbVar12[2] & 0xffffffc0) == 0x80)) &&
                 ((uVar13 = pbVar12[2] & 0x3f | uVar13 << 6, (bVar2 >> 5 & bVar16) == 0 &&
                  ((pbVar12[3] & 0xffffffc0) == 0x80)))) {
                uVar13 = uVar13 << 6 | pbVar12[3] & 0x3f;
              }
            }
          }
          if (uVar13 != 0x2f) break;
          pbVar7 = pbVar12 + 1;
          if (((char)bVar2 < '\0') && (((ulong)pbVar4 & 0x40) != 0)) {
            if (((ulong)pbVar4 & 0x20) == 0) {
              pbVar7 = pbVar12 + 2;
            }
            else {
              pbVar7 = pbVar12 + (4 - (ulong)(((ulong)pbVar4 & 0x10) == 0));
            }
          }
          pbVar12 = pbVar7;
          pbVar7 = (byte *)(ulong)*pbVar12;
        }
        param_3 = pbVar12;
LAB_00499825:
        pbVar12 = (byte *)0x0;
      }
      else {
        if (uVar13 != 0x2e) {
          if (uVar13 == 0) goto LAB_00499757;
          break;
        }
        pbVar7 = pbVar12 + 1;
        if (((char)bVar2 < '\0') && ((bVar2 & 0x40) != 0)) {
          if ((bVar2 & 0x20) == 0) {
            pbVar7 = pbVar12 + 2;
          }
          else {
            pbVar7 = pbVar12 + (4 - (ulong)((bVar2 & 0x10) == 0));
          }
        }
        bVar2 = *pbVar7;
        uVar13 = (uint)bVar2;
        if ((char)bVar2 < '\0') {
          uVar13 = (uint)bVar2;
          if ((bVar2 & 0x40) == 0) {
            uVar13 = uVar13 & 0x7f;
          }
          else {
            uVar11 = uVar13 & 0x10 ^ 0x1f;
            if ((bVar2 & 0x20) == 0) {
              uVar11 = 0x3f;
            }
            uVar13 = uVar11 & uVar13;
            if ((pbVar7[1] & 0xffffffc0) != 0x80) goto LAB_00499930;
            uVar13 = pbVar7[1] & 0x3f | uVar13 << 6;
            if (((bVar2 & 0x20) != 0) && ((pbVar7[2] & 0xffffffc0) == 0x80)) {
              uVar13 = pbVar7[2] & 0x3f | uVar13 << 6;
              if (((bVar2 >> 5 & (bVar2 & 0x10) == 0) != 0) || ((pbVar7[3] & 0xffffffc0) != 0x80))
              goto LAB_00499930;
              uVar13 = uVar13 << 6 | pbVar7[3] & 0x3f;
            }
          }
          if (uVar13 != 0x2f) goto LAB_00499936;
LAB_00499944:
          in_R8 = (uint *)CONCAT71((int7)((ulong)in_R8 >> 8),*local_50);
          if (*local_50 != 0) {
            iVar3 = -1;
            iVar8 = 0;
            uVar10 = (ulong)in_R8 & 0xffffffff;
            local_48 = local_50;
            pbVar4 = local_50;
            do {
              pbVar12 = pbVar4 + 1;
              uVar11 = (uint)(byte)uVar10;
              if ((char)(byte)uVar10 < '\0') {
                if ((uVar10 & 0x40) == 0) {
                  uVar11 = uVar11 & 0x7f;
                  goto LAB_00499969;
                }
                if ((uVar10 & 0x20) == 0) {
                  uVar9 = 0x3f;
                  lVar14 = 0;
                  bVar16 = false;
                  in_R9 = 0;
                }
                else {
                  bVar16 = true;
                  if ((uVar10 & 0x10) == 0) {
                    uVar9 = 0x1f;
                    lVar14 = 1;
                    in_R9 = 0;
                  }
                  else {
                    uVar9 = 0xf;
                    lVar14 = 2;
                    in_R9 = CONCAT71((int7)(in_R9 >> 8),1);
                  }
                }
                uVar11 = uVar9 & uVar11;
                bVar2 = pbVar4[1];
                uVar10 = (ulong)bVar2;
                if ((bVar2 & 0xffffffc0) == 0x80) {
                  pbVar15 = pbVar4 + lVar14 + 2;
                  uVar11 = bVar2 & 0x3f | uVar11 << 6;
                  pbVar12 = pbVar15;
                  if (!bVar16) goto LAB_00499969;
                  pbVar12 = pbVar4 + 2;
                  bVar2 = *pbVar12;
                  uVar10 = (ulong)bVar2;
                  if ((bVar2 & 0xffffffc0) == 0x80) {
                    uVar11 = bVar2 & 0x3f | uVar11 << 6;
                    pbVar12 = pbVar15;
                    if ((char)in_R9 != '\0') {
                      pbVar12 = pbVar4 + 3;
                      bVar2 = *pbVar12;
                      uVar10 = (ulong)bVar2;
                      if ((bVar2 & 0xffffffc0) != 0x80) goto LAB_0049996e;
                      uVar11 = uVar11 << 6 | bVar2 & 0x3f;
                      pbVar12 = pbVar15;
                    }
                    goto LAB_00499969;
                  }
                  goto LAB_0049996e;
                }
              }
              else {
LAB_00499969:
                uVar10 = (ulong)*pbVar12;
LAB_0049996e:
              }
              pbVar4 = pbVar12;
              if (uVar11 == 0x2f) {
                iVar3 = iVar8;
              }
              iVar8 = iVar8 + 1;
            } while ((char)uVar10 != '\0');
            if (-1 < iVar3) {
              pbVar4 = &DAT_0061ac58;
              if (iVar3 != 0) {
                pbVar4 = local_50;
                do {
                  pbVar12 = pbVar4 + 1;
                  if (((char)in_R8 < '\0') && (((ulong)in_R8 & 0x40) != 0)) {
                    if (((ulong)in_R8 & 0x20) == 0) {
                      pbVar12 = pbVar4 + 2;
                    }
                    else {
                      pbVar12 = pbVar4 + (4 - (ulong)(((ulong)in_R8 & 0x10) == 0));
                    }
                  }
                  pbVar4 = pbVar12;
                  iVar3 = iVar3 + -1;
                  if (iVar3 == 0) {
                    sVar6 = (long)pbVar4 - (long)local_50;
                    uVar10 = sVar6 + 4 & 0xfffffffffffffffc;
                    local_38 = param_1;
                    /* try { // try from 00499afa to 00499afe has its CatchHandler @ 00499d0b */
                    puVar5 = operator_new__(uVar10 + 0x17);
                    LOCK();
                    *puVar5 = 0;
                    UNLOCK();
                    *(ulong *)(puVar5 + 2) = uVar10;
                    pbVar4 = (byte *)(puVar5 + 4);
                    memcpy(pbVar4,local_48,sVar6);
                    *(undefined1 *)((long)puVar5 + sVar6 + 0x10) = 0;
                    param_1 = local_38;
                    goto LAB_00499b2e;
                  }
                  in_R8 = (uint *)(ulong)*pbVar4;
                } while (*pbVar4 != 0);
                pbVar4 = local_50;
                if (local_50 != &DAT_0061ac58) {
                  LOCK();
                  *(int *)(local_50 + -0x10) = *(int *)(local_50 + -0x10) + 1;
                  UNLOCK();
                }
              }
LAB_00499b2e:
              pbVar12 = local_50 + -0x10;
              local_50 = pbVar4;
              if (pbVar12 != (byte *)&emptyString) {
                LOCK();
                iVar3 = *(int *)pbVar12;
                *(int *)pbVar12 = *(int *)pbVar12 + -1;
                UNLOCK();
                if (iVar3 == 0) {
                  operator_delete__(pbVar12);
                }
              }
            }
          }
          while( true ) {
            param_3 = pbVar7;
            bVar2 = *param_3;
            pbVar4 = (byte *)(ulong)bVar2;
            uVar11 = (uint)bVar2;
            if ((char)bVar2 < '\0') {
              if ((bVar2 & 0x40) == 0) {
                uVar11 = uVar11 & 0x7f;
              }
              else {
                uVar9 = uVar11 & 0x10 ^ 0x1f;
                if ((bVar2 & 0x20) == 0) {
                  uVar9 = 0x3f;
                }
                uVar11 = uVar9 & uVar11;
                if (((((param_3[1] & 0xffffffc0) == 0x80) &&
                     (uVar11 = param_3[1] & 0x3f | uVar11 << 6, (bVar2 & 0x20) != 0)) &&
                    ((param_3[2] & 0xffffffc0) == 0x80)) &&
                   ((uVar11 = param_3[2] & 0x3f | uVar11 << 6,
                    (bVar2 >> 5 & (bVar2 & 0x10) == 0) == 0 && ((param_3[3] & 0xffffffc0) == 0x80)))
                   ) {
                  uVar11 = uVar11 << 6 | param_3[3] & 0x3f;
                }
              }
            }
            if (uVar11 != 0x2f) break;
            pbVar7 = param_3 + 1;
            if (((char)bVar2 < '\0') && ((bVar2 & 0x40) != 0)) {
              pbVar7 = param_3 + 2;
              if ((bVar2 & 0x20) != 0) {
                pbVar7 = param_3 + (4 - (ulong)((bVar2 & 0x10) == 0));
              }
            }
          }
          pbVar12 = (byte *)0x0;
        }
        else {
LAB_00499930:
          if (uVar13 == 0x2f) goto LAB_00499944;
LAB_00499936:
          pbVar12 = (byte *)0x3;
          if (uVar13 == 0) goto LAB_00499944;
        }
        if ((uVar13 == 0) || (uVar13 == 0x2f)) goto LAB_00499825;
      }
    } while ((int)pbVar12 == 0);
    pbVar4 = local_50;
                    /* try { // try from 00499c6a to 00499c76 has its CatchHandler @ 00499d0d */
    addTrailingSeparator((File *)&local_40,(char *)local_50);
    local_50 = local_40;
    local_40 = pbVar4;
    pbVar4 = pbVar4 + -0x10;
    if (pbVar4 != (byte *)&emptyString) {
      LOCK();
      iVar3 = *(int *)pbVar4;
      *(int *)pbVar4 = *(int *)pbVar4 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        operator_delete__(pbVar4);
      }
    }
    sVar6 = strlen((char *)param_3);
                    /* try { // try from 00499cb8 to 00499cd1 has its CatchHandler @ 00499d17 */
    juce::String::appendCharPointer((String *)&local_50,param_3,(long)(param_3 + sVar6));
    parseAbsolutePath(param_1,(uint *)&local_50,extraout_RDX_00,pbVar12,in_R8,in_R9);
    pbVar4 = local_50 + -0x10;
    if (pbVar4 == (byte *)&emptyString) {
      return param_1;
    }
    LOCK();
    iVar3 = *(int *)pbVar4;
    *(int *)pbVar4 = *(int *)pbVar4 + -1;
    UNLOCK();
    if (iVar3 != 0) {
      return param_1;
    }
  }
  operator_delete__(pbVar4);
  return param_1;
}


