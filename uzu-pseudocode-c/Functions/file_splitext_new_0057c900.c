// Function : file_splitext_new
// Namespace: 
// Entry    : 0057c900
// Prototype: undefined file_splitext_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, ulong param_10, int * param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14)
// Body     : 0057c900 - 0057c913


void file_splitext_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      undefined8 param_9,ulong param_10,int *param_11,undefined8 param_12,
                      undefined8 param_13,undefined8 param_14)

{
  do_file_handle_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     *(long *)PTR_file_splitext_class_00715f88,param_10,param_11,0,(char *)0x0,
                     param_14);
  return;
}


