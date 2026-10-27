// Function : post
// Namespace: 
// Entry    : 005478b0
// Prototype: undefined post(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, char * param_9)
// Body     : 005478b0 - 005479ee


void post(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
         undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,char *param_9)

{
  code *pcVar1;
  byte bVar2;
  size_t sVar3;
  long *plVar4;
  undefined7 extraout_var;
  undefined1 *puVar5;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 extraout_XMM0_Qa;
  undefined1 auStack_548 [128];
  undefined1 uVar6;
  char local_3f8 [1008];
  
  puVar5 = auStack_548 + 0x80;
  uVar6 = 8;
  vsnprintf(local_3f8,999,param_9,auStack_548 + 0x80);
  sVar3 = strlen(local_3f8);
  (local_3f8 + sVar3)[0] = '\n';
  (local_3f8 + sVar3)[1] = '\0';
  plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
  pcVar1 = *(code **)(*(long *)(*plVar4 + 0x50) + 0x58);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(local_3f8);
    return;
  }
  if ((*(int *)PTR_sys_printtostderr_00715f78 == 0) &&
     (bVar2 = sys_havetkproc(), (int)CONCAT71(extraout_var,bVar2) != 0)) {
    pdgui_vmess(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x659680,
                "s",local_3f8,puVar5,in_R8,in_R9,uVar6);
    return;
  }
  fputs(local_3f8,*(FILE **)PTR_stderr_00715948);
  return;
}


