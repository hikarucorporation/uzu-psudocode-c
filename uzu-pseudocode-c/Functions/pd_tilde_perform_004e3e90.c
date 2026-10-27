// Function : pd_tilde_perform
// Namespace: 
// Entry    : 004e3e90
// Prototype: long pd_tilde_perform(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 004e3e90 - 004e4845


long pd_tilde_perform(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     long param_9)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  ushort **ppuVar5;
  int *piVar6;
  char *pcVar7;
  FILE *pFVar8;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 uVar9;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  undefined8 extraout_RDX_07;
  undefined8 extraout_RDX_08;
  int iVar10;
  undefined1 *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  char *in_R8;
  undefined8 in_R9;
  long lVar16;
  size_t sVar17;
  FILE *pFVar18;
  uint uVar20;
  int iVar19;
  undefined1 *puVar21;
  uint uVar22;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 uVar23;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Da_09;
  undefined4 extraout_XMM0_Da_10;
  undefined4 extraout_XMM0_Da_11;
  undefined4 extraout_XMM0_Da_12;
  undefined4 extraout_XMM0_Da_13;
  undefined4 extraout_XMM0_Da_14;
  undefined4 extraout_XMM0_Da_15;
  undefined4 extraout_XMM0_Da_16;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined4 uVar25;
  undefined4 extraout_XMM0_Db_06;
  undefined4 extraout_XMM0_Db_07;
  undefined4 extraout_XMM0_Db_08;
  undefined8 uVar24;
  undefined4 extraout_XMM0_Db_09;
  undefined4 extraout_XMM0_Db_10;
  undefined4 extraout_XMM0_Db_11;
  undefined4 extraout_XMM0_Db_12;
  undefined4 extraout_XMM0_Db_13;
  undefined4 extraout_XMM0_Db_14;
  undefined4 extraout_XMM0_Db_15;
  undefined4 extraout_XMM0_Db_16;
  FILE *local_438;
  undefined4 local_42c;
  long local_428;
  ulong local_420;
  undefined4 local_418 [250];
  
  lVar2 = *(long *)(param_9 + 8);
  uVar15 = *(uint *)(lVar2 + 0x98);
  uVar22 = 0x40;
  if ((int)uVar15 < 0x40) {
    uVar22 = uVar15;
  }
  if (*(long *)(lVar2 + 0x48) != 0) {
    pFVar8 = *(FILE **)(lVar2 + 0x50);
    local_428 = param_9;
    if (*(int *)(lVar2 + 0x70) == 0) {
      fwrite(&DAT_00652b71,2,1,pFVar8);
      if (*(int *)(lVar2 + 100) == 0) {
        fwrite(&DAT_00652999,2,1,*(FILE **)(lVar2 + 0x50));
      }
      else if (0 < *(int *)(lVar2 + 100)) {
        uVar13 = 1;
        if (1 < (int)uVar22) {
          uVar13 = (ulong)uVar22;
        }
        if ((int)uVar15 < 1) {
          lVar16 = 0;
          do {
            iVar19 = 0x40;
            do {
              fwrite(&DAT_00652999,2,1,*(FILE **)(lVar2 + 0x50));
              iVar19 = iVar19 + -1;
            } while (iVar19 != 0);
            lVar16 = lVar16 + 1;
          } while (lVar16 < *(int *)(lVar2 + 100));
        }
        else {
          lVar16 = 0;
          local_420 = uVar13;
          do {
            lVar3 = *(long *)(*(long *)(lVar2 + 0x88) + lVar16 * 8);
            lVar12 = 0;
            do {
              fprintf(*(FILE **)(lVar2 + 0x50),"%g\n",
                      SUB84((double)*(float *)(lVar3 + lVar12 * 4),0));
              lVar12 = lVar12 + 1;
            } while ((int)uVar13 != (int)lVar12);
            if ((uint)local_420 < 0x40) {
              iVar19 = (int)uVar13 + -0x40;
              do {
                fwrite(&DAT_00652999,2,1,*(FILE **)(lVar2 + 0x50));
                iVar19 = iVar19 + 1;
              } while (iVar19 != 0);
            }
            lVar16 = lVar16 + 1;
          } while (lVar16 < *(int *)(lVar2 + 100));
        }
      }
      pFVar8 = *(FILE **)(lVar2 + 0x50);
      fwrite(&DAT_00652b71,2,1,pFVar8);
    }
    else {
      putc(4,pFVar8);
      if (*(int *)(lVar2 + 100) == 0) {
        pFVar8 = *(FILE **)(lVar2 + 0x50);
        local_418[0] = 0;
        putc(1,pFVar8);
        fwrite(local_418,4,1,pFVar8);
      }
      else if (0 < *(int *)(lVar2 + 100)) {
        if ((int)uVar22 < 2) {
          uVar22 = 1;
        }
        lVar16 = 0;
        do {
          uVar20 = 0;
          if ((int)uVar15 < 1) {
LAB_004e3fb1:
            iVar19 = uVar20 - 0x40;
            do {
              pFVar8 = *(FILE **)(lVar2 + 0x50);
              local_418[0] = 0;
              putc(1,pFVar8);
              fwrite(local_418,4,1,pFVar8);
              iVar19 = iVar19 + 1;
            } while (iVar19 != 0);
          }
          else {
            lVar3 = *(long *)(*(long *)(lVar2 + 0x88) + lVar16 * 8);
            lVar12 = 0;
            do {
              local_418[0] = *(undefined4 *)(lVar3 + lVar12 * 4);
              pFVar8 = *(FILE **)(lVar2 + 0x50);
              putc(1,pFVar8);
              fwrite(local_418,4,1,pFVar8);
              lVar12 = lVar12 + 1;
            } while (uVar22 != (uint)lVar12);
            uVar20 = uVar22;
            if (uVar22 < 0x40) goto LAB_004e3fb1;
          }
          lVar16 = lVar16 + 1;
        } while (lVar16 < *(int *)(lVar2 + 100));
      }
      putc(4,*(FILE **)(lVar2 + 0x50));
    }
    puVar1 = (undefined8 *)(lVar2 + 0x48);
    fflush(*(FILE **)(lVar2 + 0x50));
    if (*(int *)(lVar2 + 0x70) != 0) {
      uVar15 = 0;
      local_438 = (FILE *)0x0;
      do {
        pFVar18 = (FILE *)*puVar1;
switchD_004e4237_caseD_0:
        iVar19 = getc(pFVar18);
        switch(iVar19) {
        default:
          goto switchD_004e4237_caseD_0;
        case 1:
          sVar17 = fread(&local_42c,4,1,pFVar18);
          pFVar8 = pFVar18;
          if (sVar17 == 0) goto switchD_004e4237_caseD_ffffffff;
          iVar19 = (int)local_438;
          if ((int)uVar15 < *(int *)(lVar2 + 0x68)) {
            *(undefined4 *)
             (*(long *)(*(long *)(lVar2 + 0x90) + (ulong)uVar15 * 8) + (long)iVar19 * 4) = local_42c
            ;
          }
          pFVar8 = (FILE *)(ulong)(iVar19 + 1);
          if (0x3e < iVar19) {
            pFVar8 = (FILE *)0x0;
          }
          uVar15 = uVar15 + (0x3e < iVar19);
          local_438 = pFVar8;
          break;
        case 2:
          lVar16 = 0;
          while( true ) {
            iVar19 = getc(pFVar18);
            if (iVar19 == -1) goto switchD_004e4237_caseD_ffffffff;
            *(char *)((long)local_418 + lVar16) = (char)iVar19;
            if (iVar19 == 0) break;
            lVar16 = lVar16 + 1;
            if (lVar16 == 1000) goto switchD_004e4237_caseD_ffffffff;
          }
          gensym((char *)local_418);
          pd_error(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5
                   ,param_6,param_7,param_8,lVar2,"pd~: subprocess returned malformed audio",
                   extraout_RDX_00,pFVar8,in_R8,in_R9);
          break;
        case 4:
          uVar9 = extraout_RDX;
          uVar23 = extraout_XMM0_Da;
          uVar25 = extraout_XMM0_Db;
          goto LAB_004e4603;
        case -1:
          goto switchD_004e4237_caseD_ffffffff;
        }
      } while( true );
    }
    local_438 = (FILE *)0x0;
    uVar15 = 0;
LAB_004e42f9:
    iVar19 = getc((FILE *)*puVar1);
    if (iVar19 != -1) {
      iVar10 = 0;
      ppuVar5 = __ctype_b_loc();
      uVar9 = extraout_RDX_01;
      uVar23 = extraout_XMM0_Da_01;
      uVar25 = extraout_XMM0_Db_01;
      do {
        lVar16 = (long)iVar10;
        if (iVar10 == 0) {
          if ((iVar19 == 0x3b) ||
             (pFVar8 = (FILE *)(long)iVar19, ((*ppuVar5)[(long)pFVar8] & 0x2000) != 0))
          goto LAB_004e4448;
LAB_004e43c5:
          iVar10 = iVar10 + 1;
          *(char *)((long)local_418 + lVar16) = (char)iVar19;
        }
        else {
          while ((iVar19 == 0x3b ||
                 (pFVar8 = (FILE *)(long)iVar19, ((*ppuVar5)[(long)pFVar8] & 0x2000) != 0))) {
            *(undefined1 *)((long)local_418 + lVar16) = 0;
            iVar4 = __isoc99_sscanf(local_418,"%f",&local_42c);
            if (0 < iVar4) {
              iVar10 = (int)local_438;
              uVar23 = extraout_XMM0_Da_02;
              uVar25 = extraout_XMM0_Db_02;
              if ((int)uVar15 < *(int *)(lVar2 + 0x68)) {
                uVar25 = 0;
                *(undefined4 *)
                 (*(long *)(*(long *)(lVar2 + 0x90) + (long)(int)uVar15 * 8) + (long)iVar10 * 4) =
                     local_42c;
                uVar23 = local_42c;
              }
              uVar9 = 0;
              pFVar8 = (FILE *)(ulong)(iVar10 + 1);
              if (0x3e < iVar10) {
                pFVar8 = (FILE *)0x0;
              }
              uVar15 = uVar15 + (0x3e < iVar10);
              local_438 = pFVar8;
              if (iVar19 != 0x3b) goto LAB_004e42f9;
              goto LAB_004e4603;
            }
            iVar19 = getc((FILE *)*puVar1);
            if (iVar19 == -1) goto switchD_004e4237_caseD_ffffffff;
          }
          if (iVar10 < 0x4f) goto LAB_004e43c5;
        }
        iVar19 = getc((FILE *)*puVar1);
        uVar9 = extraout_RDX_02;
        uVar23 = extraout_XMM0_Da_03;
        uVar25 = extraout_XMM0_Db_03;
        if (iVar19 == -1) break;
      } while( true );
    }
switchD_004e4237_caseD_ffffffff:
    piVar6 = __errno_location();
    if (*piVar6 == 0) {
      pd_error(CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_04),param_2,param_3,param_4,param_5,
               param_6,param_7,param_8,lVar2,"pd~: subprocess exited",extraout_RDX_03,pFVar8,in_R8,
               in_R9);
    }
    else {
      pcVar7 = strerror(*piVar6);
      pd_error(CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_05),param_2,param_3,param_4,param_5,
               param_6,param_7,param_8,lVar2,"pd~: %s",pcVar7,pFVar8,in_R8,in_R9);
    }
    param_9 = local_428;
    pFVar8 = *(FILE **)(lVar2 + 0x48);
    pFVar18 = *(FILE **)(lVar2 + 0x50);
    uVar23 = 0;
    uVar25 = 0;
    *puVar1 = 0;
    *(undefined8 *)(lVar2 + 0x50) = 0;
    if (pFVar18 != (FILE *)0x0) {
      fclose(pFVar18);
      uVar23 = extraout_XMM0_Da_06;
      uVar25 = extraout_XMM0_Db_06;
    }
    if (pFVar8 != (FILE *)0x0) {
      fclose(pFVar8);
      uVar23 = extraout_XMM0_Da_07;
      uVar25 = extraout_XMM0_Db_07;
    }
    if (0 < *(__pid_t *)(lVar2 + 0x60)) {
      waitpid(*(__pid_t *)(lVar2 + 0x60),(int *)0x0,0);
      uVar23 = extraout_XMM0_Da_08;
      uVar25 = extraout_XMM0_Db_08;
    }
    binbuf_clear(CONCAT44(uVar25,uVar23),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                 *(int **)(lVar2 + 0x58));
    *puVar1 = 0;
    *(undefined8 *)(lVar2 + 0x50) = 0;
    *(undefined4 *)(lVar2 + 0x60) = 0xffffffff;
  }
  uVar15 = *(uint *)(lVar2 + 0x68);
  if ((0 < (int)uVar15) && (0 < (int)*(uint *)(lVar2 + 0x98))) {
    lVar16 = *(long *)(lVar2 + 0x90);
    sVar17 = (ulong)*(uint *)(lVar2 + 0x98) << 2;
    if ((ulong)uVar15 - 1 < 7) {
      uVar13 = 0;
    }
    else {
      uVar13 = 0;
      do {
        memset(*(void **)(lVar16 + uVar13 * 8),0,sVar17);
        memset(*(void **)(lVar16 + 8 + uVar13 * 8),0,sVar17);
        memset(*(void **)(lVar16 + 0x10 + uVar13 * 8),0,sVar17);
        memset(*(void **)(lVar16 + 0x18 + uVar13 * 8),0,sVar17);
        memset(*(void **)(lVar16 + 0x20 + uVar13 * 8),0,sVar17);
        memset(*(void **)(lVar16 + 0x28 + uVar13 * 8),0,sVar17);
        memset(*(void **)(lVar16 + 0x30 + uVar13 * 8),0,sVar17);
        memset(*(void **)(lVar16 + 0x38 + uVar13 * 8),0,sVar17);
        uVar13 = uVar13 + 8;
      } while ((uVar15 & 0xfffffff8) != uVar13);
    }
    if ((ulong)(uVar15 & 7) != 0) {
      uVar14 = 0;
      do {
        memset(*(void **)(lVar16 + uVar13 * 8 + uVar14 * 8),0,sVar17);
        uVar14 = uVar14 + 1;
      } while ((uVar15 & 7) != uVar14);
    }
  }
