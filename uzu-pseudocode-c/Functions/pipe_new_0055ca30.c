// Function : pipe_new
// Namespace: 
// Entry    : 0055ca30
// Prototype: long * pipe_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, int * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0055ca30 - 0055ce2d


long * pipe_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10,int *param_11,undefined8 param_12,
               char *param_13,undefined8 param_14)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  int *piVar7;
  undefined8 *puVar8;
  long *plVar9;
  int *piVar10;
  uint uVar11;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  undefined8 extraout_RDX_07;
  undefined8 extraout_RDX_08;
  undefined8 extraout_RDX_09;
  undefined8 extraout_RDX_10;
  undefined8 extraout_RDX_11;
  undefined8 extraout_RDX_12;
  undefined8 extraout_RDX_13;
  undefined8 extraout_RDX_14;
  undefined8 extraout_RDX_15;
  int *piVar12;
  long lVar13;
  uint uVar14;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 uVar15;
  undefined4 extraout_XMM0_Da_09;
  undefined4 extraout_XMM0_Da_10;
  undefined4 extraout_XMM0_Da_11;
  undefined4 extraout_XMM0_Da_12;
  undefined4 extraout_XMM0_Da_13;
  undefined4 extraout_XMM0_Da_14;
  undefined4 extraout_XMM0_Da_15;
  undefined4 extraout_XMM0_Da_16;
  undefined4 extraout_XMM0_Db;
  undefined8 uVar16;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined4 extraout_XMM0_Db_06;
  undefined4 extraout_XMM0_Db_07;
  undefined4 extraout_XMM0_Db_08;
  undefined4 uVar17;
  undefined4 extraout_XMM0_Db_09;
  undefined4 extraout_XMM0_Db_10;
  undefined4 extraout_XMM0_Db_11;
  undefined4 extraout_XMM0_Db_12;
  undefined4 extraout_XMM0_Db_13;
  undefined4 extraout_XMM0_Db_14;
  undefined4 extraout_XMM0_Db_15;
  undefined4 extraout_XMM0_Db_16;
  undefined1 in_stack_ffffffffffffff68;
  int local_8c;
  int local_88 [2];
  undefined4 uStack_80;
  
  plVar6 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,pipe_class,
                  param_10,param_11,param_12,param_13,param_14);
  iVar5 = (int)param_10;
  if (iVar5 == 0) {
    local_8c = 0;
LAB_0055cac2:
    local_88[0] = 1;
    uStack_80 = 0;
    uVar14 = 1;
    param_11 = local_88;
  }
  else {
    uVar14 = iVar5 - 1;
    lVar13 = (long)iVar5 + -1;
    if (param_11[lVar13 * 4] == 1) {
      local_8c = param_11[lVar13 * 4 + 2];
    }
    else {
      uVar16 = atom_string(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,
                           param_5,param_6,param_7,param_8,param_11 + lVar13 * 4,(char *)local_88,
                           (uint *)0x4f,param_12,param_13,param_14,in_stack_ffffffffffffff68);
      pd_error(uVar16,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar6,
               "pipe: %s: bad time delay value",local_88,param_12,param_13,param_14);
      local_8c = 0;
    }
    if (uVar14 == 0) goto LAB_0055cac2;
  }
  *(uint *)(plVar6 + 6) = uVar14;
  piVar7 = getbytes((long)(int)uVar14 * 0x18);
  plVar6[8] = (long)piVar7;
  piVar10 = param_11;
  if (uVar14 == 1) {
    iVar5 = 0;
  }
  else {
    uVar11 = uVar14 & 0xfffffffe;
    iVar5 = 0;
    do {
      if (*piVar10 == 2) {
        iVar5 = iVar5 + (uint)(*(char *)**(undefined8 **)(piVar10 + 2) == 'p');
        iVar2 = piVar10[4];
      }
      else {
        iVar2 = piVar10[4];
      }
      if (iVar2 == 2) {
        iVar5 = iVar5 + (uint)(*(char *)**(undefined8 **)(piVar10 + 6) == 'p');
      }
      piVar10 = piVar10 + 8;
      uVar11 = uVar11 - 2;
    } while (uVar11 != 0);
  }
  if (((uVar14 & 1) != 0) && (*piVar10 == 2)) {
    piVar10 = (int *)**(undefined8 **)(piVar10 + 2);
    iVar5 = iVar5 + (uint)((char)*piVar10 == 'p');
  }
  puVar8 = getbytes((long)iVar5 * 0x18);
  plVar6[9] = (long)puVar8;
  *(int *)((long)plVar6 + 0x34) = iVar5;
  uVar16 = extraout_RDX;
  uVar15 = extraout_XMM0_Da_00;
  uVar17 = extraout_XMM0_Db_00;
  if ((int)uVar14 < 1) goto LAB_0055cc92;
  if (*param_11 == 1) {
    iVar5 = param_11[1];
    iVar2 = param_11[2];
    iVar3 = param_11[3];
    *piVar7 = *param_11;
    piVar7[1] = iVar5;
    piVar7[2] = iVar2;
    piVar7[3] = iVar3;
LAB_0055cc69:
    plVar9 = (long *)__tls_get_addr(&PTR_007159b0);
    lVar13 = *plVar9 + 0x78;
    uVar16 = extraout_RDX_03;
    uVar15 = extraout_XMM0_Da_04;
    uVar17 = extraout_XMM0_Db_04;
LAB_0055cc80:
    plVar9 = outlet_new(CONCAT44(uVar17,uVar15),param_2,param_3,param_4,param_5,param_6,param_7,
                        param_8,(long)plVar6,lVar13,uVar16,piVar10,param_13,param_14);
    *(long **)(piVar7 + 4) = plVar9;
    uVar16 = extraout_RDX_04;
    uVar15 = extraout_XMM0_Da_05;
    uVar17 = extraout_XMM0_Db_05;
  }
  else if (*param_11 == 2) {
    cVar1 = *(char *)**(undefined8 **)(param_11 + 2);
    if (cVar1 == 'f') {
LAB_0055cc5b:
      *piVar7 = 1;
      piVar7[2] = 0;
      goto LAB_0055cc69;
    }
    if (cVar1 != 's') {
      if (cVar1 == 'p') {
        *piVar7 = 3;
        *(undefined8 **)(piVar7 + 2) = puVar8;
        gpointer_init(puVar8);
        plVar9 = (long *)__tls_get_addr(&PTR_007159b0);
        plVar9 = outlet_new(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,
                            param_4,param_5,param_6,param_7,param_8,(long)plVar6,*plVar9 + 0x60,
                            extraout_RDX_00,piVar10,param_13,param_14);
        *(long **)(piVar7 + 4) = plVar9;
        puVar8 = puVar8 + 3;
        uVar16 = extraout_RDX_01;
        uVar15 = extraout_XMM0_Da_02;
        uVar17 = extraout_XMM0_Db_02;
        goto LAB_0055cc8c;
      }
      pd_error(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
               param_6,param_7,param_8,(long)plVar6,"pipe: %s: bad type",
               (char *)**(undefined8 **)(param_11 + 2),piVar10,param_13,param_14);
      goto LAB_0055cc5b;
    }
    *piVar7 = 2;
    plVar9 = (long *)__tls_get_addr(&PTR_007159b0);
    lVar13 = *plVar9 + 0x90;
    *(long *)(piVar7 + 2) = lVar13;
    uVar16 = extraout_RDX_02;
    uVar15 = extraout_XMM0_Da_03;
    uVar17 = extraout_XMM0_Db_03;
    goto LAB_0055cc80;
  }
