// Function : text_get_float
// Namespace: 
// Entry    : 00558090
// Prototype: undefined text_get_float(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, int * param_12, char * param_13, ulong param_14)
// Body     : 00558090 - 00558420


void text_get_float(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9,undefined8 param_10,undefined8 param_11,int *param_12,char *param_13
                   ,ulong param_14)

{
  undefined8 *puVar1;
  long *plVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  undefined1 *puVar13;
  long lVar14;
  uint *puVar15;
  uint uVar16;
  int iVar17;
  uint *puVar18;
  int iVar19;
  ulong uVar20;
  undefined4 extraout_XMM0_Da;
  uint uVar21;
  uint extraout_XMM0_Da_00;
  uint extraout_XMM0_Da_01;
  uint extraout_XMM0_Da_02;
  uint extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Db;
  uint uVar22;
  uint extraout_XMM0_Db_00;
  uint extraout_XMM0_Db_01;
  uint extraout_XMM0_Db_02;
  uint extraout_XMM0_Db_03;
  float fVar23;
  undefined4 uVar24;
  undefined8 uStack_50;
  undefined1 auStack_48 [12];
  float local_3c;
  uint *local_38;
  
  local_3c = (float)param_1;
  uStack_50 = 0x5580ae;
  puVar7 = (undefined4 *)
           text_client_getbuf(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              param_9,param_10,param_11,param_12,param_13,param_14);
  if (puVar7 == (undefined4 *)0x0) {
    return;
  }
  uStack_50 = 0x5580c2;
  puVar8 = (uint *)binbuf_getvec((long)puVar7);
  uStack_50 = 0x5580cd;
  uVar5 = binbuf_getnatom(puVar7);
  fVar23 = *(float *)(param_9 + 0x70);
  uVar24 = 0;
  if (0 < (int)uVar5) {
    uVar11 = (uint)fVar23;
    param_14 = (ulong)uVar5;
    uVar16 = (uint)*(float *)(param_9 + 0x74);
    param_13 = (char *)(ulong)uVar16;
    uVar12 = 0;
    iVar6 = 0;
    puVar18 = puVar8;
    do {
      if (iVar6 == (int)local_3c) {
        iVar6 = (int)uVar12;
        if ((int)uVar5 <= iVar6) {
          uVar10 = uVar12 & 0xffffffff;
          goto LAB_0055818e;
        }
        uVar10 = uVar12;
        puVar15 = puVar18;
        goto LAB_00558170;
      }
      iVar6 = iVar6 + (uint)((*puVar18 & 0xfffffffe) == 4);
      uVar12 = uVar12 + 1;
      puVar18 = puVar18 + 4;
    } while (param_14 != uVar12);
  }
  if (fVar23 < 0.0) {
    uStack_50 = 0x558140;
    outlet_float((ulong)DAT_005d9078,(ulong)(uint)fVar23,param_3,param_4,param_5,param_6,param_7,
                 param_8,*(long **)(param_9 + 0x68));
    outlet_list(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),CONCAT44(uVar24,fVar23),param_3,param_4,
                param_5,param_6,param_7,param_8,*(long **)(param_9 + 0x60),0,0,0,param_13,param_14);
    return;
  }
  return;
  while( true ) {
    uVar10 = uVar10 + 1;
    puVar15 = puVar15 + 4;
    if (param_14 == uVar10) break;
LAB_00558170:
    if ((*puVar15 & 0xfffffffe) == 4) goto LAB_0055818e;
  }
  uVar10 = (ulong)uVar5;
