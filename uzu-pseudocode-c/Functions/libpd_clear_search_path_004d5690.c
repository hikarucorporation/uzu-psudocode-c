// Function : libpd_clear_search_path
// Namespace: 
// Entry    : 004d5690
// Prototype: undefined libpd_clear_search_path(void)
// Body     : 004d5690 - 004d56cd


void libpd_clear_search_path(void)

{
  long *plVar1;
  
  sys_lock();
  plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
  namelist_free(*(long **)(*(long *)(*plVar1 + 0x50) + 8));
  *(undefined8 *)(*(long *)(*plVar1 + 0x50) + 8) = 0;
  sys_unlock();
  return;
}


