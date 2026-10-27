// Function : list_append_anything
// Namespace: 
// Entry    : 00551320
// Prototype: undefined list_append_anything(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, char * param_9, undefined8 param_10, uint param_11, ulong param_12, char * param_13, long param_14)
// Body     : 00551320 - 00551693


void list_append_anything
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               char *param_9,undefined8 param_10,uint param_11,ulong param_12,char *param_13,
               long param_14)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 uVar10;
  undefined8 extraout_RDX_02;
  undefined8 *puVar11;
  long *plVar12;
  undefined4 *puVar13;
  long lVar14;
  char *pcVar15;
  char *pcVar16;
  uint uVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined8 uVar22;
  undefined4 extraout_XMM0_Db_02;
  undefined4 auStack_68 [2];
  ulong local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined4 *local_40;
  undefined8 *local_38;
  
  local_50 = (long)(int)param_11;
  uVar21 = local_50 + *(int *)(param_9 + 0x38) + 1;
  lVar19 = *(int *)(param_9 + 0x38) + local_50;
  iVar18 = (int)lVar19;
  local_48 = param_9;
  if (iVar18 < 99) {
    uVar8 = uVar21 * 0x10;
    puVar5 = auStack_68 + uVar21 * -4;
    puVar13 = puVar5;
  }
  else {
    uVar8 = param_12;
    puVar5 = getbytes((uVar21 & 0xffffffff) << 4);
    puVar13 = auStack_68;
  }
  pcVar16 = local_48;
  *puVar5 = 2;
  *(undefined8 *)(puVar5 + 2) = param_10;
  if (0 < (int)param_11) {
    param_13 = (char *)(ulong)param_11;
    if (param_11 == 1) {
      uVar9 = 0;
    }
    else {
      lVar14 = 0x10;
      uVar9 = 0;
      do {
        puVar6 = (undefined8 *)((param_12 - 0x10) + lVar14);
        uVar22 = puVar6[1];
        *(undefined8 *)((long)puVar5 + lVar14) = *puVar6;
        ((undefined8 *)((long)puVar5 + lVar14))[1] = uVar22;
        uVar22 = ((undefined8 *)(param_12 + lVar14))[1];
        puVar6 = (undefined8 *)((long)puVar5 + lVar14 + 0x10);
        *puVar6 = *(undefined8 *)(param_12 + lVar14);
        puVar6[1] = uVar22;
        uVar9 = uVar9 + 2;
        lVar14 = lVar14 + 0x20;
      } while ((param_11 & 0xfffffffe) != uVar9);
    }
    uVar8 = uVar9;
    if ((param_11 & 1) != 0) {
      uVar8 = uVar9 * 0x10;
      uVar22 = ((undefined8 *)(param_12 + uVar8))[1];
      *(undefined8 *)(puVar5 + uVar9 * 4 + 4) = *(undefined8 *)(param_12 + uVar8);
      *(undefined8 *)((long)(puVar5 + uVar9 * 4 + 4) + 8) = uVar22;
    }
  }
  local_40 = puVar5;
  if (*(int *)(pcVar16 + 0x3c) == 0) {
    uVar17 = *(uint *)(pcVar16 + 0x38);
    pcVar15 = (char *)(ulong)uVar17;
    if (0 < (int)uVar17) {
      param_14 = local_50 * 0x10;
      if (uVar17 == 1) {
        uVar8 = 0;
      }
      else {
        lVar19 = 0;
        uVar8 = 0;
        puVar6 = (undefined8 *)(puVar5 + local_50 * 4);
        do {
          uVar22 = ((undefined8 *)(*(long *)(pcVar16 + 0x40) + lVar19))[1];
          puVar6[2] = *(undefined8 *)(*(long *)(pcVar16 + 0x40) + lVar19);
          puVar6[3] = uVar22;
          puVar11 = (undefined8 *)(*(long *)(pcVar16 + 0x40) + 0x28 + lVar19);
          uVar22 = puVar11[1];
          puVar6[4] = *puVar11;
          puVar6[5] = uVar22;
          uVar8 = uVar8 + 2;
          lVar19 = lVar19 + 0x50;
          puVar6 = puVar6 + 4;
        } while ((uVar17 & 0xfffffffe) != uVar8);
      }
      if ((uVar17 & 1) != 0) {
        puVar6 = (undefined8 *)(*(long *)(pcVar16 + 0x40) + uVar8 * 0x28);
        uVar22 = puVar6[1];
        lVar19 = local_50 * 4;
        *(undefined8 *)(puVar5 + lVar19 + uVar8 * 4 + 4) = *puVar6;
        *(undefined8 *)((long)(puVar5 + lVar19 + uVar8 * 4 + 4) + 8) = uVar22;
      }
    }
    plVar12 = *(long **)(pcVar16 + 0x18);
    *(undefined8 *)(puVar13 + -2) = 0x55166e;
    plVar7 = (long *)__tls_get_addr(&PTR_007159b0);
    puVar5 = local_40;
    lVar19 = *plVar7;
    *(undefined8 *)(puVar13 + -2) = 0x551685;
    outlet_list(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,param_4,param_5,
                param_6,param_7,param_8,plVar12,lVar19 + 0xc0,(int)uVar21,puVar5,pcVar15,param_14);
    puVar5 = local_40;
    goto joined_r0x00551689;
  }
  uVar17 = *(uint *)(pcVar16 + 0x38);
  *(undefined8 *)(puVar13 + -2) = 0x551407;
  puVar6 = getbytes((long)(int)uVar17 * 0x28);
  local_38 = puVar6;
  if (puVar6 == (undefined8 *)0x0) {
    uVar17 = 0;
    *(undefined8 *)(puVar13 + -2) = 0x5514db;
    pd_error(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
             param_7,param_8,0,"list_alloc: out of memory",extraout_RDX,uVar8,param_13,param_14);
LAB_005514db:
    uVar1 = *(uint *)(local_48 + 0x38);
    pcVar16 = local_48;
  }
  else {
    if ((int)uVar17 < 1) goto LAB_005514db;
    local_58 = lVar19;
    local_60 = uVar21;
    puVar11 = puVar6 + 2;
    lVar19 = 0;
    uVar22 = extraout_RDX;
    pcVar16 = local_48;
    do {
      uVar10 = *(undefined8 *)(*(long *)(pcVar16 + 0x40) + lVar19);
      uVar4 = ((undefined8 *)(*(long *)(pcVar16 + 0x40) + lVar19))[1];
      puVar11[-2] = uVar10;
      puVar11[-1] = uVar4;
      if (*(int *)(puVar11 + -2) == 3) {
        puVar2 = (undefined8 *)puVar11[-1];
        *(undefined8 *)(puVar13 + -2) = 0x55147c;
        gpointer_copy(uVar10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,puVar2,puVar11,
                      uVar22,puVar6,pcVar16,param_14,*(undefined1 *)puVar13);
        puVar11[-1] = puVar11;
        uVar22 = extraout_RDX_00;
        pcVar16 = local_48;
      }
      puVar11 = puVar11 + 5;
      lVar19 = lVar19 + 0x28;
    } while ((ulong)uVar17 * 0x28 != lVar19);
    uVar1 = *(uint *)(pcVar16 + 0x38);
    uVar21 = local_60;
    lVar19 = local_58;
  }
  if (0 < (int)uVar1) {
    if (uVar1 == 1) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      puVar11 = local_38;
      puVar6 = (undefined8 *)(local_40 + local_50 * 4);
      do {
        uVar22 = puVar11[1];
        puVar6[2] = *puVar11;
        puVar6[3] = uVar22;
        uVar22 = puVar11[6];
        puVar6[4] = puVar11[5];
        puVar6[5] = uVar22;
        uVar8 = uVar8 + 2;
        puVar11 = puVar11 + 10;
        puVar6 = puVar6 + 4;
      } while ((uVar1 & 0xfffffffe) != uVar8);
    }
    if ((uVar1 & 1) != 0) {
      uVar22 = (local_38 + uVar8 * 5)[1];
      lVar14 = local_50 * 4;
      *(undefined8 *)(puVar5 + lVar14 + uVar8 * 4 + 4) = local_38[uVar8 * 5];
      *(undefined8 *)((long)(puVar5 + lVar14 + uVar8 * 4 + 4) + 8) = uVar22;
    }
  }
  plVar12 = *(long **)(pcVar16 + 0x18);
  *(undefined8 *)(puVar13 + -2) = 0x551562;
  plVar7 = (long *)__tls_get_addr(&PTR_007159b0);
  puVar5 = local_40;
  lVar14 = *plVar7 + 0xc0;
  *(undefined8 *)(puVar13 + -2) = 0x551579;
  outlet_list(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
              param_6,param_7,param_8,plVar12,lVar14,(int)uVar21,puVar5,pcVar16,param_14);
  uVar22 = CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
  if ((int)uVar17 < 1) {
    if (local_38 != (undefined8 *)0x0) goto LAB_005515ba;
  }
  else {
    plVar12 = local_38 + 1;
    lVar20 = 0;
    uVar10 = extraout_RDX_01;
    do {
      if ((int)plVar12[-1] == 3) {
        lVar3 = *plVar12;
        *(undefined8 *)(puVar13 + -2) = 0x5515ae;
        uVar22 = gpointer_unset(uVar22,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar3
                                ,lVar14,uVar10,puVar5,pcVar16,param_14);
        uVar10 = extraout_RDX_02;
      }
      lVar20 = lVar20 + 1;
      plVar12 = plVar12 + 5;
    } while (lVar20 < (int)uVar17);
LAB_005515ba:
    puVar6 = local_38;
    *(undefined8 *)(puVar13 + -2) = 0x5515cb;
    freebytes(puVar6);
  }
  iVar18 = (int)lVar19;
  puVar5 = local_40;
joined_r0x00551689:
  if (0x62 < iVar18) {
    local_40 = puVar5;
    *(undefined8 *)(puVar13 + -2) = 0x5515e1;
    freebytes(puVar5);
  }
  return;
}


