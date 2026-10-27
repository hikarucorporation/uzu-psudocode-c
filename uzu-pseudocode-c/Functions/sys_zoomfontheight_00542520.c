// Function : sys_zoomfontheight
// Namespace: 
// Entry    : 00542520
// Prototype: int sys_zoomfontheight(uint param_1, int param_2, int param_3)
// Body     : 00542520 - 005425de


int sys_zoomfontheight(uint param_1,int param_2,int param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar1 = 2;
  if (param_2 < 2) {
    iVar1 = param_2;
  }
  iVar3 = 1;
  if (0 < iVar1) {
    iVar3 = iVar1;
  }
  if (param_3 == 0) {
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
    if (0 < (int)(&DAT_00718f38)[(ulong)(iVar3 - 1) * 0x12 + lVar2 * 3]) {
      iVar1 = (&DAT_00718f38)[(ulong)(iVar3 - 1) * 0x12 + lVar2 * 3];
    }
    return iVar1;
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
  iVar1 = 1;
  if (0 < iVar3 * (&DAT_00657c18)[lVar2 * 3]) {
    iVar1 = iVar3 * (&DAT_00657c18)[lVar2 * 3];
  }
  return iVar1;
}


