// Function : gatom_list
// Namespace: 
// Entry    : 0052d160
// Prototype: undefined gatom_list(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, undefined8 param_10, uint param_11, int * param_12, char * param_13, undefined8 param_14)
// Body     : 0052d160 - 0052d178


void gatom_list(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long *param_9,undefined8 param_10,uint param_11,int *param_12,char *param_13,
               undefined8 param_14)

{
  if (param_11 != 0) {
    param_1 = gatom_set(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                        param_10,param_11,param_12,param_13,param_14);
  }
  gatom_bang(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)param_9);
  return;
}


