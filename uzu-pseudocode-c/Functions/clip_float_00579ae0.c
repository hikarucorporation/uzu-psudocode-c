// Function : clip_float
// Namespace: 
// Entry    : 00579ae0
// Prototype: undefined clip_float(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 00579ae0 - 00579b05


void clip_float(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  
  fVar1 = (float)param_1;
  *(float *)(param_9 + 0x30) = fVar1;
  fVar2 = *(float *)(param_9 + 0x34);
  uVar3 = 0;
  if (fVar2 <= fVar1) {
    fVar2 = fVar1;
    if (*(float *)(param_9 + 0x38) <= fVar1) {
      fVar2 = *(float *)(param_9 + 0x38);
    }
    uVar3 = (int)((ulong)param_1 >> 0x20);
  }
  outlet_float(CONCAT44(uVar3,fVar2),CONCAT44(uVar3,fVar2),param_3,param_4,param_5,param_6,param_7,
               param_8,*(long **)(param_9 + 0x18));
  return;
}


