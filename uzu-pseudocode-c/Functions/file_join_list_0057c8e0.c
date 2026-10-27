// Function : file_join_list
// Namespace: 
// Entry    : 0057c8e0
// Prototype: undefined file_join_list(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, uint param_11, int * param_12, char * param_13, undefined8 param_14)
// Body     : 0057c8e0 - 0057c8fc


void file_join_list(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9,undefined8 param_10,uint param_11,int *param_12,char *param_13,
                   undefined8 param_14)

{
  undefined8 uVar1;
  
  uVar1 = do_joinpath(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_11,
                      param_12,(undefined8 *)0x0,(ulong)param_12,param_13,param_14);
  outlet_symbol(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                *(long **)(param_9 + 0x58));
  return;
}


