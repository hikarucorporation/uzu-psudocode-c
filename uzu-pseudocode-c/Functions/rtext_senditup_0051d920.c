// Function : rtext_senditup
// Namespace: 
// Entry    : 0051d920
// Prototype: undefined rtext_senditup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, int param_10, uint * param_11, uint * param_12, int * param_13, byte * param_14)
// Body     : 0051d920 - 0051e66e


void rtext_senditup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long *param_9,int param_10,uint *param_11,uint *param_12,int *param_13,
                   byte *param_14)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  char *pcVar10;
  int *piVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  byte *pbVar17;
  int iVar18;
  undefined *puVar19;
  char *pcVar20;
  byte *pbVar21;
  byte *pbVar22;
  size_t __n;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  char *pcVar23;
  char cVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  char *pcVar28;
  uint uVar29;
  char *pcVar30;
  char *pcVar31;
  char *pcVar32;
  int iVar33;
  long lVar34;
  ulong uVar35;
  long *plVar36;
  long *plVar37;
  byte *pbVar38;
  long *plVar39;
  char *pcVar40;
  int iVar41;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Da_09;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined8 uVar42;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined4 extraout_XMM0_Db_06;
  undefined4 uVar43;
  undefined4 extraout_XMM0_Db_07;
  undefined4 extraout_XMM0_Db_08;
  undefined4 extraout_XMM0_Db_09;
  undefined1 in_stack_fffffffffffffe48;
  int local_1b4;
  undefined8 local_1b0;
  int local_1a8;
  int local_1a4;
  undefined8 local_1a0;
  undefined8 local_198;
  long *local_190;
  uint *local_188;
  long local_180;
  int *local_178;
  ulong local_170;
  uint *local_168;
  ulong local_160;
  char *local_158;
  int local_150;
  int local_14c;
  long local_148;
  int local_140;
  int local_13c;
  int local_138;
  int local_134;
  int local_130;
  undefined4 local_12c;
  uint local_128;
  uint local_124;
  int local_120;
  byte local_11c [4];
  long *local_118;
  undefined8 local_110;
  char *local_108;
  byte *local_100;
  char local_f8 [200];
  
  local_1b4 = 0;
  local_178 = param_13;
  local_180 = glist_getcanvas(param_9[6]);
  pbVar38 = local_11c;
  text_getfont(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
               param_7,param_8,(long *)param_9[5],(long *)param_9[6],&local_120,(int *)&local_124,
               (char *)pbVar38,param_14);
  if ((long)(int)param_9[1] < 100) {
    pcVar10 = local_f8;
  }
  else {
    pcVar10 = getbytes((long)(int)param_9[1] * 2 + 1);
  }
  *pcVar10 = '\0';
  lVar14 = param_9[5];
  uVar35 = (ulong)local_124;
  local_1a4 = local_120;
  local_190 = param_9;
  if ((~*(byte *)(lVar14 + 0x2e) & 3) != 0) {
    local_140 = (int)*(short *)(lVar14 + 0x2c);
    local_14c = 0x3c;
    if (local_140 != 0) {
      local_14c = local_140;
    }
    iVar5 = u8_charnum((byte *)*param_9,(int)param_9[1]);
    local_13c = (int)(local_1a4 / 2 + *param_11) / local_1a4;
    local_134 = (int)*param_12 / (int)local_124;
    if (iVar5 < 1) {
      local_1a0 = (ulong)local_1a0._4_4_ << 0x20;
      local_1b0 = (byte *)((ulong)local_1b0._4_4_ << 0x20);
      iVar9 = 0;
      iVar25 = 0;
      local_1a8 = param_10;
LAB_0051ded8:
      *local_178 = local_1b4;
    }
    else {
      local_1a0 = (ulong)local_1a0._4_4_ << 0x20;
      local_1b0 = (byte *)((ulong)local_1b0._4_4_ << 0x20);
      iVar41 = 0;
      uVar13 = 0;
      iVar18 = 0;
      iVar9 = 0;
      iVar25 = 0;
      local_150 = 0;
      local_1a8 = param_10;
      local_188 = param_11;
      local_168 = param_12;
      local_160 = uVar35;
      local_158 = pcVar10;
      local_138 = iVar5;
      do {
        local_148 = CONCAT44(local_148._4_4_,iVar25);
        iVar25 = iVar5;
        if (local_14c < iVar5) {
          iVar25 = local_14c;
        }
        lVar14 = (long)(int)uVar13;
        local_170 = uVar13;
        local_130 = iVar18;
        local_198._0_4_ = (int)param_9[1];
        iVar6 = u8_offset((byte *)(*param_9 + lVar14),iVar25);
        pbVar38 = (byte *)(*param_9 + lVar14);
        if (iVar6 != 0) {
          lVar12 = 0;
          do {
            if (pbVar38[lVar12] == 10) {
              iVar6 = (int)lVar12;
              goto LAB_0051dd53;
            }
            lVar12 = lVar12 + 1;
          } while (iVar6 != lVar12);
        }
        if (local_14c < iVar5) {
          iVar18 = -2 - iVar6;
          lVar12 = (long)(iVar6 + 1);
          do {
            iVar5 = iVar25;
            if (lVar12 == 0) goto LAB_0051dc4e;
            iVar18 = iVar18 + 1;
            lVar34 = lVar12 + -1;
            pcVar10 = (char *)(*param_9 + lVar14 + -1 + lVar12);
            lVar12 = lVar34;
          } while (*pcVar10 != ' ');
          if (-iVar18 < 1) goto LAB_0051dc4e;
          iVar6 = (int)lVar34;
LAB_0051dd53:
          iVar5 = u8_charnum(pbVar38,iVar6);
          local_100 = (byte *)0x1;
        }
        else {
          iVar6 = (int)local_198 - (int)local_170;
LAB_0051dc4e:
          local_100 = (byte *)0x0;
        }
        local_198 = (byte *)CONCAT44(local_198._4_4_,iVar9);
        if (iVar9 == local_134) {
          iVar25 = local_13c;
          if (iVar5 < local_13c) {
            iVar25 = iVar5;
          }
          if (local_13c < 0) {
            iVar25 = 0;
          }
          iVar25 = u8_offset((byte *)(*local_190 + lVar14),iVar25);
          *local_178 = iVar25 + (int)local_170;
          local_150 = 1;
        }
        param_9 = local_190;
        strncpy(local_158 + local_1b4,(char *)(lVar14 + *local_190),(long)iVar6);
        iVar18 = (int)local_170;
        uVar7 = (int)local_100 + iVar18 + iVar6;
        uVar13 = (ulong)uVar7;
        iVar25 = *(int *)((long)param_9 + 0xc);
        iVar9 = (int)param_9[2];
        iVar33 = iVar25 + iVar41 + local_1b4;
        if ((int)uVar7 < iVar25) {
          iVar33 = (int)local_1a0;
        }
        iVar26 = (int)local_1a0;
        if (iVar18 <= iVar25) {
          iVar26 = iVar33;
        }
        local_1a0 = CONCAT44(local_1a0._4_4_,iVar26);
        iVar25 = iVar41 + iVar9 + local_1b4;
        if ((int)uVar7 < iVar9) {
          iVar25 = (int)local_1b0;
        }
        iVar41 = (int)local_1b0;
        if (iVar18 <= iVar9) {
          iVar41 = iVar25;
        }
        local_1b0 = (byte *)CONCAT44(local_1b0._4_4_,iVar41);
        iVar6 = local_1b4 + iVar6;
        iVar18 = local_130 + (int)local_100 + iVar5;
        local_1b4 = iVar6;
        if ((int)uVar7 < (int)param_9[1]) {
          local_1b4 = iVar6 + 1;
          local_158[iVar6] = '\n';
        }
        iVar25 = (int)local_148;
        if ((int)local_148 < iVar5) {
          iVar25 = iVar5;
        }
        iVar9 = (int)local_198 + 1;
        iVar41 = -uVar7;
        iVar5 = local_138 - iVar18;
      } while (iVar5 != 0 && iVar18 <= local_138);
      local_124 = (uint)local_160;
      pbVar38 = local_100;
      param_11 = local_188;
      pcVar10 = local_158;
      param_12 = local_168;
      if (local_150 == 0) goto LAB_0051ded8;
    }
    iVar5 = 1;
    if (iVar9 != 0) {
      iVar5 = iVar9;
    }
    iVar9 = local_140;
    if (((short)local_140 == 0) &&
       (iVar9 = iVar25, iVar25 < (int)((uint)((*(byte *)(param_9[5] + 0x2e) & 3) != 0) * 2 + 1))) {
      do {
        lVar14 = (long)local_1b4;
        local_1b4 = local_1b4 + 1;
        pcVar10[lVar14] = ' ';
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)((uint)((*(byte *)(param_9[5] + 0x2e) & 3) != 0) * 2 + 1));
    }
    *param_11 = iVar9 * local_1a4;
    *param_12 = iVar5 * local_124;
    iVar5 = glist_getzoom(param_9[6]);
    if (iVar5 < 2) {
      *param_11 = *param_11 + 4;
      iVar5 = 5;
      uVar8 = extraout_XMM0_Da_00;
      uVar43 = extraout_XMM0_Db_00;
    }
    else {
      iVar5 = glist_getzoom(param_9[6]);
      *param_11 = *param_11 + iVar5 * 4;
      iVar5 = glist_getzoom(param_9[6]);
      iVar5 = iVar5 * 5;
      uVar8 = extraout_XMM0_Da_01;
      uVar43 = extraout_XMM0_Db_01;
    }
    uVar7 = iVar5 + *param_12;
    param_10 = local_1a8;
    goto LAB_0051e002;
  }
  local_170 = CONCAT44(local_170._4_4_,(int)*param_11 / local_120);
  *local_178 = 0;
  local_160 = uVar35;
  if (((0 < *(short *)(lVar14 + 0x2c)) &&
      (iVar5 = binbuf_getnatom(*(undefined4 **)(lVar14 + 0x10)), iVar5 == 1)) &&
     (piVar11 = (int *)binbuf_getvec(*(long *)(param_9[5] + 0x10)), *piVar11 == 1)) {
    iVar5 = (int)param_9[1];
    __n = (size_t)iVar5;
    iVar25 = (int)*(short *)(param_9[5] + 0x2c);
    if (iVar25 < iVar5) {
      local_1a8 = param_10;
      local_188 = param_11;
      local_168 = param_12;
      strncpy(pcVar10,(char *)*param_9,__n);
      pcVar10[(int)param_9[1]] = '\0';
      lVar14 = param_9[1];
      lVar12 = (long)(int)lVar14;
      if (0 < lVar12) {
        local_148 = (long)iVar25;
        iVar5 = iVar5 - iVar25;
        local_1b0 = (byte *)(pcVar10 + lVar12);
        lVar34 = 0;
        do {
          if (pcVar10[lVar34] == '.') {
            local_198 = (byte *)CONCAT44(local_198._4_4_,iVar5);
            pcVar28 = pcVar10 + lVar34 + 0x11;
            pcVar30 = pcVar10 + lVar34 + (local_148 - __n) + 0x11;
            pcVar23 = pcVar10 + lVar34 + 1;
            pcVar20 = pcVar10 + lVar34 + 0x72;
            pbVar21 = (byte *)(pcVar10 + lVar34);
            pcVar32 = pcVar10 + lVar34 + (local_148 - __n) + 1;
            uVar35 = (lVar12 + -2) - lVar34;
            goto LAB_0051e3e0;
          }
          lVar16 = lVar34 + 1;
          lVar34 = lVar34 + 1;
        } while (pcVar10 + lVar16 < local_1b0);
      }
      goto LAB_0051e4c7;
    }
  }
  sVar4 = (short)*(uint *)(param_9[5] + 0x2c);
  uVar7 = 1000;
  if (0 < sVar4) {
    uVar7 = *(uint *)(param_9[5] + 0x2c);
  }
  local_1b4 = 0;
  if ((int)param_9[1] < 1) {
    uVar7 = 3;
  }
  else {
    uVar29 = 1;
    local_1a8 = param_10;
    local_188 = param_11;
    local_168 = param_12;
    do {
      uVar27 = uVar29;
      iVar5 = local_1b4;
      uVar29 = uVar27 - 1;
      iVar25 = u8_nextchar(*local_190,&local_1b4);
      plVar36 = local_190;
      if ((int)uVar29 < (int)local_170) {
        *local_178 = local_1b4;
      }
      if ((iVar25 == 10) || (iVar25 == 0)) {
        local_1b4 = iVar5;
        goto LAB_0051de99;
      }
      lVar14 = (long)iVar5;
      memcpy(pcVar10 + lVar14,(void *)(*local_190 + lVar14),local_1b4 - lVar14);
      if ((uVar7 & 0xffff) == uVar27) {
        if ((local_1b4 < (int)plVar36[1]) &&
           ((*(char *)(*plVar36 + (long)local_1b4) != ' ' || (local_1b4 + 1 < (int)plVar36[1])))) {
          pcVar10[lVar14] = '>';
        }
      }
    } while ((local_1b4 < (int)plVar36[1]) && (uVar29 = uVar27 + 1, uVar27 < (uVar7 & 0xffff)));
    uVar29 = uVar27;
LAB_0051de99:
    uVar7 = 3;
    if (3 < uVar29) {
      uVar7 = uVar29;
    }
    sVar4 = *(short *)(local_190[5] + 0x2c);
    param_11 = local_188;
    param_12 = local_168;
    param_10 = local_1a8;
  }
  iVar5 = (int)local_160;
  uVar29 = (int)sVar4;
  if (sVar4 < 1) {
    uVar29 = uVar7;
  }
  *param_11 = uVar29 * local_1a4;
  pcVar10[local_1b4] = '\0';
  goto LAB_0051dfb7;
  while( true ) {
    bVar1 = *pbVar21;
    pbVar38 = (byte *)(ulong)bVar1;
    pcVar32 = pcVar31 + 1;
    pcVar23 = pcVar23 + 1;
    pcVar30 = pcVar30 + 1;
    pcVar28 = pcVar28 + 1;
    pcVar20 = pcVar40 + 1;
    uVar35 = uVar13 - 1;
    if ((byte)(bVar1 - 0x3a) < 0xf6) break;
LAB_0051e3e0:
    uVar13 = uVar35;
    pcVar31 = pcVar32;
    param_14 = pbVar21;
    pcVar40 = pcVar20;
    pbVar21 = param_14 + 1;
    if (local_1b0 <= pbVar21) {
      if ((long)iVar5 <= (long)(pbVar21 + ~(ulong)(pcVar10 + lVar34))) goto LAB_0051e4e9;
      goto LAB_0051e4c7;
    }
  }
  lVar16 = (long)iVar5;
  if ((long)(pbVar21 + ~(ulong)(pcVar10 + lVar34)) < lVar16) {
LAB_0051e4c7:
    pcVar10[(long)*(short *)(local_190[5] + 0x2c) + -1] = '>';
    pcVar10[*(short *)(local_190[5] + 0x2c)] = '\0';
  }
  else {
    param_14[1 - lVar16] = bVar1;
    param_14 = param_14 + 2;
    if (param_14 < local_1b0) {
      pbVar38 = pbVar21 + -lVar16;
      pbVar17 = local_1b0 + ~(ulong)pbVar21;
      if (((byte *)0x7 < pbVar17) &&
         ((local_198 = pbVar17, local_1b0 <= pbVar21 + (local_148 - __n) + 1 ||
          (pcVar10 + ((lVar12 + local_148) - __n) <= param_14)))) {
        if (pbVar17 < (byte *)0x20) {
          pbVar21 = (byte *)0x0;
        }
        else {
          pbVar21 = (byte *)((ulong)pbVar17 & 0xffffffffffffffe0);
          if (pbVar21 + -0x20 < (byte *)0x60) {
            lVar12 = 0;
          }
          else {
            uVar35 = ((uVar13 & 0xffffffffffffffe0) - 0x20 >> 5) + 1 & 0xfffffffffffffffc;
            lVar12 = 0;
            do {
              uVar42 = *(undefined8 *)(pcVar40 + -0x68);
              uVar2 = *(undefined8 *)(pcVar40 + -0x60);
              uVar3 = *(undefined8 *)(pcVar40 + -0x58);
              *(undefined8 *)(pcVar32 + lVar12) = *(undefined8 *)(pcVar40 + -0x70);
              *(undefined8 *)(pcVar32 + lVar12 + 8) = uVar42;
              *(undefined8 *)(pcVar31 + lVar12 + 0x11) = uVar2;
              *(undefined8 *)(pcVar31 + lVar12 + 0x11 + 8) = uVar3;
              uVar42 = *(undefined8 *)(pcVar40 + -0x48);
              uVar2 = *(undefined8 *)(pcVar40 + -0x40);
              uVar3 = *(undefined8 *)(pcVar40 + -0x38);
              *(undefined8 *)(pcVar31 + lVar12 + 0x21) = *(undefined8 *)(pcVar40 + -0x50);
              *(undefined8 *)(pcVar31 + lVar12 + 0x21 + 8) = uVar42;
              *(undefined8 *)(pcVar31 + lVar12 + 0x31) = uVar2;
              *(undefined8 *)(pcVar31 + lVar12 + 0x31 + 8) = uVar3;
              uVar42 = *(undefined8 *)(pcVar40 + -0x28);
              uVar2 = *(undefined8 *)(pcVar40 + -0x20);
              uVar3 = *(undefined8 *)(pcVar40 + -0x18);
              *(undefined8 *)(pcVar31 + lVar12 + 0x41) = *(undefined8 *)(pcVar40 + -0x30);
              *(undefined8 *)(pcVar31 + lVar12 + 0x41 + 8) = uVar42;
              *(undefined8 *)(pcVar31 + lVar12 + 0x51) = uVar2;
              *(undefined8 *)(pcVar31 + lVar12 + 0x51 + 8) = uVar3;
              uVar2 = *(undefined8 *)(pcVar40 + -8);
              param_2 = *(undefined8 *)pcVar40;
              uVar42 = *(undefined8 *)(pcVar40 + 8);
              *(undefined8 *)(pcVar31 + lVar12 + 0x61) = *(undefined8 *)(pcVar40 + -0x10);
              *(undefined8 *)(pcVar31 + lVar12 + 0x61 + 8) = uVar2;
              *(undefined8 *)(pcVar31 + lVar12 + 0x71) = param_2;
              *(undefined8 *)(pcVar31 + lVar12 + 0x71 + 8) = uVar42;
              lVar12 = lVar12 + 0x80;
              pcVar40 = pcVar40 + 0x80;
              uVar35 = uVar35 - 4;
            } while (uVar35 != 0);
          }
          if ((((ulong)(pbVar21 + -0x20) >> 5) + 1 & 3) != 0) {
            lVar34 = 0;
            do {
              uVar2 = *(undefined8 *)(pcVar28 + lVar34 + lVar12 + -0x10 + 8);
              param_2 = *(undefined8 *)(pcVar28 + lVar34 + lVar12);
              uVar42 = *(undefined8 *)(pcVar28 + lVar34 + lVar12 + 8);
              *(undefined8 *)(pcVar30 + lVar34 + lVar12 + -0x10) =
                   *(undefined8 *)(pcVar28 + lVar34 + lVar12 + -0x10);
              *(undefined8 *)(pcVar30 + lVar34 + lVar12 + -0x10 + 8) = uVar2;
              *(undefined8 *)(pcVar30 + lVar34 + lVar12) = param_2;
              *(undefined8 *)(pcVar30 + lVar34 + lVar12 + 8) = uVar42;
              lVar34 = lVar34 + 0x20;
            } while ((ulong)((byte)(((byte)(((byte)uVar13 & 0x60) - 0x20) >> 5) + 1) & 3) * 0x20 !=
                     lVar34);
          }
          if (pbVar17 == pbVar21) goto LAB_0051e4e9;
          if (((ulong)pbVar17 & 0x18) == 0) {
            pbVar38 = pbVar38 + (long)pbVar21;
            param_14 = param_14 + (long)pbVar21;
            goto LAB_0051e650;
          }
        }
        pbVar22 = (byte *)((ulong)pbVar17 & 0xfffffffffffffff8);
        param_14 = param_14 + (long)pbVar22;
        pbVar38 = pbVar38 + (long)pbVar22;
        lVar12 = 0;
        do {
          *(undefined8 *)(pcVar32 + (long)pbVar21 + lVar12) =
               *(undefined8 *)(pcVar23 + (long)pbVar21 + lVar12);
          lVar12 = lVar12 + 8;
        } while ((uVar13 & 0xfffffffffffffff8) - (long)pbVar21 != lVar12);
        if (pbVar17 == pbVar22) goto LAB_0051e4e9;
      }
LAB_0051e650:
      pbVar38 = pbVar38 + 1;
      do {
        *pbVar38 = *param_14;
        param_14 = param_14 + 1;
        pbVar38 = pbVar38 + 1;
      } while (param_14 < local_1b0);
    }
  }
