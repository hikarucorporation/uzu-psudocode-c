// Function : value_get
// Namespace: 
// Entry    : 0054c670
// Prototype: long value_get(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0054c670 - 0054c6bf


long value_get(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
              char *param_13,undefined8 param_14)

{
  long *plVar1;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  long lVar2;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  
  lVar2 = vcommon_class;
  plVar1 = pd_findbyclass(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                          vcommon_class);
  if (plVar1 == (long *)0x0) {
    plVar1 = pd_new(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    vcommon_class,lVar2,extraout_RDX,param_12,param_13,param_14);
    plVar1[1] = 0;
    pd_bind(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1,
            param_9,extraout_RDX_00,param_12,param_13,param_14);
  }
  *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
  return (long)plVar1 + 0xc;
}


