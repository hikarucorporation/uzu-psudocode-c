// Function : gobj_delete
// Namespace: 
// Entry    : 004fced0
// Prototype: undefined gobj_delete(long * param_1)
// Body     : 004fced0 - 004fcee7


void gobj_delete(long *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if ((*(long *)(*param_1 + 0x68) == 0) ||
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(*param_1 + 0x68) + 0x20),
     UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004fcee5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


