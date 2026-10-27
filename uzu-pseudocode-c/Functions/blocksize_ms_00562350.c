// Function : blocksize_ms
// Namespace: 
// Entry    : 00562350
// Prototype: undefined blocksize_ms(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 00562350 - 00562390


void blocksize_ms(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9)

{
  double dVar1;
  
  if (*(int *)(param_9 + 0x48) != 1) {
    *(undefined4 *)(param_9 + 0x48) = 1;
    if (*(float *)(param_9 + 0x38) != 0.0) {
      dVar1 = ((double)*(float *)(param_9 + 0x38) * DAT_006544a0) /
              (double)*(float *)(param_9 + 0x40);
      outlet_float(CONCAT44((int)((ulong)dVar1 >> 0x20),(float)dVar1),
                   (double)*(float *)(param_9 + 0x40),param_3,param_4,param_5,param_6,param_7,
                   param_8,*(long **)(param_9 + 0x18));
      return;
    }
  }
  return;
}


