// Function : libpd_closefile
// Namespace: 
// Entry    : 004d5770
// Prototype: undefined libpd_closefile(long * param_1)
// Body     : 004d5770 - 004d5786


void libpd_closefile(long *param_1)

{
  sys_lock();
  pd_free(param_1);
  sys_unlock();
  return;
}


