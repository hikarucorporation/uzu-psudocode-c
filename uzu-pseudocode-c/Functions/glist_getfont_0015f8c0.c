// Function : glist_getfont
// Namespace: 
// Entry    : 0015f8c0
// Prototype: undefined4 glist_getfont(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0015f8c0 - 0015f8c5


undefined4
glist_getfont(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,char *param_13
             ,undefined8 param_14)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_glist_getfont_00718460)();
  return uVar1;
}


