// Function : file_do_copy
// Namespace: 
// Entry    : 0057dcc0
// Prototype: undefined4 file_do_copy(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, char * param_9, char * param_10, ulong param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14)
// Body     : 0057dcc0 - 0057de7b


undefined4
file_do_copy(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
            char *param_9,char *param_10,ulong param_11,undefined8 param_12,undefined8 param_13,
            undefined8 param_14)

{
  int __fd;
  int iVar1;
  int iVar2;
  size_t __n;
  ssize_t sVar3;
  char *pcVar4;
  ulong uVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 uVar8;
  uint in_stack_fffffffffffff738;
  stat local_8b8;
  char local_828 [1024];
  char local_428 [1016];
  
  __fd = sys_open(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,0,param_11
                  ,param_12,param_13,param_14,in_stack_fffffffffffff738);
  if (__fd < 0) {
    return 1;
  }
  uVar7 = 0;
  iVar1 = sys_open(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_10
                   ,0x241,param_11 & 0xffffffff,param_12,param_13,param_14,in_stack_fffffffffffff738
                  );
  uVar5 = param_11 & 0xffffffff;
  if (iVar1 < 0) {
    do_expandpath(param_10,local_428,1000);
    iVar1 = stat(local_428,&local_8b8);
    if (iVar1 != 0) {
      do_expandpath(param_10,local_828,1000);
      iVar1 = sys_open(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       local_828,0,0x1b6,uVar5,param_13,param_14,in_stack_fffffffffffff738);
      if (iVar1 < 0) {
        return 1;
      }
      iVar2 = fstat(iVar1,&local_8b8);
      sys_close(iVar1);
      if (iVar2 != 0) {
        return 1;
      }
    }
    if ((local_8b8.st_mode & 0xf000) != 0x4000) {
      return 1;
    }
    pcVar4 = strrchr(param_9,0x2f);
    pcVar6 = pcVar4 + 1;
    if (pcVar4 == (char *)0x0) {
      pcVar6 = param_9;
    }
    uVar8 = pd_snprintf(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        local_828,1000,"%s/%s",param_10,pcVar6,param_14,
                        (char)in_stack_fffffffffffff738);
    iVar1 = sys_open(uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,local_828,0x241,
                     param_11 & 0xffffffff,param_10,pcVar6,param_14,in_stack_fffffffffffff738);
    if (iVar1 < 0) {
      return 1;
    }
  }
  __n = read(__fd,local_828,0x400);
  if (0 < (long)__n) {
    uVar7 = 0;
    do {
      sVar3 = write(iVar1,local_828,__n);
      if (sVar3 < 1) {
        uVar7 = 1;
      }
      __n = read(__fd,local_828,0x400);
    } while (0 < (long)__n);
  }
  sys_close(__fd);
  sys_close(iVar1);
  return uVar7;
}


