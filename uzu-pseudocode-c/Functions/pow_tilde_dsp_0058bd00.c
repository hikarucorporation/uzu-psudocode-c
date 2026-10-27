// Function : pow_tilde_dsp
// Namespace: 
// Entry    : 0058bd00
// Prototype: undefined * pow_tilde_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, long * param_10)
// Body     : 0058bd00 - 0058bd29


undefined *
pow_tilde_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,long *param_10)

{
  undefined *puVar1;
  
  puVar1 = PTR_pow_tilde_perform_reversescalar_007157e8;
  any_binop_dsp(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_10,
                (long)PTR_pow_tilde_perform_00715a90,(long)PTR_pow_tilde_perform_00715a90,
                PTR_pow_tilde_perform_scalar_00715f00,PTR_pow_tilde_perform_scalar_00715f00,
                PTR_pow_tilde_perform_reversescalar_007157e8,
                PTR_pow_tilde_perform_reversescalar_007157e8);
  return puVar1;
}


