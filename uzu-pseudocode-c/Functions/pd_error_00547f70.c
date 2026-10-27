// Function : pd_error
// Namespace: 
// Entry    : 00547f70
// Prototype: undefined pd_error(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, char * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00547f70 - 0054816e


void pd_error(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9,char *param_10,undefined8 param_11,undefined8 param_12,char *param_13,
             undefined8 param_14)

{
  byte bVar1;
  size_t sVar2;
  long *plVar3;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  char *pcVar4;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  char acStack_948 [128];
  undefined1 uVar5;
  char local_7f8 [1008];
  char local_408 [999];
  undefined1 local_21;
  
  pcVar4 = acStack_948 + 0x80;
  uVar5 = 0x10;
  vsnprintf(local_7f8,999,param_10,acStack_948 + 0x80);
  sVar2 = strlen(local_7f8);
  (local_7f8 + sVar2)[0] = '\n';
  (local_7f8 + sVar2)[1] = '\0';
  local_21 = 0;
  plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
  if (*(long *)(*(long *)(*plVar3 + 0x50) + 0x58) == 0) {
    if ((*(int *)PTR_sys_printtostderr_00715f78 == 0) &&
       (bVar1 = sys_havetkproc(), (int)CONCAT71(extraout_var,bVar1) != 0)) {
      param_13 = local_7f8;
      pcVar4 = (char *)0x1;
      pdgui_vmess(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  0x659668,"ois",param_9,1,param_13,param_14,uVar5);
    }
    else {
      fprintf(*(FILE **)PTR_stderr_00715948,"error: %s",local_7f8);
    }
  }
  else {
    pcVar4 = local_7f8;
    pd_snprintf(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,local_408,
                999,"error: %s",pcVar4,param_13,param_14,uVar5);
    plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
    (**(code **)(*(long *)(*plVar3 + 0x50) + 0x58))(local_408);
  }
  if (param_9 != 0) {
    error_object = param_9;
  }
  strncpy(error_string,local_7f8,0x100);
  error_string[0xff] = 0;
  if ((param_9 != 0) && ((pd_error_saidit & 1) == 0)) {
    bVar1 = sys_havetkproc();
    if ((int)CONCAT71(extraout_var_00,bVar1) != 0) {
      logpost(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,4,
              "... you might be able to track this down from the Find menu.",pcVar4,param_13,
              param_14,uVar5);
    }
    pd_error_saidit = 1;
  }
  return;
}


