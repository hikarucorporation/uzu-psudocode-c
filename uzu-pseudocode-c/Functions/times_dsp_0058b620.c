// Function : times_dsp
// Namespace: 
// Entry    : 0058b620
// Prototype: undefined * times_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, long * param_10)
// Body     : 0058b620 - 0058b64d


undefined *
times_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
         undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
         undefined8 param_9,long *param_10)

{
  undefined *puVar1;
  
  puVar1 = PTR_scalartimes_perf8_00715b88;
  any_binop_dsp(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_10,
                (long)PTR_times_perform_00715e78,(long)PTR_times_perf8_00715ab0,
                PTR_scalartimes_perform_007157a8,PTR_scalartimes_perf8_00715b88,
                PTR_scalartimes_perform_007157a8,PTR_scalartimes_perf8_00715b88);
  return puVar1;
}


