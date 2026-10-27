// Function : sys_fontwidth
// Namespace: 
// Entry    : 005425e0
// Prototype: int sys_fontwidth(uint param_1)
// Body     : 005425e0 - 0054262c


int sys_fontwidth(uint param_1)

{
  int iVar1;
  long lVar2;
  
  if ((int)param_1 < 10) {
    lVar2 = 0;
  }
  else {
    lVar2 = 1;
    if (((0xb < param_1) && (lVar2 = 2, 0xf < param_1)) && (lVar2 = 3, 0x17 < param_1)) {
      lVar2 = 5 - (ulong)(param_1 < 0x24);
    }
  }
  iVar1 = 1;
  if (0 < (int)(&DAT_00718f34)[lVar2 * 3]) {
    iVar1 = (&DAT_00718f34)[lVar2 * 3];
  }
  return iVar1;
}


