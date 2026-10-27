// Function : canvas_collecttemplatesfor
// Namespace: 
// Entry    : 0051d690
// Prototype: undefined canvas_collecttemplatesfor(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, uint * param_10, undefined8 * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0051d690 - 0051d704


void canvas_collecttemplatesfor
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,uint *param_10,undefined8 *param_11,undefined8 *param_12,char *param_13,
               undefined8 param_14)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 unaff_RBX;
  
  puVar3 = PTR_canvas_class_00715918;
  puVar2 = PTR_scalar_class_00715810;
  for (plVar1 = *(long **)(param_9 + 0x30); plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
    if (*plVar1 == *(long *)puVar2) {
      param_12 = param_11;
      param_1 = canvas_addtemplatesforscalar
                          (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1[2]
                           ,plVar1 + 3,param_10,param_11,param_13,param_14,(char)unaff_RBX);
    }
    else if (*plVar1 == *(long *)puVar3) {
      param_1 = canvas_collecttemplatesfor
                          (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                           (long)plVar1,param_10,param_11,param_12,param_13,param_14);
    }
  }
  return;
}


