// Function : writesf_child_main
// Namespace: 
// Entry    : 0059f0b0
// Prototype: undefined8 writesf_child_main(long param_1)
// Body     : 0059f0b0 - 0059f74a


undefined8 writesf_child_main(long param_1)

{
  pthread_mutex_t *__mutex;
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  int *piVar8;
  ulong uVar9;
  ulong __n;
  char *in_R8;
  char *pcVar10;
  char *in_R9;
  int iVar11;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;
  undefined8 local_78;
  undefined8 *puStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  pthread_cond_t *local_40;
  pthread_cond_t *local_38;
  
  puStack_70 = (undefined8 *)0x0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0xffffffff;
  local_48 = 0x7fffffffffffffff;
  uVar2 = *(undefined8 *)(param_1 + 0x380);
  puVar7 = (undefined8 *)__tls_get_addr(&PTR_007159b0);
  *puVar7 = uVar2;
  __mutex = (pthread_mutex_t *)(param_1 + 0x2e8);
  pthread_mutex_lock(__mutex);
  puVar7 = (undefined8 *)(param_1 + 0x280);
  local_40 = (pthread_cond_t *)(param_1 + 0x340);
  local_38 = (pthread_cond_t *)(param_1 + 0x310);
LAB_0059f1b4:
  do {
    while( true ) {
      while (iVar6 = *(int *)(param_1 + 0x268), iVar6 - 2U < 2) {
        if (-1 < (int)local_78) {
          pcVar10 = *(char **)(param_1 + 0x270);
          lVar3 = *(long *)(param_1 + 0x2d8);
          local_48 = *(undefined8 *)(param_1 + 0x2b0);
          local_78 = *puVar7;
          puStack_70 = *(undefined8 **)(param_1 + 0x288);
          uVar14 = *(undefined4 *)(param_1 + 0x290);
          uVar15 = *(undefined4 *)(param_1 + 0x294);
          local_68 = *(undefined8 *)(param_1 + 0x290);
          uStack_60 = *(undefined8 *)(param_1 + 0x298);
          uVar16 = *(undefined4 *)(param_1 + 0x2a0);
          uVar17 = *(undefined4 *)(param_1 + 0x2a4);
          local_58 = *(undefined8 *)(param_1 + 0x2a0);
          uStack_50 = *(undefined8 *)(param_1 + 0x2a8);
          pthread_mutex_unlock(__mutex);
          if ((lVar3 != -1) && (iVar5 = (*(code *)puStack_70[5])(&local_78,lVar3), iVar5 == 0)) {
            piVar8 = __errno_location();
            iVar5 = *piVar8;
            if (puStack_70 == (undefined8 *)0x0) {
              if (iVar5 + 0x3ebU < 4) {
                in_R8 = (&PTR_s_unsupported_sample_format_007150e8)[(int)(iVar5 + 0x3ebU)];
                uVar12 = extraout_XMM0_Da;
                uVar13 = extraout_XMM0_Db;
              }
              else {
                in_R8 = strerror(iVar5);
                uVar12 = extraout_XMM0_Da_02;
                uVar13 = extraout_XMM0_Db_02;
              }
              pd_error(CONCAT44(uVar13,uVar12),CONCAT44(uVar15,uVar14),CONCAT44(uVar17,uVar16),
                       in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa,param_1,"%s: %s: %s",
                       "[soundfiler] write",pcVar10,in_R8,in_R9);
            }
            else {
              uVar2 = *puStack_70;
              if (iVar5 + 0x3ebU < 4) {
                in_R9 = (&PTR_s_unsupported_sample_format_007150e8)[(int)(iVar5 + 0x3ebU)];
                uVar12 = extraout_XMM0_Da;
                uVar13 = extraout_XMM0_Db;
              }
              else {
                in_R9 = strerror(iVar5);
                uVar12 = extraout_XMM0_Da_00;
                uVar13 = extraout_XMM0_Db_00;
              }
              pd_error(CONCAT44(uVar13,uVar12),CONCAT44(uVar15,uVar14),CONCAT44(uVar17,uVar16),
                       in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa,param_1,
                       "%s %s: %s: %s","[soundfiler] write",uVar2,pcVar10,in_R9);
              in_R8 = pcVar10;
            }
          }
          sys_close((int)local_78);
          local_78 = CONCAT44(local_78._4_4_,0xffffffff);
          pthread_mutex_lock(__mutex);
          *(undefined4 *)puVar7 = 0xffffffff;
        }
        *(undefined4 *)(param_1 + 0x268) = 0;
        pthread_cond_signal(local_40);
        if (iVar6 == 3) {
          pthread_mutex_unlock(__mutex);
          return 0;
        }
      }
      if (iVar6 == 1) break;
      if (iVar6 == 0) {
        pthread_cond_signal(local_40);
        pthread_cond_wait(local_38,__mutex);
      }
    }
    pcVar10 = *(char **)(param_1 + 0x270);
    lVar3 = *(long *)(param_1 + 0x30);
    local_48 = *(undefined8 *)(param_1 + 0x2b0);
    local_78 = *puVar7;
    puStack_70 = *(undefined8 **)(param_1 + 0x288);
    uVar14 = *(undefined4 *)(param_1 + 0x290);
    uVar15 = *(undefined4 *)(param_1 + 0x294);
    local_68 = *(undefined8 *)(param_1 + 0x290);
    uStack_60 = *(undefined8 *)(param_1 + 0x298);
    uVar16 = *(undefined4 *)(param_1 + 0x2a0);
    uVar17 = *(undefined4 *)(param_1 + 0x2a4);
    local_58 = *(undefined8 *)(param_1 + 0x2a0);
    uStack_50 = *(undefined8 *)(param_1 + 0x2a8);
    *(undefined4 *)(param_1 + 0x268) = 4;
    *(undefined4 *)(param_1 + 0x278) = 0;
    if ((int)local_78 < 0) break;
    lVar4 = *(long *)(param_1 + 0x2d8);
    pthread_mutex_unlock(__mutex);
    if ((lVar4 != -1) && (iVar6 = (*(code *)puStack_70[5])(&local_78,lVar4), iVar6 == 0)) {
      piVar8 = __errno_location();
      iVar6 = *piVar8;
      if (puStack_70 == (undefined8 *)0x0) {
        if (iVar6 + 0x3ebU < 4) {
          in_R8 = (&PTR_s_unsupported_sample_format_007150e8)[(int)(iVar6 + 0x3ebU)];
          uVar12 = extraout_XMM0_Da_01;
          uVar13 = extraout_XMM0_Db_01;
        }
        else {
          in_R8 = strerror(iVar6);
          uVar12 = extraout_XMM0_Da_04;
          uVar13 = extraout_XMM0_Db_04;
        }
        pd_error(CONCAT44(uVar13,uVar12),CONCAT44(uVar15,uVar14),CONCAT44(uVar17,uVar16),in_XMM3_Qa,
                 in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa,param_1,"%s: %s: %s",
                 "[soundfiler] write",pcVar10,in_R8,in_R9);
      }
      else {
        uVar2 = *puStack_70;
        if (iVar6 + 0x3ebU < 4) {
          in_R9 = (&PTR_s_unsupported_sample_format_007150e8)[(int)(iVar6 + 0x3ebU)];
          uVar12 = extraout_XMM0_Da_01;
          uVar13 = extraout_XMM0_Db_01;
        }
        else {
          in_R9 = strerror(iVar6);
          uVar12 = extraout_XMM0_Da_03;
          uVar13 = extraout_XMM0_Db_03;
        }
        in_R8 = pcVar10;
        pd_error(CONCAT44(uVar13,uVar12),CONCAT44(uVar15,uVar14),CONCAT44(uVar17,uVar16),in_XMM3_Qa,
                 in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa,param_1,"%s %s: %s: %s",
                 "[soundfiler] write",uVar2,pcVar10,in_R9);
      }
    }
    sys_close((int)local_78);
    local_78 = CONCAT44(local_78._4_4_,0xffffffff);
    pthread_mutex_lock(__mutex);
    *(undefined4 *)(param_1 + 0x280) = 0xffffffff;
  } while (*(int *)(param_1 + 0x268) != 4);
  local_48 = *(undefined8 *)(param_1 + 0x2b0);
  local_78 = *puVar7;
  puStack_70 = *(undefined8 **)(param_1 + 0x288);
  uVar14 = *(undefined4 *)(param_1 + 0x290);
  uVar15 = *(undefined4 *)(param_1 + 0x294);
  local_68 = *(undefined8 *)(param_1 + 0x290);
  uStack_60 = *(undefined8 *)(param_1 + 0x298);
  uVar16 = *(undefined4 *)(param_1 + 0x2a0);
  uVar17 = *(undefined4 *)(param_1 + 0x2a4);
  local_58 = *(undefined8 *)(param_1 + 0x2a0);
  uStack_50 = *(undefined8 *)(param_1 + 0x2a8);
  pthread_mutex_unlock(__mutex);
  create_soundfile(CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_05),CONCAT44(uVar15,uVar14),
                   CONCAT44(uVar17,uVar16),in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa,
                   lVar3,pcVar10,(int *)&local_78,0,in_R8,in_R9);
  pthread_mutex_lock(__mutex);
  if ((int)local_78 < 0) {
    *(undefined4 *)(param_1 + 0x280) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x2cc) = 1;
    piVar8 = __errno_location();
    *(int *)(param_1 + 0x278) = *piVar8;
    if (*(int *)(param_1 + 0x268) != 4) goto LAB_0059f52c;
    goto LAB_0059f520;
  }
  if (*(int *)(param_1 + 0x268) == 4) {
    *(undefined8 *)(param_1 + 0x2b0) = local_48;
    *(undefined8 *)(param_1 + 0x2a0) = local_58;
    *(undefined8 *)(param_1 + 0x2a8) = uStack_50;
    *(undefined8 *)(param_1 + 0x290) = local_68;
    *(undefined8 *)(param_1 + 0x298) = uStack_60;
    *puVar7 = local_78;
    *(undefined8 **)(param_1 + 0x288) = puStack_70;
    *(undefined4 *)(param_1 + 0x2c8) = 0;
    *(undefined8 *)(param_1 + 0x2d8) = 0;
    iVar6 = *(int *)(param_1 + 0x268);
    if (iVar6 != 2) goto LAB_0059f587;
    iVar6 = 2;
LAB_0059f5b0:
    iVar5 = *(int *)(param_1 + 0x2c4);
    iVar11 = *(int *)(param_1 + 0x2c8);
    if (iVar5 != iVar11) {
      do {
        iVar1 = *(int *)(param_1 + 0x2c0);
        lVar3 = *(long *)(param_1 + 0x40);
        if (((iVar5 < iVar11) || (iVar11 + 0x10000 <= iVar5)) || ((iVar6 == 2 && (iVar5 != iVar11)))
           ) {
          if (iVar5 < iVar11) {
            iVar5 = iVar1;
          }
          __n = (ulong)(iVar5 - iVar11);
          if (0xffff < __n) {
            __n = 0x10000;
          }
          local_48 = *(undefined8 *)(param_1 + 0x2b0);
          local_78 = *puVar7;
          puStack_70 = *(undefined8 **)(param_1 + 0x288);
          local_68 = *(undefined8 *)(param_1 + 0x290);
          uStack_60 = *(undefined8 *)(param_1 + 0x298);
          local_58 = *(undefined8 *)(param_1 + 0x2a0);
          uStack_50 = *(undefined8 *)(param_1 + 0x2a8);
          pthread_mutex_unlock(__mutex);
          uVar9 = write((int)local_78,(void *)(lVar3 + iVar11),__n);
          pthread_mutex_lock(__mutex);
          iVar6 = *(int *)(param_1 + 0x268);
          if ((iVar6 != 2) && (iVar6 != 4)) break;
          if (((long)uVar9 < 0) || (uVar9 < __n)) {
            piVar8 = __errno_location();
            *(int *)(param_1 + 0x278) = *piVar8;
            if (iVar6 == 4) {
LAB_0059f520:
              *(undefined4 *)(param_1 + 0x268) = 0;
            }
LAB_0059f52c:
            if (-1 < (int)local_78) {
              pthread_mutex_unlock(__mutex);
              sys_close((int)local_78);
              local_78 = CONCAT44(local_78._4_4_,0xffffffff);
              pthread_mutex_lock(__mutex);
              *(undefined4 *)(param_1 + 0x2cc) = 1;
              *(undefined4 *)(param_1 + 0x280) = 0xffffffff;
            }
          }
          else {
            iVar6 = *(int *)(param_1 + 0x2c8) + (int)uVar9;
            if (iVar6 == iVar1) {
              iVar6 = 0;
            }
            *(int *)(param_1 + 0x2c8) = iVar6;
            if ((uVar9 | (long)(int)uStack_50._4_4_) >> 0x20 == 0) {
              *(long *)(param_1 + 0x2d8) =
                   *(long *)(param_1 + 0x2d8) + (uVar9 & 0xffffffff) / (ulong)uStack_50._4_4_;
            }
            else {
              *(long *)(param_1 + 0x2d8) =
                   *(long *)(param_1 + 0x2d8) + (long)uVar9 / (long)(int)uStack_50._4_4_;
            }
          }
          pthread_cond_signal(local_40);
          iVar6 = *(int *)(param_1 + 0x268);
          if (iVar6 == 2) goto LAB_0059f5b0;
        }
        else {
          pthread_cond_signal(local_40);
          pthread_cond_wait(local_38,__mutex);
          iVar6 = *(int *)(param_1 + 0x268);
          if (iVar6 == 2) goto code_r0x0059f619;
        }
LAB_0059f587:
        if (iVar6 != 4) break;
        iVar5 = *(int *)(param_1 + 0x2c4);
        iVar11 = *(int *)(param_1 + 0x2c8);
        iVar6 = 4;
      } while( true );
    }
  }
  goto LAB_0059f1b4;
code_r0x0059f619:
  iVar6 = 2;
  goto LAB_0059f5b0;
}


