// Function : sigfft_perform
// Namespace: 
// Entry    : 00592490
// Prototype: long sigfft_perform(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 00592490 - 005924ac


long sigfft_perform(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9)

{
  mayer_fft(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
            *(uint *)(param_9 + 0x18),*(float **)(param_9 + 8),*(float **)(param_9 + 0x10));
  return param_9 + 0x20;
}


