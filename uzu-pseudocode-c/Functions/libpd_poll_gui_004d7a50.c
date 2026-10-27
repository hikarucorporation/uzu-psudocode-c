// Function : libpd_poll_gui
// Namespace: 
// Entry    : 004d7a50
// Prototype: ulong libpd_poll_gui(void)
// Body     : 004d7a50 - 004d7a65


ulong libpd_poll_gui(void)

{
  ulong uVar1;
  
  sys_lock();
  uVar1 = sys_pollgui();
  sys_unlock();
  return uVar1 & 0xffffffff;
}


