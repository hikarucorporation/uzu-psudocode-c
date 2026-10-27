// Function : sigfiddle_ilog2
// Namespace: 
// Entry    : 004dd0d0
// Prototype: int sigfiddle_ilog2(uint param_1)
// Body     : 004dd0d0 - 004dd0ec


int sigfiddle_ilog2(uint param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = -1;
  if (param_1 != 0) {
    do {
      iVar2 = iVar2 + 1;
      bVar1 = 1 < param_1;
      param_1 = (int)param_1 >> 1;
    } while (bVar1);
  }
  return iVar2;
}


