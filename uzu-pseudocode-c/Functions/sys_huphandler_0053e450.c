// Function : sys_huphandler
// Namespace: 
// Entry    : 0053e450
// Prototype: undefined sys_huphandler(void)
// Body     : 0053e450 - 0053e476


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sys_huphandler(void)

{
  timeval local_18;
  
  local_18.tv_sec = _DAT_00656ed0;
  local_18.tv_usec = _UNK_00656ed8;
  select(1,(fd_set *)0x0,(fd_set *)0x0,(fd_set *)0x0,&local_18);
  return;
}


