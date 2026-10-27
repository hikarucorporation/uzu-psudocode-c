// Function : value_symbol2
// Namespace: 
// Entry    : 0054ea80
// Prototype: undefined value_symbol2(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0054ea80 - 0054eb26


void value_symbol2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,long param_10,undefined8 param_11,undefined8 param_12,char *param_13,
                  undefined8 param_14)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined1 in_AL;
  long *plVar3;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  long lVar4;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar5;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  
  puVar2 = *(undefined8 **)(param_9 + 0x30);
  lVar4 = vcommon_class;
  plVar3 = pd_findbyclass(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          (long)puVar2,vcommon_class);
  if (plVar3 == (long *)0x0) {
    uVar5 = bug(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                "value_release",lVar4,extraout_RDX,param_12,param_13,param_14,in_AL);
  }
  else {
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    uVar5 = extraout_XMM0_Qa;
    if ((int)*plVar1 == 0) {
      pd_unbind(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3,
                puVar2,extraout_RDX,param_12,param_13,param_14);
      uVar5 = pd_free(plVar3);
    }
  }
  *(long *)(param_9 + 0x30) = param_10;
  lVar4 = vcommon_class;
  plVar3 = pd_findbyclass(uVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_10,
                          vcommon_class);
  if (plVar3 == (long *)0x0) {
    plVar3 = pd_new(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    vcommon_class,lVar4,extraout_RDX_00,param_12,param_13,param_14);
    plVar3[1] = 0;
    pd_bind(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3,
            param_10,extraout_RDX_01,param_12,param_13,param_14);
  }
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  *(long *)(param_9 + 0x38) = (long)plVar3 + 0xc;
  return;
}


