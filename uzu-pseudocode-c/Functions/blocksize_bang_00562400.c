// Function : blocksize_bang
// Namespace: 
// Entry    : 00562400
// Prototype: undefined blocksize_bang(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 00562400 - 00562455


void blocksize_bang(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9)

{
  float fVar1;
  ulong uVar2;
  double dVar3;
  ulong uVar4;
  
  fVar1 = *(float *)(param_9 + 0x38);
  uVar2 = (ulong)(uint)fVar1;
  if (fVar1 == 0.0) {
    return;
  }
  if (*(int *)(param_9 + 0x48) == 2) {
    uVar2 = (ulong)(uint)(*(float *)(param_9 + 0x40) / fVar1);
    uVar4 = uVar2;
  }
  else {
    uVar4 = 0;
    if (*(int *)(param_9 + 0x48) == 1) {
      dVar3 = ((double)fVar1 * DAT_006544a0) / (double)*(float *)(param_9 + 0x40);
      outlet_float(CONCAT44((int)((ulong)dVar3 >> 0x20),(float)dVar3),
                   (double)*(float *)(param_9 + 0x40),param_3,param_4,param_5,param_6,param_7,
                   param_8,*(long **)(param_9 + 0x18));
      return;
    }
  }
  outlet_float(uVar2,uVar4,param_3,param_4,param_5,param_6,param_7,param_8,
               *(long **)(param_9 + 0x18));
  return;
}


