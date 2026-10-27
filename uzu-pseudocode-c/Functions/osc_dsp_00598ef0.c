// Function : osc_dsp
// Namespace: 
// Entry    : 00598ef0
// Prototype: undefined osc_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10)
// Body     : 00598ef0 - 00598f53


void osc_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9
            ,undefined8 *param_10)

{
  float fVar1;
  int *piVar2;
  code *pcVar3;
  float fVar4;
  undefined8 in_stack_00000008;
  
  piVar2 = (int *)*param_10;
  fVar1 = (float)piVar2[4];
  fVar4 = DAT_0065da04 / fVar1;
  *(float *)(param_9 + 0x38) = fVar4;
  if (*(int *)PTR_pd_compatibilitylevel_00715a40 < 0x37) {
    fVar4 = DAT_0065da00 / fVar1;
    *(float *)(param_9 + 0x38) = fVar4;
    pcVar3 = osc_perform_old;
  }
  else {
    pcVar3 = osc_perform;
  }
  dsp_add((ulong)(uint)fVar1,(ulong)(uint)fVar4,param_3,param_4,param_5,param_6,param_7,param_8,
          pcVar3,4,param_9,*(undefined8 *)(piVar2 + 2),*(undefined8 *)(param_10[1] + 8),
          (long)*piVar2,in_stack_00000008);
  return;
}


