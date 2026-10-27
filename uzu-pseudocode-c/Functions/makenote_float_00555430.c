// Function : makenote_float
// Namespace: 
// Entry    : 00555430
// Prototype: undefined makenote_float(ulong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 00555430 - 005554c2


void makenote_float(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9)

{
  undefined8 *puVar1;
  double *pdVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  
  uVar4 = 0;
  uVar5 = 0;
  if (*(float *)(param_9 + 0x30) == 0.0) {
    return;
  }
  uVar6 = param_1;
  outlet_float((ulong)(uint)*(float *)(param_9 + 0x30),0,param_1,param_4,param_5,param_6,param_7,
               param_8,*(long **)(param_9 + 0x40));
  outlet_float(param_1 & 0xffffffff,CONCAT44(uVar5,uVar4),uVar6,param_4,param_5,param_6,param_7,
               param_8,*(long **)(param_9 + 0x38));
  puVar1 = getbytes(0x20);
  puVar1[1] = *(undefined8 *)(param_9 + 0x48);
  *(undefined8 **)(param_9 + 0x48) = puVar1;
  *(int *)(puVar1 + 2) = (int)param_1;
  puVar1[3] = param_9;
  pdVar2 = (double *)clock_new(puVar1,makenote_tick);
  *puVar1 = pdVar2;
  fVar3 = 0.0;
  if (0.0 <= *(float *)(param_9 + 0x34)) {
    fVar3 = *(float *)(param_9 + 0x34);
  }
  clock_delay((double)fVar3,pdVar2);
  return;
}


