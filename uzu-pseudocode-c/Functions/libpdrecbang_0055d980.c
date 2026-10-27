// Function : libpdrecbang
// Namespace: 
// Entry    : 0055d980
// Prototype: undefined libpdrecbang(long param_1)
// Body     : 0055d980 - 0055d995


void libpdrecbang(long param_1)

{
  if ((code *)**(undefined8 **)(param_1 + 0x38) == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0055d993. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x38))(**(undefined8 **)(param_1 + 0x30));
  return;
}


