// Function : phasor_dsp
// Namespace: 
// Entry    : 005989b0
// Prototype: undefined phasor_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10)
// Body     : 005989b0 - 005989e9


void phasor_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,undefined8 *param_10)

{
  int *piVar1;
  float fVar2;
  undefined8 in_stack_00000008;
  
  piVar1 = (int *)*param_10;
  fVar2 = DAT_005d9038 / (float)piVar1[4];
  *(float *)(param_9 + 0x38) = fVar2;
  dsp_add((ulong)(uint)fVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,phasor_perform,
          4,param_9,*(undefined8 *)(piVar1 + 2),*(undefined8 *)(param_10[1] + 8),(long)*piVar1,
          in_stack_00000008);
  return;
}


