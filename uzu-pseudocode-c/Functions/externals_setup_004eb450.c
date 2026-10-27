// Function : externals_setup
// Namespace: 
// Entry    : 004eb450
// Prototype: undefined externals_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 004eb450 - 004eb500


void externals_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 extraout_XMM0_Qa;
  
  uVar1 = lowpass_tilde_setup(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = highpass_tilde_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = setup_freq0x2eshift_tilde(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = setup_allpass0x2e2nd_tilde(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = blocksize_tilde_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = nyquist_tilde_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = resonant2_tilde_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = loop_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = message_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = peak_tilde_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = biquads_tilde_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = bicoeff_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = bicoeff2_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = args_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  click_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = loadbanger_setup(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8)
  ;
  uVar1 = setup_giga0x2erev_tilde(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = initmess_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = rescale_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = adsr_tilde_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = setup_freq0x2eshift_tilde(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = default_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = highshelf_tilde_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = square_tilde_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = white_tilde_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = fold_tilde_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = scale_control_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = cartopol_tilde_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = poltocar_tilde_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = delay_tilde_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = phasewrap_tilde_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = scale_tilde_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = round_tilde_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = vectral_tilde_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  helmholtz_tilde_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}


