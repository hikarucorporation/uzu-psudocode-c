// Function : list_new
// Namespace: 
// Entry    : 0015fbc0
// Prototype: undefined8 list_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, ulong param_11, int * param_12, char * param_13, undefined8 param_14)
// Body     : 0015fbc0 - 0015fbc5


undefined8
list_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
        undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
        undefined8 param_9,undefined8 param_10,ulong param_11,int *param_12,char *param_13,
        undefined8 param_14)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)PTR_list_new_00715598)();
  return uVar1;
}


