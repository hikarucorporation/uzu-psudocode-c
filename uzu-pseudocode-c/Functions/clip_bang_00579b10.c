// Function : clip_bang
// Namespace: 
// Entry    : 00579b10
// Prototype: undefined clip_bang(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 00579b10 - 00579b32


void clip_bang(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              long param_9)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_9 + 0x30);
  fVar1 = *(float *)(param_9 + 0x34);
  if (fVar1 <= fVar2) {
    fVar1 = fVar2;
    if (*(float *)(param_9 + 0x38) <= fVar2) {
      fVar1 = *(float *)(param_9 + 0x38);
    }
    fVar2 = fVar1;
  }
  outlet_float((ulong)(uint)fVar1,(ulong)(uint)fVar2,param_3,param_4,param_5,param_6,param_7,param_8
               ,*(long **)(param_9 + 0x18));
  return;
}


