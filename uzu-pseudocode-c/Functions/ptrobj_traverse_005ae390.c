// Function : ptrobj_traverse
// Namespace: 
// Entry    : 005ae390
// Prototype: undefined ptrobj_traverse(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005ae390 - 005ae3e3


void ptrobj_traverse(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9,undefined8 *param_10,undefined8 param_11,undefined8 param_12,
                    char *param_13,undefined8 param_14)

{
  long *plVar1;
  undefined8 extraout_XMM0_Qa;
  
  plVar1 = pd_findbyclass(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          (long)param_10,*(long *)PTR_canvas_class_00715918);
  if (plVar1 == (long *)0x0) {
    pd_error(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
             "pointer: list \'%s\' not found",*param_10,param_12,param_13,param_14);
    return;
  }
  gpointer_setglist(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    (undefined8 *)(param_9 + 0x30),(long)plVar1,0,param_12,param_13,param_14);
  return;
}


