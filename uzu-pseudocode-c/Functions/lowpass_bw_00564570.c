// Function : lowpass_bw
// Namespace: 
// Entry    : 00564570
// Prototype: undefined lowpass_bw(long param_1)
// Body     : 00564570 - 005646a1


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void lowpass_bw(long param_1)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  *(undefined4 *)(param_1 + 0x58) = 1;
  dVar1 = (*(double *)(param_1 + 0x80) * DAT_00652e70) / (double)*(float *)(param_1 + 0x50);
  dVar4 = *(double *)(param_1 + 0x88);
  if (*(double *)(param_1 + 0x88) <= DAT_00656ba0) {
    dVar4 = DAT_00656ba0;
  }
  dVar4 = dVar4 * DAT_0065ac78;
  dVar2 = sin(dVar1);
  dVar4 = sinh((dVar4 * dVar1) / dVar2);
  dVar4 = DAT_005db338 / dVar4;
  if (DAT_00656ba0 <= dVar4) {
    dVar2 = dVar2 / (dVar4 + dVar4);
    dVar4 = cos(dVar1);
    dVar1 = dVar2 + _DAT_0065ad60;
    dVar2 = dVar2 + _UNK_0065ad68;
    auVar6._8_8_ = dVar4 + dVar4;
    auVar6._0_8_ = _DAT_005d9000 - dVar4;
    dVar5 = _DAT_005d9000 / dVar2;
    *(double *)(param_1 + 0x98) = (_DAT_005d9000 - dVar4) * dVar5;
    auVar7._8_8_ = dVar2;
    auVar7._0_8_ = dVar2 + dVar2;
    auVar7 = divpd(auVar6,auVar7);
    dVar5 = dVar5 * dVar1;
    dVar1 = auVar7._0_8_;
    uVar3 = auVar7._8_8_;
    dVar4 = dVar1;
  }
  else {
    dVar1 = 0.0;
    uVar3 = 0;
    dVar5 = 0.0;
    dVar4 = _DAT_005d9000;
  }
  *(double *)(param_1 + 0x90) = dVar4;
  *(double *)(param_1 + 0xb0) = dVar5;
  *(double *)(param_1 + 0xa0) = dVar1;
  *(undefined8 *)(param_1 + 0xa8) = uVar3;
  return;
}


