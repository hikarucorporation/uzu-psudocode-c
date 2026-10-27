// Function : atom_getsymbol
// Namespace: 
// Entry    : 0052ed90
// Prototype: long atom_getsymbol(int * param_1)
// Body     : 0052ed90 - 0052edb4


long atom_getsymbol(int *param_1)

{
  long *plVar1;
  
  if (*param_1 == 2) {
    return *(long *)(param_1 + 2);
  }
  plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
  return *plVar1 + 0x78;
}


