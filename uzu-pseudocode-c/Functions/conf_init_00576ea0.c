// Function : conf_init
// Namespace: 
// Entry    : 00576ea0
// Prototype: undefined conf_init(undefined8 param_1, undefined8 param_2, double param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00576ea0 - 00576f82


void conf_init(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
              char *param_13,undefined8 param_14)

{
  undefined8 extraout_RDX;
  undefined8 uVar1;
  
  uVar1 = g_array_setup(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = g_canvas_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = g_guiconnect_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = g_bang_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = g_mycanvas_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = g_numbox_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = g_radio_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = g_slider_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = g_toggle_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = g_vumeter_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = g_io_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = g_scalar_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = g_template_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = g_text_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = g_traversal_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = clone_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = m_pd_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = x_acoustics_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = x_interface_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = x_connective_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = x_time_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = x_arithmetic_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = x_array_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = x_midi_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = x_misc_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = x_net_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = x_file_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = x_qlist_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = x_gui_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = x_list_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = x_scalar_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = expr_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = d_arithmetic_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = d_array_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = d_ctl_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = d_dac_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = d_delay_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = d_fft_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = d_filter_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = d_global_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = d_math_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = d_misc_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = d_osc_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = d_soundfile_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                            param_10,extraout_RDX,param_12,param_13,param_14);
  d_ugen_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}


