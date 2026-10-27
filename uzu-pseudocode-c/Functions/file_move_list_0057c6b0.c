// Function : file_move_list
// Namespace: 
// Entry    : 0057c6b0
// Prototype: undefined file_move_list(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, uint param_11, int * param_12)
// Body     : 0057c6b0 - 0057c6cb


void file_move_list(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9,undefined8 param_10,uint param_11,int *param_12)

{
  file_do_copymove(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,"move",
                   file_do_move,param_10,(char *)(ulong)param_11,param_12);
  return;
}


