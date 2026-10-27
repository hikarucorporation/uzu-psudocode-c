// Function : atom_getfloat
// Namespace: 
// Entry    : 0052ed70
// Prototype: int atom_getfloat(int * param_1)
// Body     : 0052ed70 - 0052ed7d


int atom_getfloat(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*param_1 == 1) {
    iVar1 = param_1[2];
  }
  return iVar1;
}


