// Function : soundfile_wave_setup
// Namespace: 
// Entry    : 005a1a50
// Prototype: undefined soundfile_wave_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005a1a50 - 005a1a5b


void soundfile_wave_setup
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
               char *param_13,undefined8 param_14)

{
  soundfile_addtype(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    (undefined8 *)PTR_wave_007158c8,param_10,param_11,param_12,param_13,param_14);
  return;
}


