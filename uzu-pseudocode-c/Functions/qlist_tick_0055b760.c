// Function : qlist_tick
// Namespace: 
// Entry    : 0055b760
// Prototype: undefined qlist_tick(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, uint * param_13, uint * param_14)
// Body     : 0055b760 - 0055b770


void qlist_tick(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               double param_5,double param_6,double param_7,undefined8 param_8,long param_9,
               undefined8 param_10,undefined8 param_11,undefined8 param_12,uint *param_13,
               uint *param_14)

{
  *(undefined8 *)(param_9 + 0x70) = 0;
  qlist_donext(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,0,1,param_12,
               param_13,param_14);
  return;
}


