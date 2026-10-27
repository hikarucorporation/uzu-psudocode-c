// Function : pd_pointer
// Namespace: 
// Entry    : 0053acf0
// Prototype: undefined pd_pointer(long * param_1)
// Body     : 0053acf0 - 0053acf8


void pd_pointer(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0053acf7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))();
  return;
}


