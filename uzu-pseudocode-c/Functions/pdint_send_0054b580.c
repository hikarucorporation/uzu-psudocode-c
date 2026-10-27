// Function : pdint_send
// Namespace: 
// Entry    : 0054b580
// Prototype: undefined pdint_send(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0054b580 - 0054b5ac


void pdint_send(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,undefined8 *param_10,undefined8 param_11,undefined8 param_12,
               char *param_13,undefined8 param_14)

{
  if ((long *)param_10[1] == (long *)0x0) {
    pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
             "%s: no such object",*param_10,param_12,param_13,param_14);
    return;
  }
  pd_float((long *)param_10[1]);
  return;
}


