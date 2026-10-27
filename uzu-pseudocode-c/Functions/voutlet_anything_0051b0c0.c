// Function : voutlet_anything
// Namespace: 
// Entry    : 0051b0c0
// Prototype: undefined voutlet_anything(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9, undefined8 * param_10, uint param_11, int * param_12, uint * param_13, uint * param_14)
// Body     : 0051b0c0 - 0051b0c8


void voutlet_anything(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     double param_5,double param_6,double param_7,undefined8 param_8,long param_9,
                     undefined8 *param_10,uint param_11,int *param_12,uint *param_13,uint *param_14)

{
  outlet_anything(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  *(long **)(param_9 + 0x38),param_10,param_11,param_12,param_13,param_14);
  return;
}


