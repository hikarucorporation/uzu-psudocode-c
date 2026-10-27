// Function : adsr_float
// Namespace: 
// Entry    : 0056f200
// Prototype: undefined adsr_float(float param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 0056f200 - 0056f248


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void adsr_float(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9)

{
  float fVar1;
  
  fVar1 = param_1 * _DAT_0065b5ac;
  *(float *)(param_9 + 0x70) = fVar1;
  if (fVar1 != 0.0) {
    *(float *)(param_9 + 0x74) = fVar1;
    if (*(int *)(param_9 + 0xdc) == 0) {
      *(undefined4 *)(param_9 + 0xdc) = 1;
      outlet_float((ulong)DAT_005d9038,0,param_3,param_4,param_5,param_6,param_7,param_8,
                   *(long **)(param_9 + 0x68));
      return;
    }
    *(undefined4 *)(param_9 + 0x30) = 1;
  }
  return;
}


