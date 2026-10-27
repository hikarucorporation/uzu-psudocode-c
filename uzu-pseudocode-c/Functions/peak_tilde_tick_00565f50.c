// Function : peak_tilde_tick
// Namespace: 
// Entry    : 00565f50
// Prototype: undefined peak_tilde_tick(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 00565f50 - 00565fbf


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void peak_tilde_tick(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9)

{
  long *plVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  undefined4 uVar5;
  
  plVar1 = *(long **)(param_9 + 0x30);
  fVar4 = *(float *)(param_9 + 0x50);
  uVar5 = 0;
  if (*(int *)(param_9 + 0x60) == 0) {
    outlet_float((ulong)(uint)fVar4,(ulong)(uint)fVar4,param_3,param_4,param_5,param_6,param_7,
                 param_8,plVar1);
    return;
  }
  if (0.0 < fVar4) {
    if (fVar4 == DAT_005d9038) {
      outlet_float(0,(ulong)(uint)fVar4,param_3,param_4,param_5,param_6,param_7,param_8,plVar1);
      return;
    }
    dVar3 = log((double)fVar4);
    fVar2 = (float)(dVar3 * _DAT_0065aec8);
    if (fVar2 <= DAT_0065aec4) {
      fVar2 = DAT_0065aec4;
    }
    outlet_float(CONCAT44((int)((ulong)(dVar3 * _DAT_0065aec8) >> 0x20),fVar2),CONCAT44(uVar5,fVar4)
                 ,param_3,param_4,param_5,param_6,param_7,param_8,plVar1);
    return;
  }
  outlet_float((ulong)(uint)DAT_0065aec4,(ulong)(uint)fVar4,param_3,param_4,param_5,param_6,param_7,
               param_8,plVar1);
  return;
}


