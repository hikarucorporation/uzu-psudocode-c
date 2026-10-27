// Function : scalar_define_set
// Namespace: 
// Entry    : 00583410
// Prototype: undefined scalar_define_set(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, undefined8 param_10, undefined8 param_11, long * param_12, char * param_13, undefined8 param_14, undefined1 param_15)
// Body     : 00583410 - 005834ad


void scalar_define_set(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      long *param_9,undefined8 param_10,undefined8 param_11,long *param_12,
                      char *param_13,undefined8 param_14,undefined1 param_15)

{
  uint in_EAX;
  uint uVar1;
  int *piVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 extraout_RDX;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar5;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uStack_28;
  
  plVar4 = param_12;
  if (((long *)param_9[6] == (long *)0x0) ||
     (plVar4 = (long *)PTR_scalar_class_00715810,
     *(long *)param_9[6] != *(long *)PTR_scalar_class_00715810)) {
    bug(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"scalar_define_set",param_10
        ,param_11,plVar4,param_13,param_14,param_15);
    return;
  }
  uStack_28._0_4_ = in_EAX;
  piVar2 = binbuf_new();
  uStack_28 = (ulong)(uint)uStack_28;
  uVar5 = glist_clear(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      param_9,param_10,extraout_RDX,plVar4,param_13,param_14);
  binbuf_restore(uVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar2,(int)param_11,
                 (int *)param_12,plVar4,param_13,param_14);
  uVar1 = binbuf_getnatom(piVar2);
  uVar3 = binbuf_getvec((long)piVar2);
  canvas_readscalar(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    param_9,uVar1,uVar3,(uint *)((long)&uStack_28 + 4),(char *)0x0,param_14);
  binbuf_free(piVar2);
  return;
}


