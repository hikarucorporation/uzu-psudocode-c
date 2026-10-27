// Function : voutlet_getit
// Namespace: 
// Entry    : 00519e40
// Prototype: long voutlet_getit(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00519e40 - 00519e66


long voutlet_getit(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  char *param_13,undefined8 param_14)

{
  undefined1 unaff_BL;
  
  if (*param_9 != *(long *)PTR_voutlet_class_00715fc0) {
    bug(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"voutlet_getit",param_10,
        param_11,PTR_voutlet_class_00715fc0,param_13,param_14,unaff_BL);
  }
  return param_9[7];
}


