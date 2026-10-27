// Function : blocksize_tick
// Namespace: 
// Entry    : 00562460
// Prototype: undefined blocksize_tick(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 00562460 - 00562512


void blocksize_tick(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9)

{
  float fVar1;
  float fVar2;
  int iVar3;
  ulong uVar4;
  double dVar5;
  ulong uVar6;
  
  fVar1 = *(float *)(param_9 + 0x38);
  uVar4 = (ulong)(uint)fVar1;
  fVar2 = *(float *)(param_9 + 0x3c);
  if (fVar2 == fVar1) {
    fVar2 = *(float *)(param_9 + 0x44);
    uVar6 = (ulong)(uint)fVar2;
    if ((fVar2 == *(float *)(param_9 + 0x40)) || (iVar3 = *(int *)(param_9 + 0x48), iVar3 == 0)) {
      return;
    }
    *(float *)(param_9 + 0x40) = fVar2;
    if (iVar3 != 2) {
      if (iVar3 == 1) {
        dVar5 = ((double)fVar1 * DAT_006544a0) / (double)fVar2;
        outlet_float(CONCAT44((int)((ulong)dVar5 >> 0x20),(float)dVar5),(double)fVar2,param_3,
                     param_4,param_5,param_6,param_7,param_8,*(long **)(param_9 + 0x18));
        return;
      }
      goto LAB_0056250a;
    }
    uVar4 = (ulong)(uint)(fVar2 / fVar1);
  }
  else {
    *(float *)(param_9 + 0x38) = fVar2;
    if (*(int *)(param_9 + 0x48) == 2) {
      outlet_float((ulong)(uint)(*(float *)(param_9 + 0x40) / fVar2),(ulong)(uint)fVar2,param_3,
                   param_4,param_5,param_6,param_7,param_8,*(long **)(param_9 + 0x18));
      return;
    }
    uVar4 = (ulong)(uint)fVar2;
    if (*(int *)(param_9 + 0x48) == 1) {
      dVar5 = ((double)fVar2 * DAT_006544a0) / (double)*(float *)(param_9 + 0x40);
      outlet_float((ulong)(uint)(float)dVar5,dVar5,param_3,param_4,param_5,param_6,param_7,param_8,
                   *(long **)(param_9 + 0x18));
      return;
    }
  }
  uVar6 = uVar4;
LAB_0056250a:
  outlet_float(uVar4,uVar6,param_3,param_4,param_5,param_6,param_7,param_8,
               *(long **)(param_9 + 0x18));
  return;
}


