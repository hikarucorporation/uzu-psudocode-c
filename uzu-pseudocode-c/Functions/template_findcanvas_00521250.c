// Function : template_findcanvas
// Namespace: 
// Entry    : 00521250
// Prototype: undefined8 template_findcanvas(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00521250 - 00521283


undefined8
template_findcanvas(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                   char *param_13,undefined8 param_14)

{
  undefined1 unaff_BL;
  
  if (param_9 == 0) {
    bug(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"template_findcanvas",
        param_10,param_11,param_12,param_13,param_14,unaff_BL);
    return 0;
  }
  if (*(long *)(param_9 + 8) == 0) {
    return 0;
  }
  return *(undefined8 *)(*(long *)(param_9 + 8) + 0x38);
}


