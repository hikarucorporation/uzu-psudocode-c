// Function : pd_list
// Namespace: 
// Entry    : 0053ad10
// Prototype: undefined pd_list(long * param_1, undefined8 param_2, undefined4 param_3, undefined8 param_4)
// Body     : 0053ad10 - 0053ad56


void pd_list(long *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x58);
  plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
                    /* WARNING: Could not recover jumptable at 0x0053ad55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,*plVar1 + 0xc0,param_3,param_4);
  return;
}


