// Function : libpdrecanything
// Namespace: 
// Entry    : 0055da20
// Prototype: undefined libpdrecanything(long param_1, undefined8 * param_2)
// Body     : 0055da20 - 0055da39


void libpdrecanything(long param_1,undefined8 *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x38) + 0x28);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0055da37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(**(undefined8 **)(param_1 + 0x30),*param_2);
  return;
}


