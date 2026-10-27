// Function : sys_startgui
// Namespace: 
// Entry    : 0015f730
// Prototype: undefined8 sys_startgui(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, FILE * param_9, char * param_10, undefined8 param_11, undefined * param_12, char * param_13, FILE * param_14)
// Body     : 0015f730 - 0015f735


undefined8
sys_startgui(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
            FILE *param_9,char *param_10,undefined8 param_11,undefined *param_12,char *param_13,
            FILE *param_14)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)PTR_sys_startgui_00718398)();
  return uVar1;
}


