// Function : text_set_list
// Namespace: 
// Entry    : 00558630
// Prototype: undefined text_set_list(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, uint * param_10, ulong param_11, uint * param_12, char * param_13, undefined8 param_14, undefined1 param_15)
// Body     : 00558630 - 00558969


void text_set_list(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,uint *param_10,ulong param_11,uint *param_12,char *param_13,
                  undefined8 param_14,undefined1 param_15)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  ulong uVar7;
  uint *puVar8;
  undefined8 *puVar9;
  uint *puVar10;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  ulong extraout_RDX_01;
  ulong extraout_RDX_02;
  long lVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  char *pcVar15;
  ulong uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint *puVar20;
  ulong uVar21;
  uint *puVar22;
  bool bVar23;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 uVar24;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 uVar25;
  double dVar26;
  
  puVar20 = (uint *)(param_11 & 0xffffffff);
  puVar10 = param_12;
  piVar6 = (int *)text_client_getbuf(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                                     ,param_9,param_10,param_11,(int *)param_12,param_13,param_14);
  dVar26 = (double)*(float *)(param_9 + 0x60);
  uVar13 = 0x7fffffff;
  if (dVar26 <= DAT_0065a018) {
    uVar13 = (int)*(float *)(param_9 + 0x60);
  }
  if (piVar6 == (int *)0x0) {
    return;
  }
  uVar4 = (uint)*(float *)(param_9 + 100);
  uVar7 = (ulong)uVar4;
  puVar8 = (uint *)binbuf_getvec((long)piVar6);
  uVar5 = binbuf_getnatom(piVar6);
  if ((int)uVar13 < 0) {
    pcVar15 = "text set: line number (%d) < 0";
    uVar7 = (ulong)uVar13;
LAB_00558728:
    pd_error(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),dVar26,param_3,param_4,param_5,param_6,
             param_7,param_8,param_9,pcVar15,uVar7,puVar10,param_13,param_14);
    return;
  }
  uVar18 = (uint)param_11;
  uVar16 = (ulong)uVar5;
  if (0 < (int)uVar5) {
    uVar14 = 0;
    puVar10 = (uint *)0x0;
    puVar22 = puVar8;
    do {
      if ((uint)puVar10 == uVar13) {
        iVar12 = (int)uVar14;
        if (iVar12 < (int)uVar5) {
          uVar21 = uVar14;
          goto LAB_00558750;
        }
        uVar21 = uVar14 & 0xffffffff;
        goto LAB_0055879c;
      }
      bVar23 = (*puVar22 & 0xfffffffe) == 4;
      param_10 = (uint *)(ulong)bVar23;
      puVar10 = (uint *)(ulong)((uint)puVar10 + (uint)bVar23);
      uVar14 = uVar14 + 1;
      puVar22 = puVar22 + 4;
    } while (uVar16 != uVar14);
  }
  if (-1 < (int)uVar4) {
    post(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),dVar26,param_3,param_4,param_5,param_6,param_7,
         param_8,"text set: %d: line number out of range");
    return;
  }
  if (uVar16 == 0) {
    bVar23 = false;
  }
  else {
    bVar23 = (puVar8[(long)(int)uVar5 * 4 + -4] & 0xfffffffe) != 4;
  }
  uVar13 = uVar5 + bVar23;
  uVar14 = (ulong)uVar13;
  uVar4 = uVar18 + uVar13 + 1;
  param_10 = (uint *)(ulong)uVar4;
  binbuf_resize(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),dVar26,param_3,param_4,param_5,param_6,
                param_7,param_8,piVar6,uVar4);
  puVar8 = (uint *)binbuf_getvec((long)piVar6);
  if (bVar23 != false) {
    puVar8[(long)(int)uVar5 * 4] = 4;
    puVar8[(long)(int)uVar5 * 4 + 2] = 0;
  }
  puVar8[(long)(int)(uVar18 + uVar13) * 4] = 4;
  puVar8[(long)(int)(uVar18 + uVar13) * 4 + 2] = 0;
  uVar7 = extraout_RDX_01;
  uVar24 = extraout_XMM0_Da_02;
  uVar25 = extraout_XMM0_Db_02;
  goto joined_r0x00558966;
  while( true ) {
    uVar21 = uVar21 + 1;
    puVar22 = puVar22 + 4;
    if (uVar16 == uVar21) break;
LAB_00558750:
    puVar10 = (uint *)(ulong)(*puVar22 & 0xfffffffe);
    if ((*puVar22 & 0xfffffffe) == 4) goto LAB_0055879c;
  }
  uVar21 = (ulong)uVar5;