LAB_004e482d:
  return param_9 + 0x10;
LAB_004e4448:
  if (iVar19 == 0x3b) goto LAB_004e4603;
  goto LAB_004e42f9;
LAB_004e4603:
  uVar24 = CONCAT44(uVar25,uVar23);
  iVar19 = *(int *)(lVar2 + 0x68);
  if ((int)uVar15 < iVar19) {
    uVar24 = post(CONCAT44(uVar25,uVar23),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  "pd~: short audio signals (sigs %d, fragment %d)");
    iVar19 = *(int *)(lVar2 + 0x68);
    uVar9 = extraout_RDX_04;
  }
  if ((int)uVar15 < iVar19) {
    iVar10 = *(int *)(lVar2 + 0x98);
    pFVar18 = (FILE *)(long)(int)uVar15;
    puVar21 = (undefined1 *)(long)iVar19;
    iVar4 = (int)local_438;
    pFVar8 = local_438;
    if (iVar4 < iVar10) {
      memset((void *)((long)iVar4 * 4 + *(long *)(*(long *)(lVar2 + 0x90) + (long)pFVar18 * 8)),0,
             (ulong)((iVar10 - 1U) - iVar4) * 4 + 4);
      uVar24 = CONCAT44(extraout_XMM0_Db_09,extraout_XMM0_Da_09);
      pFVar8 = local_438;
      uVar9 = extraout_RDX_05;
    }
    puVar11 = (undefined1 *)((long)&pFVar18->_flags + 1);
    if ((puVar11 != puVar21) && (0 < iVar10)) {
      sVar17 = (ulong)(iVar10 - 1U) * 4 + 4;
      lVar16 = *(long *)(lVar2 + 0x90);
      uVar13 = (ulong)(~uVar15 + iVar19) & 7;
      pFVar8 = pFVar18;
      if ((~uVar15 + iVar19 & 7) != 0) {
        do {
          memset(*(void **)(lVar16 + (long)puVar11 * 8),0,sVar17);
          uVar24 = CONCAT44(extraout_XMM0_Db_10,extraout_XMM0_Da_10);
          puVar11 = puVar11 + 1;
          uVar13 = uVar13 - 1;
          uVar9 = extraout_RDX_06;
        } while (uVar13 != 0);
      }
      if ((undefined1 *)0x6 < puVar21 + (-2 - (long)pFVar18)) {
        do {
          memset(*(void **)(lVar16 + (long)puVar11 * 8),0,sVar17);
          memset(*(void **)(lVar16 + 8 + (long)puVar11 * 8),0,sVar17);
          memset(*(void **)(lVar16 + 0x10 + (long)puVar11 * 8),0,sVar17);
          memset(*(void **)(lVar16 + 0x18 + (long)puVar11 * 8),0,sVar17);
          memset(*(void **)(lVar16 + 0x20 + (long)puVar11 * 8),0,sVar17);
          memset(*(void **)(lVar16 + 0x28 + (long)puVar11 * 8),0,sVar17);
          memset(*(void **)(lVar16 + 0x30 + (long)puVar11 * 8),0,sVar17);
          memset(*(void **)(lVar16 + 0x38 + (long)puVar11 * 8),0,sVar17);
          uVar24 = CONCAT44(extraout_XMM0_Db_11,extraout_XMM0_Da_11);
          puVar11 = puVar11 + 8;
          uVar9 = extraout_RDX_07;
        } while (puVar21 != puVar11);
      }
    }
  }
  uVar9 = pd_tilde_readmessages
                    (uVar24,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar2,
                     *(FILE **)(lVar2 + 0x48),uVar9,pFVar8,in_R8,in_R9);
  param_9 = local_428;
  if ((int)uVar9 == 0) {
    piVar6 = __errno_location();
    if (*piVar6 == 0) {
      pd_error(CONCAT44(extraout_XMM0_Db_12,extraout_XMM0_Da_12),param_2,param_3,param_4,param_5,
               param_6,param_7,param_8,lVar2,"pd~: subprocess exited",extraout_RDX_08,pFVar8,in_R8,
               in_R9);
    }
    else {
      pcVar7 = strerror(*piVar6);
      pd_error(CONCAT44(extraout_XMM0_Db_13,extraout_XMM0_Da_13),param_2,param_3,param_4,param_5,
               param_6,param_7,param_8,lVar2,"pd~: %s",pcVar7,pFVar8,in_R8,in_R9);
    }
    pFVar8 = *(FILE **)(lVar2 + 0x48);
    pFVar18 = *(FILE **)(lVar2 + 0x50);
    uVar23 = 0;
    uVar25 = 0;
    *puVar1 = 0;
    *(undefined8 *)(lVar2 + 0x50) = 0;
    if (pFVar18 != (FILE *)0x0) {
      fclose(pFVar18);
      uVar23 = extraout_XMM0_Da_14;
      uVar25 = extraout_XMM0_Db_14;
    }
    if (pFVar8 != (FILE *)0x0) {
      fclose(pFVar8);
      uVar23 = extraout_XMM0_Da_15;
      uVar25 = extraout_XMM0_Db_15;
    }
    if (0 < *(__pid_t *)(lVar2 + 0x60)) {
      waitpid(*(__pid_t *)(lVar2 + 0x60),(int *)0x0,0);
      uVar23 = extraout_XMM0_Da_16;
      uVar25 = extraout_XMM0_Db_16;
    }
    binbuf_clear(CONCAT44(uVar25,uVar23),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                 *(int **)(lVar2 + 0x58));
    *puVar1 = 0;
    *(undefined8 *)(lVar2 + 0x50) = 0;
    *(undefined4 *)(lVar2 + 0x60) = 0xffffffff;
  }
  goto LAB_004e482d;
}


