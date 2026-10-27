// Function : clone_in_fwd
// Namespace: 
// Entry    : 00504170
// Prototype: undefined clone_in_fwd(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long * param_9, undefined8 param_10, int param_11, int * param_12, uint * param_13, uint * param_14)
// Body     : 00504170 - 00504189


void clone_in_fwd(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 double param_5,double param_6,double param_7,undefined8 param_8,long *param_9,
                 undefined8 param_10,int param_11,int *param_12,uint *param_13,uint *param_14)

{
  if ((param_11 < 1) || (*param_12 != 2)) {
    return;
  }
  pd_typedmess(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
               *(undefined8 **)(param_12 + 2),param_11 - 1,param_12 + 4,param_13,param_14);
  return;
}


