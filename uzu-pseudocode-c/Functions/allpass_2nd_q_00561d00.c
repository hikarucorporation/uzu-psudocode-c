// Function : allpass_2nd_q
// Namespace: 
// Entry    : 00561d00
// Prototype: undefined allpass_2nd_q(long param_1)
// Body     : 00561d00 - 00561def


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void allpass_2nd_q(long param_1)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  ulong uVar5;
  double local_18;
  double local_10;
  
  *(undefined4 *)(param_1 + 0x58) = 0;
  dVar1 = *(double *)(param_1 + 0x88);
  if (DAT_00656ba0 <= dVar1) {
    sincos((*(double *)(param_1 + 0x80) * DAT_00652e70) / (double)*(float *)(param_1 + 0x50),
           &local_10,&local_18);
    local_10 = local_10 / (dVar1 + dVar1);
    dVar1 = _DAT_005d9000 / (local_10 + _DAT_005d9000);
    dVar3 = dVar1 * (_DAT_005d9000 - local_10);
    dVar1 = dVar1 * local_18 * DAT_0065ac98;
    uVar5 = (ulong)dVar1 ^ _DAT_00652d10;
    dVar4 = (local_10 + DAT_00651e70) / (local_10 + _DAT_005d9000);
  }
  else {
    dVar1 = 0.0;
    dVar4 = 0.0;
    uVar5 = 0;
    dVar3 = _DAT_005d9000;
  }
  *(double *)(param_1 + 0xa8) = dVar4;
  *(ulong *)(param_1 + 0xa0) = uVar5;
  auVar2._8_4_ = SUB84(dVar1,0);
  auVar2._0_8_ = dVar3;
  auVar2._12_4_ = (int)((ulong)dVar1 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x90) = auVar2;
  return;
}


