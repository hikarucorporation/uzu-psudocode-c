// Function : sys_get_dllextensions
// Namespace: 
// Entry    : 0015d490
// Prototype: void * sys_get_dllextensions(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 0015d490 - 0015d495


void * sys_get_dllextensions
                 (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_sys_get_dllextensions_00717248)();
  return pvVar1;
}


