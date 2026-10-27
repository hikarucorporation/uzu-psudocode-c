// Function : moses_float
// Namespace: 
// Entry    : 0054e320
// Prototype: undefined moses_float(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 0054e320 - 0054e337


void moses_float(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_9 + 0x30);
  if ((float)param_1 < *(float *)(param_9 + 0x38)) {
    puVar1 = (undefined8 *)(param_9 + 0x18);
  }
  outlet_float(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long *)*puVar1);
  return;
}


