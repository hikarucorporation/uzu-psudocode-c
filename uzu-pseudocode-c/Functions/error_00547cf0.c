// Function : error
// Namespace: 
// Entry    : 00547cf0
// Prototype: undefined error(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, char * param_9)
// Body     : 00547cf0 - 00547e7d


void error(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,char *param_9)

{
  byte bVar1;
  size_t sVar2;
  long *plVar3;
  undefined7 extraout_var;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined1 auStack_938 [128];
  undefined1 uVar4;
  char local_7e8 [1008];
  char local_3f8 [999];
  undefined1 local_11;
  
  uVar4 = 8;
  vsnprintf(local_7e8,999,param_9,auStack_938 + 0x80);
  sVar2 = strlen(local_7e8);
  (local_7e8 + sVar2)[0] = '\n';
  (local_7e8 + sVar2)[1] = '\0';
  local_11 = 0;
  plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
  if (*(long *)(*(long *)(*plVar3 + 0x50) + 0x58) != 0) {
    pd_snprintf(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,local_3f8,
                999,"error: %s",local_7e8,in_R8,in_R9,uVar4);
    plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
    (**(code **)(*(long *)(*plVar3 + 0x50) + 0x58))(local_3f8);
    return;
  }
  if ((*(int *)PTR_sys_printtostderr_00715f78 == 0) &&
     (bVar1 = sys_havetkproc(), (int)CONCAT71(extraout_var,bVar1) != 0)) {
    pdgui_vmess(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x659668
                ,"ois",0,1,local_7e8,in_R9,uVar4);
    return;
  }
  fprintf(*(FILE **)PTR_stderr_00715948,"error: %s",local_7e8);
  return;
}


