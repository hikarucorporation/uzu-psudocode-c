// Function : minus_dsp
// Namespace: 
// Entry    : 0058b4b0
// Prototype: undefined * minus_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, long * param_10)
// Body     : 0058b4b0 - 0058b4e8


undefined *
minus_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
         undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
         undefined8 param_9,long *param_10)

{
  undefined *puVar1;
  
  puVar1 = PTR_reversescalarminus_perf8_007154c0;
  any_binop_dsp(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_10,
                (long)PTR_minus_perform_00715e58,(long)PTR_minus_perf8_007156e0,
                PTR_scalarminus_perform_00715f38,PTR_scalarminus_perf8_00715788,
                PTR_reversescalarminus_perform_00715b08,PTR_reversescalarminus_perf8_007154c0);
  return puVar1;
}


