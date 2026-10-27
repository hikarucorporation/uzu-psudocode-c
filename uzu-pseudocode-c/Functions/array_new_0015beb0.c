// Function : array_new
// Namespace: 
// Entry    : 0015beb0
// Prototype: undefined4 * array_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10)
// Body     : 0015beb0 - 0015beb5


undefined4 *
array_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
         undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
         undefined8 *param_10)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(code *)PTR_array_new_00716758)();
  return puVar1;
}


