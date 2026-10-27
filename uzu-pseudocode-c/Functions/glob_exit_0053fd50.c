// Function : glob_exit
// Namespace: 
// Entry    : 0053fd50
// Prototype: undefined glob_exit(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0053fd50 - 0053fd58


void glob_exit(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
              char *param_13,undefined8 param_14)

{
  sys_exit(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(int)(float)param_1,
           param_10,param_11,param_12,param_13,param_14);
  return;
}


