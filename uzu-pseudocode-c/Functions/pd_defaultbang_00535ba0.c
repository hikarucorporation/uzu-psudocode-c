// Function : pd_defaultbang
// Namespace: 
// Entry    : 00535ba0
// Prototype: undefined pd_defaultbang(long * param_1)
// Body     : 00535ba0 - 00535bfa


void pd_defaultbang(long *param_1)

{
  code *UNRECOVERED_JUMPTABLE_00;
  long *plVar1;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x58);
  if (UNRECOVERED_JUMPTABLE_00 == pd_defaultlist) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x60);
    plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
                    /* WARNING: Could not recover jumptable at 0x00535bf9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(param_1,*plVar1 + 0xa8,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00535bca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(param_1,0,0,0);
  return;
}


