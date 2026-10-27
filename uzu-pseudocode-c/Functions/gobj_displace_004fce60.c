// Function : gobj_displace
// Namespace: 
// Entry    : 004fce60
// Prototype: undefined gobj_displace(long * param_1)
// Body     : 004fce60 - 004fce77


void gobj_displace(long *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if ((*(long *)(*param_1 + 0x68) == 0) ||
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(*param_1 + 0x68) + 8),
     UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004fce75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


