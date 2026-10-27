// Function : template_new
// Namespace: 
// Entry    : 00520700
// Prototype: long * template_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 * param_9, ulong param_10, int * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00520700 - 005208f8


long * template_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   undefined8 *param_9,ulong param_10,int *param_11,undefined8 param_12,
                   char *param_13,undefined8 param_14)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  void *pvVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 uVar9;
  uint uVar10;
  ulong uVar11;
  undefined4 uVar12;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 uVar13;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  long local_48;
  
  uVar11 = param_10 & 0xffffffff;
  plVar4 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,template_class,
                  param_10,param_11,param_12,param_13,param_14);
  *(undefined4 *)(plVar4 + 3) = 0;
  pvVar5 = getbytes(0);
  plVar4[4] = (long)pvVar5;
  plVar6 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar8 = *plVar6;
  local_48 = *(long *)(lVar8 + 0x18);
  plVar4[5] = local_48;
  *(long **)(lVar8 + 0x18) = plVar4;
  uVar10 = (uint)param_10;
  uVar9 = extraout_RDX;
  uVar13 = extraout_XMM0_Qa;
  if (0 < (int)uVar10) {
    while (uVar10 != 1) {
      uVar10 = (uint)uVar11;
      if ((*param_11 != 2) || (param_11[4] != 2)) goto joined_r0x005208cc;
      local_48 = lVar8 + 0x168;
      puVar3 = *(undefined8 **)(param_11 + 2);
      uVar9 = *(undefined8 *)(param_11 + 6);
      if (puVar3 == (undefined8 *)(lVar8 + 0x78)) {
        uVar12 = 0;
LAB_00520821:
        iVar2 = (int)plVar4[3];
        uVar11 = (long)iVar2 * 0x18;
        pvVar5 = resizebytes(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                             (void *)plVar4[4],uVar11,(long)iVar2 * 0x18 + 0x18);
        plVar4[4] = (long)pvVar5;
        *(int *)(plVar4 + 3) = iVar2 + 1;
        *(undefined4 *)((long)pvVar5 + uVar11) = uVar12;
        *(undefined8 *)((long)pvVar5 + uVar11 + 8) = uVar9;
        *(long *)((long)pvVar5 + uVar11 + 0x10) = local_48;
        uVar9 = extraout_RDX_02;
        uVar13 = extraout_XMM0_Qa_02;
      }
      else {
        if (puVar3 == (undefined8 *)(lVar8 + 0x90)) {
          uVar12 = 1;
          goto LAB_00520821;
        }
        puVar7 = gensym("text");
        plVar6 = (long *)__tls_get_addr(&PTR_007159b0);
        uVar12 = 2;
        uVar13 = extraout_XMM0_Qa_00;
        if ((puVar3 == puVar7) || (lVar8 = 0xc0, puVar3 == (undefined8 *)(*plVar6 + 0xc0)))
        goto LAB_00520821;
        puVar7 = gensym("array");
        if (puVar3 == puVar7) {
          if ((2 < uVar10) && (param_11[8] == 2)) {
            local_48 = canvas_makebindsym(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,
                                          param_6,param_7,param_8,*(undefined8 **)(param_11 + 10));
            uVar10 = uVar10 - 1;
            param_11 = param_11 + 4;
            uVar12 = 3;
            uVar13 = extraout_XMM0_Qa_04;
            goto LAB_00520821;
          }
          uVar13 = pd_error(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,
                            param_8,(long)plVar4,"array lacks element template or name",
                            extraout_RDX_00,lVar8,param_13,param_14);
          local_48 = lVar8;
          uVar9 = extraout_RDX_04;
        }
        else {
          uVar13 = pd_error(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,
                            param_8,(long)plVar4,"%s: no such type",*puVar3,lVar8,param_13,param_14)
          ;
          local_48 = lVar8;
          uVar9 = extraout_RDX_01;
        }
      }
joined_r0x005208cc:
      if (uVar10 < 3) break;
      param_11 = param_11 + 8;
      uVar10 = uVar10 - 2;
      uVar11 = (ulong)uVar10;
      plVar6 = (long *)__tls_get_addr(&PTR_007159b0);
      lVar8 = *plVar6;
      uVar9 = extraout_RDX_03;
      uVar13 = extraout_XMM0_Qa_03;
    }
  }
  cVar1 = *(char *)*param_9;
  plVar4[2] = (long)param_9;
  if (cVar1 != '\0') {
    pd_bind(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4,(long)param_9,
            uVar9,local_48,param_13,param_14);
  }
  return plVar4;
}


