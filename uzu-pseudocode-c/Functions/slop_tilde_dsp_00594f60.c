// Function : slop_tilde_dsp
// Namespace: 
// Entry    : 00594f60
// Prototype: undefined slop_tilde_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long * param_10)
// Body     : 00594f60 - 00594fed


void slop_tilde_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9,long *param_10)

{
  long lVar1;
  float fVar2;
  double dVar3;
  
  lVar1 = *param_10;
  dVar3 = DAT_0065d508 / (double)*(float *)(lVar1 + 0x10);
  fVar2 = (float)dVar3;
  *(float *)(param_9 + 0x34) = fVar2;
  dsp_add((ulong)(uint)fVar2,dVar3,param_3,param_4,param_5,param_6,param_7,param_8,
          slop_tilde_perform,9,param_9,*(undefined8 *)(lVar1 + 8),*(undefined8 *)(param_10[1] + 8),
          *(undefined8 *)(param_10[2] + 8),*(undefined8 *)(param_10[3] + 8));
  return;
}


