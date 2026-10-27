// Function : find_func
// Namespace: 
// Entry    : 005b2fc0
// Prototype: undefined * * find_func(char * param_1)
// Body     : 005b2fc0 - 005b3005


undefined ** find_func(char *param_1)

{
  char *__s1;
  int iVar1;
  undefined **ppuVar2;
  
  __s1 = *(char **)PTR_ex_funcs_00715e00;
  ppuVar2 = (undefined **)PTR_ex_funcs_00715e00;
  while( true ) {
    if (__s1 == (char *)0x0) {
      return (undefined **)0x0;
    }
    iVar1 = strcmp(__s1,param_1);
    if (iVar1 == 0) break;
    __s1 = ppuVar2[3];
    ppuVar2 = ppuVar2 + 3;
  }
  return ppuVar2;
}


