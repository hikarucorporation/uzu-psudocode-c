// Function : readsf_child_main
// Namespace: 
// Entry    : 0059d880
// Prototype: undefined8 readsf_child_main(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, pthread_mutex_t * param_10, undefined8 param_11, char * param_12, char * param_13, undefined8 param_14)
// Body     : 0059d880 - 0059dd7c


undefined8
readsf_child_main(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9,pthread_mutex_t *param_10,undefined8 param_11,char *param_12,
                 char *param_13,undefined8 param_14)

{
  pthread_mutex_t *__mutex;
  long *plVar1;
  pthread_cond_t *__cond;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  undefined8 *puVar6;
  char *pcVar7;
  ssize_t sVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar12;
  undefined8 extraout_RDX_01;
  char *__nbytes;
  pthread_mutex_t *ppVar13;
  uint uVar14;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar15;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 uVar17;
  undefined4 uVar18;
  pthread_mutex_t local_468;
  undefined4 uStack_440;
  int iStack_43c;
  char *local_438;
  pthread_cond_t *local_428;
  char local_420 [8];
  char local_418 [1000];
  
  local_468.__size[8] = '\0';
  local_468.__size[9] = '\0';
  local_468.__size[10] = '\0';
  local_468.__size[0xb] = '\0';
  local_468.__size[0xc] = '\0';
  local_468.__size[0xd] = '\0';
  local_468.__size[0xe] = '\0';
  local_468.__size[0xf] = '\0';
  local_468.__size[0x20] = '\0';
  local_468.__size[0x21] = '\0';
  local_468.__size[0x22] = '\0';
  local_468.__size[0x23] = '\0';
  local_468.__size[0x24] = '\0';
  local_468.__size[0x25] = '\0';
  local_468.__size[0x26] = '\0';
  local_468.__size[0x27] = '\0';
  uStack_440 = 0;
  iStack_43c = 0;
  local_468.__data.__kind = 0;
  local_468.__data.__spins = 0;
  local_468.__size[0x18] = '\0';
  local_468.__size[0x19] = '\0';
  local_468.__size[0x1a] = '\0';
  local_468.__size[0x1b] = '\0';
  local_468.__size[0x1c] = '\0';
  local_468.__size[0x1d] = '\0';
  local_468.__size[0x1e] = '\0';
  local_468.__size[0x1f] = '\0';
  local_468.__align = 0xffffffff;
  local_438 = (char *)0x7fffffffffffffff;
  uVar12 = *(undefined8 *)(param_9 + 0x380);
  puVar6 = (undefined8 *)__tls_get_addr(&PTR_007159b0);
  *puVar6 = uVar12;
  __mutex = (pthread_mutex_t *)(param_9 + 0x2e8);
  pthread_mutex_lock(__mutex);
  plVar1 = (long *)(param_9 + 0x280);
  __cond = (pthread_cond_t *)(param_9 + 0x340);
  local_428 = (pthread_cond_t *)(param_9 + 0x310);
  uVar12 = extraout_RDX;
  uVar15 = extraout_XMM0_Da;
  uVar16 = extraout_XMM0_Db;
switchD_0059d934_default:
  switch(*(undefined4 *)(param_9 + 0x268)) {
  case 0:
    pthread_cond_signal(__cond);
    param_10 = __mutex;
    pthread_cond_wait(local_428,__mutex);
    uVar12 = extraout_RDX_01;
    uVar15 = extraout_XMM0_Da_01;
    uVar16 = extraout_XMM0_Db_01;
    goto switchD_0059d934_default;
  case 1:
    lVar2 = *(long *)(param_9 + 0x2b8);
    ppVar13 = *(pthread_mutex_t **)(param_9 + 0x270);
    puVar6 = (undefined8 *)
             canvas_getdir(CONCAT44(uVar16,uVar15),param_2,param_3,param_4,param_5,param_6,param_7,
                           param_8,*(long *)(param_9 + 0x30),param_10,uVar12,param_12,param_13,
                           param_14);
    pcVar7 = (char *)*puVar6;
    *(undefined4 *)(param_9 + 0x268) = 4;
    *(undefined4 *)(param_9 + 0x278) = 0;
    if (local_468.__data.__lock < 0) {
LAB_0059d9bf:
      local_438 = *(char **)(param_9 + 0x2b0);
      local_468.__align = *plVar1;
      local_468.__size._8_8_ = *(undefined8 *)(param_9 + 0x288);
      uVar15 = *(int *)(param_9 + 0x290);
      uVar16 = *(int *)(param_9 + 0x294);
      local_468.__size._24_4_ = *(undefined4 *)(param_9 + 0x298);
      local_468.__size._28_4_ = *(undefined4 *)(param_9 + 0x29c);
      uVar17 = *(undefined4 *)(param_9 + 0x2a0);
      uVar18 = *(undefined4 *)(param_9 + 0x2a4);
      uStack_440 = *(undefined4 *)(param_9 + 0x2a8);
      iStack_43c = *(int *)(param_9 + 0x2ac);
      local_468.__data.__kind = uVar15;
      local_468.__data.__spins = uVar16;
      local_468.__size._32_4_ = uVar17;
      local_468.__size._36_4_ = uVar18;
      pthread_mutex_unlock(__mutex);
      param_12 = local_418;
      param_13 = local_420;
      param_14 = 1000;
      iVar5 = do_open_via_path(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),
                               CONCAT44(uVar16,uVar15),CONCAT44(uVar18,uVar17),param_4,param_5,
                               param_6,param_7,param_8,pcVar7,ppVar13->__size,"",param_12,
                               (undefined8 *)param_13,1000,1,*(undefined8 **)(param_9 + 0x378),0);
      param_10 = ppVar13;
      if (-1 < iVar5) {
        param_10 = &local_468;
        open_soundfile_via_fd(iVar5,(int *)param_10->__size,lVar2);
      }
      pthread_mutex_lock(__mutex);
      if (local_468.__data.__lock < 0) {
        piVar9 = __errno_location();
        param_3 = CONCAT44(uVar18,uVar17);
        param_2 = CONCAT44(uVar16,uVar15);
        *(int *)(param_9 + 0x278) = *piVar9;
        *(undefined4 *)(param_9 + 0x2cc) = 1;
        iVar5 = *(int *)(param_9 + 0x268);
        if (iVar5 == 4) goto LAB_0059dc8a;
        goto LAB_0059dcac;
      }
      *(char **)(param_9 + 0x2b0) = local_438;
      param_2 = CONCAT44(local_468.__data.__spins,local_468.__data.__kind);
      auVar3[8] = local_468.__size[0x18];
      auVar3[9] = local_468.__size[0x19];
      auVar3[10] = local_468.__size[0x1a];
      auVar3[0xb] = local_468.__size[0x1b];
      auVar3._0_8_ = param_2;
      auVar3[0xc] = local_468.__size[0x1c];
      auVar3[0xd] = local_468.__size[0x1d];
      auVar3[0xe] = local_468.__size[0x1e];
      auVar3[0xf] = local_468.__size[0x1f];
      param_3 = CONCAT44(local_468.__size._36_4_,local_468.__size._32_4_);
      auVar4._8_4_ = uStack_440;
      auVar4._0_8_ = param_3;
      auVar4._12_4_ = iStack_43c;
      *(undefined1 (*) [16])(param_9 + 0x2a0) = auVar4;
      *(undefined1 (*) [16])(param_9 + 0x290) = auVar3;
      *plVar1 = local_468.__align;
      *(undefined8 *)(param_9 + 0x288) = local_468.__size._8_8_;
      iVar5 = *(int *)(param_9 + 0x268);
      if (iVar5 != 4) goto LAB_0059dcac;
      *(undefined4 *)(param_9 + 0x2c4) = 0;
      param_10 = (pthread_mutex_t *)(ulong)(uint)(iStack_43c << 7);
      uVar14 = *(int *)(param_9 + 0x48) - *(int *)(param_9 + 0x48) % (iStack_43c << 7);
      *(uint *)(param_9 + 0x2c0) = uVar14;
      uVar10 = iStack_43c * *(int *)(param_9 + 0x250) * 0x10;
      param_12 = (char *)(ulong)uVar10;
      iVar5 = (int)uVar14 / (int)uVar10;
      *(int *)(param_9 + 0x2d4) = iVar5;
      *(int *)(param_9 + 0x2d0) = iVar5;
      iVar5 = *(int *)(param_9 + 0x2cc);
      uVar15 = local_468._16_4_;
      uVar16 = local_468._20_4_;
      uVar17 = local_468._32_4_;
      uVar18 = local_468._36_4_;
      while (iVar5 == 0) {
        uVar10 = *(uint *)(param_9 + 0x2c4);
        iVar5 = *(int *)(param_9 + 0x2c8);
        if (iVar5 <= (int)uVar10) {
          uVar11 = uVar14 - uVar10;
          param_12 = (char *)(ulong)uVar11;
          if ((iVar5 == 0) && ((int)uVar11 < 0x10001)) goto LAB_0059db22;
          pcVar7 = (char *)(long)(int)uVar11;
          if ((char *)0xffff < pcVar7) {
            pcVar7 = (char *)0x10000;
          }
          __nbytes = pcVar7;
          if (local_438 < pcVar7) {
            __nbytes = local_438;
          }
          param_12 = local_438;
          if ((long)local_438 < 0) {
            __nbytes = pcVar7;
          }
LAB_0059db78:
          param_10 = (pthread_mutex_t *)((long)(int)uVar10 + *(long *)(param_9 + 0x40));
          pthread_mutex_unlock(__mutex);
          sVar8 = read(local_468.__data.__lock,param_10,(size_t)__nbytes);
          pthread_mutex_lock(__mutex);
          param_3 = CONCAT44(uVar18,uVar17);
          param_2 = CONCAT44(uVar16,uVar15);
          iVar5 = *(int *)(param_9 + 0x268);
          if (iVar5 != 4) goto LAB_0059dcac;
          if (sVar8 < 0) {
            piVar9 = __errno_location();
            *(int *)(param_9 + 0x278) = *piVar9;
          }
          else {
            if (sVar8 != 0) {
              uVar10 = *(int *)(param_9 + 0x2c4) + (int)sVar8;
              param_12 = (char *)(ulong)uVar10;
              *(uint *)(param_9 + 0x2c4) = uVar10;
              local_438 = local_438 + -sVar8;
              if (uVar10 == uVar14) {
                *(undefined4 *)(param_9 + 0x2c4) = 0;
              }
              if (0 < (long)local_438) {
                pthread_cond_signal(__cond);
                param_3 = CONCAT44(uVar18,uVar17);
                param_2 = CONCAT44(uVar16,uVar15);
                iVar5 = *(int *)(param_9 + 0x268);
                if (iVar5 == 4) goto LAB_0059dc08;
                goto LAB_0059dcac;
              }
            }
            *(undefined4 *)(param_9 + 0x2cc) = 1;
          }
          break;
        }
        param_12 = (char *)(ulong)~uVar10;
        if (0xffff < iVar5 + ~uVar10) {
          __nbytes = local_438;
          if ((char *)0xffff < local_438) {
            __nbytes = (char *)0x10000;
          }
          goto LAB_0059db78;
        }
LAB_0059db22:
        pthread_cond_signal(__cond);
        param_10 = __mutex;
        pthread_cond_wait(local_428,__mutex);
        param_3 = CONCAT44(uVar18,uVar17);
        param_2 = CONCAT44(uVar16,uVar15);
        iVar5 = *(int *)(param_9 + 0x268);
        if (iVar5 != 4) goto LAB_0059dcac;
LAB_0059dc08:
        uVar14 = *(uint *)(param_9 + 0x2c0);
        iVar5 = *(int *)(param_9 + 0x2cc);
      }
LAB_0059dc8a:
      param_3 = CONCAT44(uVar18,uVar17);
      param_2 = CONCAT44(uVar16,uVar15);
      *(undefined4 *)(param_9 + 0x268) = 0;
      if (local_468.__data.__lock < 0) break;
LAB_0059dcc8:
      *(undefined4 *)(param_9 + 0x2cc) = 1;
    }
    else {
      pthread_mutex_unlock(__mutex);
      sys_close(local_468.__data.__lock);
      local_468.__data.__lock = 0xffffffff;
      pthread_mutex_lock(__mutex);
      *(undefined4 *)(param_9 + 0x280) = 0xffffffff;
      iVar5 = *(int *)(param_9 + 0x268);
      if (iVar5 == 4) goto LAB_0059d9bf;
LAB_0059dcac:
      if (local_468.__data.__lock < 0) break;
      if (iVar5 != 1) goto LAB_0059dcc8;
    }
    *(undefined4 *)plVar1 = 0xffffffff;
    pthread_mutex_unlock(__mutex);
    sys_close(local_468.__data.__lock);
    local_468.__data.__lock = 0xffffffff;
    pthread_mutex_lock(__mutex);
    break;
  case 2:
    if (local_468.__data.__lock < 0) {
LAB_0059d90e:
      *(undefined4 *)(param_9 + 0x268) = 0;
    }
    else {
      *(undefined4 *)(param_9 + 0x280) = 0xffffffff;
      pthread_mutex_unlock(__mutex);
      sys_close(local_468.__data.__lock);
      local_468.__data.__lock = 0xffffffff;
      pthread_mutex_lock(__mutex);
      if (*(int *)(param_9 + 0x268) == 2) goto LAB_0059d90e;
    }
    break;
  case 3:
    goto switchD_0059d934_caseD_3;
  default:
    goto switchD_0059d934_default;
  }
  pthread_cond_signal(__cond);
  uVar12 = extraout_RDX_00;
  uVar15 = extraout_XMM0_Da_00;
  uVar16 = extraout_XMM0_Db_00;
  goto switchD_0059d934_default;
switchD_0059d934_caseD_3:
  if (-1 < local_468.__data.__lock) {
    *(undefined4 *)plVar1 = 0xffffffff;
    pthread_mutex_unlock(__mutex);
    sys_close(local_468.__data.__lock);
    local_468.__data.__lock = 0xffffffff;
    pthread_mutex_lock(__mutex);
  }
  *(undefined4 *)(param_9 + 0x268) = 0;
  pthread_cond_signal(__cond);
  pthread_mutex_unlock(__mutex);
  return 0;
}


