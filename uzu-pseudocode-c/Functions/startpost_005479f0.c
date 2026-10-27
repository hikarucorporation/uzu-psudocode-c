// Function : startpost
// Namespace: 
// Entry    : 005479f0
// Prototype: undefined startpost(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, char * param_9)
// Body     : 005479f0 - 00547b15


void startpost(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              char *param_9)

{
  code *pcVar1;
  byte bVar2;
  long *plVar3;
  undefined7 extraout_var;
  undefined1 *puVar4;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 extraout_XMM0_Qa;
  undefined1 auStack_538 [128];
  undefined1 uVar5;
  char local_3e8 [1000];
  
  puVar4 = auStack_538 + 0x80;
  uVar5 = 8;
  vsnprintf(local_3e8,999,param_9,auStack_538 + 0x80);
  plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
  pcVar1 = *(code **)(*(long *)(*plVar3 + 0x50) + 0x58);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(local_3e8);
    return;
  }
  if ((*(int *)PTR_sys_printtostderr_00715f78 == 0) &&
     (bVar2 = sys_havetkproc(), (int)CONCAT71(extraout_var,bVar2) != 0)) {
    pdgui_vmess(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x659680,
                "s",local_3e8,puVar4,in_R8,in_R9,uVar5);
    return;
  }
  fputs(local_3e8,*(FILE **)PTR_stderr_00715948);
  return;
}


