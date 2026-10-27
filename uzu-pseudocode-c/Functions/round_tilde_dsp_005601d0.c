// Function : round_tilde_dsp
// Namespace: 
// Entry    : 005601d0
// Prototype: undefined8 round_tilde_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 * param_10)
// Body     : 005601d0 - 00560204


undefined8
round_tilde_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined8 *param_10)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  
  uVar1 = CONCAT44((int)((ulong)in_RAX >> 0x20),*(undefined4 *)*param_10);
  dsp_add(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,round_tilde_perform,5,
          param_9,*(undefined8 *)((undefined4 *)*param_10 + 2),*(undefined8 *)(param_10[1] + 8),
          *(undefined8 *)(param_10[2] + 8),uVar1);
  return uVar1;
}


