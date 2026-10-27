// Function : vinlet_fwd
// Namespace: 
// Entry    : 0051ad20
// Prototype: undefined vinlet_fwd(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9, undefined8 * param_10, uint param_11, int * param_12, uint * param_13, uint * param_14)
// Body     : 0051ad20 - 0051ad52


void vinlet_fwd(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               double param_5,double param_6,double param_7,undefined8 param_8,long param_9,
               undefined8 *param_10,uint param_11,int *param_12,uint *param_13,uint *param_14)

{
  if (*(long *)(param_9 + 0x70) == 0) {
    outlet_anything(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    *(long **)(param_9 + 0x18),param_10,param_11,param_12,param_13,param_14);
    return;
  }
  if ((((int)param_11 < 1) || (*(long **)(param_9 + 0x68) == (long *)0x0)) || (*param_12 != 2)) {
    return;
  }
  outlet_anything(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  *(long **)(param_9 + 0x68),*(undefined8 **)(param_12 + 2),param_11 - 1,
                  param_12 + 4,param_13,param_14);
  return;
}


