// Function : sys_open_absolute
// Namespace: 
// Entry    : 0015dcf0
// Prototype: undefined8 sys_open_absolute(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, char * param_9, char * param_10, char * param_11, undefined8 * param_12, uint param_13, undefined8 param_14, int * param_15, int param_16)
// Body     : 0015dcf0 - 0015dcf5


undefined8
sys_open_absolute(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 char *param_9,char *param_10,char *param_11,undefined8 *param_12,uint param_13,
                 undefined8 param_14,int *param_15,int param_16)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)PTR_sys_open_absolute_00717678)();
  return uVar1;
}


