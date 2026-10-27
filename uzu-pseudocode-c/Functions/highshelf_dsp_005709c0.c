// Function : highshelf_dsp
// Namespace: 
// Entry    : 005709c0
// Prototype: undefined highshelf_dsp(undefined8 param_1, double param_2, double param_3, double param_4, double param_5, double param_6, double param_7, double param_8, long param_9, undefined8 * param_10)
// Body     : 005709c0 - 00570b8e


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void highshelf_dsp(undefined8 param_1,double param_2,double param_3,double param_4,double param_5,
                  double param_6,double param_7,double param_8,long param_9,undefined8 *param_10)

{
  double dVar1;
  uint *puVar2;
  float fVar3;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  double dVar4;
  double dVar5;
  double dVar6;
  double local_38;
  double local_30;
  undefined1 local_28 [16];
  
  puVar2 = (uint *)*param_10;
  fVar3 = (float)puVar2[4] * DAT_005d9044;
  dVar1 = (double)(ulong)(uint)fVar3;
  if (fVar3 != *(float *)(param_9 + 0x58)) {
    *(float *)(param_9 + 0x58) = fVar3;
    dVar1 = *(double *)(param_9 + 0x80);
    dVar4 = exp2(*(double *)(param_9 + 0x90) * _DAT_0065b638);
    local_28._8_4_ = extraout_XMM0_Dc;
    local_28._0_8_ = dVar4;
    local_28._12_4_ = extraout_XMM0_Dd;
    sincos((dVar1 * DAT_00652e70) / (double)fVar3,&local_30,&local_38);
    dVar6 = (double)local_28._0_8_ + _DAT_005d9000;
    dVar5 = DAT_00651e70 + (double)local_28._0_8_;
    param_2 = dVar6 - dVar5 * local_38;
    local_30 = local_30 *
               SQRT((double)local_28._0_8_ + (double)local_28._0_8_ +
                    (_DAT_005d9000 / *(double *)(param_9 + 0x88) + DAT_00651e70) *
                    ((double)local_28._0_8_ * (double)local_28._0_8_ + _DAT_005d9000));
    param_5 = local_30 + param_2;
    dVar4 = dVar5 * local_38 + dVar6;
    param_7 = DAT_0065b138 * (double)local_28._0_8_;
    dVar1 = _DAT_005d9000 / param_5;
    param_8 = (double)local_28._0_8_ * (local_30 + dVar4) * dVar1;
    *(double *)(param_9 + 0x98) = param_8;
    *(double *)(param_9 + 0xa0) = param_7 * (local_38 * dVar6 + dVar5) * dVar1;
    param_4 = dVar4 - local_30;
    dVar4 = DAT_0065ac98 * (dVar5 - local_38 * dVar6);
    param_6 = (double)local_28._0_8_ * param_4 * dVar1;
    *(double *)(param_9 + 0xa8) = param_6;
    *(double *)(param_9 + 0xb0) = dVar4 * dVar1;
    param_3 = (local_30 - param_2) / param_5;
    *(double *)(param_9 + 0xb8) = param_3;
  }
  dsp_add(dVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,highshelf_perform,7,param_9,
          (ulong)*puVar2,*(undefined8 *)(puVar2 + 2),*(undefined8 *)(param_10[1] + 8),
          *(undefined8 *)(param_10[2] + 8));
  return;
}


