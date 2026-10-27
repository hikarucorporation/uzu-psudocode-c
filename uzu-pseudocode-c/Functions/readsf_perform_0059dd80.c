// Function : readsf_perform
// Namespace: 
// Entry    : 0059dd80
// Prototype: long readsf_perform(long param_1)
// Body     : 0059dd80 - 0059e2d4


long readsf_perform(long param_1)

{
  pthread_mutex_t *__mutex;
  long lVar1;
  uint uVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 in_R9;
  int iVar12;
  size_t sVar13;
  int iVar14;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar15;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Db_00;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined8 local_38;
  
  lVar3 = *(long *)(param_1 + 8);
  uVar2 = *(uint *)(lVar3 + 0x4c);
  iVar12 = *(int *)(lVar3 + 0x250);
  if (*(int *)(lVar3 + 0x260) == 2) {
    __mutex = (pthread_mutex_t *)(lVar3 + 0x2e8);
    pthread_mutex_lock(__mutex);
    local_68 = *(undefined4 *)(lVar3 + 0x280);
    uStack_64 = *(undefined4 *)(lVar3 + 0x284);
    uStack_60 = *(undefined4 *)(lVar3 + 0x288);
    uStack_5c = *(undefined4 *)(lVar3 + 0x28c);
    local_58 = *(undefined4 *)(lVar3 + 0x290);
    uStack_54 = *(undefined4 *)(lVar3 + 0x294);
    uStack_50 = *(undefined4 *)(lVar3 + 0x298);
    uStack_4c = *(undefined4 *)(lVar3 + 0x29c);
    local_48 = *(undefined4 *)(lVar3 + 0x2a0);
    uStack_44 = *(undefined4 *)(lVar3 + 0x2a4);
    uStack_40 = *(undefined4 *)(lVar3 + 0x2a8);
    iStack_3c = *(int *)(lVar3 + 0x2ac);
    local_38 = *(undefined8 *)(lVar3 + 0x2b0);
    iVar14 = iStack_3c * iVar12;
    if (*(int *)(lVar3 + 0x2cc) == 0) {
      iVar7 = *(int *)(lVar3 + 0x2c4);
      iVar6 = *(int *)(lVar3 + 0x2c8);
      if (iVar6 <= iVar7) {
        do {
          if (iVar6 + iVar14 + -1 <= iVar7) break;
          pthread_cond_signal((pthread_cond_t *)(lVar3 + 0x310));
          pthread_cond_wait((pthread_cond_t *)(lVar3 + 0x340),__mutex);
          iVar12 = *(int *)(lVar3 + 0x250);
          local_68 = *(undefined4 *)(lVar3 + 0x280);
          uStack_64 = *(undefined4 *)(lVar3 + 0x284);
          uStack_60 = *(undefined4 *)(lVar3 + 0x288);
          uStack_5c = *(undefined4 *)(lVar3 + 0x28c);
          local_58 = *(undefined4 *)(lVar3 + 0x290);
          uStack_54 = *(undefined4 *)(lVar3 + 0x294);
          uStack_50 = *(undefined4 *)(lVar3 + 0x298);
          uStack_4c = *(undefined4 *)(lVar3 + 0x29c);
          local_48 = *(undefined4 *)(lVar3 + 0x2a0);
          uStack_44 = *(undefined4 *)(lVar3 + 0x2a4);
          uStack_40 = *(undefined4 *)(lVar3 + 0x2a8);
          iStack_3c = *(int *)(lVar3 + 0x2ac);
          local_38 = *(undefined8 *)(lVar3 + 0x2b0);
          iVar14 = iStack_3c * iVar12;
          if (*(int *)(lVar3 + 0x2cc) != 0) goto LAB_0059de15;
          iVar7 = *(int *)(lVar3 + 0x2c4);
          iVar6 = *(int *)(lVar3 + 0x2c8);
        } while (iVar6 <= iVar7);
      }
    }
    else {
LAB_0059de15:
      iVar7 = iStack_3c;
      iVar6 = *(int *)(lVar3 + 0x2c8);
      if ((iVar6 <= *(int *)(lVar3 + 0x2c4)) && (*(int *)(lVar3 + 0x2c4) < iVar6 + iVar14 + -1)) {
        iVar14 = *(int *)(lVar3 + 0x278);
        if (iVar14 != 0) {
          pcVar4 = *(char **)(lVar3 + 0x270);
          if (*(undefined8 **)(lVar3 + 0x288) == (undefined8 *)0x0) {
            uVar17 = local_58;
            uVar18 = uStack_54;
            uVar19 = local_48;
            uVar20 = uStack_44;
            if (iVar14 + 0x3ebU < 4) {
              pcVar8 = (&PTR_s_unsupported_sample_format_007150e8)[(int)(iVar14 + 0x3ebU)];
              uVar15 = local_68;
              uVar16 = uStack_64;
            }
            else {
              pcVar8 = strerror(iVar14);
              uVar15 = extraout_XMM0_Da_00;
              uVar16 = extraout_XMM0_Db_00;
            }
            pd_error(CONCAT44(uVar16,uVar15),CONCAT44(uVar18,uVar17),CONCAT44(uVar20,uVar19),
                     in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa,lVar3,"%s: %s: %s",
                     "[readsf~]",pcVar4,pcVar8,in_R9);
          }
          else {
            uVar5 = **(undefined8 **)(lVar3 + 0x288);
            uVar17 = local_58;
            uVar18 = uStack_54;
            uVar19 = local_48;
            uVar20 = uStack_44;
            if (iVar14 + 0x3ebU < 4) {
              pcVar8 = (&PTR_s_unsupported_sample_format_007150e8)[(int)(iVar14 + 0x3ebU)];
              uVar15 = local_68;
              uVar16 = uStack_64;
            }
            else {
              pcVar8 = strerror(iVar14);
              uVar15 = extraout_XMM0_Da;
              uVar16 = extraout_XMM0_Db;
            }
            pd_error(CONCAT44(uVar16,uVar15),CONCAT44(uVar18,uVar17),CONCAT44(uVar20,uVar19),
                     in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa,lVar3,"%s %s: %s: %s",
                     "[readsf~]",uVar5,pcVar4,pcVar8);
          }
        }
        iVar7 = ((*(int *)(lVar3 + 0x2c4) - *(int *)(lVar3 + 0x2c8)) + 1) / iVar7;
        uVar10 = (ulong)iVar7;
        if (iVar7 != 0) {
          soundfile_xferin_sample
                    ((long)&local_68,uVar2,lVar3 + 0x50,
                     (uint *)((long)*(int *)(lVar3 + 0x2c8) + *(long *)(lVar3 + 0x40)),uVar10);
          iVar12 = iVar12 - iVar7;
        }
        pthread_mutex_unlock(__mutex);
        clock_delay(0.0,*(double **)(lVar3 + 0x38));
        *(undefined4 *)(lVar3 + 0x260) = 0;
        if ((0 < (int)uVar2) && (iVar12 != 0)) {
          sVar13 = (long)iVar12 << 2;
          if ((ulong)uVar2 - 1 < 7) {
            uVar9 = 0;
          }
          else {
            uVar9 = 0;
            lVar1 = uVar10 * 4;
            do {
              memset((void *)(*(long *)(lVar3 + 0x50 + uVar9 * 8) + lVar1),0,sVar13);
              memset((void *)(*(long *)(lVar3 + 0x58 + uVar9 * 8) + lVar1),0,sVar13);
              memset((void *)(*(long *)(lVar3 + 0x60 + uVar9 * 8) + lVar1),0,sVar13);
              memset((void *)(*(long *)(lVar3 + 0x68 + uVar9 * 8) + lVar1),0,sVar13);
              memset((void *)(*(long *)(lVar3 + 0x70 + uVar9 * 8) + lVar1),0,sVar13);
              memset((void *)(*(long *)(lVar3 + 0x78 + uVar9 * 8) + lVar1),0,sVar13);
              memset((void *)(*(long *)(lVar3 + 0x80 + uVar9 * 8) + lVar1),0,sVar13);
              memset((void *)(*(long *)(lVar3 + 0x88 + uVar9 * 8) + lVar1),0,sVar13);
              uVar9 = uVar9 + 8;
            } while ((uVar2 & 0xfffffff8) != uVar9);
          }
          if ((ulong)(uVar2 & 7) != 0) {
            uVar11 = 0;
            do {
              memset((void *)(*(long *)(lVar3 + uVar9 * 8 + 0x50 + uVar11 * 8) + uVar10 * 4),0,
                     sVar13);
              uVar11 = uVar11 + 1;
            } while ((uVar2 & 7) != uVar11);
          }
        }
        goto LAB_0059e0a7;
      }
    }
    soundfile_xferin_sample
              ((long)&local_68,uVar2,lVar3 + 0x50,(uint *)((long)iVar6 + *(long *)(lVar3 + 0x40)),
               (long)iVar12);
    iVar14 = iVar14 + *(int *)(lVar3 + 0x2c8);
    iVar12 = 0;
    if (iVar14 < *(int *)(lVar3 + 0x2c0)) {
      iVar12 = iVar14;
    }
    *(int *)(lVar3 + 0x2c8) = iVar12;
    iVar12 = *(int *)(lVar3 + 0x2d0);
    *(int *)(lVar3 + 0x2d0) = iVar12 + -1;
    if (iVar12 < 2) {
      pthread_cond_signal((pthread_cond_t *)(lVar3 + 0x310));
      *(undefined4 *)(lVar3 + 0x2d0) = *(undefined4 *)(lVar3 + 0x2d4);
    }
    pthread_mutex_unlock(__mutex);
  }
  else if ((0 < (int)uVar2) && (iVar12 != 0)) {
    sVar13 = (long)iVar12 << 2;
    if ((ulong)uVar2 - 1 < 7) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0;
      do {
        memset(*(void **)(lVar3 + 0x50 + uVar10 * 8),0,sVar13);
        memset(*(void **)(lVar3 + 0x58 + uVar10 * 8),0,sVar13);
        memset(*(void **)(lVar3 + 0x60 + uVar10 * 8),0,sVar13);
        memset(*(void **)(lVar3 + 0x68 + uVar10 * 8),0,sVar13);
        memset(*(void **)(lVar3 + 0x70 + uVar10 * 8),0,sVar13);
        memset(*(void **)(lVar3 + 0x78 + uVar10 * 8),0,sVar13);
        memset(*(void **)(lVar3 + 0x80 + uVar10 * 8),0,sVar13);
        memset(*(void **)(lVar3 + 0x88 + uVar10 * 8),0,sVar13);
        uVar10 = uVar10 + 8;
      } while ((uVar2 & 0xfffffff8) != uVar10);
    }
    if ((ulong)(uVar2 & 7) != 0) {
      uVar9 = 0;
      do {
        memset(*(void **)(lVar3 + uVar10 * 8 + 0x50 + uVar9 * 8),0,sVar13);
        uVar9 = uVar9 + 1;
      } while ((uVar2 & 7) != uVar9);
    }
  }
LAB_0059e0a7:
  return param_1 + 0x10;
}


