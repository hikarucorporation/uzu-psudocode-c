// Function : sys_log_error
// Namespace: 
// Entry    : 0015e6d0
// Prototype: undefined8 sys_log_error(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, int param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14)
// Body     : 0015e6d0 - 0015e6d5


undefined8
sys_log_error(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,int param_9
             ,undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
             undefined8 param_14)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)PTR_sys_log_error_00717b68)();
  return uVar1;
}


