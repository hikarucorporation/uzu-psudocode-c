// Function : namelist_free
// Namespace: 
// Entry    : 00546890
// Prototype: undefined namelist_free(long * param_1)
// Body     : 00546890 - 005468d5


void namelist_free(long *param_1)

{
  long *plVar1;
  char *__s;
  
  if (param_1 != (long *)0x0) {
    do {
      plVar1 = (long *)*param_1;
      __s = (char *)param_1[1];
      strlen(__s);
      freebytes(__s);
      freebytes(param_1);
      param_1 = plVar1;
    } while (plVar1 != (long *)0x0);
  }
  return;
}


