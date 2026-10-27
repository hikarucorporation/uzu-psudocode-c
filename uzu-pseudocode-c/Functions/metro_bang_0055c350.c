// Function : metro_bang
// Namespace: 
// Entry    : 0055c350
// Prototype: undefined metro_bang(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 0055c350 - 0055c389


void metro_bang(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9)

{
  *(undefined4 *)(param_9 + 0x40) = 0;
  outlet_bang(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
              *(long **)(param_9 + 0x18));
  if (*(int *)(param_9 + 0x40) == 0) {
    clock_delay(*(double *)(param_9 + 0x38),*(double **)(param_9 + 0x30));
    *(undefined4 *)(param_9 + 0x40) = 1;
    return;
  }
  *(undefined4 *)(param_9 + 0x40) = 1;
  return;
}