LAB_0051e4e9:
  local_1a0._4_4_ = (int)lVar14 >> 0x1f;
  local_1b4 = (int)*(short *)(local_190[5] + 0x2c);
  *local_178 = (int)local_170;
  *local_188 = local_1a4 * local_1b4;
  iVar5 = (int)local_160;
  param_11 = local_188;
  param_12 = local_168;
  param_10 = local_1a8;
LAB_0051dfb7:
  param_9 = local_190;
  iVar25 = *local_178;
  iVar9 = local_1b4;
  if ((local_1b4 < iVar25) || (iVar9 = iVar25, iVar25 < 0)) {
    iVar25 = 0;
    if (-1 < iVar9) {
      iVar25 = iVar9;
    }
    *local_178 = iVar25;
  }
  local_1a0 = CONCAT44(local_1a0._4_4_,*(undefined4 *)((long)local_190 + 0xc));
  local_1b0 = (byte *)CONCAT44(local_1b0._4_4_,(int)local_190[2]);
  iVar25 = glist_getzoom(local_190[6]);
  *param_11 = *param_11 + iVar25 * 2;
  iVar25 = glist_getzoom(param_9[6]);
  uVar7 = iVar5 + iVar25 * 4;
  uVar8 = extraout_XMM0_Da_02;
  uVar43 = extraout_XMM0_Db_02;
