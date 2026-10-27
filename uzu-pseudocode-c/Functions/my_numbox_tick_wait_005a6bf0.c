// Function : my_numbox_tick_wait
// Namespace: 
// Entry    : 005a6bf0
// Prototype: undefined my_numbox_tick_wait(long param_1)
// Body     : 005a6bf0 - 005a6bff


void my_numbox_tick_wait(long param_1)

{
  sys_queuegui(param_1,*(long *)(param_1 + 0x30),0x5a68b0);
  return;
}


