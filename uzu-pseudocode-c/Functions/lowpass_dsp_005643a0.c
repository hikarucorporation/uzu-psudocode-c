// Function : lowpass_dsp
// Namespace: 
// Entry    : 005643a0
// Prototype: undefined lowpass_dsp(double param_1, undefined8 param_2, ulong param_3, double param_4, double param_5, double param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10)
// Body     : 005643a0 - 00564540


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void lowpass_dsp(double param_1,undefined8 param_2,ulong param_3,double param_4,double param_5,
                double param_6,undefined8 param_7,undefined8 param_8,long param_9,
                undefined8 *param_10)

{
  uint *puVar1;
  double __x;
  double dVar2;
  double dVar3;
  float fVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  double local_28;
  double local_20;
  
  puVar1 = (uint *)*param_10;
  fVar4 = (float)puVar1[4] * DAT_005d9044;
  dVar3 = (double)(ulong)(uint)fVar4;
  if (fVar4 != *(float *)(param_9 + 0x50)) {
    *(float *)(param_9 + 0x50) = fVar4;
    dVar3 = *(double *)(param_9 + 0x88);
    __x = (*(double *)(param_9 + 0x80) * DAT_00652e70) / (double)fVar4;
    if (*(int *)(param_9 + 0x58) != 0) {
      if (dVar3 <= DAT_00656ba0) {
        dVar3 = DAT_00656ba0;
      }
      dVar5 = DAT_0065ac78 * __x;
      dVar2 = sin(__x);
      dVar3 = sinh((dVar5 * dVar3) / dVar2);
      dVar3 = DAT_005db338 / dVar3;
    }
    if (DAT_00656ba0 <= dVar3) {
      sincos(__x,&local_20,&local_28);
      local_20 = local_20 / (dVar3 + dVar3);
      param_4 = local_20 + _DAT_0065ad60;
      local_20 = local_20 + _UNK_0065ad68;
      auVar6._8_8_ = local_28 + local_28;
      auVar6._0_8_ = _DAT_005d9000 - local_28;
      dVar3 = _DAT_005d9000 / local_20;
      param_5 = local_20 + local_20;
      param_6 = (_DAT_005d9000 - local_28) * dVar3;
      *(double *)(param_9 + 0x98) = param_6;
      auVar7._8_8_ = local_20;
      auVar7._0_8_ = param_5;
      auVar7 = divpd(auVar6,auVar7);
      param_1 = dVar3 * param_4;
      param_3 = auVar7._0_8_;
      uVar8 = auVar7._8_8_;
      dVar3 = (double)param_3;
    }
    else {
      param_3 = 0;
      uVar8 = 0;
      param_1 = 0.0;
      dVar3 = _DAT_005d9000;
    }
    *(double *)(param_9 + 0x90) = dVar3;
    *(double *)(param_9 + 0xb0) = param_1;
    *(ulong *)(param_9 + 0xa0) = param_3;
    *(undefined8 *)(param_9 + 0xa8) = uVar8;
    puVar1 = (uint *)*param_10;
  }
  dsp_add(param_1,dVar3,param_3,param_4,param_5,param_6,param_7,param_8,lowpass_perform,6,param_9,
          (ulong)*puVar1,*(undefined8 *)(puVar1 + 2),*(undefined8 *)(param_10[1] + 8),
          *(undefined8 *)(param_10[2] + 8));
  return;
}


