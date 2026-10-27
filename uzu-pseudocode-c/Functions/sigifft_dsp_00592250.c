// Function : sigifft_dsp
// Namespace: 
// Entry    : 00592250
// Prototype: undefined sigifft_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14, undefined8 param_15)
// Body     : 00592250 - 00592258


void sigifft_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9,long *param_10,undefined8 param_11,undefined8 param_12,char *param_13,
                undefined8 param_14,undefined8 param_15)

{
  sigfft_dspx(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
              sigifft_perform,param_12,param_13,param_14,param_15);
  return;
}


