// Function : list_prepend_anything
// Namespace: 
// Entry    : 00551a50
// Prototype: undefined list_prepend_anything(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, uint param_11, long param_12, char * param_13, long param_14)
// Body     : 00551a50 - 00551da3


void list_prepend_anything
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,long param_10,uint param_11,long param_12,char *param_13,long param_14)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 uVar12;
  undefined8 extraout_RDX_02;
  long *plVar13;
  long lVar14;
  uint uVar15;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined8 uVar16;
  undefined4 extraout_XMM0_Db_02;
  long local_58;
  uint local_4c;
  long *local_48;
  long *local_40;
  int local_34;
  
  iVar2 = *(int *)(param_9 + 0x38);
  local_34 = iVar2 + param_11;
  local_4c = iVar2 + param_11 + 1;
  lVar14 = (long)(int)local_4c;
  if (local_34 < 99) {
    plVar6 = &local_58 + lVar14 * -2;
    plVar13 = plVar6;
  }
  else {
    plVar6 = getbytes((ulong)local_4c << 4);
    plVar13 = &local_58;
    iVar2 = *(int *)(param_9 + 0x38);
  }
  lVar8 = (long)iVar2;
  lVar9 = lVar8 * 0x10;
  *(undefined4 *)(plVar6 + lVar8 * 2) = 2;
  plVar6[lVar8 * 2 + 1] = param_10;
  local_40 = plVar6;
  if (0 < (int)param_11) {
    iVar2 = *(int *)(param_9 + 0x38);
    param_14 = (long)iVar2 * 0x10;
    param_13 = (char *)(ulong)param_11;
    if (param_11 == 1) {
      uVar10 = 0;
    }
    else {
      lVar9 = 0x10;
      uVar10 = 0;
      do {
        puVar4 = (undefined8 *)(param_12 + -0x10 + lVar9);
        uVar16 = puVar4[1];
        puVar1 = (undefined8 *)((long)plVar6 + lVar9 + param_14);
        *puVar1 = *puVar4;
        puVar1[1] = uVar16;
        uVar16 = ((undefined8 *)(param_12 + lVar9))[1];
        puVar4 = (undefined8 *)((long)plVar6 + lVar9 + param_14 + 0x10);
        *puVar4 = *(undefined8 *)(param_12 + lVar9);
        puVar4[1] = uVar16;
        uVar10 = uVar10 + 2;
        lVar9 = lVar9 + 0x20;
      } while ((param_11 & 0xfffffffe) != uVar10);
    }
    if ((param_11 & 1) != 0) {
      plVar6 = (long *)(param_12 + uVar10 * 0x10);
      lVar8 = plVar6[1];
      local_40[(long)iVar2 * 2 + uVar10 * 2 + 2] = *plVar6;
      (local_40 + (long)iVar2 * 2 + uVar10 * 2 + 2)[1] = lVar8;
    }
  }
  iVar2 = local_34;
  uVar15 = *(uint *)(param_9 + 0x38);
  if (*(int *)(param_9 + 0x3c) == 0) {
    if (0 < (int)uVar15) {
      if (uVar15 == 1) {
        uVar10 = 0;
      }
      else {
        plVar6 = local_40 + 2;
        lVar14 = 0;
        uVar10 = 0;
        do {
          plVar11 = (long *)(*(long *)(param_9 + 0x40) + lVar14);
          lVar8 = plVar11[1];
          plVar6[-2] = *plVar11;
          plVar6[-1] = lVar8;
          plVar11 = (long *)(*(long *)(param_9 + 0x40) + 0x28 + lVar14);
          lVar8 = plVar11[1];
          *plVar6 = *plVar11;
          plVar6[1] = lVar8;
          uVar10 = uVar10 + 2;
          plVar6 = plVar6 + 4;
          lVar14 = lVar14 + 0x50;
        } while ((uVar15 & 0xfffffffe) != uVar10);
      }
      if ((uVar15 & 1) != 0) {
        plVar6 = (long *)(*(long *)(param_9 + 0x40) + uVar10 * 0x28);
        lVar14 = plVar6[1];
        local_40[uVar10 * 2] = *plVar6;
        (local_40 + uVar10 * 2)[1] = lVar14;
      }
    }
    plVar6 = *(long **)(param_9 + 0x18);
    plVar13[-1] = 0x551d7e;
    plVar7 = (long *)__tls_get_addr(&PTR_007159b0);
    plVar11 = local_40;
    uVar15 = local_4c;
    lVar14 = *plVar7;
    plVar13[-1] = 0x551d95;
    outlet_list(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,param_4,param_5,
                param_6,param_7,param_8,plVar6,lVar14 + 0xc0,uVar15,plVar11,param_13,param_14);
    plVar6 = local_40;
  }
  else {
    plVar13[-1] = 0x551b47;
    local_48 = getbytes((long)(int)uVar15 * 0x28);
    if (local_48 == (long *)0x0) {
      uVar15 = 0;
      plVar13[-1] = 0x551bf8;
      pd_error(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
               param_7,param_8,0,"list_alloc: out of memory",extraout_RDX,lVar9,param_13,param_14);
      uVar3 = *(uint *)(param_9 + 0x38);
      iVar2 = local_34;
    }
    else {
      if (0 < (int)uVar15) {
        local_58 = lVar14;
        plVar6 = local_48 + 2;
        lVar14 = 0;
        uVar16 = extraout_RDX;
        do {
          plVar11 = (long *)(*(long *)(param_9 + 0x40) + lVar14);
          lVar8 = *plVar11;
          lVar5 = plVar11[1];
          plVar6[-2] = lVar8;
          plVar6[-1] = lVar5;
          if ((int)plVar6[-2] == 3) {
            puVar4 = (undefined8 *)plVar6[-1];
            plVar13[-1] = 0x551bac;
            gpointer_copy(lVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,puVar4,
                          plVar6,uVar16,lVar9,param_13,param_14,(char)*plVar13);
            plVar6[-1] = (long)plVar6;
            uVar16 = extraout_RDX_00;
          }
          plVar6 = plVar6 + 5;
          lVar14 = lVar14 + 0x28;
        } while ((ulong)uVar15 * 0x28 != lVar14);
      }
      uVar3 = *(uint *)(param_9 + 0x38);
      iVar2 = local_34;
    }
    if (0 < (int)uVar3) {
      if (uVar3 == 1) {
        uVar10 = 0;
      }
      else {
        plVar6 = local_40 + 2;
        uVar10 = 0;
        plVar11 = local_48;
        do {
          lVar14 = plVar11[1];
          plVar6[-2] = *plVar11;
          plVar6[-1] = lVar14;
          lVar14 = plVar11[6];
          *plVar6 = plVar11[5];
          plVar6[1] = lVar14;
          uVar10 = uVar10 + 2;
          plVar6 = plVar6 + 4;
          plVar11 = plVar11 + 10;
        } while ((uVar3 & 0xfffffffe) != uVar10);
      }
      if ((uVar3 & 1) != 0) {
        lVar14 = (local_48 + uVar10 * 5)[1];
        local_40[uVar10 * 2] = local_48[uVar10 * 5];
        (local_40 + uVar10 * 2)[1] = lVar14;
      }
    }
    plVar6 = *(long **)(param_9 + 0x18);
    local_34 = iVar2;
    plVar13[-1] = 0x551c72;
    plVar7 = (long *)__tls_get_addr(&PTR_007159b0);
    plVar11 = local_40;
    uVar3 = local_4c;
    lVar14 = *plVar7 + 0xc0;
    plVar13[-1] = 0x551c89;
    outlet_list(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
                param_6,param_7,param_8,plVar6,lVar14,uVar3,plVar11,param_13,param_14);
    uVar16 = CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
    if ((int)uVar15 < 1) {
      plVar6 = local_40;
      if (local_48 == (long *)0x0) goto joined_r0x00551d99;
    }
    else {
      plVar6 = local_48 + 1;
      lVar8 = 0;
      uVar12 = extraout_RDX_01;
      do {
        if ((int)plVar6[-1] == 3) {
          lVar9 = *plVar6;
          plVar13[-1] = 0x551cbe;
          uVar16 = gpointer_unset(uVar16,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                  lVar9,lVar14,uVar12,plVar11,param_13,param_14);
          uVar12 = extraout_RDX_02;
        }
        lVar8 = lVar8 + 1;
        plVar6 = plVar6 + 5;
      } while (lVar8 < (int)uVar15);
    }
    plVar6 = local_48;
    plVar13[-1] = 0x551cdb;
    freebytes(plVar6);
    plVar6 = local_40;
  }
joined_r0x00551d99:
  if (0x62 < iVar2) {
    local_40 = plVar6;
    plVar13[-1] = 0x551cf1;
    freebytes(plVar6);
  }
  return;
}


