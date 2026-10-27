// Function : gobj_save
// Namespace: 
// Entry    : 0053a6d0
// Prototype: undefined gobj_save(long * param_1)
// Body     : 0053a6d0 - 0053a6de


void gobj_save(long *param_1)

{
  if (*(code **)(*param_1 + 0x78) == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0053a6dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x78))();
  return;
}


