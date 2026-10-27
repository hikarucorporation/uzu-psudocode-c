// Function : blocksize_hz
// Namespace: 
// Entry    : 005623a0
// Prototype: undefined blocksize_hz(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 005623a0 - 005623cc


void blocksize_hz(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9)

{
  float fVar1;
  
  if (*(int *)(param_9 + 0x48) != 2) {
    *(undefined4 *)(param_9 + 0x48) = 2;
    fVar1 = *(float *)(param_9 + 0x38);
    if (fVar1 != 0.0) {
      outlet_float((ulong)(uint)(*(float *)(param_9 + 0x40) / fVar1),(ulong)(uint)fVar1,param_3,
                   param_4,param_5,param_6,param_7,param_8,*(long **)(param_9 + 0x18));
      return;
    }
  }
  return;
}


