// Function : gobj_click
// Namespace: 
// Entry    : 004fd180
// Prototype: undefined8 gobj_click(long * param_1)
// Body     : 004fd180 - 004fd199


undefined8 gobj_click(long *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if ((*(long *)(*param_1 + 0x68) == 0) ||
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(*param_1 + 0x68) + 0x30),
     UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x004fd195. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)();
  return uVar1;
}


