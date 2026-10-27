// Function : scalar_define_new
// Namespace: 
// Entry    : 005836a0
// Prototype: long * scalar_define_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, undefined8 param_9, uint param_10, int * param_11, undefined8 param_12, uint * param_13, undefined4 * param_14)
// Body     : 005836a0 - 00583918


long * scalar_define_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,double param_5,double param_6,double param_7,undefined8 param_8,
                        undefined8 param_9,uint param_10,int *param_11,undefined8 param_12,
                        uint *param_13,undefined4 *param_14)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  char *pcVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined4 *puVar7;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  short sVar8;
  undefined8 *puVar9;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 uVar10;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 uVar11;
  undefined1 in_stack_ffffffffffffff18;
  undefined4 local_c8 [2];
  undefined4 local_c0;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_70;
  
  lVar2 = canvas_getcurrent(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
  puVar9 = (undefined8 *)(*plVar3 + 0x78);
  pcVar4 = (char *)gensym("#A");
  uVar11 = extraout_XMM0_Qa;
  if (param_10 == 0) {
    sVar8 = 0;
  }
  else {
    sVar8 = 0;
LAB_0058372f:
    do {
      if (*param_11 != 2) {
LAB_00583796:
        uVar11 = post(uVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      "warning: scalar define ignoring extra argument: ");
        uVar11 = postatom(uVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_10,
                          param_11,extraout_RDX_01,param_12,(char *)param_13,param_14);
        goto LAB_005837ae;
      }
      puVar5 = *(undefined8 **)(param_11 + 2);
      if (*(char *)*puVar5 != '-') {
        puVar9 = puVar5;
        if (param_10 != 1) {
          param_10 = param_10 - 1;
          param_11 = param_11 + 4;
          goto LAB_00583796;
        }
        goto LAB_005837ae;
      }
      iVar1 = strcmp((char *)*puVar5,"-k");
      if (iVar1 != 0) {
        uVar11 = pd_error(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,
                          param_8,0,"scalar define: unknown flag ...",extraout_RDX_00,param_12,
                          (char *)param_13,param_14);
        uVar11 = postatom(uVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_10,
                          param_11,extraout_RDX,param_12,(char *)param_13,param_14);
        param_11 = param_11 + 4;
        param_10 = param_10 - 1;
        if (param_10 == 0) break;
        goto LAB_0058372f;
      }
      sVar8 = 1;
      param_11 = param_11 + 4;
      param_10 = param_10 - 1;
      uVar11 = extraout_XMM0_Qa_00;
    } while (param_10 != 0);
  }
LAB_005837ae:
  local_c8[0] = 1;
  local_c0 = 0;
  local_b8 = 1;
  local_b0 = 0x42480000;
  local_a8 = 1;
  local_a0 = 0x44160000;
  local_98 = 1;
  local_90 = 0x43c80000;
  local_88 = 2;
  local_78 = 1;
  local_70 = 0;
  puVar7 = local_c8;
  local_80 = param_9;
  plVar3 = canvas_new(uVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,0,6,
                      (long)puVar7,param_13,param_14);
  plVar3[9] = lVar2;
  *(byte *)((long)plVar3 + 0xe9) = *(byte *)((long)plVar3 + 0xe9) & 0xfb;
  lVar2 = canvas_makebindsym(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,
                             param_8,puVar9);
  lVar2 = template_findbyname(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,param_7,
                              param_8,lVar2);
  if (lVar2 == 0) {
    uVar11 = *puVar9;
    pcVar4 = "scalar define: couldn\'t find template %s";
    uVar10 = extraout_XMM0_Qa_03;
  }
  else {
    puVar5 = (undefined8 *)
             canvas_makebindsym(extraout_XMM0_Qa_03,param_2,param_3,param_4,param_5,param_6,param_7,
                                param_8,puVar9);
    puVar5 = scalar_new(extraout_XMM0_Qa_04,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        (long)plVar3,puVar5,extraout_RDX_02,puVar7,(char *)param_13,param_14);
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[1] = 0;
      plVar3[6] = (long)puVar5;
      *(ushort *)(plVar3 + 0x1d) = (ushort)plVar3[0x1d] & 0xfbff | sVar8 << 10;
      pcVar4[8] = '\0';
      pcVar4[9] = '\0';
      pcVar4[10] = '\0';
      pcVar4[0xb] = '\0';
      pcVar4[0xc] = '\0';
      pcVar4[0xd] = '\0';
      pcVar4[0xe] = '\0';
      pcVar4[0xf] = '\0';
      pd_bind(extraout_XMM0_Qa_05,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3,
              (long)pcVar4,extraout_RDX_03,puVar7,(char *)param_13,param_14);
      goto LAB_005838be;
    }
    uVar11 = *puVar9;
    pcVar4 = "%s: couldn\'t create scalar";
    uVar10 = extraout_XMM0_Qa_05;
  }
  pd_error(uVar10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar3,pcVar4,uVar11
           ,puVar7,(char *)param_13,param_14);
LAB_005838be:
  plVar6 = (long *)__tls_get_addr(&PTR_007159b0);
  *(long **)(*plVar6 + 0x58) = plVar3;
  uVar11 = pd_popsym(extraout_XMM0_Qa_06,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     (long)plVar3,pcVar4,extraout_RDX_04,puVar7,(char *)param_13,param_14,
                     in_stack_ffffffffffffff18);
  *(byte *)(plVar3 + 0x1d) = *(byte *)(plVar3 + 0x1d) & 0xf7;
  *plVar3 = *(long *)PTR_scalar_define_class_007154f0;
  outlet_new(uVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar3,
             *plVar6 + 0x60,extraout_RDX_05,puVar7,(char *)param_13,param_14);
  return plVar3;
}


