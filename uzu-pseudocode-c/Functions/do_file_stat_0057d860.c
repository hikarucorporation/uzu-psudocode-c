// Function : do_file_stat
// Namespace: 
// Entry    : 0057d860
// Prototype: int do_file_stat(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, char * param_10, stat * param_11, uint * param_12, char * param_13, undefined8 param_14)
// Body     : 0057d860 - 0057d979


int do_file_stat(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9,char *param_10,stat *param_11,uint *param_12,char *param_13,
                undefined8 param_14)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  uint *puVar5;
  bool bVar6;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  char acStackY_888 [128];
  uint in_stack_fffffffffffff7f8;
  char local_418 [1008];
  
  puVar5 = param_12;
  do_expandpath(param_10,acStackY_888 + 0x80,1000);
  if (param_12 != (uint *)0x0) {
    *param_12 = 0;
    iVar1 = lstat(acStackY_888 + 0x80,param_11);
    if (iVar1 == 0) {
      bVar6 = (param_11->st_mode & 0xf000) == 0xa000;
      puVar5 = (uint *)(ulong)bVar6;
      *param_12 = (uint)bVar6;
    }
  }
  iVar1 = stat(acStackY_888 + 0x80,param_11);
  if (iVar1 == 0) {
LAB_0057d91f:
    iVar2 = 0;
  }
  else {
    do_expandpath(param_10,local_418,1000);
    iVar1 = sys_open(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     local_418,0,0x1b6,puVar5,param_13,param_14,in_stack_fffffffffffff7f8);
    if (iVar1 < 0) {
      if (param_9 == 0) {
        return -1;
      }
      **(undefined4 **)(param_9 + 0x38) = 0xffffffff;
      iVar2 = -1;
    }
    else {
      iVar2 = fstat(iVar1,param_11);
      sys_close(iVar1);
      if (param_9 == 0) {
        return iVar2;
      }
      **(undefined4 **)(param_9 + 0x38) = 0xffffffff;
      if (iVar2 == 0) goto LAB_0057d91f;
    }
    if (*(int *)(param_9 + 0x4c) != 0) {
      piVar3 = __errno_location();
      pcVar4 = strerror(*piVar3);
      pd_error(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
               "could not stat on \'%s\': %s",param_10,pcVar4,param_13,param_14);
    }
  }
  return iVar2;
}


