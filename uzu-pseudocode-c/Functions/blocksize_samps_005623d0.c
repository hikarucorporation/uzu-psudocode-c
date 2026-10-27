// Function : blocksize_samps
// Namespace: 
// Entry    : 005623d0
// Prototype: undefined blocksize_samps(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 005623d0 - 005623f3


void blocksize_samps(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9)

{
  if (*(int *)(param_9 + 0x48) != 0) {
    *(undefined4 *)(param_9 + 0x48) = 0;
    if (*(float *)(param_9 + 0x38) != 0.0) {
      outlet_float((ulong)(uint)*(float *)(param_9 + 0x38),0,param_3,param_4,param_5,param_6,param_7
                   ,param_8,*(long **)(param_9 + 0x18));
      return;
    }
  }
  return;
}


