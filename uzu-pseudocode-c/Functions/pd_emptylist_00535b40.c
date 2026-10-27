// Function : pd_emptylist
// Namespace: 
// Entry    : 00535b40
// Prototype: undefined pd_emptylist(long * param_1)
// Body     : 00535b40 - 00535b94


void pd_emptylist(long *param_1)

{
  code *UNRECOVERED_JUMPTABLE_00;
  long *plVar1;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x38);
  if (UNRECOVERED_JUMPTABLE_00 == pd_defaultbang) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x60);
    plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
                    /* WARNING: Could not recover jumptable at 0x00535b93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(param_1,*plVar1 + 0xa8,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00535b64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(param_1);
  return;
}


