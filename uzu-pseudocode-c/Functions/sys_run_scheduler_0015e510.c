// Function : sys_run_scheduler
// Namespace: 
// Entry    : 0015e510
// Prototype: undefined4 sys_run_scheduler(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10)
// Body     : 0015e510 - 0015e515


undefined4
sys_run_scheduler(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_sys_run_scheduler_00717a88)();
  return uVar1;
}


