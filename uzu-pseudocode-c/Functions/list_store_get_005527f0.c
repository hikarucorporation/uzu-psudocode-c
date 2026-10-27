// Function : list_store_get
// Namespace: 
// Entry    : 005527f0
// Prototype: undefined list_store_get(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005527f0 - 00552ae2


/* WARNING: Type propagation algorithm not settling */

void list_store_get(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                   char *param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 *****pppppuVar9;
  undefined8 ******ppppppuVar10;
  undefined8 *puVar11;
  undefined8 ******ppppppuVar12;
  long *plVar13;
  uint uVar14;
  undefined8 ******ppppppuVar15;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 uVar16;
  undefined8 extraout_RDX_02;
  uint uVar17;
  undefined8 *puVar18;
  long *plVar19;
  ulong uVar20;
  long lVar21;
  uint uVar22;
  long lVar23;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined8 uVar24;
  undefined4 extraout_XMM0_Db_02;
  undefined8 ******local_48;
  ulong local_40;
  undefined8 *local_38;
  
  uVar17 = (uint)(float)param_1;
  uVar22 = (uint)(float)param_2;
  if (uVar22 == 0) {
    uVar22 = 1;
  }
  else if (((int)uVar22 < 0) &&
          (uVar22 = *(int *)(param_9 + 0x38) - uVar17,
          uVar22 == 0 || *(int *)(param_9 + 0x38) < (int)uVar17)) goto LAB_00552837;
  if (((int)uVar17 < 0) || (*(int *)(param_9 + 0x38) < (int)(uVar22 + uVar17))) {
LAB_00552837:
    outlet_bang(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                *(long **)(param_9 + 0x50));
    return;
  }
  uVar20 = (ulong)uVar22;
  if (uVar22 < 100) {
    ppppppuVar12 = &local_48 + uVar20 * -2;
    iVar3 = *(int *)(param_9 + 0x3c);
    ppppppuVar10 = ppppppuVar12;
  }
  else {
    ppppppuVar12 = getbytes(uVar20 * 0x10);
    iVar3 = *(int *)(param_9 + 0x3c);
    ppppppuVar10 = &local_48;
  }
  if (iVar3 == 0) {
    if (uVar22 == 1) {
      uVar20 = 0;
    }
    else {
      ppppppuVar15 = ppppppuVar12 + 2;
      lVar23 = (ulong)uVar17 * 0x28;
      uVar20 = 0;
      do {
        puVar11 = (undefined8 *)(*(long *)(param_9 + 0x40) + lVar23);
        pppppuVar9 = (undefined8 *****)puVar11[1];
        ppppppuVar15[-2] = (undefined8 *****)*puVar11;
        ppppppuVar15[-1] = pppppuVar9;
        puVar2 = (undefined4 *)(*(long *)(param_9 + 0x40) + 0x28 + lVar23);
        uVar5 = puVar2[1];
        uVar6 = puVar2[2];
        uVar7 = puVar2[3];
        *(undefined4 *)ppppppuVar15 = *puVar2;
        *(undefined4 *)((long)ppppppuVar15 + 4) = uVar5;
        *(undefined4 *)(ppppppuVar15 + 1) = uVar6;
        *(undefined4 *)((long)ppppppuVar15 + 0xc) = uVar7;
        uVar20 = uVar20 + 2;
        ppppppuVar15 = ppppppuVar15 + 4;
        lVar23 = lVar23 + 0x50;
      } while ((uVar22 & 0xfffffffe) != uVar20);
    }
    if ((uVar22 & 1) != 0) {
      puVar2 = (undefined4 *)(*(long *)(param_9 + 0x40) + (uVar17 + uVar20) * 0x28);
      uVar5 = puVar2[1];
      uVar6 = puVar2[2];
      uVar7 = puVar2[3];
      ppppppuVar15 = ppppppuVar12 + uVar20 * 2;
      *(undefined4 *)ppppppuVar15 = *puVar2;
      *(undefined4 *)((long)ppppppuVar15 + 4) = uVar5;
      *(undefined4 *)(ppppppuVar15 + 1) = uVar6;
      *(undefined4 *)((long)ppppppuVar15 + 0xc) = uVar7;
    }
    plVar19 = *(long **)(param_9 + 0x48);
    ppppppuVar10[-1] = (undefined8 *****)0x552abe;
    plVar13 = (long *)__tls_get_addr(&PTR_007159b0);
    lVar23 = *plVar13;
    ppppppuVar10[-1] = (undefined8 *****)0x552ad4;
    outlet_list(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,param_4,param_5,
                param_6,param_7,param_8,plVar19,lVar23 + 0xc0,uVar22,ppppppuVar12,param_13,param_14)
    ;
    goto joined_r0x00552ad8;
  }
  ppppppuVar10[-1] = (undefined8 *****)0x55288f;
  puVar11 = getbytes(uVar20 * 0x28);
  local_40 = uVar20;
  local_38 = puVar11;
  if (puVar11 == (undefined8 *)0x0) {
    uVar17 = 0;
    ppppppuVar10[-1] = (undefined8 *****)0x552942;
    pd_error(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
             param_7,param_8,0,"list_alloc: out of memory",extraout_RDX,param_12,param_13,param_14);
    uVar14 = 0;
    if (uVar22 == 1) goto LAB_0055292b;
LAB_00552948:
    uVar17 = uVar14;
    uVar14 = (uint)local_40;
    ppppppuVar15 = ppppppuVar12 + 2;
    uVar20 = 0;
    puVar11 = local_38;
    do {
      pppppuVar9 = (undefined8 *****)puVar11[1];
      ppppppuVar15[-2] = (undefined8 *****)*puVar11;
      ppppppuVar15[-1] = pppppuVar9;
      uVar5 = *(undefined4 *)((long)puVar11 + 0x2c);
      uVar6 = *(undefined4 *)(puVar11 + 6);
      uVar7 = *(undefined4 *)((long)puVar11 + 0x34);
      *(undefined4 *)ppppppuVar15 = *(undefined4 *)(puVar11 + 5);
      *(undefined4 *)((long)ppppppuVar15 + 4) = uVar5;
      *(undefined4 *)(ppppppuVar15 + 1) = uVar6;
      *(undefined4 *)((long)ppppppuVar15 + 0xc) = uVar7;
      uVar20 = uVar20 + 2;
      ppppppuVar15 = ppppppuVar15 + 4;
      puVar11 = puVar11 + 10;
    } while ((uVar14 & 0xfffffffe) != uVar20);
LAB_0055297f:
    if ((local_40 & 1) != 0) {
      puVar11 = local_38 + uVar20 * 5;
      uVar5 = *(undefined4 *)((long)puVar11 + 4);
      uVar6 = *(undefined4 *)(puVar11 + 1);
      uVar7 = *(undefined4 *)((long)puVar11 + 0xc);
      ppppppuVar15 = ppppppuVar12 + uVar20 * 2;
      *(undefined4 *)ppppppuVar15 = *(undefined4 *)puVar11;
      *(undefined4 *)((long)ppppppuVar15 + 4) = uVar5;
      *(undefined4 *)(ppppppuVar15 + 1) = uVar6;
      *(undefined4 *)((long)ppppppuVar15 + 0xc) = uVar7;
    }
  }
  else {
    local_48 = ppppppuVar12;
    puVar18 = puVar11 + 2;
    lVar23 = (ulong)uVar17 * 0x28;
    uVar24 = extraout_RDX;
    do {
      puVar1 = (undefined8 *)(*(long *)(param_9 + 0x40) + lVar23);
      uVar16 = *puVar1;
      uVar8 = puVar1[1];
      puVar18[-2] = uVar16;
      puVar18[-1] = uVar8;
      if (*(int *)(puVar18 + -2) == 3) {
        puVar1 = (undefined8 *)puVar18[-1];
        ppppppuVar10[-1] = (undefined8 *****)0x5528ed;
        gpointer_copy(uVar16,param_2,param_3,param_4,param_5,param_6,param_7,param_8,puVar1,puVar18,
                      uVar24,puVar11,param_13,param_14,*(undefined1 *)ppppppuVar10);
        puVar18[-1] = puVar18;
        uVar24 = extraout_RDX_00;
      }
      puVar18 = puVar18 + 5;
      lVar23 = lVar23 + 0x28;
      uVar20 = uVar20 - 1;
    } while (uVar20 != 0);
    ppppppuVar12 = local_48;
    uVar17 = uVar22;
    if (0 < (int)uVar22) {
      uVar14 = uVar22;
      if (uVar22 != 1) goto LAB_00552948;
LAB_0055292b:
      uVar20 = 0;
      goto LAB_0055297f;
    }
  }
  plVar19 = *(long **)(param_9 + 0x48);
  ppppppuVar10[-1] = (undefined8 *****)0x5529b1;
  plVar13 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar23 = *plVar13 + 0xc0;
  ppppppuVar10[-1] = (undefined8 *****)0x5529c7;
  ppppppuVar15 = ppppppuVar12;
  outlet_list(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
              param_6,param_7,param_8,plVar19,lVar23,uVar22,ppppppuVar12,param_13,param_14);
  uVar24 = CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
  if (0 < (int)uVar17) {
    plVar19 = local_38 + 1;
    lVar21 = 0;
    uVar16 = extraout_RDX_01;
    do {
      if ((int)plVar19[-1] == 3) {
        lVar4 = *plVar19;
        ppppppuVar10[-1] = (undefined8 *****)0x5529fe;
        uVar24 = gpointer_unset(uVar24,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar4
                                ,lVar23,uVar16,ppppppuVar15,param_13,param_14);
        uVar16 = extraout_RDX_02;
      }
      lVar21 = lVar21 + 1;
      plVar19 = plVar19 + 5;
    } while (lVar21 < (int)uVar17);
  }
  puVar11 = local_38;
  ppppppuVar10[-1] = (undefined8 *****)0x552a14;
  freebytes(puVar11);
joined_r0x00552ad8:
  if (99 < uVar22) {
    ppppppuVar10[-1] = (undefined8 *****)0x552a2c;
    freebytes(ppppppuVar12);
  }
  return;
}


