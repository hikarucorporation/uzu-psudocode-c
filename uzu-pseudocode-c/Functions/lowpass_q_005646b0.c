// Function : lowpass_q
// Namespace: 
// Entry    : 005646b0
// Prototype: undefined lowpass_q(long param_1)
// Body     : 005646b0 - 005647a8


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void lowpass_q(long param_1)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  double local_18;
  double local_10;
  
  *(undefined4 *)(param_1 + 0x58) = 0;
  dVar6 = *(double *)(param_1 + 0x88);
  if (DAT_00656ba0 <= dVar6) {
    sincos((*(double *)(param_1 + 0x80) * DAT_00652e70) / (double)*(float *)(param_1 + 0x50),
           &local_10,&local_18);
    local_10 = local_10 / (dVar6 + dVar6);
    dVar6 = local_10 + _DAT_0065ad60;
    local_10 = local_10 + _UNK_0065ad68;
    auVar2._8_8_ = local_18 + local_18;
    auVar2._0_8_ = _DAT_005d9000 - local_18;
    dVar1 = _DAT_005d9000 / local_10;
    *(double *)(param_1 + 0x98) = (_DAT_005d9000 - local_18) * dVar1;
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
  *(double *)(param_1 + 0x90) = dVar6;
  *(double *)(param_1 + 0xb0) = dVar1;
  *(double *)(param_1 + 0xa0) = dVar4;
  *(undefined8 *)(param_1 + 0xa8) = uVar5;
  return;
}