LAB_0051e002:
  *param_12 = uVar7;
  pcVar10[local_1b4] = '\0';
  if (param_10 != 0) {
    lVar14 = param_9[5];
    sVar4 = *(short *)(lVar14 + 0x2c);
    uVar42 = CONCAT44(uVar43,uVar8);
    if ((sVar4 != 0) && (uVar42 = CONCAT44(uVar43,uVar8), (~*(byte *)(lVar14 + 0x2e) & 3) != 0)) {
      local_118 = (long *)((ulong)local_118 & 0xffffffff00000000);
      local_128 = 0;
      local_12c = 0;
      *(undefined2 *)(lVar14 + 0x2c) = 0;
      pbVar38 = (byte *)&local_12c;
      uVar42 = rtext_senditup(CONCAT44(uVar43,uVar8),param_2,param_3,param_4,param_5,param_6,param_7
                              ,param_8,param_9,0,(uint *)&local_118,&local_128,(int *)pbVar38,
                              param_14);
      if ((uint)local_118 != *param_11) {
        *(short *)(param_9[5] + 0x2c) = sVar4;
      }
    }
    if ((*(byte *)(local_180 + 0xe8) & 1) != 0) {
      if (param_10 == 2) {
        plVar36 = param_9 + 7;
        uVar42 = pdgui_vmess(uVar42,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x655293
                             ,"cs s",local_180,plVar36,pcVar10,param_14,in_stack_fffffffffffffe48);
        if ((*param_11 != *(uint *)((long)param_9 + 0x1c)) || (*param_12 != *(uint *)(param_9 + 4)))
        {
          param_14 = (byte *)0x0;
          uVar42 = text_drawborder(uVar42,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                   (long *)param_9[5],param_9[6],plVar36,(ulong)*param_11,
                                   (ulong)*param_12,0);
        }
        lVar14 = local_180;
        if (*(int *)((long)param_9 + 0x14) != 0) {
          if ((int)local_1a0 < (int)local_1b0) {
            iVar5 = u8_charnum((byte *)*param_9,(int)local_1a0);
            pdgui_vmess(CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_05),param_2,param_3,param_4,
                        param_5,param_6,param_7,param_8,0,"crr si",local_180,"select",&DAT_006552ad,
                        plVar36,(char)iVar5);
            iVar5 = u8_charnum((byte *)*param_9,(int)local_1b0);
            plVar39 = plVar36;
            uVar42 = pdgui_vmess(CONCAT44(extraout_XMM0_Db_06,extraout_XMM0_Da_06),param_2,param_3,
                                 param_4,param_5,param_6,param_7,param_8,0,"crr si",local_180,
                                 "select","to",plVar36,(char)iVar5 + -1);
            plVar36 = (long *)&DAT_005e2ee7;
            lVar14 = local_180;
          }
          else {
            pdgui_vmess(uVar42,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crr",
                        local_180,"select","clear",param_14,in_stack_fffffffffffffe48);
            uVar7 = u8_charnum((byte *)*param_9,(int)local_1a0);
            pcVar20 = "icursor";
            plVar39 = (long *)(ulong)uVar7;
            plVar37 = plVar36;
            uVar42 = pdgui_vmess(CONCAT44(extraout_XMM0_Db_09,extraout_XMM0_Da_09),param_2,param_3,
                                 param_4,param_5,param_6,param_7,param_8,0,"cr si",lVar14,"icursor",
                                 plVar36,plVar39,in_stack_fffffffffffffe48);
            uVar42 = pdgui_vmess(uVar42,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                 0x653dde,"c",lVar14,pcVar20,plVar37,plVar39,
                                 in_stack_fffffffffffffe48);
          }
          pdgui_vmess(uVar42,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crs",lVar14,
                      "focus",plVar36,plVar39,in_stack_fffffffffffffe48);
        }
      }
      else if (param_10 == 1) {
        local_118 = param_9 + 7;
        puVar19 = &DAT_00655240;
        local_158 = pcVar10;
        puVar15 = gensym(&DAT_00655240 +
                         *(int *)(&DAT_00655240 + (ulong)(*(byte *)(param_9[5] + 0x2e) & 3) * 4));
        local_110 = *puVar15;
        local_108 = "text";
        iVar5 = glist_getzoom(param_9[6]);
        local_188 = param_11;
        if (iVar5 < 2) {
          cVar24 = '\x03';
          iVar5 = 2;
          uVar42 = extraout_RDX;
          uVar8 = extraout_XMM0_Da_03;
          uVar43 = extraout_XMM0_Db_03;
        }
        else {
          iVar5 = glist_getzoom(param_9[6]);
          iVar5 = iVar5 * 2;
          uVar8 = glist_getzoom(param_9[6]);
          cVar24 = (char)uVar8 * '\x03';
          uVar42 = extraout_RDX_00;
          uVar8 = extraout_XMM0_Da_04;
          uVar43 = extraout_XMM0_Db_04;
        }
        iVar25 = text_xpix(CONCAT44(uVar43,uVar8),param_2,param_3,param_4,param_5,param_6,param_7,
                           param_8,param_9[5],param_9[6],uVar42,puVar19,(char *)pbVar38,param_14);
        iVar9 = text_ypix(CONCAT44(extraout_XMM0_Db_07,extraout_XMM0_Da_07),param_2,param_3,param_4,
                          param_5,param_6,param_7,param_8,param_9[5],param_9[6],extraout_RDX_01,
                          puVar19,(char *)pbVar38,param_14);
        glist_isselected(param_9[6],param_9[5]);
        pcVar10 = local_158;
        pdgui_vmess(CONCAT44(extraout_XMM0_Db_08,extraout_XMM0_Da_08),param_2,param_3,param_4,
                    param_5,param_6,param_7,param_8,0x655278,"c S ii s i r",local_180,3,&local_118,
                    (ulong)(uint)(iVar5 + iVar25),(char)iVar9 + cVar24);
        param_11 = local_188;
      }
    }
  }
  *(uint *)((long)param_9 + 0x1c) = *param_11;
  *(uint *)(param_9 + 4) = *param_12;
  if (pcVar10 != local_f8) {
    freebytes(pcVar10);
  }
  return;
}


