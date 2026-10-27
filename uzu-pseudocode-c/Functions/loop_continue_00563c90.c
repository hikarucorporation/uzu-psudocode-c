// Function : loop_continue
// Namespace: 
// Entry    : 00563c90
// Prototype: undefined loop_continue(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 00563c90 - 00563c9c


void loop_continue(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  if (*(long *)(param_9 + 0x60) == 2) {
    loop_do_loop(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
    return;
  }
  return;
}


