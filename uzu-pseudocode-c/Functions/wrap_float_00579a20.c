// Function : wrap_float
// Namespace: 
// Entry    : 00579a20
// Prototype: undefined wrap_float(float param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 00579a20 - 00579a55


void wrap_float(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9)

{
  long *plVar1;
  double dVar2;
  
  plVar1 = *(long **)(param_9 + 0x18);
  dVar2 = floor((double)param_1);
  dVar2 = (double)param_1 - dVar2;
  outlet_float((ulong)(uint)(float)dVar2,dVar2,param_3,param_4,param_5,param_6,param_7,param_8,
               plVar1);
  return;
}


