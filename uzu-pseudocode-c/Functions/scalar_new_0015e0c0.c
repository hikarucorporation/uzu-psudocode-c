// Function : scalar_new
// Namespace: 
// Entry    : 0015e0c0
// Prototype: undefined8 * scalar_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0015e0c0 - 0015e0c5


undefined8 *
scalar_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
          undefined8 *param_10,undefined8 param_11,undefined8 param_12,char *param_13,
          undefined8 param_14)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*(code *)PTR_scalar_new_00717860)();
  return puVar1;
}


