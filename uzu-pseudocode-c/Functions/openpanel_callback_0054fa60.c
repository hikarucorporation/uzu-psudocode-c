// Function : openpanel_callback
// Namespace: 
// Entry    : 0054fa60
// Prototype: undefined openpanel_callback(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, int * param_12, char * param_13, undefined8 param_14, undefined1 param_15)
// Body     : 0054fa60 - 0054fa93


void openpanel_callback(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       long param_9,undefined8 param_10,undefined8 param_11,int *param_12,
                       char *param_13,undefined8 param_14,undefined1 param_15)

{
  if (*(int *)(param_9 + 0x40) == 2) {
    outlet_list(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                *(long **)(param_9 + 0x18),param_10,(int)param_11,param_12,param_13,param_14);
    return;
  }
  if (((int)param_11 == 1) && (*param_12 == 2)) {
    outlet_symbol(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  *(long **)(param_9 + 0x18));
    return;
  }
  bug(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"openpanel_callback",param_10,
      param_11,param_12,param_13,param_14,param_15);
  return;
}


