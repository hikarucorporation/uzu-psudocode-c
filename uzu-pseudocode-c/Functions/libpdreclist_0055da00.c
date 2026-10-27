// Function : libpdreclist
// Namespace: 
// Entry    : 0055da00
// Prototype: undefined libpdreclist(long param_1, undefined8 param_2, undefined4 param_3, undefined8 param_4)
// Body     : 0055da00 - 0055da1b


void libpdreclist(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x38) + 0x20);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0055da19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(**(undefined8 **)(param_1 + 0x30),param_3,param_4);
  return;
}


