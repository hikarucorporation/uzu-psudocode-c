// Function : libpd_add_to_search_path
// Namespace: 
// Entry    : 004d56d0
// Prototype: undefined libpd_add_to_search_path(char * param_1)
// Body     : 004d56d0 - 004d571a


void libpd_add_to_search_path(char *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  
  sys_lock();
  plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
  puVar2 = namelist_append(*(undefined8 **)(*(long *)(*plVar1 + 0x50) + 8),param_1,0);
  *(undefined8 **)(*(long *)(*plVar1 + 0x50) + 8) = puVar2;
  sys_unlock();
  return;
}


