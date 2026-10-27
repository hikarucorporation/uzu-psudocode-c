// Function : iemgui_new
// Namespace: 
// Entry    : 0015e300
// Prototype: long * iemgui_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0015e300 - 0015e305


long * iemgui_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 char *param_13,undefined8 param_14)

{
  long *plVar1;
  
  plVar1 = (long *)(*(code *)PTR_iemgui_new_00717980)();
  return plVar1;
}


