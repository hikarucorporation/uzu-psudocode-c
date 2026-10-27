// Function : iemgui_dialog
// Namespace: 
// Entry    : 0015f630
// Prototype: uint iemgui_dialog(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, ulong * param_10, uint param_11, long param_12, char * param_13, undefined8 param_14)
// Body     : 0015f630 - 0015f635


uint iemgui_dialog(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long *param_9,ulong *param_10,uint param_11,long param_12,char *param_13,
                  undefined8 param_14)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_iemgui_dialog_00718318)();
  return uVar1;
}


