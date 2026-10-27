// Function : freqshift_dsp
// Namespace: 
// Entry    : 005626e0
// Prototype: undefined8 freqshift_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10)
// Body     : 005626e0 - 0056272a


undefined8
freqshift_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9,undefined8 *param_10)

{
  uint uVar1;
  uint *puVar2;
  undefined8 in_RAX;
  
  puVar2 = (uint *)*param_10;
  uVar1 = puVar2[4];
  *(uint *)(param_9 + 0x88) = uVar1;
  dsp_add((ulong)uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,freqshift_perform,6,
          param_9,(ulong)*puVar2,*(undefined8 *)(puVar2 + 2),*(undefined8 *)(param_10[1] + 8),
          *(undefined8 *)(param_10[2] + 8));
  return in_RAX;
}


