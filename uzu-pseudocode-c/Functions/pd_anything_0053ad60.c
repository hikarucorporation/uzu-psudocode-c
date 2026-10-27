// Function : pd_anything
// Namespace: 
// Entry    : 0053ad60
// Prototype: undefined pd_anything(long * param_1)
// Body     : 0053ad60 - 0053ad68


void pd_anything(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0053ad67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x60))();
  return;
}


