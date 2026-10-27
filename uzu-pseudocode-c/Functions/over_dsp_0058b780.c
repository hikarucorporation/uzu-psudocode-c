// Function : over_dsp
// Namespace: 
// Entry    : 0058b780
// Prototype: undefined * over_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, long * param_10)
// Body     : 0058b780 - 0058b7b8


undefined *
over_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
        undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
        undefined8 param_9,long *param_10)

{
  undefined *puVar1;
  
  puVar1 = PTR_reversescalarover_perf8_00715c90;
  any_binop_dsp(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_10,
                (long)PTR_over_perform_00715c70,(long)PTR_over_perf8_00715ac8,
                PTR_scalarover_perform_00715c18,PTR_scalarover_perf8_007159e8,
                PTR_reversescalarover_perform_00715f98,PTR_reversescalarover_perf8_00715c90);
  return puVar1;
}


