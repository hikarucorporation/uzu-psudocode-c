// Function : atom_getint
// Namespace: 
// Entry    : 0052ed80
// Prototype: long atom_getint(int * param_1)
// Body     : 0052ed80 - 0052ed8e


long atom_getint(int *param_1)

{
  if (*param_1 == 1) {
    return (long)(float)param_1[2];
  }
  return 0;
}