LAB_0055879c:
  iVar19 = (int)uVar21;
  uVar24 = extraout_XMM0_Da;
  uVar25 = extraout_XMM0_Db;
  if (-1 < (int)uVar4) {
    if (iVar19 - iVar12 <= (int)uVar4) {
      pcVar15 = "text set: field number (%d) past end of line";
      goto LAB_00558728;
    }
    puVar10 = (uint *)(ulong)(uVar4 + uVar18);
    uVar13 = (iVar19 - uVar4) - iVar12;
    if ((int)(uVar4 + uVar18) <= iVar19 - iVar12) {
      uVar13 = uVar18;
    }
    uVar4 = uVar4 + iVar12;
    uVar7 = (ulong)uVar4;
    puVar22 = (uint *)(ulong)uVar13;
    param_10 = puVar20;
    uVar18 = uVar13;
    goto joined_r0x005587cf;
  }
  uVar13 = -iVar19;
  puVar10 = (uint *)((long)puVar20 + uVar14 + uVar13);
  if ((int)puVar10 != 0) {
    iVar17 = uVar18 + uVar13 + iVar12;
    puVar22 = (uint *)((ulong)(uVar5 + uVar18) + (ulong)uVar13 + uVar14);
    puVar10 = puVar20;
    if (0 < iVar17) {
      binbuf_resize(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),dVar26,param_3,param_4,param_5,
                    param_6,param_7,param_8,piVar6,(int)puVar22);
    }
    puVar8 = (uint *)binbuf_getvec((long)piVar6);
    param_10 = puVar8 + (long)iVar19 * 4;
    memmove(puVar8 + (long)(int)(uVar18 + iVar12) * 4,param_10,(long)(int)(uVar5 - iVar19) << 4);
    uVar7 = extraout_RDX;
    uVar24 = extraout_XMM0_Da_00;
    uVar25 = extraout_XMM0_Db_00;
    if (iVar17 < 0) {
      binbuf_resize(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),dVar26,param_3,param_4,param_5
                    ,param_6,param_7,param_8,piVar6,(int)puVar22);
      puVar8 = (uint *)binbuf_getvec((long)piVar6);
      uVar7 = extraout_RDX_00;
      param_10 = puVar22;
      uVar24 = extraout_XMM0_Da_01;
      uVar25 = extraout_XMM0_Db_01;
    }
  }
joined_r0x00558966:
  uVar4 = (uint)uVar14;
  puVar22 = puVar20;
joined_r0x005587cf:
  if (0 < (int)uVar18) {
    lVar11 = 0;
    do {
      while (*(int *)((long)param_12 + lVar11) == 3) {
        *(undefined4 *)((long)puVar8 + lVar11 + (long)(int)uVar4 * 0x10) = 2;
        puVar9 = gensym("(pointer)");
        *(undefined8 **)((long)puVar8 + lVar11 + (long)(int)uVar4 * 0x10 + 8) = puVar9;
        lVar11 = lVar11 + 0x10;
        uVar7 = extraout_RDX_02;
        uVar24 = extraout_XMM0_Da_03;
        uVar25 = extraout_XMM0_Db_03;
        if ((long)puVar22 * 0x10 == lVar11) goto LAB_00558948;
      }
      puVar1 = (undefined4 *)((long)param_12 + lVar11);
      uVar24 = *puVar1;
      uVar25 = puVar1[1];
      uVar2 = puVar1[2];
      uVar3 = puVar1[3];
      puVar1 = (undefined4 *)((long)puVar8 + lVar11 + (long)(int)uVar4 * 0x10);
      *puVar1 = uVar24;
      puVar1[1] = uVar25;
      puVar1[2] = uVar2;
      puVar1[3] = uVar3;
      lVar11 = lVar11 + 0x10;
    } while ((long)puVar22 * 0x10 != lVar11);
  }
LAB_00558948:
  text_client_senditup
            (CONCAT44(uVar25,uVar24),dVar26,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
             param_10,uVar7,puVar10,param_13,param_14,param_15);
  return;
}


