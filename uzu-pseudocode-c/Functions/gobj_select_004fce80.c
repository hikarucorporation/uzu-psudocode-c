// Function : gobj_select
// Namespace: 
// Entry    : 004fce80
// Prototype: undefined gobj_select(long * param_1, long param_2)
// Body     : 004fce80 - 004fcea0


void gobj_select(long *param_1,long param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if ((((*(byte *)(param_2 + 0xe8) & 2) == 0) || (*(long *)(*param_1 + 0x68) == 0)) ||
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(*param_1 + 0x68) + 0x10),
     UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004fce9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


