// Function : sys_do_load_lib_from_file
// Namespace: 
// Entry    : 00541fe0
// Prototype: undefined8 sys_do_load_lib_from_file(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, int param_9, char * param_10, char * param_11, char * param_12, char * param_13, undefined8 param_14)
// Body     : 00541fe0 - 005420fe


undefined8
sys_do_load_lib_from_file
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,int param_9,
          char *param_10,char *param_11,char *param_12,char *param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  size_t sVar2;
  long lVar3;
  code *pcVar4;
  char *pcVar5;
  long *plVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar9;
  char acStack_418 [998];
  undefined1 local_32;
  undefined1 local_31;
  
  close(param_9);
  puVar1 = gensym(param_10);
  class_set_extern_dir(puVar1);
  strncpy(acStack_418,param_10,1000);
  local_32 = 0;
  sVar2 = strlen(acStack_418);
  (acStack_418 + sVar2)[0] = '/';
  (acStack_418 + sVar2)[1] = '\0';
  sVar2 = strlen(acStack_418);
  strncat(acStack_418,param_11,1000 - sVar2);
  local_31 = 0;
  lVar3 = dlopen(acStack_418,0x102);
  if (lVar3 == 0) {
    pcVar5 = (char *)dlerror();
    param_12 = acStack_418;
    pcVar8 = "%s:%s";
    uVar9 = extraout_XMM0_Qa_00;
LAB_005420c8:
    uVar7 = 0;
    pd_error(uVar9,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,pcVar8,param_12,pcVar5,
             param_13,param_14);
  }
  else {
    pcVar4 = (code *)dlsym(lVar3,param_12);
    if (pcVar4 == (code *)0x0) {
      pcVar4 = (code *)dlsym(lVar3,"setup");
      pcVar5 = acStack_418;
      if (pcVar4 == (code *)0x0) {
        pcVar8 = "load_object: Symbol \"%s\" not found in \"%s\"";
        uVar9 = extraout_XMM0_Qa;
        goto LAB_005420c8;
      }
    }
    (*pcVar4)();
    uVar7 = 1;
  }
  plVar6 = (long *)__tls_get_addr(&PTR_007159b0);
  class_set_extern_dir(*plVar6 + 0x168);
  return uVar7;
}


