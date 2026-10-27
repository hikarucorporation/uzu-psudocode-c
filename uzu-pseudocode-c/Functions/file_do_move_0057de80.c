// Function : file_do_move
// Namespace: 
// Entry    : 0057de80
// Prototype: int file_do_move(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, char * param_9, char * param_10, uint param_11, char * param_12, char * param_13, undefined8 param_14)
// Body     : 0057de80 - 0057e0a6


int file_do_move(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                char *param_9,char *param_10,uint param_11,char *param_12,char *param_13,
                undefined8 param_14)

{
  __mode_t _Var1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 uVar8;
  undefined1 uVar9;
  uint in_stack_fffffffffffff748;
  stat local_8a8;
  char local_818 [1008];
  char local_428 [1016];
  
  iVar2 = rename(param_9,param_10);
  if (iVar2 == 0) {
    iVar5 = 0;
    piVar6 = __errno_location();
    iVar2 = 0;
    goto LAB_0057e054;
  }
  piVar6 = __errno_location();
  iVar5 = *piVar6;
  do_expandpath(param_9,local_428,1000);
  iVar3 = stat(local_428,&local_8a8);
  if (iVar3 != 0) {
    do_expandpath(param_9,local_818,1000);
    iVar3 = sys_open(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     local_818,0,0x1b6,param_12,param_13,param_14,in_stack_fffffffffffff748);
    if (iVar3 < 0) goto LAB_0057e054;
    iVar4 = fstat(iVar3,&local_8a8);
    sys_close(iVar3);
    if (iVar4 < 0) goto LAB_0057e054;
  }
  _Var1 = local_8a8.st_mode;
  do_expandpath(param_10,local_428,1000);
  iVar3 = stat(local_428,&local_8a8);
  uVar8 = extraout_XMM0_Qa_00;
  if (iVar3 != 0) {
    do_expandpath(param_10,local_818,1000);
    iVar3 = sys_open(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     local_818,0,0x1b6,param_12,param_13,param_14,in_stack_fffffffffffff748);
    if (iVar3 < 0) goto LAB_0057e054;
    iVar4 = fstat(iVar3,&local_8a8);
    sys_close(iVar3);
    uVar8 = extraout_XMM0_Qa_02;
    if (iVar4 < 0) goto LAB_0057e054;
  }
  uVar9 = (undefined1)in_stack_fffffffffffff748;
  if (((_Var1 & 0xf000) != 0x4000) && ((local_8a8.st_mode & 0xf000) == 0x4000)) {
    pcVar7 = strrchr(param_9,0x2f);
    param_13 = pcVar7 + 1;
    if (pcVar7 == (char *)0x0) {
      param_13 = param_9;
    }
    param_12 = param_10;
    pd_snprintf(extraout_XMM0_Qa_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                local_818,1000,"%s/%s",param_10,param_13,param_14,uVar9);
    iVar2 = rename(param_9,local_818);
    iVar5 = *piVar6;
    uVar8 = extraout_XMM0_Qa_04;
    if (iVar2 == 0) {
      iVar2 = 0;
      goto LAB_0057e054;
    }
  }
  if (*piVar6 == 0x12) {
    iVar3 = file_do_copy(uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                         param_10,(ulong)param_11,param_12,param_13,param_14);
    iVar2 = 1;
    if (iVar3 == 0) {
      iVar5 = remove(param_9);
      iVar2 = 0;
      if (iVar5 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *piVar6;
      }
    }
  }
LAB_0057e054:
  *piVar6 = iVar5;
  return iVar2;
}


