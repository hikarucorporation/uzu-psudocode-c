// Function : mtof_float
// Namespace: 
// Entry    : 00577350
// Prototype: undefined mtof_float(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 00577350 - 005773a6


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void mtof_float(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9)

{
  long *plVar1;
  float fVar2;
  uint uVar3;
  double dVar4;
  
  fVar2 = (float)param_1;
  plVar1 = *(long **)(param_9 + 0x18);
  uVar3 = 0;
  if (DAT_00652e10 < fVar2) {
    if (fVar2 <= DAT_00653438) {
      dVar4 = exp((double)fVar2 * _DAT_00652440);
      outlet_float(CONCAT44((int)((ulong)(dVar4 * _DAT_00652448) >> 0x20),
                            (float)(dVar4 * _DAT_00652448)),param_1,param_3,param_4,param_5,param_6,
                   param_7,param_8,plVar1);
      return;
    }
    uVar3 = DAT_0065b984;
  }
  outlet_float((ulong)uVar3,param_1,param_3,param_4,param_5,param_6,param_7,param_8,plVar1);
  return;
}


