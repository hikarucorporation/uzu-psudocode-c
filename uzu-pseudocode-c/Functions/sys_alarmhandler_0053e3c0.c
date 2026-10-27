// Function : sys_alarmhandler
// Namespace: 
// Entry    : 0053e3c0
// Prototype: undefined sys_alarmhandler(void)
// Body     : 0053e3c0 - 0053e3df


void sys_alarmhandler(void)

{
  fwrite("Pd: system call timed out\n",0x1a,1,*(FILE **)PTR_stderr_00715948);
  return;
}


