// Function : writesf_open
// Namespace: 
// Entry    : 0059edd0
// Prototype: undefined writesf_open(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, uint param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0059edd0 - 0059f029


void writesf_open(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9,undefined8 param_10,uint param_11,undefined8 param_12,char *param_13,
                 undefined8 param_14)

{
  pthread_mutex_t *__mutex;
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined4 uVar4;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float fVar5;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined8 uVar6;
  uint local_6c;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  long lStack_40;
  undefined8 local_38;
  undefined8 local_28;
  
  uVar4 = 0;
  uVar7 = 0;
  local_48 = 0;
  lStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = (undefined8 *)0x0;
  uStack_60 = 0;
  local_38 = 0;
  local_6c = param_11;
  local_28 = param_12;
  if (*(int *)(param_9 + 0x260) != 0) {
    pthread_mutex_lock((pthread_mutex_t *)(param_9 + 0x2e8));
    *(undefined4 *)(param_9 + 0x260) = 0;
    *(undefined4 *)(param_9 + 0x268) = 2;
    pthread_cond_signal((pthread_cond_t *)(param_9 + 0x310));
    pthread_mutex_unlock((pthread_mutex_t *)(param_9 + 0x2e8));
    uVar4 = extraout_XMM0_Da;
    uVar7 = extraout_XMM0_Db;
  }
  uVar2 = soundfiler_parsewriteargs
                    (CONCAT44(uVar7,uVar4),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     &local_6c,&local_28,&local_68);
  uVar6 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
  if ((int)uVar2 != 0 || local_38._4_4_ != 0) {
    uVar6 = pd_error(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,param_9,
                     "[writesf~]: usage; open [flags] filename...",extraout_RDX,param_12,param_13,
                     param_14);
    post(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
         "flags: -bytes <n> %s -big -little -rate <n>");
    return;
  }
  if ((((int)local_38 != 0) || (lStack_40 != 0)) || (uVar2 = extraout_RDX, local_48 != -1)) {
    uVar6 = pd_error(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,param_9,
                     "[writesf~] open: normalize/onset/nframes argument ignored",extraout_RDX,
                     param_12,param_13,param_14);
    uVar2 = extraout_RDX_00;
  }
  if (local_6c != 0) {
    pd_error(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
             "[writesf~] open: extra argument(s) ignored",uVar2,param_12,param_13,param_14);
  }
  __mutex = (pthread_mutex_t *)(param_9 + 0x2e8);
  pthread_mutex_lock(__mutex);
  if (*(int *)(param_9 + 0x268) != 0) {
    do {
      pthread_cond_signal((pthread_cond_t *)(param_9 + 0x310));
      pthread_cond_wait((pthread_cond_t *)(param_9 + 0x340),__mutex);
    } while (*(int *)(param_9 + 0x268) != 0);
  }
  *(undefined8 *)(param_9 + 0x270) = *local_68;
  *(undefined8 *)(param_9 + 0x288) = uStack_60;
  iVar1 = (int)local_58;
  if ((int)local_58 < 1) {
    fVar5 = *(float *)(param_9 + 0x264);
    if (fVar5 <= 0.0) {
      sys_getsr();
      fVar5 = extraout_XMM0_Da_01;
    }
    iVar1 = (int)fVar5;
  }
  *(int *)(param_9 + 0x290) = iVar1;
  iVar1 = 2;
  if (2 < local_58._4_4_) {
    iVar1 = local_58._4_4_;
  }
  *(int *)(param_9 + 0x298) = iVar1;
  *(undefined4 *)(param_9 + 0x2a8) = (undefined4)uStack_50;
  iVar1 = iVar1 * *(int *)(param_9 + 0x294);
  *(int *)(param_9 + 0x2ac) = iVar1;
  *(undefined8 *)(param_9 + 0x2d8) = 0;
  *(undefined4 *)(param_9 + 0x268) = 1;
  *(undefined8 *)(param_9 + 0x2c4) = 0;
  *(undefined4 *)(param_9 + 0x2cc) = 0;
  *(undefined4 *)(param_9 + 0x278) = 0;
  *(undefined4 *)(param_9 + 0x260) = 1;
  iVar3 = *(int *)(param_9 + 0x48) - *(int *)(param_9 + 0x48) % (iVar1 * 0x80);
  *(int *)(param_9 + 0x2c0) = iVar3;
  iVar3 = iVar3 / (iVar1 * *(int *)(param_9 + 0x250) * 0x10);
  *(int *)(param_9 + 0x2d4) = iVar3;
  *(int *)(param_9 + 0x2d0) = iVar3;
  pthread_cond_signal((pthread_cond_t *)(param_9 + 0x310));
  pthread_mutex_unlock(__mutex);
  return;
}


