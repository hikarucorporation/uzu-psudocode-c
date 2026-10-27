// Function : sys_bail
// Namespace: 
// Entry    : 0053f0d0
// Prototype: undefined sys_bail(int param_1)
// Body     : 0053f0d0 - 0053f0ef


void sys_bail(int param_1)

{
  if (sys_bail_reentered == '\0') {
    sys_bail_reentered = 1;
                    /* WARNING: Subroutine does not return */
    exit(param_1);
  }
                    /* WARNING: Subroutine does not return */
  _exit(1);
}


