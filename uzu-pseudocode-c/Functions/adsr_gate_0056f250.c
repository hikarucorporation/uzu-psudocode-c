// Function : adsr_gate
// Namespace: 
// Entry    : 0056f250
// Prototype: undefined adsr_gate(float param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 0056f250 - 0056f290


void adsr_gate(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              long param_9)

{
  *(float *)(param_9 + 0x70) = param_1;
  if (param_1 != 0.0) {
    *(float *)(param_9 + 0x74) = param_1;
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


