// Function : do_open_via_path
// Namespace: 
// Entry    : 00546eb0
// Prototype: int do_open_via_path(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, char * param_9, char * param_10, char * param_11, char * param_12, undefined8 * param_13, ulong param_14, undefined8 param_15, undefined8 * param_16, int param_17)
// Body     : 00546eb0 - 005470a1


int do_open_via_path(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    char *param_9,char *param_10,char *param_11,char *param_12,undefined8 *param_13,
                    ulong param_14,undefined8 param_15,undefined8 *param_16,int param_17)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  long *plVar6;
  size_t __n;
  ulong uVar7;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 in_stack_fffffffffffffbc8;
  char local_418 [1000];
  
  if ((*param_10 == '~') || (uVar7 = param_14, *param_10 == '/')) {
    pcVar5 = strrchr(param_10,0x2f);
    if (pcVar5 != (char *)0x0) {
      iVar3 = (int)pcVar5 - (int)param_10;
      iVar4 = 999;
      if (iVar3 < 999) {
        iVar4 = iVar3;
      }
      __n = (size_t)iVar4;
      strncpy(local_418,param_10,__n);
      local_418[__n] = '\0';
      iVar4 = sys_trytoopenit(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,
                              param_8,local_418,param_10 + __n + 1,param_11,param_12,param_13,
                              param_14 & 0xffffffff,in_stack_fffffffffffffbc8,param_17);
      return iVar4;
    }
    uVar7 = param_14 & 0xffffffff;
    param_1 = extraout_XMM0_Qa;
  }
  iVar4 = sys_trytoopenit(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                          param_10,param_11,param_12,param_13,uVar7,in_stack_fffffffffffffbc8,
                          param_17);
  if (iVar4 < 0) {
    plVar6 = (long *)__tls_get_addr(&PTR_007159b0);
    uVar2 = extraout_XMM0_Qa_01;
    for (puVar1 = *(undefined8 **)(*(long *)(*plVar6 + 0x50) + 0x20); uVar7 = uVar7 & 0xffffffff,
        puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
      iVar4 = sys_trytoopenit(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              (char *)puVar1[1],param_10,param_11,param_12,param_13,uVar7,
                              in_stack_fffffffffffffbc8,param_17);
      if (-1 < iVar4) {
        return iVar4;
      }
      uVar2 = extraout_XMM0_Qa_02;
      uVar7 = param_14;
    }
    for (; param_16 != (undefined8 *)0x0; param_16 = (undefined8 *)*param_16) {
      iVar4 = sys_trytoopenit(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              (char *)param_16[1],param_10,param_11,param_12,param_13,uVar7,
                              in_stack_fffffffffffffbc8,param_17);
      if (-1 < iVar4) {
        return iVar4;
      }
      uVar7 = param_14 & 0xffffffff;
      uVar2 = extraout_XMM0_Qa_03;
    }
    if (*(int *)PTR_sys_usestdpath_00715ef8 != 0) {
      plVar6 = (long *)__tls_get_addr(&PTR_007159b0);
      uVar2 = extraout_XMM0_Qa_04;
      for (puVar1 = *(undefined8 **)(*(long *)(*plVar6 + 0x50) + 0x10); puVar1 != (undefined8 *)0x0;
          puVar1 = (undefined8 *)*puVar1) {
        iVar4 = sys_trytoopenit(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                (char *)puVar1[1],param_10,param_11,param_12,param_13,
                                param_14 & 0xffffffff,in_stack_fffffffffffffbc8,param_17);
        if (-1 < iVar4) {
          return iVar4;
        }
        uVar2 = extraout_XMM0_Qa_05;
      }
    }
    *param_12 = '\0';
    *param_13 = param_12;
    iVar4 = -1;
  }
  return iVar4;
}


