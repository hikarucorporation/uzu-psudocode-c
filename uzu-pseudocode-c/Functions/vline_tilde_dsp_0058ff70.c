// Function : vline_tilde_dsp
// Namespace: 
// Entry    : 0058ff70
// Prototype: undefined vline_tilde_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long * param_10)
// Body     : 0058ff70 - 0058ffcf


void vline_tilde_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9,long *param_10)

{
  float fVar1;
  undefined8 in_RAX;
  undefined8 in_R9;
  
  dsp_add(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,vline_tilde_perform,3,
          param_9,*(undefined8 *)((int *)*param_10 + 2),(long)*(int *)*param_10,in_R9,in_RAX);
  fVar1 = *(float *)(*param_10 + 0x10);
  *(double *)(param_9 + 0x58) = DAT_00651e50 * (double)fVar1;
  *(double *)(param_9 + 0x60) = DAT_006544a0 / (double)fVar1;
  return;
}


