// Function : sys_setsignalhandlers
// Namespace: 
// Entry    : 0053e3e0
// Prototype: undefined sys_setsignalhandlers(void)
// Body     : 0053e3e0 - 0053e44d


void sys_setsignalhandlers(void)

{
  signal(1,sys_huphandler);
  signal(2,sys_exithandler);
  signal(3,sys_exithandler);
  signal(6,sys_exithandler);
  signal(8,(__sighandler_t)0x1);
  signal(0xd,(__sighandler_t)0x1);
  signal(0xe,(__sighandler_t)0x1);
  return;
}


