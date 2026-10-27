// Function : oscformat_list
// Namespace: 
// Entry    : 0057fd90
// Prototype: undefined oscformat_list(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, uint param_11, long param_12, char * param_13, undefined8 param_14)
// Body     : 0057fd90 - 00580606


void oscformat_list(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9,undefined8 param_10,uint param_11,long param_12,char *param_13,
                   undefined8 param_14)

{
  char *pcVar1;
  long *plVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  float *pfVar13;
  byte *pbVar14;
  uint uVar15;
  long lVar16;
  int *piVar17;
  char *pcVar18;
  char *pcVar19;
  uint uVar20;
  byte *pbVar21;
  uint uVar22;
  float *pfVar23;
  undefined4 extraout_XMM0_Da;
  float fVar24;
  undefined4 extraout_XMM0_Db;
  ulong uVar25;
  float afStack_78 [2];
  float *local_70;
  long local_68;
  ulong local_60;
  ulong local_58;
  float fStack_50;
  uint local_4c;
  byte *local_48;
  float fStack_40;
  uint local_3c;
  long local_38;
  
  pbVar21 = (byte *)**(undefined8 **)(param_9 + 0x40);
  local_48 = pbVar21;
  local_3c = param_11;
  local_38 = param_12;
  if ((int)param_11 < 1) {
    uVar22 = 4;
    iVar4 = 0;
  }
  else {
    uVar15 = 0;
    uVar22 = 5;
    iVar4 = 0;
    do {
      bVar3 = *pbVar21;
      if (bVar3 == 0) {
        if (*(int *)(local_38 + (long)(int)uVar15 * 0x10) == 2) goto LAB_0057fe34;
LAB_0057fdd0:
        iVar4 = iVar4 + 4;
      }
      else {
        pbVar21 = pbVar21 + 1;
        if (bVar3 == 0x62) {
          iVar5 = 0x7fffffff;
          if ((*(int *)(local_38 + (long)(int)uVar15 * 0x10) == 1) &&
             (iVar5 = (int)*(float *)(local_38 + 8 + (long)(int)uVar15 * 0x10), iVar5 < 0)) {
            iVar5 = 0x7fffffff;
          }
          iVar10 = ~uVar15 + param_11;
          if (iVar5 <= (int)(~uVar15 + param_11)) {
            iVar10 = iVar5;
          }
          iVar4 = iVar4 + (iVar10 + 7U & 0xfffffffc);
          uVar15 = iVar10 + uVar15;
        }
        else {
          if (bVar3 != 0x73) goto LAB_0057fdd0;
          if (*(int *)(local_38 + (long)(int)uVar15 * 0x10) != 2) {
            pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     "oscformat: expected symbol for argument %d",(ulong)(uVar15 + 1),
                     (long)(int)uVar15 * 0x10,param_13,param_14);
            return;
          }
LAB_0057fe34:
          sVar6 = strlen((char *)**(undefined8 **)(local_38 + 8 + (long)(int)uVar15 * 0x10));
          param_1 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
          iVar4 = ((int)sVar6 + 4U & 0xfffffffc) + iVar4;
          param_11 = local_3c;
        }
      }
      uVar15 = uVar15 + 1;
      uVar22 = uVar22 + 1;
    } while ((int)uVar15 < (int)param_11);
    uVar22 = uVar22 & 0x7ffffffc;
  }
  pcVar18 = *(char **)(param_9 + 0x30);
  sVar6 = strlen(pcVar18);
  uVar22 = ((int)sVar6 + 4U & 0xfffffffc) + uVar22;
  local_58 = (ulong)uVar22;
  uVar22 = iVar4 + uVar22;
  lVar7 = (long)(int)uVar22;
  pfVar23 = afStack_78 + lVar7 * -4;
  pfVar13 = afStack_78 + lVar7 * -4 + 2;
  uVar11 = 0;
  pcVar19 = (char *)(ulong)uVar22;
  do {
    pfVar13[-2] = 1.4013e-45;
    fVar24 = (float)(byte)pcVar18[uVar11];
    *pfVar13 = fVar24;
    uVar15 = local_3c;
    pfVar13 = pfVar13 + 4;
    pcVar1 = pcVar18 + uVar11;
    uVar11 = uVar11 + 1;
  } while (*pcVar1 != '\0');
  pcVar18 = (char *)(ulong)local_3c;
  if ((uVar11 & 3) != 0) {
    uVar9 = uVar11 & 0xffffffff;
    pfVar23[uVar9 * 4] = 1.4013e-45;
    afStack_78[lVar7 * -4 + uVar9 * 4 + 2] = 0.0;
    uVar11 = uVar9 + 1;
    if ((uVar11 & 3) != 0) {
      pfVar23[uVar11 * 4] = 1.4013e-45;
      afStack_78[lVar7 * -4 + uVar11 * 4 + 2] = 0.0;
      uVar11 = uVar9 + 2;
      if ((uVar11 & 3) != 0) {
        pfVar23[uVar11 * 4] = 1.4013e-45;
        afStack_78[lVar7 * -4 + uVar11 * 4 + 2] = 0.0;
        uVar11 = uVar9 + 3;
        if ((uVar11 & 3) != 0) {
          pfVar23[uVar11 * 4] = 1.4013e-45;
          afStack_78[lVar7 * -4 + uVar11 * 4 + 2] = 0.0;
          uVar11 = uVar9 + 4;
        }
      }
    }
  }
  pbVar21 = local_48;
  iVar4 = (int)uVar11;
  uVar20 = iVar4 + 1;
  uVar9 = (ulong)uVar20;
  pfVar23[(long)iVar4 * 4] = 1.4013e-45;
  afStack_78[lVar7 * -4 + (long)iVar4 * 4 + 2] = 44.0;
  local_4c = uVar22;
  local_68 = param_9;
  uVar11 = local_58;
  if (0 < (int)uVar15) {
    local_70 = afStack_78 + lVar7 * -4 + 2;
    uVar22 = 0;
    do {
      bVar3 = *pbVar21;
      iVar4 = (int)uVar9;
      lVar12 = (long)iVar4;
      iVar5 = (int)uVar11;
      if (bVar3 == 0) {
        iVar10 = *(int *)(local_38 + (long)(int)uVar22 * 0x10);
        pfVar23[lVar12 * 4] = 1.4013e-45;
        if (iVar10 == 2) {
          afStack_78[lVar7 * -4 + lVar12 * 4 + 2] = 115.0;
          uVar9 = (ulong)(iVar4 + 1);
          goto LAB_0058032f;
        }
        afStack_78[lVar7 * -4 + lVar12 * 4 + 2] = 102.0;
        local_60 = (ulong)(iVar4 + 1);
LAB_00580004:
        piVar17 = (int *)((long)(int)uVar22 * 0x10 + local_38);
        (afStack_78 + lVar7 * -4 + -2)[0] = 8.081547e-39;
        (afStack_78 + lVar7 * -4 + -2)[1] = 0.0;
        uVar15 = atom_getfloat(piVar17);
        lVar12 = (long)iVar5;
        pfVar23[lVar12 * 4] = 1.4013e-45;
        afStack_78[lVar7 * -4 + lVar12 * 4 + 2] = (float)(uVar15 >> 0x18);
        *(undefined4 *)(&local_68 + lVar7 * -2 + lVar12 * 2) = 1;
        *(float *)(&local_60 + lVar7 * -2 + lVar12 * 2) = (float)(uVar15 >> 0x10 & 0xff);
        fVar24 = (float)(uVar15 >> 8 & 0xff);
        *(undefined4 *)(&local_58 + lVar7 * -2 + lVar12 * 2) = 1;
        param_2 = (ulong)(uint)(float)(uVar15 & 0xff);
        (&fStack_50)[lVar7 * -4 + lVar12 * 4] = fVar24;
        *(undefined4 *)(&local_48 + lVar7 * -2 + lVar12 * 2) = 1;
        (&fStack_40)[lVar7 * -4 + lVar12 * 4] = (float)(uVar15 & 0xff);
        uVar11 = (ulong)(iVar5 + 4);
        pcVar19 = (char *)(ulong)local_4c;
        pcVar18 = (char *)(ulong)local_3c;
        uVar9 = local_60;
      }
      else {
        pbVar21 = pbVar21 + 1;
        pfVar23[lVar12 * 4] = 1.4013e-45;
        fVar24 = (float)bVar3;
        afStack_78[lVar7 * -4 + lVar12 * 4 + 2] = fVar24;
        uVar9 = (ulong)(iVar4 + 1);
        switch(bVar3) {
        case 0x62:
          local_60 = uVar9;
          local_48 = pbVar21;
          uVar15 = 0x7fffffff;
          if ((*(int *)(local_38 + (long)(int)uVar22 * 0x10) == 1) &&
             (uVar15 = (uint)*(float *)(local_38 + 8 + (long)(int)uVar22 * 0x10), (int)uVar15 < 0))
          {
            uVar15 = 0x7fffffff;
          }
          uVar20 = ~uVar22 + (int)pcVar18;
          if ((int)uVar15 <= (int)uVar20) {
            uVar20 = uVar15;
          }
          lVar12 = (long)iVar5;
          pfVar23[lVar12 * 4] = 1.4013e-45;
          afStack_78[lVar7 * -4 + lVar12 * 4 + 2] = (float)(uVar20 >> 0x18);
          *(undefined4 *)(&local_68 + lVar7 * -2 + lVar12 * 2) = 1;
          fVar24 = (float)(uVar20 >> 8 & 0xff);
          param_2 = (ulong)(uint)fVar24;
          *(float *)(&local_60 + lVar7 * -2 + lVar12 * 2) = (float)(uVar20 >> 0x10 & 0xff);
          uVar9 = local_60;
          *(undefined4 *)(&local_58 + lVar7 * -2 + lVar12 * 2) = 1;
          (&fStack_50)[lVar7 * -4 + lVar12 * 4] = fVar24;
          *(undefined4 *)(&local_48 + lVar7 * -2 + lVar12 * 2) = 1;
          fVar24 = (float)(uVar20 & 0xff);
          (&fStack_40)[lVar7 * -4 + lVar12 * 4] = fVar24;
          lVar12 = (long)(iVar5 + 4);
          if (0 < (int)uVar20) {
            lVar8 = 0;
            uVar15 = uVar22;
            do {
              uVar15 = uVar15 + 1;
              *(undefined4 *)((long)local_70 + lVar8 + lVar12 * 0x10 + -8) = 1;
              lVar16 = (long)(int)uVar15 * 0x10;
              if (*(int *)(local_38 + lVar16) == 2) {
                bVar3 = *(byte *)**(undefined8 **)(local_38 + 8 + lVar16);
LAB_005801fb:
                fVar24 = (float)bVar3;
              }
              else {
                bVar3 = 0;
                if (*(int *)(local_38 + lVar16) != 1) goto LAB_005801fb;
                fVar24 = *(float *)(local_38 + 8 + lVar16);
              }
              *(float *)((long)local_70 + lVar8 + lVar12 * 0x10) = fVar24;
              lVar8 = lVar8 + 0x10;
            } while ((ulong)uVar20 * 0x10 != lVar8);
          }
          uVar11 = (ulong)uVar20;
          if ((uVar20 & 3) != 0) {
            lVar8 = (long)(int)uVar20;
            pfVar23[lVar12 * 4 + lVar8 * 4] = 1.4013e-45;
            pfVar23[lVar12 * 4 + lVar8 * 4 + 2] = 0.0;
            uVar11 = lVar8 + 1;
            if ((uVar11 & 3) != 0) {
              pfVar23[lVar12 * 4 + uVar11 * 4] = 1.4013e-45;
              pfVar23[lVar12 * 4 + uVar11 * 4 + 2] = 0.0;
              uVar11 = lVar8 + 2;
              if ((uVar11 & 3) != 0) {
                pfVar23[lVar12 * 4 + uVar11 * 4] = 1.4013e-45;
                pfVar23[lVar12 * 4 + uVar11 * 4 + 2] = 0.0;
                uVar11 = lVar8 + 3;
                if ((uVar11 & 3) != 0) {
                  pfVar23[lVar12 * 4 + uVar11 * 4] = 1.4013e-45;
                  pfVar23[lVar12 * 4 + uVar11 * 4 + 2] = 0.0;
                  uVar11 = lVar8 + 4;
                }
              }
            }
          }
          uVar22 = uVar22 + uVar20;
          uVar11 = (ulong)(uint)((int)uVar11 + iVar5 + 4);
          pcVar18 = (char *)(ulong)local_3c;
          pcVar19 = (char *)(ulong)local_4c;
          pbVar21 = local_48;
          break;
        case 0x66:
          local_60 = uVar9;
          goto LAB_00580004;
        case 0x69:
          piVar17 = (int *)((long)(int)uVar22 * 0x10 + local_38);
          local_48 = pbVar21;
          (afStack_78 + lVar7 * -4 + -2)[0] = 8.082458e-39;
          (afStack_78 + lVar7 * -4 + -2)[1] = 0.0;
          fVar24 = (float)atom_getfloat(piVar17);
          pbVar21 = local_48;
          pcVar18 = (char *)(ulong)local_3c;
          pcVar19 = (char *)(ulong)local_4c;
          uVar15 = (uint)fVar24;
          lVar12 = (long)iVar5;
          pfVar23[lVar12 * 4] = 1.4013e-45;
          afStack_78[lVar7 * -4 + lVar12 * 4 + 2] = (float)(uVar15 >> 0x18);
          *(undefined4 *)(&local_68 + lVar7 * -2 + lVar12 * 2) = 1;
          *(float *)(&local_60 + lVar7 * -2 + lVar12 * 2) = (float)(uVar15 >> 0x10 & 0xff);
          fVar24 = (float)(uVar15 >> 8 & 0xff);
          *(undefined4 *)(&local_58 + lVar7 * -2 + lVar12 * 2) = 1;
          param_2 = (ulong)(uint)(float)(uVar15 & 0xff);
          (&fStack_50)[lVar7 * -4 + lVar12 * 4] = fVar24;
          *(undefined4 *)(&local_48 + lVar7 * -2 + lVar12 * 2) = 1;
          (&fStack_40)[lVar7 * -4 + lVar12 * 4] = (float)(uVar15 & 0xff);
          uVar11 = (ulong)(iVar5 + 4);
          break;
        case 0x73:
LAB_0058032f:
          pbVar14 = (byte *)**(undefined8 **)(local_38 + 8 + (long)(int)uVar22 * 0x10);
          pfVar13 = local_70 + (long)iVar5 * 4;
          lVar12 = (long)iVar5 << 0x20;
          do {
            pfVar13[-2] = 1.4013e-45;
            fVar24 = (float)*pbVar14;
            lVar12 = lVar12 + 0x100000000;
            *pfVar13 = fVar24;
            pfVar13 = pfVar13 + 4;
            uVar15 = (int)uVar11 + 1;
            uVar11 = (ulong)uVar15;
            bVar3 = *pbVar14;
            pbVar14 = pbVar14 + 1;
          } while (bVar3 != 0);
          if ((uVar15 & 3) != 0) {
            lVar8 = lVar12 >> 0x20;
            *(undefined4 *)((long)pfVar23 + (lVar12 >> 0x1c)) = 1;
            *(undefined4 *)((long)afStack_78 + (lVar12 >> 0x1c) + lVar7 * -0x10 + 8) = 0;
            uVar11 = lVar8 + 1;
            if ((uVar11 & 3) != 0) {
              pfVar23[uVar11 * 4] = 1.4013e-45;
              afStack_78[lVar7 * -4 + uVar11 * 4 + 2] = 0.0;
              uVar11 = lVar8 + 2;
              if ((uVar11 & 3) != 0) {
                pfVar23[uVar11 * 4] = 1.4013e-45;
                afStack_78[lVar7 * -4 + uVar11 * 4 + 2] = 0.0;
                uVar11 = lVar8 + 3;
                if ((uVar11 & 3) != 0) {
                  pfVar23[uVar11 * 4] = 1.4013e-45;
                  afStack_78[lVar7 * -4 + uVar11 * 4 + 2] = 0.0;
                  uVar11 = lVar8 + 4;
                }
              }
            }
          }
        }
      }
      uVar20 = (uint)uVar9;
      uVar22 = uVar22 + 1;
    } while ((int)uVar22 < (int)pcVar18);
  }
  uVar25 = (ulong)(uint)fVar24;
  pfVar23[(long)(int)uVar20 * 4] = 1.4013e-45;
  afStack_78[lVar7 * -4 + (long)(int)uVar20 * 4 + 2] = 0.0;
  uVar20 = uVar20 + 1;
  uVar9 = (ulong)uVar20;
  if ((uVar20 & 3) == 0) {
    lVar12 = local_68;
LAB_00580592:
    if ((int)uVar9 == (int)local_58) {
LAB_00580597:
      if ((int)uVar11 == (int)pcVar19) goto LAB_005805b8;
    }
  }
  else {
    lVar8 = (long)(int)uVar20;
    pfVar23[lVar8 * 4] = 1.4013e-45;
    afStack_78[lVar7 * -4 + lVar8 * 4 + 2] = 0.0;
    uVar9 = lVar8 + 1;
    if ((uVar9 & 3) != 0) {
      pfVar23[uVar9 * 4] = 1.4013e-45;
      afStack_78[lVar7 * -4 + uVar9 * 4 + 2] = 0.0;
      lVar12 = local_68;
      uVar9 = lVar8 + 2;
      if ((uVar9 & 3) != 0) {
        pfVar23[uVar9 * 4] = 1.4013e-45;
        afStack_78[lVar7 * -4 + uVar9 * 4 + 2] = 0.0;
        uVar9 = lVar8 + 3;
        if ((uVar9 & 3) != 0) {
          pfVar23[uVar9 * 4] = 1.4013e-45;
          afStack_78[lVar7 * -4 + uVar9 * 4 + 2] = 0.0;
          uVar9 = lVar8 + 4;
          if ((int)uVar9 == (int)local_58) goto LAB_00580597;
          goto LAB_0058059c;
        }
      }
      goto LAB_00580592;
    }
    lVar12 = local_68;
    if ((int)uVar9 == (int)local_58) goto LAB_00580597;
  }
LAB_0058059c:
  uVar25 = local_58;
  (afStack_78 + lVar7 * -4 + -2)[0] = 8.08357e-39;
  (afStack_78 + lVar7 * -4 + -2)[1] = 0.0;
  uVar25 = bug((ulong)(uint)fVar24,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
               "oscformat: typeindex %d, datastart %d, msgindex %d, msgsize %d",uVar9,uVar25,
               uVar11 & 0xffffffff,pcVar19,pcVar19,*(undefined1 *)pfVar23);
  pcVar18 = pcVar19;
  pcVar19 = (char *)(ulong)local_4c;
LAB_005805b8:
  plVar2 = *(long **)(lVar12 + 0x18);
  (afStack_78 + lVar7 * -4 + -2)[0] = 8.083599e-39;
  (afStack_78 + lVar7 * -4 + -2)[1] = 0.0;
  outlet_list(uVar25,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2,0,(int)pcVar19,
              pfVar23,pcVar18,pcVar19);
  return;
}


