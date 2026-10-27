// Function : sys_loadlib_iter
// Namespace: 
// Entry    : 00541870
// Prototype: bool sys_loadlib_iter(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, char * param_9, undefined8 * param_10)
// Body     : 00541870 - 00541a23


bool sys_loadlib_iter(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     char *param_9,undefined8 *param_10)

{
  char *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined **ppuVar7;
  undefined8 in_R9;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar8;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  uint uVar9;
  undefined1 in_stack_fffffffffffff7f8;
  undefined8 local_800;
  char local_7f8 [1008];
  char local_408 [1000];
  
  ppuVar7 = &loaders;
  do {
    iVar2 = (*(code *)*ppuVar7)(*param_10,param_10[1],param_9);
    if (iVar2 != 0) goto LAB_00541a07;
    ppuVar7 = (undefined **)ppuVar7[1];
  } while (ppuVar7 != (undefined **)0x0);
  if (param_9 == (char *)0x0) {
LAB_00541a05:
    iVar2 = 0;
  }
  else {
    pcVar1 = (char *)param_10[1];
    uVar8 = pd_snprintf(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        local_408,1000,"%s/%s",pcVar1,pcVar1,in_R9,in_stack_fffffffffffff7f8);
    iVar2 = sys_trytoopenit(uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                            pcVar1,".pd",local_7f8,&local_800,1000,1,1);
    if (iVar2 < 0) {
      iVar2 = sys_trytoopenit(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,
                              param_8,param_9,pcVar1,".pat",local_7f8,&local_800,1000,1,1);
      if (iVar2 < 0) {
        iVar2 = sys_trytoopenit(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,
                                param_8,param_9,local_408,".pd",local_7f8,&local_800,1000,1,1);
        if (iVar2 < 0) goto LAB_00541a05;
      }
    }
    close(iVar2);
    puVar3 = gensym(local_7f8);
    class_set_extern_dir(puVar3);
    uVar9 = 0x541992;
    piVar4 = (int *)gensym(pcVar1);
    puVar3 = class_new(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       piVar4,0x542100,0,0,(char *)0x0,10,0,uVar9);
    if (puVar3 != (undefined8 *)0x0) {
      puVar5 = getbytes(0x10);
      *puVar5 = puVar3;
      puVar5[1] = sys_do_load_abs_abstraction_classes;
      sys_do_load_abs_abstraction_classes = puVar5;
    }
    plVar6 = (long *)__tls_get_addr(&PTR_007159b0);
    class_set_extern_dir(*plVar6 + 0x168);
    iVar2 = 1;
  }
LAB_00541a07:
  *(int *)(param_10 + 2) = iVar2;
  return iVar2 == 0;
}


