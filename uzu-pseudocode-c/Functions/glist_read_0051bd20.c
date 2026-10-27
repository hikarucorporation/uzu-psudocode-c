// Function : glist_read
// Namespace: 
// Entry    : 0051bd20
// Prototype: undefined glist_read(undefined8 param_1, undefined8 param_2, long param_3, long param_4, long param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, undefined8 * param_10, undefined8 * param_11, undefined8 param_12, char * param_13, undefined * param_14)
// Body     : 0051bd20 - 0051bd26


void glist_read(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
               undefined8 param_6,undefined8 param_7,undefined8 param_8,long *param_9,
               undefined8 *param_10,undefined8 *param_11,undefined8 param_12,char *param_13,
               undefined *param_14)

{
  glist_doread(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,1,param_13,param_14);
  return;
}


