// Function : line_tilde_dsp
// Namespace: 
// Entry    : 0058f720
// Prototype: undefined line_tilde_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10)
// Body     : 0058f720 - 0058f79a


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void line_tilde_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9,undefined8 *param_10)

{
  int *piVar1;
  undefined8 in_RAX;
  code *pcVar2;
  ulong uVar3;
  undefined8 in_R9;
  
  uVar3 = (ulong)*(int *)*param_10;
  pcVar2 = line_tilde_perform;
  if ((uVar3 & 7) == 0) {
    pcVar2 = line_tilde_perf8;
  }
  dsp_add(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,pcVar2,3,param_9,
          *(undefined8 *)((int *)*param_10 + 2),uVar3,in_R9,in_RAX);
  piVar1 = (int *)*param_10;
  *(float *)(param_9 + 0x40) = (float)(_DAT_005d9000 / (double)*piVar1);
  *(float *)(param_9 + 0x44) = (float)piVar1[4] / (float)(*piVar1 * 1000);
  return;
}


