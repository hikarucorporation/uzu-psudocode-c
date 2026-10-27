// Function : libpd_unbind
// Namespace: 
// Entry    : 004d7340
// Prototype: undefined libpd_unbind(long * param_1)
// Body     : 004d7340 - 004d7356


void libpd_unbind(long *param_1)

{
  sys_lock();
  pd_free(param_1);
  sys_unlock();
  return;
}


