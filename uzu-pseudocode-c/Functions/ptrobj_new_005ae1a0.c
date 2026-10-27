// Function : ptrobj_new
// Namespace: 
// Entry    : 005ae1a0
// Prototype: long * ptrobj_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, ulong param_10, int * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005ae1a0 - 005ae2d3


long * ptrobj_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,ulong param_10,int *param_11,undefined8 param_12,char *param_13,
                 undefined8 param_14)

{
  int iVar1;
  long *plVar2;
  void *pvVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 *puVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  
  uVar10 = param_10 & 0xffffffff;
  plVar2 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,ptrobj_class,
                  param_10,param_11,param_12,param_13,param_14);
  gpointer_init(plVar2 + 6);
  iVar1 = (int)param_10;
  pvVar3 = getbytes((long)iVar1 << 4);
  plVar2[9] = (long)pvVar3;
  *(int *)(plVar2 + 10) = iVar1;
  if (iVar1 != 0) {
    puVar8 = (undefined8 *)((long)pvVar3 + 8);
    do {
      uVar9 = (int)uVar10 - 1;
      uVar10 = (ulong)uVar9;
      plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
      plVar4 = outlet_new(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          (long)plVar2,*plVar4 + 0x60,extraout_RDX,param_12,param_13,param_14);
      *puVar8 = plVar4;
      puVar5 = (undefined8 *)atom_getsymbol(param_11);
      if (*(char *)*puVar5 == '\0') {
LAB_005ae200:
        plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
        param_12 = 0x168;
        lVar6 = *plVar4 + 0x168;
      }
      else {
        iVar1 = strcmp((char *)*puVar5,"-");
        if (iVar1 == 0) goto LAB_005ae200;
        lVar6 = canvas_makebindsym(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,
                                   param_7,param_8,puVar5);
      }
      param_11 = param_11 + 4;
      puVar8[-1] = lVar6;
      puVar8 = puVar8 + 2;
    } while (uVar9 != 0);
  }
  plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
  plVar7 = outlet_new(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      (long)plVar2,*plVar4 + 0x60,extraout_RDX_00,param_12,param_13,param_14);
  plVar2[0xb] = (long)plVar7;
  plVar4 = outlet_new(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      (long)plVar2,*plVar4 + 0xa8,extraout_RDX_01,param_12,param_13,param_14);
  plVar2[0xc] = (long)plVar4;
  pointerinlet_new(extraout_XMM0_Qa_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                   (long)plVar2,(long)(plVar2 + 6),extraout_RDX_02,param_12,param_13,param_14);
  return plVar2;
}


