// Function : threshold_tilde_dsp
// Namespace: 
// Entry    : 0058ee30
// Prototype: undefined threshold_tilde_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10)
// Body     : 0058ee30 - 0058ee71


void threshold_tilde_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8
                        ,long param_9,undefined8 *param_10)

{
  float fVar1;
  int *piVar2;
  undefined8 in_R9;
  float fVar3;
  double dVar4;
  undefined8 in_stack_00000008;
  
  piVar2 = (int *)*param_10;
  fVar1 = (float)piVar2[4];
  dVar4 = ((double)*piVar2 * DAT_006544a0) / (double)fVar1;
  fVar3 = (float)dVar4;
  *(float *)(param_9 + 0x5c) = fVar3;
  dsp_add(CONCAT44((int)((ulong)dVar4 >> 0x20),fVar3),(double)fVar1,param_3,param_4,param_5,param_6,
          param_7,param_8,threshold_tilde_perform,3,*(undefined8 *)(piVar2 + 2),param_9,
          (long)*piVar2,in_R9,in_stack_00000008);
  return;
}


