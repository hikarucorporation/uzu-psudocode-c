// Function : list_length_list
// Namespace: 
// Entry    : 00553140
// Prototype: undefined list_length_list(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, int param_11)
// Body     : 00553140 - 0055314c


void list_length_list(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     long param_9,undefined8 param_10,int param_11)

{
  outlet_float(CONCAT44((int)((ulong)param_1 >> 0x20),(float)param_11),param_2,param_3,param_4,
               param_5,param_6,param_7,param_8,*(long **)(param_9 + 0x18));
  return;
}


