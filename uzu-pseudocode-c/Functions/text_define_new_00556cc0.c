// Function : text_define_new
// Namespace: 
// Entry    : 00556cc0
// Prototype: long * text_define_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, ulong param_10, int * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00556cc0 - 00556e91


long * text_define_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      undefined8 param_9,ulong param_10,int *param_11,undefined8 param_12,
                      char *param_13,undefined8 param_14)

{
  char *__s1;
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  undefined8 extraout_RDX_07;
  uint uVar9;
  ulong uVar10;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar11;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 uVar12;
  undefined8 extraout_XMM0_Qa_06;
  
  uVar10 = param_10 & 0xffffffff;
  plVar2 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,text_define_class,
                  param_10,param_11,param_12,param_13,param_14);
  puVar3 = gensym("#A");
  *(undefined1 *)(plVar2 + 0x12) = 0;
  plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar8 = *plVar4 + 0x168;
  plVar2[0xc] = lVar8;
  uVar9 = (uint)param_10;
  uVar12 = extraout_RDX;
  uVar11 = extraout_XMM0_Qa;
  do {
    if (uVar9 == 0) {
LAB_00556dbe:
      puVar5 = (undefined8 *)plVar2[0xc];
      if (*(char *)*puVar5 == '\0') {
        puVar5 = gensym("text");
      }
      puVar6 = binbuf_new();
      plVar2[6] = (long)puVar6;
      lVar7 = canvas_getcurrent(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,
                                param_8);
      plVar2[7] = lVar7;
      plVar2[9] = (long)puVar5;
      lVar7 = canvas_getcurrent(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,param_7,
                                param_8);
      puVar5 = gensym("pd-text");
      puVar5 = scalar_new(extraout_XMM0_Qa_03,param_2,param_3,param_4,param_5,param_6,param_7,
                          param_8,lVar7,puVar5,extraout_RDX_04,lVar8,param_13,param_14);
      plVar2[0xd] = (long)puVar5;
      binbuf_free((void *)puVar5[5]);
      lVar8 = plVar2[0xd];
      *(long *)(lVar8 + 0x28) = plVar2[6];
      plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
      plVar4 = outlet_new(extraout_XMM0_Qa_04,param_2,param_3,param_4,param_5,param_6,param_7,
                          param_8,(long)plVar2,*plVar4 + 0x60,extraout_RDX_05,lVar8,param_13,
                          param_14);
      plVar2[10] = (long)plVar4;
      plVar4 = outlet_new(extraout_XMM0_Qa_05,param_2,param_3,param_4,param_5,param_6,param_7,
                          param_8,(long)plVar2,0,extraout_RDX_06,lVar8,param_13,param_14);
      plVar2[0xb] = (long)plVar4;
      uVar12 = gpointer_init(plVar2 + 0xe);
      lVar7 = canvas_getcurrent(uVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      plVar2[7] = lVar7;
      puVar3[1] = 0;
      pd_bind(extraout_XMM0_Qa_06,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2,
              (long)puVar3,extraout_RDX_07,lVar8,param_13,param_14);
      return plVar2;
    }
    uVar9 = (uint)uVar10;
    if (*param_11 != 2) {
LAB_00556da1:
      uVar12 = post(uVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    "warning: text define ignoring extra argument: ");
      uVar12 = postatom(uVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,uVar9,
                        param_11,extraout_RDX_03,lVar8,param_13,param_14);
      endpost(uVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      goto LAB_00556dbe;
    }
    __s1 = (char *)**(undefined8 **)(param_11 + 2);
    if (*__s1 != '-') {
      uVar11 = pd_bind(uVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2,
                       (long)*(undefined8 **)(param_11 + 2),uVar12,lVar8,param_13,param_14);
      plVar2[0xc] = *(long *)(param_11 + 2);
      if (uVar9 != 1) {
        uVar9 = uVar9 - 1;
        param_11 = param_11 + 4;
        goto LAB_00556da1;
      }
      goto LAB_00556dbe;
    }
    iVar1 = strcmp(__s1,"-k");
    if (iVar1 == 0) {
      *(undefined1 *)(plVar2 + 0x12) = 1;
      param_11 = param_11 + 4;
      uVar9 = uVar9 - 1;
      uVar10 = (ulong)uVar9;
      uVar12 = extraout_RDX_02;
      uVar11 = extraout_XMM0_Qa_00;
    }
    else {
      uVar12 = pd_error(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        (long)plVar2,"text define: unknown flag ...",extraout_RDX_02,lVar8,param_13,
                        param_14);
      uVar12 = postatom(uVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,uVar9,
                        param_11,extraout_RDX_00,lVar8,param_13,param_14);
      uVar11 = endpost(uVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      param_11 = param_11 + 4;
      uVar9 = uVar9 - 1;
      uVar10 = (ulong)uVar9;
      uVar12 = extraout_RDX_01;
    }
  } while( true );
}


