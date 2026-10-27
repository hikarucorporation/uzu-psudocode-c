// Function : gobj_activate
// Namespace: 
// Entry    : 004fceb0
// Prototype: undefined gobj_activate(long * param_1)
// Body     : 004fceb0 - 004fcec7


void gobj_activate(long *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if ((*(long *)(*param_1 + 0x68) == 0) ||
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(*param_1 + 0x68) + 0x18),
     UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004fcec5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


