// Function : log_tilde_dsp
// Namespace: 
// Entry    : 0058bbc0
// Prototype: undefined * log_tilde_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, long * param_10)
// Body     : 0058bbc0 - 0058bbe9


undefined *
log_tilde_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,long *param_10)

{
  undefined *puVar1;
  
  puVar1 = PTR_log_tilde_perform_reversescalar_00715ea8;
  any_binop_dsp(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_10,
                (long)PTR_log_tilde_perform_00715e98,(long)PTR_log_tilde_perform_00715e98,
                PTR_log_tilde_perform_scalar_00715790,PTR_log_tilde_perform_scalar_00715790,
                PTR_log_tilde_perform_reversescalar_00715ea8,
                PTR_log_tilde_perform_reversescalar_00715ea8);
  return puVar1;
}


