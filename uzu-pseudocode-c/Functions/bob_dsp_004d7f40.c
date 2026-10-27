// Function : bob_dsp
// Namespace: 
// Entry    : 004d7f40
// Prototype: undefined bob_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long * param_10)
// Body     : 004d7f40 - 004d7f93


void bob_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9
            ,long *param_10)

{
  long lVar1;
  double dVar2;
  
  lVar1 = *param_10;
  dVar2 = (double)*(float *)(lVar1 + 0x10);
  *(double *)(param_9 + 0xa0) = dVar2;
  dsp_add(dVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,bob_perform,6,param_9,
          *(undefined8 *)(lVar1 + 8),*(undefined8 *)(param_10[1] + 8),
          *(undefined8 *)(param_10[2] + 8),*(undefined8 *)(param_10[3] + 8));
  return;
}


