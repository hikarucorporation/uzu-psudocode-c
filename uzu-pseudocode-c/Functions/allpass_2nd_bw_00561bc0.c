// Function : allpass_2nd_bw
// Namespace: 
// Entry    : 00561bc0
// Prototype: undefined allpass_2nd_bw(long param_1)
// Body     : 00561bc0 - 00561cf4


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void allpass_2nd_bw(long param_1)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  ulong uVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  *(undefined4 *)(param_1 + 0x58) = 1;
  dVar2 = (*(double *)(param_1 + 0x80) * DAT_00652e70) / (double)*(float *)(param_1 + 0x50);
  dVar4 = *(double *)(param_1 + 0x88);
  uVar7 = SUB84(dVar4,0);
  uVar8 = (undefined4)((ulong)dVar4 >> 0x20);
  if (dVar4 <= DAT_00656ba0) {
    uVar7 = SUB84(DAT_00656ba0,0);
    uVar8 = (undefined4)((ulong)DAT_00656ba0 >> 0x20);
  }
  dVar4 = (double)CONCAT44(uVar8,uVar7) * DAT_0065ac78;
  dVar3 = sin(dVar2);
  dVar4 = sinh((dVar4 * dVar2) / dVar3);
  dVar4 = DAT_005db338 / dVar4;
  if (DAT_00656ba0 <= dVar4) {
    dVar3 = dVar3 / (dVar4 + dVar4);
    dVar6 = cos(dVar2);
    dVar4 = _DAT_005d9000 / (dVar3 + _DAT_005d9000);
    dVar2 = dVar4 * (_DAT_005d9000 - dVar3);
    dVar4 = dVar4 * dVar6 * DAT_0065ac98;
    uVar5 = (ulong)dVar4 ^ _DAT_00652d10;
    dVar3 = (dVar3 + DAT_00651e70) / (dVar3 + _DAT_005d9000);
  }
  else {
    dVar4 = 0.0;
    dVar3 = 0.0;
    uVar5 = 0;
    dVar2 = _DAT_005d9000;
  }
  *(double *)(param_1 + 0xa8) = dVar3;
  *(ulong *)(param_1 + 0xa0) = uVar5;
  auVar1._8_4_ = SUB84(dVar4,0);
  auVar1._0_8_ = dVar2;
  auVar1._12_4_ = (int)((ulong)dVar4 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x90) = auVar1;
  return;
}


