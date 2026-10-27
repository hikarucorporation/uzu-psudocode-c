// Function : writesf_start
// Namespace: 
// Entry    : 0059ec10
// Prototype: undefined writesf_start(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0059ec10 - 0059ec31


void writesf_start(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  char *param_13,undefined8 param_14)

{
  if (*(int *)(param_9 + 0x260) == 1) {
    *(undefined4 *)(param_9 + 0x260) = 2;
    return;
  }
  pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
           "[writesf~]: start requested with no prior \'open\'",param_11,param_12,param_13,param_14)
  ;
  return;
}


