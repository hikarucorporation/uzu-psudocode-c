// Function : list_store_list
// Namespace: 
// Entry    : 00551e20
// Prototype: undefined list_store_list(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, uint param_11, ulong param_12, char * param_13, ulong * param_14)
// Body     : 00551e20 - 00552179


void list_store_list(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9,undefined8 param_10,uint param_11,ulong param_12,char *param_13,
                    ulong *param_14)

{
  ulong *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *puVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 uVar12;
  undefined8 extraout_RDX_02;
  ulong *puVar13;
  char *pcVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined8 uVar20;
  undefined4 extraout_XMM0_Db_02;
  ulong local_58 [3];
  ulong *local_40;
  ulong *local_38;
  
  local_58[2] = (ulong)(int)param_11;
  uVar16 = (long)*(int *)(param_9 + 0x38) + local_58[2];
  iVar15 = (int)uVar16;
  if (iVar15 < 100) {
    uVar10 = uVar16 * 0x10;
    puVar8 = local_58 + uVar16 * -2;
    puVar7 = puVar8;
  }
  else {
    uVar10 = param_12;
    puVar8 = getbytes((uVar16 & 0xffffffff) << 4);
    puVar7 = local_58;
  }
  if (0 < (int)param_11) {
    if (param_11 == 1) {
      uVar11 = 0;
    }
    else {
      lVar17 = 0x10;
      uVar11 = 0;
      do {
        puVar4 = (undefined8 *)((param_12 - 0x10) + lVar17);
        uVar20 = puVar4[1];
        puVar2 = (undefined8 *)((long)puVar8 + lVar17 + -0x10);
        *puVar2 = *puVar4;
        puVar2[1] = uVar20;
        uVar20 = ((undefined8 *)(param_12 + lVar17))[1];
        *(undefined8 *)((long)puVar8 + lVar17) = *(undefined8 *)(param_12 + lVar17);
        ((undefined8 *)((long)puVar8 + lVar17))[1] = uVar20;
        uVar11 = uVar11 + 2;
        lVar17 = lVar17 + 0x20;
      } while ((param_11 & 0xfffffffe) != uVar11);
    }
    uVar10 = uVar11;
    if ((param_11 & 1) != 0) {
      uVar10 = uVar11 * 0x10;
      uVar6 = ((ulong *)(param_12 + uVar10))[1];
      puVar8[uVar11 * 2] = *(ulong *)(param_12 + uVar10);
      (puVar8 + uVar11 * 2)[1] = uVar6;
    }
  }
  local_40 = puVar8;
  if (*(int *)(param_9 + 0x3c) == 0) {
    uVar18 = *(uint *)(param_9 + 0x38);
    pcVar14 = (char *)(ulong)uVar18;
    if (0 < (int)uVar18) {
      param_14 = (ulong *)(local_58[2] * 0x10);
      if (uVar18 == 1) {
        uVar16 = 0;
      }
      else {
        puVar8 = (ulong *)((long)param_14 + (long)puVar8) + 2;
        lVar17 = 0;
        uVar16 = 0;
        do {
          puVar13 = (ulong *)(*(long *)(param_9 + 0x40) + lVar17);
          uVar10 = puVar13[1];
          puVar8[-2] = *puVar13;
          puVar8[-1] = uVar10;
          puVar13 = (ulong *)(*(long *)(param_9 + 0x40) + 0x28 + lVar17);
          uVar10 = puVar13[1];
          *puVar8 = *puVar13;
          puVar8[1] = uVar10;
          uVar16 = uVar16 + 2;
          puVar8 = puVar8 + 4;
          lVar17 = lVar17 + 0x50;
        } while ((uVar18 & 0xfffffffe) != uVar16);
      }
      if ((uVar18 & 1) != 0) {
        param_14 = (ulong *)((long)param_14 + (long)local_40);
        puVar8 = (ulong *)(*(long *)(param_9 + 0x40) + uVar16 * 0x28);
        uVar10 = puVar8[1];
        param_14[uVar16 * 2] = *puVar8;
        (param_14 + uVar16 * 2)[1] = uVar10;
      }
    }
    puVar8 = local_40;
    plVar5 = *(long **)(param_9 + 0x48);
    puVar7[-1] = 0x552155;
    plVar9 = (long *)__tls_get_addr(&PTR_007159b0);
    lVar17 = *plVar9;
    puVar7[-1] = 0x55216b;
    outlet_list(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,param_4,param_5,
                param_6,param_7,param_8,plVar5,lVar17 + 0xc0,iVar15,puVar8,pcVar14,param_14);
    puVar8 = local_40;
  }
  else {
    uVar18 = *(uint *)(param_9 + 0x38);
    puVar7[-1] = 0x551ef5;
    puVar8 = getbytes((long)(int)uVar18 * 0x28);
    local_38 = puVar8;
    if (puVar8 == (ulong *)0x0) {
      uVar18 = 0;
      puVar7[-1] = 0x551fb7;
      pd_error(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
               param_7,param_8,0,"list_alloc: out of memory",extraout_RDX,uVar10,param_13,param_14);
      uVar3 = *(uint *)(param_9 + 0x38);
    }
    else {
      if (0 < (int)uVar18) {
        local_58[1] = uVar16;
        local_58[0] = uVar16 & 0xffffffff;
        puVar13 = puVar8 + 2;
        lVar17 = 0;
        uVar20 = extraout_RDX;
        do {
          puVar1 = (ulong *)(*(long *)(param_9 + 0x40) + lVar17);
          uVar16 = *puVar1;
          uVar10 = puVar1[1];
          puVar13[-2] = uVar16;
          puVar13[-1] = uVar10;
          if ((int)puVar13[-2] == 3) {
            puVar4 = (undefined8 *)puVar13[-1];
            puVar7[-1] = 0x551f5c;
            gpointer_copy(uVar16,param_2,param_3,param_4,param_5,param_6,param_7,param_8,puVar4,
                          puVar13,uVar20,puVar8,param_13,param_14,(char)*puVar7);
            puVar13[-1] = (ulong)puVar13;
            uVar20 = extraout_RDX_00;
          }
          puVar13 = puVar13 + 5;
          lVar17 = lVar17 + 0x28;
        } while ((ulong)uVar18 * 0x28 != lVar17);
        uVar16 = local_58[1];
      }
      uVar3 = *(uint *)(param_9 + 0x38);
    }
    if (0 < (int)uVar3) {
      if (uVar3 == 1) {
        uVar10 = 0;
      }
      else {
        puVar13 = local_40 + local_58[2] * 2 + 2;
        uVar10 = 0;
        puVar8 = local_38;
        do {
          uVar11 = puVar8[1];
          puVar13[-2] = *puVar8;
          puVar13[-1] = uVar11;
          uVar11 = puVar8[6];
          *puVar13 = puVar8[5];
          puVar13[1] = uVar11;
          uVar10 = uVar10 + 2;
          puVar13 = puVar13 + 4;
          puVar8 = puVar8 + 10;
        } while ((uVar3 & 0xfffffffe) != uVar10);
      }
      if ((uVar3 & 1) != 0) {
        uVar11 = (local_38 + uVar10 * 5)[1];
        local_40[local_58[2] * 2 + uVar10 * 2] = local_38[uVar10 * 5];
        (local_40 + local_58[2] * 2 + uVar10 * 2)[1] = uVar11;
      }
    }
    plVar5 = *(long **)(param_9 + 0x48);
    puVar7[-1] = 0x552042;
    plVar9 = (long *)__tls_get_addr(&PTR_007159b0);
    puVar8 = local_40;
    lVar17 = *plVar9 + 0xc0;
    iVar15 = (int)uVar16;
    puVar7[-1] = 0x552059;
    outlet_list(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
                param_6,param_7,param_8,plVar5,lVar17,iVar15,puVar8,param_13,param_14);
    uVar20 = CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
    if ((int)uVar18 < 1) {
      puVar8 = local_40;
      if (local_38 == (ulong *)0x0) goto joined_r0x0055216f;
    }
    else {
      puVar13 = local_38 + 1;
      lVar19 = 0;
      uVar12 = extraout_RDX_01;
      do {
        if ((int)puVar13[-1] == 3) {
          uVar16 = *puVar13;
          puVar7[-1] = 0x55208e;
          uVar20 = gpointer_unset(uVar20,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                  uVar16,lVar17,uVar12,puVar8,param_13,param_14);
          uVar12 = extraout_RDX_02;
        }
        lVar19 = lVar19 + 1;
        puVar13 = puVar13 + 5;
      } while (lVar19 < (int)uVar18);
    }
    puVar8 = local_38;
    puVar7[-1] = 0x5520ab;
    freebytes(puVar8);
    puVar8 = local_40;
  }
joined_r0x0055216f:
  if (99 < iVar15) {
    local_40 = puVar8;
    puVar7[-1] = 0x5520c1;
    freebytes(puVar8);
  }
  return;
}


