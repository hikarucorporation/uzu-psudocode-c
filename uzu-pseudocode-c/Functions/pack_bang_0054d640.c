// Function : pack_bang
// Namespace: 
// Entry    : 0054d640
// Prototype: undefined pack_bang(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 0054d640 - 0054d7d7


void pack_bang(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              long param_9)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long *plVar10;
  undefined8 **ppuVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 extraout_RDX;
  undefined8 uVar15;
  undefined8 extraout_RDX_00;
  undefined8 *puVar16;
  char *in_R8;
  undefined8 in_R9;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined8 uVar20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 **local_48;
  undefined8 *local_40;
  long local_38;
  
  uVar4 = *(uint *)(param_9 + 0x40);
  uVar13 = (ulong)(int)uVar4;
  puVar12 = &uStack_58 + uVar13 * -2 + 2;
  if ((int)*(uint *)(param_9 + 0x44) < 1) {
    if (0 < (int)uVar4) {
      lVar17 = *(long *)(param_9 + 0x30);
      if (uVar4 == 1) {
        uVar14 = 0;
      }
      else {
        lVar19 = 0x10;
        uVar14 = 0;
        do {
          puVar16 = (undefined8 *)(lVar17 + -0x10 + lVar19);
          uVar20 = puVar16[1];
          puVar18 = (undefined8 *)((long)&uStack_58 + lVar19 + uVar13 * -0x10);
          *puVar18 = *puVar16;
          puVar18[1] = uVar20;
          puVar2 = (undefined4 *)(lVar17 + lVar19);
          uVar7 = puVar2[1];
          uVar8 = puVar2[2];
          uVar9 = puVar2[3];
          puVar1 = (undefined4 *)((long)puVar12 + lVar19);
          *puVar1 = *puVar2;
          puVar1[1] = uVar7;
          puVar1[2] = uVar8;
          puVar1[3] = uVar9;
          uVar14 = uVar14 + 2;
          lVar19 = lVar19 + 0x20;
        } while ((uVar4 & 0xfffffffe) != uVar14);
      }
      if ((uVar4 & 1) != 0) {
        puVar2 = (undefined4 *)(lVar17 + uVar14 * 0x10);
        uVar7 = puVar2[1];
        uVar8 = puVar2[2];
        uVar9 = puVar2[3];
        puVar16 = puVar12 + uVar14 * 2;
        *(undefined4 *)puVar16 = *puVar2;
        *(undefined4 *)((long)puVar16 + 4) = uVar7;
        *(undefined4 *)(puVar16 + 1) = uVar8;
        *(undefined4 *)((long)puVar16 + 0xc) = uVar9;
      }
    }
    puVar18 = (undefined8 *)0x0;
    puVar16 = puVar12;
  }
  else {
    puVar18 = (undefined8 *)
              ((long)puVar12 - ((ulong)*(uint *)(param_9 + 0x44) * 0x18 + 0xf & 0x3ffffffff0));
    puVar16 = puVar18;
    if ((int)uVar4 < 1) {
    }
    else {
      local_38 = param_9;
      local_40 = puVar12;
      ppuVar11 = &local_40 + uVar13 * -2;
      lVar19 = 0;
      lVar17 = 0;
      local_48 = ppuVar11;
      puVar12 = puVar18;
      do {
        lVar5 = *(long *)(param_9 + 0x30);
        uVar20 = *(undefined8 *)(lVar5 + lVar19);
        uVar15 = ((undefined8 *)(lVar5 + lVar19))[1];
        puVar3 = (undefined8 *)((long)ppuVar11 + lVar19 + -8);
        *puVar3 = uVar20;
        puVar3[1] = uVar15;
        if (*(int *)(lVar5 + lVar19) == 3) {
          puVar3 = *(undefined8 **)(lVar5 + 8 + lVar19);
          puVar18[-1] = 0x54d6f3;
          gpointer_copy(uVar20,param_2,param_3,param_4,param_5,param_6,param_7,param_8,puVar3,
                        puVar12,uVar13,ppuVar11,in_R8,in_R9,*(undefined1 *)puVar18);
          *(undefined8 **)((long)local_48 + lVar19) = puVar12;
          puVar12 = puVar12 + 3;
          uVar13 = (ulong)*(uint *)(param_9 + 0x40);
          ppuVar11 = local_48;
        }
        lVar17 = lVar17 + 1;
        lVar19 = lVar19 + 0x10;
      } while (lVar17 < (int)uVar13);
      puVar12 = local_40;
      param_9 = local_38;
    }
  }
  plVar6 = *(long **)(param_9 + 0x18);
  puVar16[-1] = 0x54d787;
  plVar10 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar17 = *plVar10 + 0xc0;
  puVar16[-1] = 0x54d79d;
  outlet_list(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
              param_7,param_8,plVar6,lVar17,(int)uVar13,puVar12,in_R8,in_R9);
  uVar20 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
  if (0 < *(int *)(param_9 + 0x44)) {
    lVar19 = 0;
    uVar15 = extraout_RDX;
    do {
      puVar16[-1] = 0x54d7b8;
      uVar20 = gpointer_unset(uVar20,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              (long)puVar18,lVar17,uVar15,puVar12,in_R8,in_R9);
      lVar19 = lVar19 + 1;
      puVar18 = puVar18 + 3;
      uVar15 = extraout_RDX_00;
    } while (lVar19 < *(int *)(param_9 + 0x44));
  }
  return;
}


