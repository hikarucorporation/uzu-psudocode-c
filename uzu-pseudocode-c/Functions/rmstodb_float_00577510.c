// Function : rmstodb_float
// Namespace: 
// Entry    : 00577510
// Prototype: undefined rmstodb_float(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 00577510 - 00577552


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rmstodb_float(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  long *plVar1;
  double dVar2;
  ulong uVar3;
  float fVar4;
  
  plVar1 = *(long **)(param_9 + 0x18);
  uVar3 = 0;
  if (0.0 < (float)param_1) {
    dVar2 = log((double)(float)param_1);
    fVar4 = (float)(dVar2 * _DAT_006533b8 + DAT_005d90a0);
    uVar3 = 0;
    param_1 = (ulong)(uint)fVar4;
    if (0.0 <= fVar4) {
      uVar3 = (ulong)(uint)fVar4;
      param_1 = (ulong)(uint)fVar4;
    }
  }
  outlet_float(uVar3,param_1,param_3,param_4,param_5,param_6,param_7,param_8,plVar1);
  return;
}


