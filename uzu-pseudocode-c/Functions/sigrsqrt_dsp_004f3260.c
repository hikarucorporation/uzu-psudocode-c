// Function : sigrsqrt_dsp
// Namespace: 
// Entry    : 004f3260
// Prototype: undefined sigrsqrt_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, long * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14, undefined8 param_15)
// Body     : 004f3260 - 004f32b5


void sigrsqrt_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,long *param_10,undefined8 param_11,undefined8 param_12,
                 char *param_13,undefined8 param_14,undefined8 param_15)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  uVar3 = signal_setmultiout(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                             param_10 + 1,(ulong)*(uint *)(*param_10 + 0x14),param_11,param_12,
                             param_13,param_14);
  piVar1 = (int *)*param_10;
  pcVar2 = sigrsqrt_perform;
  if (*(int *)PTR_pd_compatibilitylevel_00715a40 < 0x37) {
    pcVar2 = sigrsqrt_perform_quick;
  }
  dsp_add(uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,pcVar2,3,
          *(undefined8 *)(piVar1 + 2),*(undefined8 *)(param_10[1] + 8),
          (long)piVar1[5] * (long)*piVar1,param_14,param_15);
  return;
}


