// Function : pd_float
// Namespace: 
// Entry    : 0053acc0
// Prototype: undefined pd_float(long * param_1)
// Body     : 0053acc0 - 0053ace1


void pd_float(long *param_1)

{
  if (param_1 == (long *)PTR_pd_objectmaker_00715510) {
                    /* WARNING: Could not recover jumptable at 0x0053ace0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)PTR_pd_objectmaker_00715510 + 0x48))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0053acd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))();
  return;
}


