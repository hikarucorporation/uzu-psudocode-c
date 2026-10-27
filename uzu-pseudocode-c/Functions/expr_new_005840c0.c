// Function : expr_new
// Namespace: 
// Entry    : 005840c0
// Prototype: long * expr_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 * param_9, uint param_10, undefined8 * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005840c0 - 00584557


long * expr_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 *param_9,uint param_10,undefined8 *param_11,undefined8 param_12,
               char *param_13,undefined8 param_14)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  void *pvVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  long *extraout_RDX_04;
  long *extraout_RDX_05;
  long *extraout_RDX_06;
  long *extraout_RDX_07;
  undefined8 extraout_RDX_08;
  long *extraout_RDX_09;
  long *plVar11;
  long lVar12;
  char *pcVar13;
  char *pcVar14;
  uint uVar15;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Da_09;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined8 uVar17;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 uVar18;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined4 extraout_XMM0_Db_06;
  undefined4 extraout_XMM0_Db_07;
  undefined4 extraout_XMM0_Db_08;
  undefined4 extraout_XMM0_Db_09;
  int local_44;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  if (param_10 == 0) {
    local_40[0] = 1;
    local_38 = 0;
    param_11 = (undefined8 *)local_40;
    param_10 = 1;
  }
  pcVar14 = (char *)*param_9;
  pcVar13 = pcVar14;
  iVar1 = strcmp("expr",pcVar14);
  uVar17 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
  uVar15 = 1;
  plVar11 = &expr_class;
  uVar3 = extraout_RDX;
  if (iVar1 != 0) {
    pcVar13 = pcVar14;
    iVar1 = strcmp("expr~",pcVar14);
    uVar17 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
    if (iVar1 == 0) {
      uVar15 = 2;
      plVar11 = &expr_tilde_class;
      uVar3 = extraout_RDX_00;
    }
    else {
      pcVar13 = pcVar14;
      iVar1 = strcmp("fexpr~",pcVar14);
      uVar17 = CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
      if (iVar1 == 0) {
        uVar15 = 4;
        plVar11 = &fexpr_tilde_class;
        uVar3 = extraout_RDX_01;
      }
      else {
        uVar17 = post(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,
                      param_5,param_6,param_7,param_8,"expr_new: bad object name \'%s\'");
        uVar3 = extraout_RDX_02;
        pcVar13 = pcVar14;
      }
    }
  }
  plVar11 = pd_new(uVar17,param_2,param_3,param_4,param_5,param_6,param_7,param_8,*plVar11,pcVar13,
                   uVar3,param_12,param_13,param_14);
  *(uint *)(plVar11 + 6) = *(uint *)(plVar11 + 6) & 0xfffffff8 | uVar15;
  plVar11[0x6e] = 0;
  *(undefined4 *)((long)plVar11 + 0x28fc) = 0;
  *(undefined8 *)((long)plVar11 + 0x34) = 0;
  memset(plVar11 + 10,0,800);
  lVar2 = -800;
  do {
    *(undefined8 *)((long)plVar11 + lVar2 + 0x698) = 0;
    puVar5 = (undefined8 *)((long)plVar11 + lVar2 * 4 + 0x1f98);
    *puVar5 = 0;
    puVar5[1] = 0;
    *(undefined8 *)((long)plVar11 + lVar2 + 0x25d8) = 0;
    puVar5 = (undefined8 *)((long)plVar11 + lVar2 * 4 + 0x1318);
    *puVar5 = 0;
    puVar5[1] = 0;
    *(undefined8 *)((long)plVar11 + lVar2 + 0x22b8) = 0;
    *(undefined8 *)((long)plVar11 + lVar2 + 0x28f8) = 0;
    *(undefined4 *)(plVar11 + 0x51f) = 0;
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0);
  *(undefined4 *)(plVar11 + 0x520) = 0;
  uVar3 = expr_donew(0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar11,
                     param_10,param_11,param_12,param_13,param_14);
  uVar17 = CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02);
  if ((int)uVar3 != 0) {
    pd_error(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)plVar11,"expr: syntax error",extraout_RDX_03,param_12,
             param_13,param_14);
    return (long *)0x0;
  }
  plVar6 = plVar11 + 0xe4;
  uVar15 = 1;
  uVar8 = 5;
  do {
    uVar10 = uVar8 - 4;
    if (plVar6[-0x10] == 0) {
      uVar10 = uVar15;
    }
    uVar15 = uVar8 - 3;
    if (plVar6[-0xc] == 0) {
      uVar15 = uVar10;
    }
    pcVar14 = (char *)(ulong)uVar15;
    plVar4 = (long *)(ulong)(uVar8 - 2);
    if (plVar6[-8] == 0) {
      plVar4 = (long *)pcVar14;
    }
    uVar15 = uVar8 - 1;
    if (plVar6[-4] == 0) {
      uVar15 = (uint)plVar4;
    }
    if (*plVar6 != 0) {
      uVar15 = uVar8;
    }
    plVar6 = plVar6 + 0x14;
    uVar8 = uVar8 + 5;
  } while (uVar8 != 0x69);
  local_44 = 1;
  uVar9 = 0x69;
  if (1 < (int)uVar15) {
    plVar6 = plVar11 + 0xd7;
    local_44 = 1;
    uVar8 = 1;
    do {
      lVar2 = plVar6[1];
      switch(lVar2) {
      case 0:
        pcVar14 = (char *)plVar6;
        floatinlet_new(uVar17,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar11,
                       (long)plVar6,lVar2,uVar9,param_13,param_14);
        uVar17 = CONCAT44(extraout_XMM0_Db_06,extraout_XMM0_Da_06);
        plVar4 = extraout_RDX_05;
        break;
      case 0xb:
      case 0xc:
        pcVar14 = (char *)pd_new(uVar17,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                 exprproxy_class,pcVar14,lVar2,uVar9,param_13,param_14);
        *(long **)((long)pcVar14 + 0x10) = plVar11;
        *(uint *)((long)pcVar14 + 8) = uVar8;
        *(long *)((long)pcVar14 + 0x18) = plVar11[0x6e];
        plVar11[0x6e] = (long)pcVar14;
        plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
        uVar9 = *plVar4 + 0x78;
        uVar16 = extraout_XMM0_Da_03;
        uVar18 = extraout_XMM0_Db_03;
LAB_00584326:
        inlet_new(CONCAT44(uVar18,uVar16),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  (long)plVar11,(long)pcVar14,uVar9,uVar9,param_13,param_14);
        uVar17 = CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_04);
        plVar4 = extraout_RDX_04;
        break;
      case 0xd:
        pcVar14 = (char *)plVar6;
        symbolinlet_new(uVar17,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar11
                        ,(long)plVar6,lVar2,uVar9,param_13,param_14);
        uVar17 = CONCAT44(extraout_XMM0_Db_07,extraout_XMM0_Da_07);
        plVar4 = extraout_RDX_06;
        break;
      case 0xe:
      case 0x12:
        if ((*(byte *)(plVar11 + 6) & 6) != 0) {
          local_44 = local_44 + 1;
          plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
          uVar9 = *plVar4 + 0xf0;
          pcVar14 = (char *)plVar11;
          uVar16 = extraout_XMM0_Da_05;
          uVar18 = extraout_XMM0_Db_05;
          goto LAB_00584326;
        }
        uVar17 = post(uVar17,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      "expr: internal error expr_new");
        lVar2 = plVar6[1];
      default:
        uVar9 = (ulong)(uVar8 + 1);
        pcVar14 = "expr: bad type (%lx) inlet = %d\n";
        uVar17 = pd_error(uVar17,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          (long)plVar11,"expr: bad type (%lx) inlet = %d\n",lVar2,uVar9,param_13,
                          param_14);
        plVar4 = extraout_RDX_07;
      }
      uVar8 = uVar8 + 1;
      plVar6 = plVar6 + 4;
    } while (uVar15 != uVar8);
  }
  iVar1 = (int)plVar11[7];
  if ((*(byte *)(plVar11 + 6) & 6) == 0) {
    if (iVar1 < 1) {
      *(undefined4 *)(plVar11 + 0x51f) = 0x40;
      goto LAB_005844e1;
    }
    lVar2 = 0;
    do {
      plVar6 = outlet_new(uVar17,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          (long)plVar11,0,plVar4,uVar9,param_13,param_14);
      uVar17 = CONCAT44(extraout_XMM0_Db_09,extraout_XMM0_Da_09);
      plVar11[lVar2 + 10] = (long)plVar6;
      lVar2 = lVar2 + 1;
      iVar1 = (int)plVar11[7];
      plVar4 = extraout_RDX_09;
    } while (lVar2 < iVar1);
  }
  else {
    if (0 < iVar1) {
      lVar2 = 0;
      do {
        puVar5 = gensym("signal");
        plVar6 = outlet_new(CONCAT44(extraout_XMM0_Db_08,extraout_XMM0_Da_08),param_2,param_3,
                            param_4,param_5,param_6,param_7,param_8,(long)plVar11,(long)puVar5,
                            extraout_RDX_08,uVar9,param_13,param_14);
        plVar11[lVar2 + 10] = (long)plVar6;
        lVar2 = lVar2 + 1;
        iVar1 = (int)plVar11[7];
      } while (lVar2 < iVar1);
    }
    *(int *)((long)plVar11 + 0x28fc) = local_44;
  }
  *(undefined4 *)(plVar11 + 0x51f) = 0x40;
  if (0 < iVar1) {
    pvVar7 = ex_calloc(0x40,4);
    plVar11[0x457] = (long)pvVar7;
    pvVar7 = ex_calloc((long)(int)plVar11[0x51f],4);
    plVar11[0x4bb] = (long)pvVar7;
    if (1 < (int)plVar11[7]) {
      lVar2 = 0x4bc;
      do {
        pvVar7 = ex_calloc((long)(int)plVar11[0x51f],4);
        plVar11[lVar2 + -100] = (long)pvVar7;
        pvVar7 = ex_calloc((long)(int)plVar11[0x51f],4);
        plVar11[lVar2] = (long)pvVar7;
        lVar12 = lVar2 + -0x4ba;
        lVar2 = lVar2 + 1;
      } while (lVar12 < (int)plVar11[7]);
    }
  }
LAB_005844e1:
  lVar2 = 0;
  do {
    while ((uVar9 = *(ulong *)((long)plVar11 + lVar2 * 4 + 0x6a0), 0x12 < uVar9 ||
           ((0x54000UL >> (uVar9 & 0x3f) & 1) == 0))) {
      *(undefined8 *)((long)plVar11 + lVar2 + 0x1f98) = 0;
      lVar2 = lVar2 + 8;
      if (lVar2 == 800) {
        return plVar11;
      }
    }
    pvVar7 = ex_calloc((long)(int)plVar11[0x51f],4);
    *(void **)((long)plVar11 + lVar2 + 0x1f98) = pvVar7;
    lVar2 = lVar2 + 8;
  } while (lVar2 != 800);
  return plVar11;
}


