// Function : ilog2
// Namespace: 
// Entry    : 004f6410
// Prototype: int ilog2(uint param_1)
// Body     : 004f6410 - 004f642f


int ilog2(uint param_1)

{
  bool bVar1;
  int iVar2;
  
  if ((int)param_1 < 1) {
    return 0;
  }
  iVar2 = -1;
  do {
    iVar2 = iVar2 + 1;
    bVar1 = 1 < param_1;
    param_1 = (int)param_1 >> 1;
  } while (bVar1);
  return iVar2;
}