LAB_0055cc8c:
  if (uVar14 != 1) {
    iVar5 = uVar14 - 1;
    piVar7 = piVar7 + 10;
    do {
      piVar12 = param_11 + 4;
      if (*piVar12 == 2) {
        cVar1 = *(char *)**(undefined8 **)(param_11 + 6);
        if (cVar1 == 'f') {
LAB_0055cce6:
          piVar7[-4] = 1;
          piVar7[-2] = 0;
          plVar9 = (long *)__tls_get_addr(&PTR_007159b0);
          plVar9 = outlet_new(CONCAT44(extraout_XMM0_Db_06,extraout_XMM0_Da_06),param_2,param_3,
                              param_4,param_5,param_6,param_7,param_8,(long)plVar6,*plVar9 + 0x78,
                              extraout_RDX_05,piVar10,param_13,param_14);
          *(long **)piVar7 = plVar9;
          uVar16 = extraout_RDX_06;
          uVar15 = extraout_XMM0_Da_07;
          uVar17 = extraout_XMM0_Db_07;
          goto LAB_0055cd21;
        }
        if (cVar1 == 'p') {
          piVar7[-4] = 3;
          *(undefined8 **)(piVar7 + -2) = puVar8;
          gpointer_init(puVar8);
          plVar9 = (long *)__tls_get_addr(&PTR_007159b0);
          plVar9 = outlet_new(CONCAT44(extraout_XMM0_Db_14,extraout_XMM0_Da_14),param_2,param_3,
                              param_4,param_5,param_6,param_7,param_8,(long)plVar6,*plVar9 + 0x60,
                              extraout_RDX_13,piVar10,param_13,param_14);
          *(long **)piVar7 = plVar9;
          pointerinlet_new(CONCAT44(extraout_XMM0_Db_15,extraout_XMM0_Da_15),param_2,param_3,param_4
                           ,param_5,param_6,param_7,param_8,(long)plVar6,(long)puVar8,
                           extraout_RDX_14,piVar10,param_13,param_14);
          puVar8 = puVar8 + 3;
          uVar16 = extraout_RDX_15;
          uVar15 = extraout_XMM0_Da_16;
          uVar17 = extraout_XMM0_Db_16;
        }
        else {
          if (cVar1 != 's') {
            pd_error(CONCAT44(uVar17,uVar15),param_2,param_3,param_4,param_5,param_6,param_7,param_8
                     ,(long)plVar6,"pipe: %s: bad type",(char *)**(undefined8 **)(param_11 + 6),
                     piVar10,param_13,param_14);
            goto LAB_0055cce6;
          }
          piVar7[-4] = 2;
          plVar9 = (long *)__tls_get_addr(&PTR_007159b0);
          lVar13 = *plVar9;
          *(long *)(piVar7 + -2) = lVar13 + 0x90;
          plVar9 = outlet_new(CONCAT44(extraout_XMM0_Db_11,extraout_XMM0_Da_11),param_2,param_3,
                              param_4,param_5,param_6,param_7,param_8,(long)plVar6,lVar13 + 0x90,
                              extraout_RDX_10,piVar10,param_13,param_14);
          *(long **)piVar7 = plVar9;
          symbolinlet_new(CONCAT44(extraout_XMM0_Db_12,extraout_XMM0_Da_12),param_2,param_3,param_4,
                          param_5,param_6,param_7,param_8,(long)plVar6,(long)(piVar7 + -2),
                          extraout_RDX_11,piVar10,param_13,param_14);
          uVar16 = extraout_RDX_12;
          uVar15 = extraout_XMM0_Da_13;
          uVar17 = extraout_XMM0_Db_13;
        }
      }
      else {
        if (*piVar12 != 1) goto LAB_0055cd26;
        iVar2 = param_11[5];
        iVar3 = param_11[6];
        iVar4 = param_11[7];
        piVar7[-4] = *piVar12;
        piVar7[-3] = iVar2;
        piVar7[-2] = iVar3;
        piVar7[-1] = iVar4;
        plVar9 = (long *)__tls_get_addr(&PTR_007159b0);
        plVar9 = outlet_new(CONCAT44(extraout_XMM0_Db_09,extraout_XMM0_Da_09),param_2,param_3,
                            param_4,param_5,param_6,param_7,param_8,(long)plVar6,*plVar9 + 0x78,
                            extraout_RDX_08,piVar10,param_13,param_14);
        *(long **)piVar7 = plVar9;
        uVar16 = extraout_RDX_09;
        uVar15 = extraout_XMM0_Da_10;
        uVar17 = extraout_XMM0_Db_10;
LAB_0055cd21:
        floatinlet_new(CONCAT44(uVar17,uVar15),param_2,param_3,param_4,param_5,param_6,param_7,
                       param_8,(long)plVar6,(long)(piVar7 + -2),uVar16,piVar10,param_13,param_14);
        uVar16 = extraout_RDX_07;
        uVar15 = extraout_XMM0_Da_08;
        uVar17 = extraout_XMM0_Db_08;
      }
LAB_0055cd26:
      piVar7 = piVar7 + 6;
      iVar5 = iVar5 + -1;
      param_11 = piVar12;
    } while (iVar5 != 0);
  }
LAB_0055cc92:
  floatinlet_new(CONCAT44(uVar17,uVar15),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                 (long)plVar6,(long)(plVar6 + 7),uVar16,piVar10,param_13,param_14);
  plVar6[10] = 0;
  *(int *)(plVar6 + 7) = local_8c;
  return plVar6;
}


