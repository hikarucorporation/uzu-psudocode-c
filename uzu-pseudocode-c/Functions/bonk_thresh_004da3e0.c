// Function : bonk_thresh
// Namespace: 
// Entry    : 004da3e0
// Prototype: undefined bonk_thresh(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 004da3e0 - 004da44c


void bonk_thresh(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = (float)param_2;
  fVar2 = (float)param_1;
  if (fVar3 < fVar2) {
    post(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
         "bonk: warning: low threshold greater than hi threshold");
  }
  uVar1 = DAT_00651f34;
  *(uint *)(param_9 + 0x68) =
       ~-(uint)(fVar2 <= 0.0) & (uint)fVar2 | -(uint)(fVar2 <= 0.0) & DAT_00651f34;
  *(uint *)(param_9 + 100) = ~-(uint)(fVar3 <= 0.0) & (uint)fVar3 | uVar1 & -(uint)(fVar3 <= 0.0);
  return;
}


