// Function : atom_getsymbolarg
// Namespace: 
// Entry    : 0052ee60
// Prototype: long atom_getsymbolarg(int param_1, int param_2, long param_3)
// Body     : 0052ee60 - 0052ee95


long atom_getsymbolarg(int param_1,int param_2,long param_3)

{
  long *plVar1;
  
  if ((param_1 < param_2) && (*(int *)(param_3 + (long)param_1 * 0x10) == 2)) {
    return *(long *)(param_3 + 8 + (long)param_1 * 0x10);
  }
  plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
  return *plVar1 + 0x168;
}


