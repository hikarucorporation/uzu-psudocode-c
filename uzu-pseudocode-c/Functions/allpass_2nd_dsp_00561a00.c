// Function : allpass_2nd_dsp
// Namespace: 
// Entry    : 00561a00
// Prototype: undefined allpass_2nd_dsp(double param_1, undefined8 param_2, double param_3, double param_4, double param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10)
// Body     : 00561a00 - 00561b93


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void allpass_2nd_dsp(double param_1,undefined8 param_2,double param_3,double param_4,double param_5,
                    undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
                    undefined8 *param_10)

{
  undefined1 auVar1 [16];
  double dVar2;
  uint *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  double local_28;
  double local_20;
  
  puVar3 = (uint *)*param_10;
  fVar7 = (float)puVar3[4] * DAT_005d9044;
  dVar6 = (double)(ulong)(uint)fVar7;
  if (fVar7 != *(float *)(param_9 + 0x50)) {
    *(float *)(param_9 + 0x50) = fVar7;
    dVar6 = *(double *)(param_9 + 0x88);
    dVar4 = (*(double *)(param_9 + 0x80) * DAT_00652e70) / (double)fVar7;
    if (*(int *)(param_9 + 0x58) != 0) {
      if (dVar6 <= DAT_00656ba0) {
        dVar6 = DAT_00656ba0;
      }
      dVar2 = DAT_0065ac78 * dVar4;
      dVar5 = sin(dVar4);
      dVar6 = sinh((dVar2 * dVar6) / dVar5);
      dVar6 = DAT_005db338 / dVar6;
    }
    if (DAT_00656ba0 <= dVar6) {
      sincos(dVar4,&local_20,&local_28);
      local_20 = local_20 / (dVar6 + dVar6);
      param_4 = local_20 + _DAT_005d9000;
      param_5 = _DAT_005d9000 - local_20;
      dVar6 = (_DAT_005d9000 / param_4) * param_5;
      dVar4 = (_DAT_005d9000 / param_4) * local_28 * DAT_0065ac98;
      param_3 = (double)((ulong)dVar4 ^ _DAT_00652d10);
      param_1 = (local_20 + DAT_00651e70) / param_4;
    }
    else {
      dVar4 = 0.0;
      param_1 = 0.0;
      param_3 = 0.0;
      dVar6 = _DAT_005d9000;
    }
    *(double *)(param_9 + 0xa8) = param_1;
    *(double *)(param_9 + 0xa0) = param_3;
    auVar1._8_4_ = SUB84(dVar4,0);
    auVar1._0_8_ = dVar6;
    auVar1._12_4_ = (int)((ulong)dVar4 >> 0x20);
    *(undefined1 (*) [16])(param_9 + 0x90) = auVar1;
    puVar3 = (uint *)*param_10;
  }
  dsp_add(param_1,dVar6,param_3,param_4,param_5,param_6,param_7,param_8,allpass_2nd_perform,6,
          param_9,(ulong)*puVar3,*(undefined8 *)(puVar3 + 2),*(undefined8 *)(param_10[1] + 8),
          *(undefined8 *)(param_10[2] + 8));
  return;
}


