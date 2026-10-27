// Function : pdinstance_new
// Namespace: 
// Entry    : 0015eaa0
// Prototype: undefined8 * pdinstance_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, char * param_14)
// Body     : 0015eaa0 - 0015eaa5


undefined8 *
pdinstance_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
              char *param_13,char *param_14)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*(code *)PTR_pdinstance_new_00717d50)();
  return puVar1;
}


