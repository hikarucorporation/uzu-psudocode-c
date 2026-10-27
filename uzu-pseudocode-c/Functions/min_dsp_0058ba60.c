// Function : min_dsp
// Namespace: 
// Entry    : 0058ba60
// Prototype: undefined * min_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, long * param_10)
// Body     : 0058ba60 - 0058ba8d


undefined *
min_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
       undefined8 param_9,long *param_10)

{
  undefined *puVar1;
  
  puVar1 = PTR_scalarmin_perf8_00715688;
  any_binop_dsp(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_10,
                (long)PTR_min_perform_007157d8,(long)PTR_min_perf8_00715fa0,
                PTR_scalarmin_perform_00715448,PTR_scalarmin_perf8_00715688,
                PTR_scalarmin_perform_00715448,PTR_scalarmin_perf8_00715688);
  return puVar1;
}


