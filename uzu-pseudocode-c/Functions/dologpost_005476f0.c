// Function : dologpost
// Namespace: 
// Entry    : 005476f0
// Prototype: undefined dologpost(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, uint param_10, char * param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14)
// Body     : 005476f0 - 005477da


void dologpost(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              undefined8 param_9,uint param_10,char *param_11,undefined8 param_12,
              undefined8 param_13,undefined8 param_14)

{
  byte bVar1;
  long *plVar2;
  undefined7 extraout_var;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined1 in_stack_00000008;
  char acStack_488 [128];
  undefined1 in_stack_fffffffffffffbf8;
  
  if (((int)param_10 < 4) || (*(int *)PTR_sys_verbose_00715ce0 != 0)) {
    plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
    if (*(long *)(*(long *)(*plVar2 + 0x50) + 0x58) == 0) {
      if (*(int *)PTR_sys_printtostderr_00715f78 == 0) {
        bVar1 = sys_havetkproc();
        if ((int)CONCAT71(extraout_var,bVar1) != 0) {
          pdgui_vmess(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      0x659668,"ois",param_9,(ulong)param_10,param_11,param_14,in_stack_00000008);
          return;
        }
      }
      fputs(param_11,*(FILE **)PTR_stderr_00715948);
      return;
    }
    pd_snprintf(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                acStack_488 + 0x80,999,"verbose(%d): %s",(ulong)param_10,param_11,param_14,
                in_stack_fffffffffffffbf8);
    plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
    (**(code **)(*(long *)(*plVar2 + 0x50) + 0x58))(acStack_488 + 0x80);
  }
  return;
}


