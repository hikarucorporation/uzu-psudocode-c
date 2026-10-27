// Function : class_nosavefn
// Namespace: 
// Entry    : 005365a0
// Prototype: undefined class_nosavefn(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14, undefined1 param_15)
// Body     : 005365a0 - 005365ad


void class_nosavefn(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                   char *param_13,undefined8 param_14,undefined1 param_15)

{
  bug(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
      "save function called but not defined",param_10,param_11,param_12,param_13,param_14,param_15);
  return;
}


