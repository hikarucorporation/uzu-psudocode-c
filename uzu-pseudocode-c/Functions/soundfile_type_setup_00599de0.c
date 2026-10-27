// Function : soundfile_type_setup
// Namespace: 
// Entry    : 00599de0
// Prototype: undefined soundfile_type_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00599de0 - 00599df5


void soundfile_type_setup
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
               char *param_13,undefined8 param_14)

{
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 uVar1;
  
  uVar1 = soundfile_wave_setup
                    (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     param_10,param_11,param_12,param_13,param_14);
  uVar1 = soundfile_aiff_setup
                    (uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                     extraout_RDX,param_12,param_13,param_14);
  uVar1 = soundfile_caf_setup(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                              param_10,extraout_RDX_00,param_12,param_13,param_14);
  soundfile_next_setup
            (uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
             extraout_RDX_01,param_12,param_13,param_14);
  return;
}


