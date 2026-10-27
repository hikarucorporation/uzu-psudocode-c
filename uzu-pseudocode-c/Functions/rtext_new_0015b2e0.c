// Function : rtext_new
// Namespace: 
// Entry    : 0015b2e0
// Prototype: undefined8 * rtext_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0015b2e0 - 0015b2e5


undefined8 *
rtext_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
         undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
         long param_10,undefined8 param_11,undefined8 param_12,char *param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*(code *)PTR_rtext_new_00716170)();
  return puVar1;
}


