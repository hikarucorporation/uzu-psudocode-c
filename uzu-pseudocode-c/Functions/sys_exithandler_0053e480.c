// Function : sys_exithandler
// Namespace: 
// Entry    : 0053e480
// Prototype: undefined sys_exithandler(ulong param_1)
// Body     : 0053e480 - 0053e4ce


void sys_exithandler(ulong param_1)

{
  if (sys_exithandler_trouble == '\0') {
    sys_exithandler_trouble = '\x01';
    fprintf(*(FILE **)PTR_stderr_00715948,"Pd: signal %d\n",(int)param_1);
    if (sys_bail_reentered == '\0') {
      sys_bail_reentered = 1;
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
  }
                    /* WARNING: Subroutine does not return */
  _exit(1);
}


