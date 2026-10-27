// Function : glob_fastforward
// Namespace: 
// Entry    : 0053b510
// Prototype: undefined glob_fastforward(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0053b510 - 0053b539


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void glob_fastforward(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                     char *param_13,undefined8 param_14)

{
  if (sched_useaudio == 2) {
    pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
             "\'fast-forward\' does not work with \'callbacks\' (yet)",param_11,param_12,param_13,
             param_14);
    return;
  }
  sched_fastforward = (float)param_1 * _DAT_00656bc0;
  return;
}


