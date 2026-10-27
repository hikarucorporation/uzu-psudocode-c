// Function : metro_float
// Namespace: 
// Entry    : 0055c420
// Prototype: undefined metro_float(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 0055c420 - 0055c473


void metro_float(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9)

{
  if ((float)param_1 == 0.0) {
    clock_unset(*(double **)(param_9 + 0x30));
    *(undefined4 *)(param_9 + 0x40) = 1;
    return;
  }
  *(undefined4 *)(param_9 + 0x40) = 0;
  outlet_bang(param_1,0,param_3,param_4,param_5,param_6,param_7,param_8,*(long **)(param_9 + 0x18));
  if (*(int *)(param_9 + 0x40) == 0) {
    clock_delay(*(double *)(param_9 + 0x38),*(double **)(param_9 + 0x30));
    *(undefined4 *)(param_9 + 0x40) = 1;
    return;
  }
  *(undefined4 *)(param_9 + 0x40) = 1;
  return;
}


