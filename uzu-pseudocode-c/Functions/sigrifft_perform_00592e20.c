// Function : sigrifft_perform
// Namespace: 
// Entry    : 00592e20
// Prototype: long sigrifft_perform(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 00592e20 - 00592e38


long sigrifft_perform(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     long param_9)

{
  mayer_realifft(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                 *(uint *)(param_9 + 0x10),*(float **)(param_9 + 8));
  return param_9 + 0x18;
}


