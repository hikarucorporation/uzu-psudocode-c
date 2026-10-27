// Function : list_store_prepend
// Namespace: 
// Entry    : 00552470
// Prototype: undefined list_store_prepend(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, uint param_11, long param_12, char * param_13, undefined8 param_14)
// Body     : 00552470 - 0055247b


void list_store_prepend(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       long param_9,undefined8 param_10,uint param_11,long param_12,char *param_13,
                       undefined8 param_14)

{
  list_store_doinsert(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                      param_11,param_12,0,param_13,param_14);
  return;
}


