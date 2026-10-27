// Function : message_symbol
// Namespace: 
// Entry    : 0052cd80
// Prototype: undefined message_symbol(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14)
// Body     : 0052cd80 - 0052cdaf


void message_symbol(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                   undefined8 param_13,undefined8 param_14)

{
  undefined4 local_10 [2];
  undefined8 local_8;
  
  local_10[0] = 2;
  local_8 = param_10;
  binbuf_eval(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
              *(uint **)(param_9 + 0x10),(uint *)(param_9 + 0x30),1,(long)local_10,param_13,param_14
             );
  return;
}


