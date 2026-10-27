// Function : siglop_dsp
// Namespace: 
// Entry    : 005936d0
// Prototype: long siglop_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10)
// Body     : 005936d0 - 00593740


long siglop_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,undefined8 *param_10)

{
  int *piVar1;
  long lVar2;
  code *pcVar3;
  float fVar4;
  double dVar5;
  
  piVar1 = (int *)*param_10;
  dVar5 = DAT_0065d508 / (double)(float)piVar1[4];
  fVar4 = (float)dVar5;
  *(float *)(param_9 + 0x30) = fVar4;
  *(undefined8 *)(param_9 + 0x38) = 0;
  pcVar3 = siglop_perf_scalar;
  if (1 < *(int *)param_10[1]) {
    pcVar3 = siglop_perf_vector;
  }
  lVar2 = (long)*piVar1;
  dsp_add((ulong)(uint)fVar4,dVar5,param_3,param_4,param_5,param_6,param_7,param_8,pcVar3,5,param_9,
          *(undefined8 *)(piVar1 + 2),*(undefined8 *)((int *)param_10[1] + 2),
          *(undefined8 *)(param_10[2] + 8),lVar2);
  return lVar2;
}


