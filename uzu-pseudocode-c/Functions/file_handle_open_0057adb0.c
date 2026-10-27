// Function : file_handle_open
// Namespace: 
// Entry    : 0057adb0
// Prototype: undefined file_handle_open(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, undefined8 * param_10, undefined8 * param_11, undefined8 * param_12, char * param_13, undefined8 param_14)
// Body     : 0057adb0 - 0057afd4


void file_handle_open(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     long *param_9,undefined8 *param_10,undefined8 *param_11,undefined8 *param_12,
                     char *param_13,undefined8 param_14)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  int *piVar4;
  char *pcVar5;
  char *pcVar6;
  int *piVar7;
  uint uVar8;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 uVar9;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  stat asStackY_4c28 [128];
  uint in_stack_fffffffffffffbd8;
  uint local_410;
  
  if (-1 < *(int *)param_9[7]) {
    pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)param_9,
             "\'open\' without prior \'close\'",param_11,param_12,param_13,param_14);
    return;
  }
  plVar3 = param_9;
  if ((param_9[8] != 0) &&
     (plVar3 = pd_findbyclass(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              param_9[8],*(long *)PTR_file_define_class_00715550),
     plVar3 == (long *)0x0)) {
    pd_error(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)param_9,
             "file handle: couldn\'t find file-define \'%s\'",*(undefined8 *)param_9[8],param_12,
             param_13,param_14);
    return;
  }
  param_9[7] = (long)(plVar3 + 6);
  plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
  uVar8 = 0;
  if ((param_11 != (undefined8 *)0x0) &&
     (param_12 = (undefined8 *)(*plVar3 + 0x168), param_12 != param_11)) {
    cVar1 = *(char *)*param_11;
    if (cVar1 == 'a') {
      uVar8 = 0x401;
    }
    else if (cVar1 == 'c') {
      uVar8 = 0x201;
    }
    else if (cVar1 == 'w') {
      uVar8 = 1;
    }
  }
  pcVar5 = (char *)*param_10;
  do_expandpath(pcVar5,(char *)(asStackY_4c28 + 0x80),1000);
  iVar2 = sys_open(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                   (char *)(asStackY_4c28 + 0x80),(uVar8 & 1) << 6 | uVar8,
                   (ulong)*(uint *)(param_9 + 9),param_12,param_13,param_14,
                   in_stack_fffffffffffffbd8);
  piVar4 = (int *)param_9[7];
  *piVar4 = iVar2;
  if (iVar2 < 0) {
    uVar9 = extraout_XMM0_Qa_01;
    if (*(int *)((long)param_9 + 0x4c) != 0) {
      piVar4 = __errno_location();
      pcVar6 = strerror(*piVar4);
      uVar9 = pd_error(extraout_XMM0_Qa_05,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       (long)param_9,"unable to open \'%s\': %s",pcVar5,pcVar6,param_13,param_14);
    }
    plVar3 = (long *)param_9[0xc];
    if (plVar3 == (long *)0x0) {
      return;
    }
  }
  else {
    iVar2 = fstat(*piVar4,asStackY_4c28 + 0x80);
    uVar9 = extraout_XMM0_Qa_02;
    if (iVar2 == 0) {
      if ((local_410 & 0xf000) != 0x4000) {
        *(uint *)(param_9[7] + 4) = uVar8 & 1;
        return;
      }
      piVar7 = (int *)param_9[7];
      if (-1 < *piVar7) {
        sys_close(*piVar7);
        piVar7 = (int *)param_9[7];
        uVar9 = extraout_XMM0_Qa_06;
      }
      *piVar7 = -1;
      if (*(int *)((long)param_9 + 0x4c) != 0) {
        uVar9 = pd_error(uVar9,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)param_9
                         ,"unable to open directory \'%s\' as file",*param_10,piVar4,param_13,
                         param_14);
      }
    }
    else {
      piVar4 = (int *)param_9[7];
      if (-1 < *piVar4) {
        sys_close(*piVar4);
        piVar4 = (int *)param_9[7];
        uVar9 = extraout_XMM0_Qa_03;
      }
      *piVar4 = -1;
      if (*(int *)((long)param_9 + 0x4c) != 0) {
        uVar9 = *param_10;
        piVar4 = __errno_location();
        pcVar5 = strerror(*piVar4);
        uVar9 = pd_error(extraout_XMM0_Qa_04,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                         ,(long)param_9,"unable to stat \'%s\': %s",uVar9,pcVar5,param_13,param_14);
      }
    }
    plVar3 = (long *)param_9[0xc];
  }
  outlet_bang(uVar9,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3);
  return;
}


