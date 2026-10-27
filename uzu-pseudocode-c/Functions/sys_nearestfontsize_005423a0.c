// Function : sys_nearestfontsize
// Namespace: 
// Entry    : 005423a0
// Prototype: undefined4 sys_nearestfontsize(uint param_1)
// Body     : 005423a0 - 005423ee


undefined4 sys_nearestfontsize(uint param_1)

{
  long lVar1;
  
  if ((int)param_1 < 10) {
    lVar1 = 0;
  }
  else {
    lVar1 = 1;
    if (((0xb < param_1) && (lVar1 = 2, 0xf < param_1)) && (lVar1 = 3, 0x17 < param_1)) {
      return (&sys_fontspec)[(5 - (ulong)(param_1 < 0x24)) * 3];
    }
  }
  return (&sys_fontspec)[lVar1 * 3];
}


