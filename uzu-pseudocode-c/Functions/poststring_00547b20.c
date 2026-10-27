// Function : poststring
// Namespace: 
// Entry    : 00547b20
// Prototype: undefined poststring(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, char * param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14, undefined1 param_15)
// Body     : 00547b20 - 00547bfc


void poststring(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               char *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
               undefined8 param_13,undefined8 param_14,undefined1 param_15)

{
  code *UNRECOVERED_JUMPTABLE;
  byte bVar1;
  long *plVar2;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined1 unaff_BL;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(*plVar2 + 0x50) + 0x58);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    if (*(int *)PTR_sys_printtostderr_00715f78 == 0) {
      bVar1 = sys_havetkproc();
      if ((int)CONCAT71(extraout_var,bVar1) != 0) {
        pdgui_vmess(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    0x659680,"s",&DAT_005e3c3c,param_12,param_13,param_14,unaff_BL);
        goto LAB_00547b96;
      }
    }
    fputc(0x20,*(FILE **)PTR_stderr_00715948);
  }
  else {
    (*UNRECOVERED_JUMPTABLE)(&DAT_005e3c3c);
  }
LAB_00547b96:
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(*plVar2 + 0x50) + 0x58);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00547bba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_9);
    return;
  }
  if (*(int *)PTR_sys_printtostderr_00715f78 == 0) {
    bVar1 = sys_havetkproc();
    if ((int)CONCAT71(extraout_var_00,bVar1) != 0) {
      pdgui_vmess(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  0x659680,"s",param_9,param_12,param_13,param_14,param_15);
      return;
    }
  }
  fputs(param_9,*(FILE **)PTR_stderr_00715948);
  return;
}


