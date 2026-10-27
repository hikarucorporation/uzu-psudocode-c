// Function : highpass_q
// Namespace: 
// Entry    : 00563310
// Prototype: undefined highpass_q(long param_1)
// Body     : 00563310 - 0056340d


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void highpass_q(long param_1)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  double local_18;
  double local_10;
  
  *(undefined4 *)(param_1 + 0x50) = 0;
  dVar6 = *(double *)(param_1 + 0x80);
  if (DAT_00656ba0 <= dVar6) {
    sincos((*(double *)(param_1 + 0x78) * DAT_00652e70) / (double)*(float *)(param_1 + 0x48),
           &local_10,&local_18);
    local_10 = local_10 / (dVar6 + dVar6);
    dVar6 = local_10 + _DAT_0065ad60;
    local_10 = local_10 + _UNK_0065ad68;
    auVar2._8_8_ = local_18 + local_18;
    auVar2._0_8_ = local_18 + _DAT_005d9000;
    dVar1 = _DAT_005d9000 / local_10;
    *(double *)(param_1 + 0x90) =
         (double)((ulong)(local_18 + _DAT_005d9000) ^ _DAT_00652d10) * dVar1;
    auVar3._8_8_ = local_10;
    auVar3._0_8_ = local_10 + local_10;
    auVar3 = divpd(auVar2,auVar3);
    dVar1 = dVar1 * dVar6;
    dVar4 = auVar3._0_8_;
    uVar5 = auVar3._8_8_;
    dVar6 = dVar4;
  }
  else {
    dVar4 = 0.0;
    uVar5 = 0;
    dVar1 = 0.0;
    dVar6 = _DAT_005d9000;
  }
  *(double *)(param_1 + 0x88) = dVar6;
  *(double *)(param_1 + 0xa8) = dVar1;
  *(double *)(param_1 + 0x98) = dVar4;
  *(undefined8 *)(param_1 + 0xa0) = uVar5;
  return;
}


