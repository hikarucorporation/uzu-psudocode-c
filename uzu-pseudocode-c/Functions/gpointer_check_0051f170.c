// Function : gpointer_check
// Namespace: 
// Entry    : 0051f170
// Prototype: bool gpointer_check(long * param_1, int param_2)
// Body     : 0051f170 - 0051f1ac


bool gpointer_check(long *param_1,int param_2)

{
  long *plVar1;
  int *piVar2;
  bool bVar3;
  
  plVar1 = (long *)param_1[2];
  bVar3 = false;
  if (plVar1 != (long *)0x0) {
    if ((int)plVar1[1] == 1) {
      if ((param_2 == 0) && (*param_1 == 0)) {
        return false;
      }
      piVar2 = (int *)(*plVar1 + 0x40);
    }
    else {
      if ((int)plVar1[1] != 2) {
        return false;
      }
      piVar2 = (int *)(*plVar1 + 0x18);
    }
    bVar3 = *piVar2 == (int)param_1[1];
  }
  return bVar3;
}


