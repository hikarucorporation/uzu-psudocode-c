// Function : canvas_reload
// Namespace: 
// Entry    : 0050ac70
// Prototype: undefined canvas_reload(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long * param_9, long * param_10, long * param_11, undefined8 param_12, uint * param_13, byte * param_14)
// Body     : 0050ac70 - 0050ad83


void canvas_reload(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  double param_5,double param_6,double param_7,undefined8 param_8,long *param_9,
                  long *param_10,long *param_11,undefined8 param_12,uint *param_13,byte *param_14)

{
  undefined8 *puVar1;
  uint uVar2;
  long *plVar3;
  int *piVar4;
  long *plVar5;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  long *plVar6;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar7;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 uVar8;
  
  plVar6 = param_10;
  uVar2 = canvas_suspend_dsp(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
  plVar5 = (long *)**(undefined8 **)(*plVar3 + 0x48);
  if ((int *)*plVar5 == (int *)0x0) {
    piVar4 = (int *)0x0;
    (*(undefined8 **)(*plVar3 + 0x48))[6] = param_11;
    plVar3 = (long *)pd_getcanvaslist();
    uVar7 = extraout_XMM0_Qa_00;
  }
  else {
    piVar4 = binbuf_duplicate((int *)*plVar5);
    plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
    *(long **)(*(long *)(*plVar3 + 0x48) + 0x30) = param_11;
    plVar3 = (long *)pd_getcanvaslist();
    uVar7 = extraout_XMM0_Qa;
  }
  if (plVar3 != (long *)0x0) {
    do {
      plVar5 = param_11;
      plVar6 = param_9;
      uVar7 = glist_doreload(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3,
                             param_9,(long)param_10,param_11,param_13,param_14);
      plVar3 = (long *)plVar3[0x1b];
    } while (plVar3 != (long *)0x0);
  }
  plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
  puVar1 = *(undefined8 **)(*plVar3 + 0x48);
  puVar1[6] = 0;
  uVar7 = extraout_RDX;
  uVar8 = extraout_XMM0_Qa_01;
  if (piVar4 != (int *)0x0) {
    plVar3 = (long *)*puVar1;
    if ((void *)*plVar3 != (void *)0x0) {
      binbuf_free((void *)*plVar3);
      plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
      plVar3 = (long *)**(undefined8 **)(*plVar3 + 0x48);
      uVar7 = extraout_RDX_00;
      uVar8 = extraout_XMM0_Qa_02;
    }
    *plVar3 = (long)piVar4;
  }
  canvas_resume_dsp(uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(ulong)uVar2,
                    plVar6,uVar7,plVar5,(char *)param_13,param_14);
  return;
}


