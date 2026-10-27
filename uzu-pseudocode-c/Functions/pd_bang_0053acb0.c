// Function : pd_bang
// Namespace: 
// Entry    : 0053acb0
// Prototype: undefined pd_bang(long * param_1)
// Body     : 0053acb0 - 0053acb5


void pd_bang(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0053acb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))();
  return;
}


