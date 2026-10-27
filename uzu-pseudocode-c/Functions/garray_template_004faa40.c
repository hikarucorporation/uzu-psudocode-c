// Function : garray_template
// Namespace: 
// Entry    : 004faa40
// Prototype: long garray_template(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, int * param_12, char * param_13, undefined8 param_14)
// Body     : 004faa40 - 004faa75


long garray_template(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9,undefined8 param_10,undefined8 param_11,int *param_12,
                    char *param_13,undefined8 param_14)

{
  long lVar1;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar2;
  undefined1 unaff_BL;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar3;
  
  lVar1 = garray_getarray(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                          param_10,param_11,param_12,param_13,param_14);
  uVar2 = extraout_RDX;
  uVar3 = extraout_XMM0_Qa;
  if (lVar1 != 0) {
    lVar1 = template_findbyname(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,
                                param_8,*(long *)(lVar1 + 0x10));
    uVar2 = extraout_RDX_00;
    uVar3 = extraout_XMM0_Qa_00;
    if (lVar1 != 0) {
      return lVar1;
    }
  }
  bug(uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"garray_template",param_10,uVar2
      ,param_12,param_13,param_14,unaff_BL);
  return 0;
}


