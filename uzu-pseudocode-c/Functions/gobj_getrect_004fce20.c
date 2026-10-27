// Function : gobj_getrect
// Namespace: 
// Entry    : 004fce20
// Prototype: undefined gobj_getrect(long * param_1, undefined8 param_2, undefined4 * param_3, undefined4 * param_4, undefined4 * param_5, undefined4 * param_6)
// Body     : 004fce20 - 004fce50


void gobj_getrect(long *param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined4 *param_6)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if ((*(undefined8 **)(*param_1 + 0x68) == (undefined8 *)0x0) ||
     (UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*param_1 + 0x68),
     UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    *param_4 = 0;
    *param_3 = 0;
    *param_6 = 10;
    *param_5 = 10;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004fce34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


