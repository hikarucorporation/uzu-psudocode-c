// Function : array_define_anything
// Namespace: 
// Entry    : 00549240
// Prototype: undefined array_define_anything(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 param_11, int * param_12, uint * param_13, uint * param_14, undefined1 param_15)
// Body     : 00549240 - 00549299


void array_define_anything
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               double param_5,double param_6,double param_7,undefined8 param_8,long param_9,
               undefined8 *param_10,undefined8 param_11,int *param_12,uint *param_13,uint *param_14,
               undefined1 param_15)

{
  long *plVar1;
  int *piVar2;
  undefined8 extraout_RDX;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 extraout_XMM0_Qa;
  
  piVar2 = param_12;
  uVar3 = param_11;
  puVar4 = param_10;
  if (*(long **)(param_9 + 0x30) != (long *)0x0) {
    plVar1 = pd_checkglist(*(long **)(param_9 + 0x30));
    uVar3 = extraout_RDX;
    param_1 = extraout_XMM0_Qa;
    if (((plVar1 != (long *)0x0) && (plVar1 = (long *)plVar1[6], plVar1 != (long *)0x0)) &&
       (piVar2 = (int *)PTR_garray_class_00715780, *plVar1 == *(long *)PTR_garray_class_00715780)) {
      pd_typedmess(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1,
                   param_10,(uint)param_11,param_12,param_13,param_14);
      return;
    }
  }
  bug(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"array_define_anything",puVar4
      ,uVar3,piVar2,(char *)param_13,param_14,param_15);
  return;
}


