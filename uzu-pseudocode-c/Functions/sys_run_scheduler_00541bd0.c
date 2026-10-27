// Function : sys_run_scheduler
// Namespace: 
// Entry    : 00541bd0
// Prototype: undefined4 sys_run_scheduler(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10)
// Body     : 00541bd0 - 00541d07


undefined4
sys_run_scheduler(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10)

{
  FILE *param0;
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 in_R9;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  stat asStack_4ca8 [128];
  undefined1 in_stack_fffffffffffffb58;
  char local_418 [1000];
  
  plVar3 = sys_get_dllextensions(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  pcVar7 = (char *)*plVar3;
  if (pcVar7 != (char *)0x0) {
    uVar6 = extraout_XMM0_Qa;
    do {
      plVar3 = plVar3 + 1;
      pd_snprintf(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,local_418,1000,
                  "%s%s",param_9,pcVar7,in_R9,in_stack_fffffffffffffb58);
      sys_bashfilename(local_418,local_418);
      iVar1 = stat(local_418,asStack_4ca8 + 0x80);
      if (iVar1 == 0) break;
      pcVar7 = (char *)*plVar3;
      uVar6 = extraout_XMM0_Qa_00;
    } while (pcVar7 != (char *)0x0);
  }
  lVar4 = dlopen(local_418,0x102);
  if (lVar4 == 0) {
    uVar6 = dlerror();
    pd_error(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"%s: %s",
             local_418,uVar6,pcVar7,in_R9);
    param0 = *(FILE **)PTR_stderr_00715948;
    pcVar7 = (char *)dlerror();
    fprintf(param0,"dlopen failed for %s: %s\n",local_418,pcVar7);
    uVar2 = 1;
  }
  else {
    pcVar5 = (code *)dlsym(lVar4,"pd_extern_sched");
    if (pcVar5 == (code *)0x0) {
      uVar2 = 0;
      fprintf(*(FILE **)PTR_stderr_00715948,"%s: couldn\'t find pd_extern_sched() or main()\n",
              local_418);
    }
    else {
      uVar2 = (*pcVar5)(param_10);
    }
  }
  return uVar2;
}


