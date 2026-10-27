// Function : bob_print
// Namespace: 
// Entry    : 004d7e90
// Prototype: undefined bob_print(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 004d7e90 - 004d7f24


void bob_print(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              long param_9)

{
  undefined8 uVar1;
  
  post(*(undefined8 *)(param_9 + 0x80),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
       "state %d: %f");
  post(*(undefined8 *)(param_9 + 0x88),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
       "state %d: %f");
  post(*(undefined8 *)(param_9 + 0x90),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
       "state %d: %f");
  post(*(undefined8 *)(param_9 + 0x98),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
       "state %d: %f");
  uVar1 = post(*(undefined8 *)(param_9 + 0x58),param_2,param_3,param_4,param_5,param_6,param_7,
               param_8,"saturation %f");
  post(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"oversample %d");
  return;
}


