// Function : max_dsp
// Namespace: 
// Entry    : 0058b8f0
// Prototype: undefined * max_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, long * param_10)
// Body     : 0058b8f0 - 0058b91d


undefined *
max_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
       undefined8 param_9,long *param_10)

{
  undefined *puVar1;
  
  puVar1 = PTR_scalarmax_perf8_007154a0;
  any_binop_dsp(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_10,
                (long)PTR_max_perform_00715ca0,(long)PTR_max_perf8_00715ef0,
                PTR_scalarmax_perform_007155c0,PTR_scalarmax_perf8_007154a0,
                PTR_scalarmax_perform_007155c0,PTR_scalarmax_perf8_007154a0);
  return puVar1;
}


