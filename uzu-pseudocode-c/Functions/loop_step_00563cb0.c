// Function : loop_step
// Namespace: 
// Entry    : 00563cb0
// Prototype: undefined loop_step(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00563cb0 - 00563ccb


void loop_step(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
              char *param_13,undefined8 param_14)

{
  if (0.0 < (float)param_1) {
    *(float *)(param_9 + 0x48) = (float)param_1;
    return;
  }
  pd_error(param_1,0,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
           "[loop]: step needs to be > 0",param_11,param_12,param_13,param_14);
  return;
}


