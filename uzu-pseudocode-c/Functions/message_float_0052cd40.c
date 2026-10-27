// Function : message_float
// Namespace: 
// Entry    : 0052cd40
// Prototype: undefined message_float(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 0052cd40 - 0052cd70


void message_float(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  undefined8 in_R8;
  undefined8 in_R9;
  undefined4 local_10 [2];
  undefined4 local_8;
  
  local_8 = (undefined4)param_1;
  local_10[0] = 1;
  binbuf_eval(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
              *(uint **)(param_9 + 0x10),(uint *)(param_9 + 0x30),1,(long)local_10,in_R8,in_R9);
  return;
}


