// Function : class_new
// Namespace: 
// Entry    : 0015b7e0
// Prototype: undefined8 * class_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, int * param_9, long param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14, uint param_15, uint param_16)
// Body     : 0015b7e0 - 0015b7e5


undefined8 *
class_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
         undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,int *param_9,
         long param_10,undefined8 param_11,undefined8 param_12,char *param_13,undefined8 param_14,
         uint param_15,uint param_16)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*(code *)PTR_class_new_007163f0)();
  return puVar1;
}


