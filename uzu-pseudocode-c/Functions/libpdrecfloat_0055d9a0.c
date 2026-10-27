// Function : libpdrecfloat
// Namespace: 
// Entry    : 0055d9a0
// Prototype: undefined libpdrecfloat(float param_1, long param_2)
// Body     : 0055d9a0 - 0055d9cc


void libpdrecfloat(float param_1,long param_2)

{
  code *UNRECOVERED_JUMPTABLE_00;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)(param_2 + 0x38) + 8);
  if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0055d9b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(**(undefined8 **)(param_2 + 0x30));
    return;
  }
  UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)(param_2 + 0x38) + 0x10);
  if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0055d9ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)((double)param_1,**(undefined8 **)(param_2 + 0x30));
  return;
}


