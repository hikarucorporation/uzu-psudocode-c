// Function : endpost
// Namespace: 
// Entry    : 00547c90
// Prototype: undefined endpost(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 00547c90 - 00547cea


void endpost(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  undefined8 extraout_XMM0_Qa;
  
  plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(*plVar1 + 0x50) + 0x58);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00547cb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(&DAT_00658931);
    return;
  }
  if (*(int *)PTR_sys_printtostderr_00715f78 == 0) {
    post(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"");
    return;
  }
  fputc(10,*(FILE **)PTR_stderr_00715948);
  return;
}


