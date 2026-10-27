// Function : glist_scalar
// Namespace: 
// Entry    : 0051f820
// Prototype: undefined glist_scalar(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, undefined8 param_10, int param_11, int * param_12, char * param_13, undefined8 param_14)
// Body     : 0051f820 - 0051f8d0


void glist_scalar(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long *param_9,undefined8 param_10,int param_11,int *param_12,char *param_13,
                 undefined8 param_14)

{
  uint in_EAX;
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  int *piVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 uStack_28;
  
  piVar6 = param_12;
  uStack_28._0_4_ = in_EAX;
  puVar2 = (undefined8 *)atom_getsymbolarg(0,param_11,(long)param_12);
  lVar3 = canvas_makebindsym(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,
                             param_8,puVar2);
  uStack_28 = (ulong)(uint)uStack_28;
  lVar3 = template_findbyname(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,
                              param_8,lVar3);
  if (lVar3 == 0) {
    puVar2 = (undefined8 *)atom_getsymbolarg(0,param_11,(long)param_12);
    pd_error(extraout_XMM0_Qa_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
             (long)param_9,"%s: no such template",*puVar2,piVar6,param_13,param_14);
    return;
  }
  piVar4 = binbuf_new();
  binbuf_restore(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar4,
                 param_11,param_12,piVar6,param_13,param_14);
  uVar1 = binbuf_getnatom(piVar4);
  uVar5 = binbuf_getvec((long)piVar4);
  canvas_readscalar(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    param_9,uVar1,uVar5,(uint *)((long)&uStack_28 + 4),(char *)0x0,param_14);
  binbuf_free(piVar4);
  return;
}


