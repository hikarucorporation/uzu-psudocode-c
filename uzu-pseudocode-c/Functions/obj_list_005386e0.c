// Function : obj_list
// Namespace: 
// Entry    : 005386e0
// Prototype: undefined obj_list(long * param_1, undefined8 param_2, int param_3, int * param_4)
// Body     : 005386e0 - 005387ce


void obj_list(long *param_1,undefined8 param_2,int param_3,int *param_4)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  if (param_3 == 0) {
    pd_emptylist(param_1);
    return;
  }
  plVar1 = (long *)param_1[4];
  if ((plVar1 != (long *)0x0) && (param_3 != 1)) {
    iVar3 = param_3 + -2;
    piVar2 = param_4 + 6;
    do {
      if (piVar2[-2] == 1) {
        pd_float(plVar1);
      }
      else if (piVar2[-2] == 3) {
        pd_pointer(plVar1);
      }
      else {
        pd_symbol(plVar1);
      }
      plVar1 = (long *)plVar1[1];
      bVar4 = iVar3 != 0;
      iVar3 = iVar3 + -1;
    } while ((plVar1 != (long *)0x0) && (piVar2 = piVar2 + 4, bVar4));
  }
  if (*param_4 == 1) {
    pd_float(param_1);
    return;
  }
  if (*param_4 == 3) {
    pd_pointer(param_1);
    return;
  }
  pd_symbol(param_1);
  return;
}


