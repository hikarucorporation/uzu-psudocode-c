// Function : namelist_get
// Namespace: 
// Entry    : 005468e0
// Prototype: long namelist_get(long * param_1, int param_2)
// Body     : 005468e0 - 00546920


long namelist_get(long *param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = param_1 != (long *)0x0;
  if ((0 < param_2) && (param_1 != (long *)0x0)) {
    iVar1 = 1;
    do {
      param_1 = (long *)*param_1;
      bVar2 = param_1 != (long *)0x0;
      if (param_2 <= iVar1) break;
      iVar1 = iVar1 + 1;
    } while (param_1 != (long *)0x0);
  }
  if (bVar2) {
    return param_1[1];
  }
  return 0;
}


