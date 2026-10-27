// Function : resonant2_dsp
// Namespace: 
// Entry    : 00566310
// Prototype: undefined resonant2_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10)
// Body     : 00566310 - 0056636a


void resonant2_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 *param_10)

{
  uint *puVar1;
  float fVar2;
  
  puVar1 = (uint *)*param_10;
  fVar2 = (float)puVar1[4] * DAT_005d9044;
  *(float *)(param_9 + 0x58) = fVar2;
  dsp_add((ulong)(uint)fVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
          resonant2_perform,7,param_9,(ulong)*puVar1,*(undefined8 *)(puVar1 + 2),
          *(undefined8 *)(param_10[1] + 8),*(undefined8 *)(param_10[2] + 8));
  return;
}


