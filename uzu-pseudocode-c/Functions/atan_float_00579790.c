// Function : atan_float
// Namespace: 
// Entry    : 00579790
// Prototype: undefined atan_float(float param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 00579790 - 005797a2


void atan_float(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9)

{
  long *plVar1;
  float fVar2;
  undefined4 extraout_XMM0_Db;
  
  plVar1 = *(long **)(param_9 + 0x18);
  fVar2 = atanf(param_1);
  outlet_float(CONCAT44(extraout_XMM0_Db,fVar2),param_2,param_3,param_4,param_5,param_6,param_7,
               param_8,plVar1);
  return;
}


