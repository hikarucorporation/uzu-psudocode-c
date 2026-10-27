// Function : plus_dsp
// Namespace: 
// Entry    : 0058b090
// Prototype: undefined * plus_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, long * param_10)
// Body     : 0058b090 - 0058b0bd


undefined *
plus_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
        undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
        undefined8 param_9,long *param_10)

{
  undefined *puVar1;
  
  puVar1 = PTR_scalarplus_perf8_00715db8;
  any_binop_dsp(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_10,
                (long)PTR_plus_perform_007158e0,(long)PTR_plus_perf8_00715b28,
                PTR_scalarplus_perform_00715a00,PTR_scalarplus_perf8_00715db8,
                PTR_scalarplus_perform_00715a00,PTR_scalarplus_perf8_00715db8);
  return puVar1;
}


