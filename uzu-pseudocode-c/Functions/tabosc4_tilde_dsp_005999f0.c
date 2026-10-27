// Function : tabosc4_tilde_dsp
// Namespace: 
// Entry    : 005999f0
// Prototype: undefined tabosc4_tilde_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long * param_10, undefined8 param_11, int * param_12, char * param_13, undefined8 param_14, undefined8 param_15)
// Body     : 005999f0 - 00599a46


void tabosc4_tilde_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      long param_9,long *param_10,undefined8 param_11,int *param_12,char *param_13,
                      undefined8 param_14,undefined8 param_15)

{
  float fVar1;
  undefined8 uVar2;
  
  fVar1 = DAT_005d9038 / *(float *)(*param_10 + 0x10);
  *(float *)(param_9 + 0x58) = fVar1;
  uVar2 = tabosc4_tilde_set((ulong)(uint)fVar1,param_2,param_3,param_4,param_5,param_6,param_7,
                            param_8,param_9,*(undefined8 **)(param_9 + 0x40),param_11,param_12,
                            param_13,param_14);
  dsp_add(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,tabosc4_tilde_perform,4,
          param_9,*(undefined8 *)((int *)*param_10 + 2),*(undefined8 *)(param_10[1] + 8),
          (long)*(int *)*param_10,param_15);
  return;
}


