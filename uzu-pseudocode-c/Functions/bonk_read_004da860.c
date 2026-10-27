// Function : bonk_read
// Namespace: 
// Entry    : 004da860
// Prototype: undefined bonk_read(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10)
// Body     : 004da860 - 004dac2c


void bonk_read(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              long param_9,undefined8 *param_10)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  FILE *__stream;
  void *pvVar8;
  undefined4 *puVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  int iVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 uVar24;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 uVar26;
  undefined8 uVar25;
  undefined4 extraout_XMM0_Db_04;
  ulong local_748;
  undefined8 local_740;
  undefined8 local_738;
  undefined8 uStack_730;
  undefined8 local_728 [10];
  undefined8 auStack_6d8 [88];
  char local_418 [1000];
  
  iVar7 = canvas_open(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      *(long *)(param_9 + 0x40),(char *)*param_10,"",local_418,&local_740,1000,0);
  uVar24 = extraout_XMM0_Da;
  uVar26 = extraout_XMM0_Db;
  if ((iVar7 < 0) ||
     (__stream = fdopen(iVar7,"r"), uVar24 = extraout_XMM0_Da_00, uVar26 = extraout_XMM0_Db_00,
     __stream == (FILE *)0x0)) {
    post(CONCAT44(uVar26,uVar24),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
         "%s: open failed");
    return;
  }
  pvVar8 = resizebytes(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,
                       param_5,param_6,param_7,param_8,*(void **)(param_9 + 0x2620),
                       (long)*(int *)(param_9 + 0x2634) * 800,0);
  *(void **)(param_9 + 0x2620) = pvVar8;
  uVar16 = *(uint *)(param_9 + 0x50);
  lVar23 = 0x70;
  lVar22 = 0;
  local_748 = 0;
  uVar24 = extraout_XMM0_Da_01;
  uVar26 = extraout_XMM0_Db_01;
  do {
    if (uVar16 != 0) {
      puVar13 = &local_738;
      do {
        iVar7 = __isoc99_fscanf(__stream,"%f",puVar13);
        if (iVar7 < 1) {
          iVar17 = (int)local_748;
          iVar7 = (int)((long)((ulong)(uint)(iVar17 >> 0x1f) << 0x20 | local_748 & 0xffffffff) %
                       (long)*(int *)(param_9 + 0x2630));
          uVar24 = extraout_XMM0_Da_02;
          uVar26 = extraout_XMM0_Db_02;
          if (iVar7 != 0) {
            uVar25 = post(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,param_4,
                          param_5,param_6,param_7,param_8,
                          "bonk_read: %d templates not a multiple of %d; dropping extras");
            iVar17 = iVar17 - iVar7;
            pvVar8 = resizebytes(uVar25,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                 *(void **)(param_9 + 0x2620),(local_748 & 0xffffffff) * 800,
                                 (long)iVar17 * 800);
            *(void **)(param_9 + 0x2620) = pvVar8;
            uVar24 = extraout_XMM0_Da_04;
            uVar26 = extraout_XMM0_Db_04;
          }
          post(CONCAT44(uVar26,uVar24),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
               "bonk: read %d templates\n");
          *(int *)(param_9 + 0x2634) = iVar17;
          fclose(__stream);
          return;
        }
        uVar16 = uVar16 - 1;
        puVar13 = (undefined8 *)((long)puVar13 + 4);
      } while (uVar16 != 0);
      pvVar8 = *(void **)(param_9 + 0x2620);
      uVar24 = extraout_XMM0_Da_02;
      uVar26 = extraout_XMM0_Db_02;
    }
    uVar14 = local_748 * 800;
    pvVar8 = resizebytes(CONCAT44(uVar26,uVar24),param_2,param_3,param_4,param_5,param_6,param_7,
                         param_8,pvVar8,uVar14,uVar14 + 800);
    *(void **)(param_9 + 0x2620) = pvVar8;
    uVar16 = *(uint *)(param_9 + 0x50);
    uVar24 = extraout_XMM0_Da_03;
    uVar26 = extraout_XMM0_Db_03;
    if (uVar16 != 0) {
      puVar9 = (undefined4 *)((long)pvVar8 + uVar14);
      uVar18 = (ulong)(uVar16 - 1);
      uVar12 = uVar16;
      if (uVar16 - 1 < 7) {
        puVar13 = &local_738;
      }
      else if (((void *)((long)local_728 + uVar18 * 4 + -0xc) <= (void *)((long)pvVar8 + uVar14)) ||
              (puVar13 = &local_738,
              (undefined8 *)((uVar14 | 4) + uVar18 * 4 + (long)pvVar8) <= puVar13)) {
        uVar21 = uVar18 + 1 & 0xfffffffffffffff8;
        uVar10 = (uVar21 - 8 >> 3) + 1;
        uVar15 = (ulong)((uint)uVar10 & 3);
        if (uVar21 - 8 < 0x18) {
          lVar19 = 0;
        }
        else {
          uVar10 = uVar10 & 0xfffffffffffffffc;
          lVar19 = 0;
          do {
            uVar25 = *(undefined8 *)((long)local_728 + lVar19 * 4 + -8);
            uVar4 = *(undefined8 *)((long)local_728 + lVar19 * 4);
            uVar5 = *(undefined8 *)((long)auStack_6d8 + (lVar19 + -0x12) * 4);
            puVar13 = (undefined8 *)((long)pvVar8 + lVar19 * 4 + lVar23 + -0x70);
            *puVar13 = *(undefined8 *)((long)local_728 + lVar19 * 4 + -0x10);
            puVar13[1] = uVar25;
            puVar13 = (undefined8 *)((long)pvVar8 + lVar19 * 4 + lVar23 + -0x60);
            *puVar13 = uVar4;
            puVar13[1] = uVar5;
            uVar25 = *(undefined8 *)((long)auStack_6d8 + (lVar19 + -0xe) * 4);
            uVar4 = *(undefined8 *)((long)auStack_6d8 + (lVar19 + -0xc) * 4);
            uVar5 = *(undefined8 *)((long)auStack_6d8 + (lVar19 + -10) * 4);
            puVar13 = (undefined8 *)((long)pvVar8 + lVar19 * 4 + lVar23 + -0x50);
            *puVar13 = *(undefined8 *)((long)auStack_6d8 + (lVar19 + -0x10) * 4);
            puVar13[1] = uVar25;
            puVar13 = (undefined8 *)((long)pvVar8 + lVar19 * 4 + lVar23 + -0x40);
            *puVar13 = uVar4;
            puVar13[1] = uVar5;
            uVar25 = *(undefined8 *)((long)auStack_6d8 + (lVar19 + -6) * 4);
            uVar4 = *(undefined8 *)((long)auStack_6d8 + (lVar19 + -4) * 4);
            uVar5 = *(undefined8 *)((long)auStack_6d8 + (lVar19 + -2) * 4);
            puVar13 = (undefined8 *)((long)pvVar8 + lVar19 * 4 + lVar23 + -0x30);
            *puVar13 = *(undefined8 *)((long)auStack_6d8 + (lVar19 + -8) * 4);
            puVar13[1] = uVar25;
            puVar13 = (undefined8 *)((long)pvVar8 + lVar19 * 4 + lVar23 + -0x20);
            *puVar13 = uVar4;
            puVar13[1] = uVar5;
            uVar24 = *(undefined4 *)((long)auStack_6d8 + lVar19 * 4);
            uVar26 = *(undefined4 *)((long)auStack_6d8 + (lVar19 + 1) * 4);
            uVar2 = *(undefined4 *)((long)auStack_6d8 + (lVar19 + 2) * 4);
            uVar3 = *(undefined4 *)((long)auStack_6d8 + (lVar19 + 3) * 4);
            param_2 = *(undefined8 *)((long)auStack_6d8 + lVar19 * 4 + 0x10);
            uVar25 = *(undefined8 *)((long)auStack_6d8 + lVar19 * 4 + 0x18);
            puVar9 = (undefined4 *)((long)pvVar8 + lVar19 * 4 + lVar23 + -0x10);
            *puVar9 = uVar24;
            puVar9[1] = uVar26;
            puVar9[2] = uVar2;
            puVar9[3] = uVar3;
            puVar13 = (undefined8 *)((long)pvVar8 + lVar19 * 4 + lVar23);
            *puVar13 = param_2;
            puVar13[1] = uVar25;
            lVar19 = lVar19 + 0x20;
            uVar10 = uVar10 - 4;
          } while (uVar10 != 0);
        }
        if (uVar15 != 0) {
          lVar1 = lVar22 + lVar19 * 4;
          lVar20 = 0;
          do {
            puVar9 = (undefined4 *)((long)local_728 + lVar20 + lVar19 * 4 + -0x10);
            uVar24 = *puVar9;
            uVar26 = puVar9[1];
            uVar2 = puVar9[2];
            uVar3 = puVar9[3];
            puVar13 = (undefined8 *)((long)local_728 + lVar20 + lVar19 * 4);
            param_2 = *puVar13;
            uVar25 = puVar13[1];
            puVar9 = (undefined4 *)((long)pvVar8 + lVar20 + lVar1);
            *puVar9 = uVar24;
            puVar9[1] = uVar26;
            puVar9[2] = uVar2;
            puVar9[3] = uVar3;
            puVar13 = (undefined8 *)((long)pvVar8 + lVar20 + lVar1 + 0x10);
            *puVar13 = param_2;
            puVar13[1] = uVar25;
            lVar20 = lVar20 + 0x20;
          } while (uVar15 * 0x20 != lVar20);
        }
        if (uVar18 + 1 == uVar21) goto LAB_004da910;
        puVar9 = (undefined4 *)((long)((long)pvVar8 + uVar14) + uVar21 * 4);
        puVar13 = (undefined8 *)((long)local_728 + uVar21 * 4 + -0x10);
        uVar12 = uVar16 - (int)uVar21;
      }
      uVar6 = uVar12 - 1;
      if ((uVar12 & 7) != 0) {
        uVar11 = 0;
        do {
          uVar24 = *(undefined4 *)puVar13;
          uVar26 = 0;
          puVar13 = (undefined8 *)((long)puVar13 + 4);
          *puVar9 = uVar24;
          puVar9 = puVar9 + 1;
          uVar11 = uVar11 + 1;
        } while ((uVar12 & 7) != uVar11);
        uVar12 = uVar12 - uVar11;
      }
      if (6 < uVar6) {
        lVar19 = 0;
        do {
          puVar9[lVar19] = *(undefined4 *)((long)puVar13 + lVar19 * 4);
          puVar9[lVar19 + 1] = *(undefined4 *)((long)puVar13 + (lVar19 + 1) * 4);
          puVar9[lVar19 + 2] = *(undefined4 *)((long)puVar13 + (lVar19 + 2) * 4);
          puVar9[lVar19 + 3] = *(undefined4 *)((long)puVar13 + (lVar19 + 3) * 4);
          puVar9[lVar19 + 4] = *(undefined4 *)((long)puVar13 + (lVar19 + 4) * 4);
          puVar9[lVar19 + 5] = *(undefined4 *)((long)puVar13 + (lVar19 + 5) * 4);
          puVar9[lVar19 + 6] = *(undefined4 *)((long)puVar13 + (lVar19 + 6) * 4);
          uVar24 = *(undefined4 *)((long)puVar13 + (lVar19 + 7) * 4);
          uVar26 = 0;
          puVar9[lVar19 + 7] = uVar24;
          lVar19 = lVar19 + 8;
        } while (uVar12 != (uint)lVar19);
      }
    }
LAB_004da910:
    local_748 = local_748 + 1;
    lVar23 = lVar23 + 800;
    lVar22 = lVar22 + 800;
  } while( true );
}


