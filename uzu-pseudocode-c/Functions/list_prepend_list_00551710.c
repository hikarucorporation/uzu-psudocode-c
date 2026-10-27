// Function : list_prepend_list
// Namespace: 
// Entry    : 00551710
// Prototype: undefined list_prepend_list(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, uint param_11, long param_12, char * param_13, undefined8 param_14)
// Body     : 00551710 - 00551a43


void list_prepend_list(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      long param_9,undefined8 param_10,uint param_11,long param_12,char *param_13,
                      undefined8 param_14)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined1 *puVar6;
  long *plVar7;
  ulong uVar8;
  undefined1 *puVar9;
  ulong uVar10;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 uVar11;
  undefined8 extraout_RDX_02;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined8 uVar19;
  undefined4 extraout_XMM0_Db_02;
  undefined1 auStack_58 [8];
  ulong local_50;
  undefined8 *local_48;
  uint local_3c;
  undefined1 *local_38;
  
  iVar1 = *(int *)(param_9 + 0x38);
  local_3c = iVar1 + param_11;
  uVar8 = (ulong)local_3c;
  uVar15 = (ulong)local_3c;
  if ((int)local_3c < 100) {
    uVar8 = (long)(int)local_3c * 0x10;
    local_38 = auStack_58 + (long)(int)local_3c * -0x10;
    uVar5 = local_3c;
    puVar6 = local_38;
  }
  else {
    local_38 = getbytes(uVar15 << 4);
    iVar1 = *(int *)(param_9 + 0x38);
    uVar5 = local_3c;
    puVar6 = auStack_58;
  }
  if (0 < (int)param_11) {
    if (param_11 == 1) {
      uVar10 = 0;
    }
    else {
      lVar16 = 0x10;
      uVar10 = 0;
      do {
        puVar12 = (undefined8 *)(param_12 + -0x10 + lVar16);
        uVar19 = puVar12[1];
        *(undefined8 *)(local_38 + lVar16 + (long)iVar1 * 0x10 + -0x10) = *puVar12;
        *(undefined8 *)((long)(local_38 + lVar16 + (long)iVar1 * 0x10 + -0x10) + 8) = uVar19;
        uVar19 = ((undefined8 *)(param_12 + lVar16))[1];
        *(undefined8 *)(local_38 + lVar16 + (long)iVar1 * 0x10) = *(undefined8 *)(param_12 + lVar16)
        ;
        *(undefined8 *)((long)(local_38 + lVar16 + (long)iVar1 * 0x10) + 8) = uVar19;
        uVar10 = uVar10 + 2;
        lVar16 = lVar16 + 0x20;
      } while ((param_11 & 0xfffffffe) != uVar10);
    }
    uVar8 = (ulong)param_11;
    if ((param_11 & 1) != 0) {
      puVar12 = (undefined8 *)(param_12 + uVar10 * 0x10);
      uVar19 = puVar12[1];
      *(undefined8 *)(local_38 + uVar10 * 0x10 + (long)iVar1 * 0x10) = *puVar12;
      *(undefined8 *)((long)(local_38 + uVar10 * 0x10 + (long)iVar1 * 0x10) + 8) = uVar19;
    }
  }
  uVar18 = *(uint *)(param_9 + 0x38);
  local_3c = uVar5;
  if (*(int *)(param_9 + 0x3c) == 0) {
    if (0 < (int)uVar18) {
      if (uVar18 == 1) {
        uVar8 = 0;
      }
      else {
        puVar12 = (undefined8 *)(local_38 + 0x10);
        lVar16 = 0;
        uVar8 = 0;
        do {
          puVar14 = (undefined8 *)(*(long *)(param_9 + 0x40) + lVar16);
          uVar19 = puVar14[1];
          puVar12[-2] = *puVar14;
          puVar12[-1] = uVar19;
          puVar14 = (undefined8 *)(*(long *)(param_9 + 0x40) + 0x28 + lVar16);
          uVar19 = puVar14[1];
          *puVar12 = *puVar14;
          puVar12[1] = uVar19;
          uVar8 = uVar8 + 2;
          puVar12 = puVar12 + 4;
          lVar16 = lVar16 + 0x50;
        } while ((uVar18 & 0xfffffffe) != uVar8);
      }
      if ((uVar18 & 1) != 0) {
        puVar12 = (undefined8 *)(*(long *)(param_9 + 0x40) + uVar8 * 0x28);
        uVar19 = puVar12[1];
        *(undefined8 *)(local_38 + uVar8 * 0x10) = *puVar12;
        *(undefined8 *)((long)(local_38 + uVar8 * 0x10) + 8) = uVar19;
      }
    }
    plVar13 = *(long **)(param_9 + 0x18);
    *(undefined8 *)(puVar6 + -8) = 0x551a1e;
    plVar7 = (long *)__tls_get_addr(&PTR_007159b0);
    puVar9 = local_38;
    lVar16 = *plVar7;
    *(undefined8 *)(puVar6 + -8) = 0x551a35;
    outlet_list(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,param_4,param_5,
                param_6,param_7,param_8,plVar13,lVar16 + 0xc0,uVar5,puVar9,param_13,param_14);
    puVar9 = local_38;
  }
  else {
    *(undefined8 *)(puVar6 + -8) = 0x5517eb;
    local_48 = getbytes((long)(int)uVar18 * 0x28);
    if (local_48 == (undefined8 *)0x0) {
      uVar18 = 0;
      *(undefined8 *)(puVar6 + -8) = 0x551898;
      pd_error(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
               param_7,param_8,0,"list_alloc: out of memory",extraout_RDX,uVar8,param_13,param_14);
      uVar2 = *(uint *)(param_9 + 0x38);
      uVar5 = local_3c;
    }
    else {
      if (0 < (int)uVar18) {
        local_50 = uVar15;
        puVar12 = local_48 + 2;
        lVar16 = 0;
        uVar19 = extraout_RDX;
        do {
          puVar14 = (undefined8 *)(*(long *)(param_9 + 0x40) + lVar16);
          uVar11 = *puVar14;
          uVar4 = puVar14[1];
          puVar12[-2] = uVar11;
          puVar12[-1] = uVar4;
          if (*(int *)(puVar12 + -2) == 3) {
            puVar14 = (undefined8 *)puVar12[-1];
            *(undefined8 *)(puVar6 + -8) = 0x55184c;
            gpointer_copy(uVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,puVar14,
                          puVar12,uVar19,uVar8,param_13,param_14,*puVar6);
            puVar12[-1] = puVar12;
            uVar19 = extraout_RDX_00;
          }
          puVar12 = puVar12 + 5;
          lVar16 = lVar16 + 0x28;
        } while ((ulong)uVar18 * 0x28 != lVar16);
      }
      uVar2 = *(uint *)(param_9 + 0x38);
      uVar5 = local_3c;
    }
    if (0 < (int)uVar2) {
      if (uVar2 == 1) {
        uVar8 = 0;
      }
      else {
        puVar12 = (undefined8 *)(local_38 + 0x10);
        uVar8 = 0;
        puVar14 = local_48;
        do {
          uVar19 = puVar14[1];
          puVar12[-2] = *puVar14;
          puVar12[-1] = uVar19;
          uVar19 = puVar14[6];
          *puVar12 = puVar14[5];
          puVar12[1] = uVar19;
          uVar8 = uVar8 + 2;
          puVar12 = puVar12 + 4;
          puVar14 = puVar14 + 10;
        } while ((uVar2 & 0xfffffffe) != uVar8);
      }
      if ((uVar2 & 1) != 0) {
        uVar19 = (local_48 + uVar8 * 5)[1];
        *(undefined8 *)(local_38 + uVar8 * 0x10) = local_48[uVar8 * 5];
        *(undefined8 *)((long)(local_38 + uVar8 * 0x10) + 8) = uVar19;
      }
    }
    plVar13 = *(long **)(param_9 + 0x18);
    local_3c = uVar5;
    *(undefined8 *)(puVar6 + -8) = 0x551912;
    plVar7 = (long *)__tls_get_addr(&PTR_007159b0);
    puVar9 = local_38;
    lVar16 = *plVar7 + 0xc0;
    *(undefined8 *)(puVar6 + -8) = 0x551929;
    outlet_list(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
                param_6,param_7,param_8,plVar13,lVar16,uVar5,puVar9,param_13,param_14);
    uVar19 = CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
    if ((int)uVar18 < 1) {
      puVar9 = local_38;
      if (local_48 == (undefined8 *)0x0) goto joined_r0x00551a39;
    }
    else {
      plVar13 = local_48 + 1;
      lVar17 = 0;
      uVar11 = extraout_RDX_01;
      do {
        if ((int)plVar13[-1] == 3) {
          lVar3 = *plVar13;
          *(undefined8 *)(puVar6 + -8) = 0x55195e;
          uVar19 = gpointer_unset(uVar19,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                  lVar3,lVar16,uVar11,puVar9,param_13,param_14);
          uVar11 = extraout_RDX_02;
        }
        lVar17 = lVar17 + 1;
        plVar13 = plVar13 + 5;
      } while (lVar17 < (int)uVar18);
    }
    puVar12 = local_48;
    *(undefined8 *)(puVar6 + -8) = 0x55197b;
    freebytes(puVar12);
    puVar9 = local_38;
  }
joined_r0x00551a39:
  if (99 < (int)uVar5) {
    local_38 = puVar9;
    *(undefined8 *)(puVar6 + -8) = 0x551991;
    freebytes(puVar9);
  }
  return;
}


