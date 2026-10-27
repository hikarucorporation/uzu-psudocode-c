// Function : soundfile_caf_setup
// Namespace: 
// Entry    : 005a0840
// Prototype: undefined soundfile_caf_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005a0840 - 005a084b


void soundfile_caf_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8
                        ,undefined8 param_9,undefined8 param_10,undefined8 param_11,
                        undefined8 param_12,char *param_13,undefined8 param_14)

{
  soundfile_addtype(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,&caf,param_10,
                    param_11,param_12,param_13,param_14);
  return;
}


