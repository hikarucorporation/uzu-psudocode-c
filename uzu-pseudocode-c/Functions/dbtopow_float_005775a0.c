// Function : dbtopow_float
// Namespace: 
// Entry    : 005775a0
// Prototype: undefined dbtopow_float(float param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 005775a0 - 005775e0


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dbtopow_float(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  long *plVar1;
  double dVar2;
  float fVar3;
  
  plVar1 = *(long **)(param_9 + 0x18);
  fVar3 = 0.0;
  if (0.0 < param_1) {
    if (DAT_00653440 <= param_1) {
      param_1 = DAT_00653440;
    }
    dVar2 = exp((double)param_1 * _DAT_00652e48 + _DAT_006533c0);
    fVar3 = (float)dVar2;
  }
  outlet_float((ulong)(uint)fVar3,(ulong)(uint)fVar3,param_3,param_4,param_5,param_6,param_7,param_8
               ,plVar1);
  return;
}


