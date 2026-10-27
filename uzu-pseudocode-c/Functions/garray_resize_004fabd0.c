// Function : garray_resize
// Namespace: 
// Entry    : 004fabd0
// Prototype: undefined garray_resize(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, int * param_12, char * param_13, ulong param_14)
// Body     : 004fabd0 - 004fabd9


void garray_resize(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  double param_5,double param_6,double param_7,undefined8 param_8,long param_9,
                  undefined8 param_10,undefined8 param_11,int *param_12,char *param_13,
                  ulong param_14)

{
  garray_resize_long(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     (long)(float)param_1,param_11,param_12,param_13,param_14);
  return;
}


