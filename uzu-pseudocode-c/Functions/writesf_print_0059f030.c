// Function : writesf_print
// Namespace: 
// Entry    : 0059f030
// Prototype: undefined writesf_print(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 0059f030 - 0059f0ac


void writesf_print(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  uVar1 = post(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"state %d");
  uVar1 = post(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"fifo head %d");
  uVar1 = post(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"fifo tail %d");
  uVar1 = post(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"fifo size %d");
  uVar1 = post(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"fd %d");
  post(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"eof %d");
  return;
}