LAB_0055818e:
  uVar20 = (uVar10 & 0xffffffff) - uVar12;
  uVar21 = 0;
  uVar22 = 0;
  iVar19 = (int)uVar20;
  local_38 = puVar8;
  if (0.0 <= fVar23) {
    if (iVar19 < (int)(uVar16 + uVar11)) {
      pd_error(0,(ulong)(uint)fVar23,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
               "text get: field request (%d %d) out of range",(ulong)uVar11,param_13,param_13,
               param_14);
      return;
    }
    if ((int)uVar16 < 0) {
      pd_error(0,(ulong)(uint)fVar23,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
               "text get: bad field count (%d)",(ulong)uVar16,uVar10,param_13,param_14);
      return;
    }
    if (uVar16 < 100) {
      puVar13 = auStack_48 + (ulong)uVar16 * -0x10;
      puVar9 = puVar13;
      if (uVar16 == 0) {
        uStack_50 = 0x558272;
        outlet_list(0,(ulong)(uint)fVar23,param_3,param_4,param_5,param_6,param_7,param_8,
                    *(long **)(param_9 + 0x60),0,0,puVar13,(char *)0x0,puVar8);
        return;
      }
    }
    else {
      uStack_50 = 0x558362;
      puVar9 = getbytes((ulong)uVar16 << 4);
      puVar13 = auStack_48;
      uVar21 = extraout_XMM0_Da_03;
      uVar22 = extraout_XMM0_Db_03;
    }
    puVar8 = local_38;
    if (uVar16 == 1) {
      uVar12 = 0;
    }
    else {
      lVar14 = 0x10;
      uVar12 = 0;
      do {
        puVar1 = (undefined8 *)((long)puVar8 + lVar14 + (long)(int)(uVar11 + iVar6) * 0x10 + -0x10);
        uVar4 = puVar1[1];
        *(undefined8 *)(puVar9 + lVar14 + -0x10) = *puVar1;
        *(undefined8 *)((long)(puVar9 + lVar14 + -0x10) + 8) = uVar4;
        puVar18 = (uint *)((long)puVar8 + lVar14 + (long)(int)(uVar11 + iVar6) * 0x10);
        uVar21 = *puVar18;
        uVar22 = puVar18[1];
        uVar5 = puVar18[2];
        uVar3 = puVar18[3];
        puVar18 = (uint *)(puVar9 + lVar14);
        *puVar18 = uVar21;
        puVar18[1] = uVar22;
        puVar18[2] = uVar5;
        puVar18[3] = uVar3;
        uVar12 = uVar12 + 2;
        lVar14 = lVar14 + 0x20;
      } while ((uVar16 & 0xfffffffe) != uVar12);
    }
    if ((uVar16 & 1) != 0) {
      puVar18 = puVar8 + ((long)(int)(uVar11 + iVar6) + uVar12) * 4;
      uVar21 = *puVar18;
      uVar22 = puVar18[1];
      uVar5 = puVar18[2];
      uVar11 = puVar18[3];
      puVar18 = (uint *)(puVar9 + uVar12 * 0x10);
      *puVar18 = uVar21;
      puVar18[1] = uVar22;
      puVar18[2] = uVar5;
      puVar18[3] = uVar11;
    }
    plVar2 = *(long **)(param_9 + 0x60);
    *(undefined8 *)(puVar13 + -8) = 0x5583fb;
    outlet_list(CONCAT44(uVar22,uVar21),CONCAT44(uVar24,fVar23),param_3,param_4,param_5,param_6,
                param_7,param_8,plVar2,0,uVar16,puVar9,param_13,puVar8);
    if (uVar16 < 100) {
      return;
    }
    goto LAB_0055840d;
  }
  iVar17 = (int)uVar10;
  if ((iVar17 < (int)uVar5) && (puVar8[(long)iVar17 * 4] == 5)) {
    uStack_50 = 0x558284;
    outlet_float((ulong)DAT_005d9038,(ulong)(uint)fVar23,param_3,param_4,param_5,param_6,param_7,
                 param_8,*(long **)(param_9 + 0x68));
    uVar5 = extraout_XMM0_Da_01;
    uVar11 = extraout_XMM0_Db_01;
    if (iVar19 < 100) goto LAB_005581d0;
LAB_0055828e:
    uStack_50 = 0x55829a;
    puVar9 = getbytes((uVar20 & 0xffffffff) << 4);
    puVar13 = auStack_48;
    uVar5 = extraout_XMM0_Da_02;
    uVar11 = extraout_XMM0_Db_02;
  }
  else {
    uStack_50 = 0x5581c6;
    outlet_float(0,(ulong)(uint)fVar23,param_3,param_4,param_5,param_6,param_7,param_8,
                 *(long **)(param_9 + 0x68));
    uVar5 = extraout_XMM0_Da_00;
    uVar11 = extraout_XMM0_Db_00;
    if (99 < iVar19) goto LAB_0055828e;
LAB_005581d0:
    puVar13 = auStack_48 + (long)iVar19 * -0x10;
    puVar9 = puVar13;
    if (iVar19 < 1) {
      plVar2 = *(long **)(param_9 + 0x60);
      *(undefined8 *)(auStack_48 + (long)iVar19 * -0x10 + -8) = 0x5581fd;
      outlet_list(CONCAT44(uVar11,uVar5),CONCAT44(uVar24,fVar23),param_3,param_4,param_5,param_6,
                  param_7,param_8,plVar2,0,iVar19,puVar13,puVar13,param_14);
      return;
    }
  }
  if (iVar17 + -1 == iVar6) {
    uVar10 = 0;
  }
  else {
    puVar18 = puVar18 + 4;
    puVar8 = (uint *)(puVar9 + 0x10);
    uVar10 = 0;
    do {
      uVar4 = *(undefined8 *)(puVar18 + -2);
      *(undefined8 *)(puVar8 + -4) = *(undefined8 *)(puVar18 + -4);
      *(undefined8 *)(puVar8 + -2) = uVar4;
      uVar5 = *puVar18;
      uVar11 = puVar18[1];
      uVar16 = puVar18[2];
      uVar21 = puVar18[3];
      *puVar8 = uVar5;
      puVar8[1] = uVar11;
      puVar8[2] = uVar16;
      puVar8[3] = uVar21;
      uVar10 = uVar10 + 2;
      puVar8 = puVar8 + 8;
      puVar18 = puVar18 + 8;
    } while ((iVar17 - iVar6 & 0xfffffffe) != uVar10);
  }
  if ((uVar20 & 1) != 0) {
    puVar8 = local_38 + (uVar12 + uVar10) * 4;
    uVar5 = *puVar8;
    uVar11 = puVar8[1];
    uVar16 = puVar8[2];
    uVar21 = puVar8[3];
    puVar8 = (uint *)(puVar9 + uVar10 * 0x10);
    *puVar8 = uVar5;
    puVar8[1] = uVar11;
    puVar8[2] = uVar16;
    puVar8[3] = uVar21;
  }
  plVar2 = *(long **)(param_9 + 0x60);
  *(undefined8 *)(puVar13 + -8) = 0x558315;
  outlet_list(CONCAT44(uVar11,uVar5),CONCAT44(uVar24,fVar23),param_3,param_4,param_5,param_6,param_7
              ,param_8,plVar2,0,iVar19,puVar9,puVar9,param_14);
  if (iVar19 < 100) {
    return;
  }
LAB_0055840d:
  *(undefined8 *)(puVar13 + -8) = 0x558412;
  freebytes(puVar9);
  return;
}


