// Function : route_anything
// Namespace: 
// Entry    : 0054c350
// Prototype: undefined route_anything(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9, undefined8 * param_10, uint param_11, int * param_12, uint * param_13, uint * param_14)
// Body     : 0054c350 - 0054c3af


void route_anything(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   double param_5,double param_6,double param_7,undefined8 param_8,long param_9,
                   undefined8 *param_10,uint param_11,int *param_12,uint *param_13,uint *param_14)

{
  int iVar1;
  
  if ((*(int *)(param_9 + 0x30) == 2) && (iVar1 = *(int *)(param_9 + 0x34), iVar1 != 0)) {
    param_13 = (uint *)(*(long *)(param_9 + 0x38) + 8);
    do {
      if (*(undefined8 **)(param_13 + -2) == param_10) {
        if (((int)param_11 < 1) || (*param_12 != 2)) {
          outlet_list(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      *(long **)param_13,0,param_11,param_12,(char *)param_13,param_14);
          return;
        }
        outlet_anything(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        *(long **)param_13,*(undefined8 **)(param_12 + 2),param_11 - 1,param_12 + 4,
                        param_13,param_14);
        return;
      }
      iVar1 = iVar1 + -1;
      param_13 = param_13 + 4;
    } while (iVar1 != 0);
  }
  outlet_anything(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  *(long **)(param_9 + 0x40),param_10,param_11,param_12,param_13,param_14);
  return;
}


