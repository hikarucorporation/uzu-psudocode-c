// Function : gtemplate_free
// Namespace: 
// Entry    : 00527f40
// Prototype: undefined gtemplate_free(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, long * param_13, long param_14)
// Body     : 00527f40 - 00528039


void gtemplate_free(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                   long *param_13,long param_14)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 extraout_RDX;
  undefined8 uVar5;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  
  plVar1 = *(long **)(param_9 + 0x30);
  lVar2 = plVar1[1];
  if (plVar1[1] == param_9) {
    uVar5 = canvas_redrawallfortemplate
                      (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar1,
                       2);
    lVar2 = *(long *)(param_9 + 0x48);
    if (lVar2 == 0) {
      plVar1[1] = 0;
    }
    else {
      plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
      plVar4 = template_new(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                            ,(undefined8 *)(*plVar4 + 0x168),(ulong)*(uint *)(lVar2 + 0x50),
                            *(int **)(lVar2 + 0x58),param_12,(char *)param_13,param_14);
      template_conform(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       (long)plVar1,plVar4,extraout_RDX,param_12,param_13,param_14);
      pd_free(plVar1);
      uVar5 = pd_free(plVar4);
      plVar4 = template_new(uVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                            *(undefined8 **)(param_9 + 0x40),
                            (ulong)*(uint *)(*(long *)(param_9 + 0x48) + 0x50),
                            *(int **)(*(long *)(param_9 + 0x48) + 0x58),param_12,(char *)param_13,
                            param_14);
      lVar2 = *(long *)(param_9 + 0x48);
      plVar4[1] = lVar2;
      for (; uVar5 = extraout_XMM0_Qa_01, lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x48)) {
        *(long **)(lVar2 + 0x30) = plVar4;
      }
    }
    canvas_redrawallfortemplate
              (uVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar1,1);
  }
  else {
    do {
      lVar3 = lVar2;
      lVar2 = *(long *)(lVar3 + 0x48);
      if (lVar2 == 0) goto LAB_00528024;
    } while (lVar2 != param_9);
    *(undefined8 *)(lVar3 + 0x48) = *(undefined8 *)(param_9 + 0x48);
  }
LAB_00528024:
  freebytes(*(void **)(param_9 + 0x58));
  return;
}


