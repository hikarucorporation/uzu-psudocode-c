// Function : libpd_set_verbose
// Namespace: 
// Entry    : 004d7b80
// Prototype: undefined libpd_set_verbose(int param_1)
// Body     : 004d7b80 - 004d7b90


void libpd_set_verbose(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (-1 < param_1) {
    iVar1 = param_1;
  }
  *(int *)PTR_sys_verbose_00715ce0 = iVar1;
  return;
}


