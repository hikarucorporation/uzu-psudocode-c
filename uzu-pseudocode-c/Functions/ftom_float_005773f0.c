// Function : ftom_float
// Namespace: 
// Entry    : 005773f0
// Prototype: undefined ftom_float(float param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 005773f0 - 00577433


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ftom_float(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9)

{
  long *plVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  plVar1 = *(long **)(param_9 + 0x18);
  uVar3 = 0;
  uVar4 = 0;
  if (0.0 < param_1) {
    dVar2 = log((double)param_1 * _DAT_00652450);
    outlet_float(CONCAT44((int)((ulong)(dVar2 * _DAT_00652458) >> 0x20),
                          (float)(dVar2 * _DAT_00652458)),CONCAT44(uVar4,uVar3),param_3,param_4,
                 param_5,param_6,param_7,param_8,plVar1);
    return;
  }
  outlet_float((ulong)DAT_00652e10,0,param_3,param_4,param_5,param_6,param_7,param_8,plVar1);
  return;
}


