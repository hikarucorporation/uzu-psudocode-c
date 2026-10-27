// Function : libpdrecsymbol
// Namespace: 
// Entry    : 0055d9d0
// Prototype: undefined libpdrecsymbol(long param_1, undefined8 * param_2)
// Body     : 0055d9d0 - 0055d9e9


void libpdrecsymbol(long param_1,undefined8 *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x38) + 0x18);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0055d9e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(**(undefined8 **)(param_1 + 0x30),*param_2);
  return;
}


