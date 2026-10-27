// Function : sys_send_dacs
// Namespace: 
// Entry    : 0015d070
// Prototype: undefined8 sys_send_dacs(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 0015d070 - 0015d075


undefined8
sys_send_dacs(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)PTR_sys_send_dacs_00717038)();
  return uVar1;
}


