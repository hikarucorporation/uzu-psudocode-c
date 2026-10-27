// Function : qlist_next
// Namespace: 
// Entry    : 0055a770
// Prototype: undefined qlist_next(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, uint * param_13, uint * param_14)
// Body     : 0055a770 - 0055a782


void qlist_next(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               double param_5,double param_6,double param_7,undefined8 param_8,long param_9,
               undefined8 param_10,undefined8 param_11,undefined8 param_12,uint *param_13,
               uint *param_14)

{
  qlist_donext(param_1,0,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
               (uint)((float)param_1 != 0.0),0,param_12,param_13,param_14);
  return;
}


