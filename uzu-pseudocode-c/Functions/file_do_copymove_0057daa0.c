// Function : file_do_copymove
// Namespace: 
// Entry    : 0057daa0
// Prototype: undefined file_do_copymove(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined * param_11, undefined8 param_12, char * param_13, int * param_14)
// Body     : 0057daa0 - 0057dcbf


void file_do_copymove(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     long param_9,undefined8 param_10,undefined *param_11,undefined8 param_12,
                     char *param_13,int *param_14)

{
  int iVar1;
  undefined8 *puVar2;
  char *pcVar3;
  int *piVar4;
  int *piVar5;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar6;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  stat local_898;
  char local_808 [999];
  undefined1 local_421;
  char local_418 [999];
  undefined1 local_31;
  
  if ((((int)param_13 != 2) || (*param_14 != 2)) || (param_14[4] != 2)) {
    pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
             "bad arguments for [file %s] - should be \'source:symbol destination:symbol\'",param_10
             ,param_12,param_13,param_14);
    return;
  }
  piVar5 = param_14;
  puVar2 = (undefined8 *)atom_getsymbol(param_14);
  do_expandpath((char *)*puVar2,local_808,1000);
  local_421 = 0;
  sys_unbashfilename(local_808,local_808);
  local_421 = 0;
  puVar2 = (undefined8 *)atom_getsymbol(param_14 + 4);
  do_expandpath((char *)*puVar2,local_418,1000);
  local_31 = 0;
  sys_unbashfilename(local_418,local_418);
  local_31 = 0;
  iVar1 = stat(local_808,&local_898);
  if ((iVar1 == 0) && ((local_898.st_mode & 0xf000) == 0x4000)) {
    uVar6 = extraout_XMM0_Qa;
    if (*(int *)(param_9 + 0x4c) != 0) {
      pcVar3 = strerror(0x15);
      uVar6 = pd_error(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       param_9,"failed to %s \'%s\': %s",param_10,local_808,pcVar3,piVar5);
    }
  }
  else {
    piVar4 = __errno_location();
    *piVar4 = 0;
    if (*(uint *)(param_9 + 0x48) != 0) {
      local_898.st_mode = *(uint *)(param_9 + 0x48);
    }
    iVar1 = (*(code *)param_11)(local_808,local_418,local_898.st_mode);
    if (iVar1 == 0) {
      uVar6 = extraout_XMM0_Qa_01;
      if ((*piVar4 != 0) && (*(int *)(param_9 + 0x4c) != 0)) {
        piVar5 = (int *)strerror(*piVar4);
        param_13 = local_418;
        uVar6 = pd_error(extraout_XMM0_Qa_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                         ,param_9,"troubles (but overall success) to %s \'%s\' to \'%s\': %s",
                         param_10,local_808,param_13,piVar5);
      }
      outlet_list(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  *(long **)(param_9 + 0x58),param_12,2,param_14,param_13,piVar5);
      return;
    }
    uVar6 = extraout_XMM0_Qa_01;
    if (*(int *)(param_9 + 0x4c) != 0) {
      pcVar3 = strerror(*piVar4);
      uVar6 = pd_error(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       param_9,"failed to %s \'%s\' to \'%s\': %s",param_10,local_808,local_418,
                       pcVar3);
    }
  }
  outlet_bang(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
              *(long **)(param_9 + 0x60));
  return;
}


