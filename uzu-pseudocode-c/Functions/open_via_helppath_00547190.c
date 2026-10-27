// Function : open_via_helppath
// Namespace: 
// Entry    : 00547190
// Prototype: undefined open_via_helppath(undefined8 param_1, undefined8 param_2, double param_3, double param_4, double param_5, double param_6, double param_7, undefined8 param_8, char * param_9, char * param_10)
// Body     : 00547190 - 00547353


void open_via_helppath(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                      double param_5,double param_6,double param_7,undefined8 param_8,char *param_9,
                      char *param_10)

{
  int iVar1;
  size_t sVar2;
  long *plVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 *puVar8;
  char *pcVar9;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 in_stack_fffffffffffff3f8;
  undefined8 local_bf0;
  char local_be8 [8];
  undefined1 auStack_be0 [982];
  undefined1 local_80a;
  undefined1 local_801;
  char local_7f8 [1008];
  char local_408 [1000];
  
  pcVar9 = "./";
  if (*param_10 != '\0') {
    pcVar9 = param_10;
  }
  strncpy(local_be8,param_9,0x3de);
  local_80a = 0;
  sVar2 = strlen(local_be8);
  if ((3 < sVar2) && (iVar1 = strcmp(local_be8 + (sVar2 - 3),".pd"), iVar1 == 0)) {
    local_be8[sVar2 - 3] = '\0';
  }
  strncpy(local_408,local_be8,0x3de);
  sVar2 = strlen(local_be8);
  builtin_strncpy(local_be8 + sVar2,"-help.pd",8);
  auStack_be0[sVar2] = 0;
  plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
  pcVar6 = local_7f8;
  pcVar7 = (char *)&local_bf0;
  puVar8 = (undefined8 *)0x3e8;
  iVar1 = do_open_via_path(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                           pcVar9,local_be8,"",pcVar6,(undefined8 *)pcVar7,1000,
                           in_stack_fffffffffffff3f8,
                           *(undefined8 **)(*(long *)(*plVar3 + 0x50) + 0x18),1);
  if (iVar1 < 0) {
    builtin_strncpy(local_be8,"help-",6);
    strncat(local_be8,param_9,0x3de);
    local_801 = 0;
    plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
    pcVar6 = local_7f8;
    pcVar7 = (char *)&local_bf0;
    puVar8 = (undefined8 *)0x3e8;
    iVar1 = do_open_via_path(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,
                             param_8,pcVar9,local_be8,"",pcVar6,(undefined8 *)pcVar7,1000,
                             in_stack_fffffffffffff3f8,
                             *(undefined8 **)(*(long *)(*plVar3 + 0x50) + 0x18),1);
    if (iVar1 < 0) {
      post(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
           "sorry, couldn\'t find help patch for \"%s\"");
      return;
    }
  }
  close(iVar1);
  ppuVar4 = (undefined **)gensym(local_bf0);
  puVar5 = gensym(local_7f8);
  glob_evalfile(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                ppuVar4,puVar5,pcVar6,pcVar7,puVar8);
  return;
}


