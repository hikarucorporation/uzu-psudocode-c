// Function : sys_hostfontsize
// Namespace: 
// Entry    : 005423f0
// Prototype: undefined4 sys_hostfontsize(uint param_1, int param_2)
// Body     : 005423f0 - 00542451


undefined4 sys_hostfontsize(uint param_1,int param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar1 = 2;
  if (param_2 < 2) {
    iVar1 = param_2;
  }
  if ((int)param_1 < 10) {
    lVar2 = 0;
  }
  else {
    lVar2 = 1;
    if (((0xb < param_1) && (lVar2 = 2, 0xf < param_1)) && (lVar2 = 3, 0x17 < param_1)) {
      lVar2 = 5 - (ulong)(param_1 < 0x24);
    }
  }
  iVar3 = 1;
  if (0 < iVar1) {
    iVar3 = iVar1;
  }
  return (&sys_gotfonts)[(ulong)(iVar3 - 1) * 0x12 + lVar2 * 3];
}


