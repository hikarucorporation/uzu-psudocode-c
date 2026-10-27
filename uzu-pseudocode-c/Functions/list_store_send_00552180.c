// Function : list_store_send
// Namespace: 
// Entry    : 00552180
// Prototype: undefined list_store_send(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * * * * * * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00552180 - 00552456


/* WARNING: Type propagation algorithm not settling */

void list_store_send(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9,undefined8 ******param_10,undefined8 param_11,undefined8 param_12,
                    char *param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 *****pppppuVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 **********ppppppppppuVar7;
  undefined8 ***********pppppppppppuVar8;
  undefined8 ***********pppppppppppuVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 ***********pppppppppppuVar12;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 ***********pppppppppppuVar13;
  undefined8 extraout_RDX_01;
  undefined8 uVar14;
  undefined8 extraout_RDX_02;
  long *plVar15;
  uint uVar16;
  long lVar17;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined8 uVar18;
  undefined8 ***********local_48 [3];
  
  if (param_10[1] == (undefined8 *****)0x0) {
    pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
             "%s: no such object",*param_10,param_12,param_13,param_14);
    return;
  }
  uVar2 = *(uint *)(param_9 + 0x38);
  if ((int)uVar2 < 100) {
    pppppppppppuVar9 = local_48 + (long)(int)uVar2 * -2;
    iVar3 = *(int *)(param_9 + 0x3c);
    pppppppppppuVar8 = pppppppppppuVar9;
  }
  else {
    pppppppppppuVar9 = getbytes((ulong)uVar2 << 4);
    iVar3 = *(int *)(param_9 + 0x3c);
    pppppppppppuVar8 = local_48;
  }
  if (iVar3 == 0) {
    if (0 < (int)uVar2) {
      if (uVar2 == 1) {
        uVar10 = 0;
      }
      else {
        pppppppppppuVar12 = pppppppppppuVar9 + 2;
        lVar17 = 0;
        uVar10 = 0;
        do {
          puVar11 = (undefined8 *)(*(long *)(param_9 + 0x40) + lVar17);
          ppppppppppuVar7 = (undefined8 **********)puVar11[1];
          pppppppppppuVar12[-2] = (undefined8 **********)*puVar11;
          pppppppppppuVar12[-1] = ppppppppppuVar7;
          puVar11 = (undefined8 *)(*(long *)(param_9 + 0x40) + 0x28 + lVar17);
          ppppppppppuVar7 = (undefined8 **********)puVar11[1];
          *pppppppppppuVar12 = (undefined8 **********)*puVar11;
          pppppppppppuVar12[1] = ppppppppppuVar7;
          uVar10 = uVar10 + 2;
          pppppppppppuVar12 = pppppppppppuVar12 + 4;
          lVar17 = lVar17 + 0x50;
        } while ((uVar2 & 0xfffffffe) != uVar10);
      }
      if ((uVar2 & 1) != 0) {
        puVar11 = (undefined8 *)(*(long *)(param_9 + 0x40) + uVar10 * 0x28);
        ppppppppppuVar7 = (undefined8 **********)puVar11[1];
        pppppppppppuVar9[uVar10 * 2] = (undefined8 **********)*puVar11;
        (pppppppppppuVar9 + uVar10 * 2)[1] = ppppppppppuVar7;
      }
    }
    pppppuVar4 = param_10[1];
    pppppppppppuVar8[-1] = (undefined8 **********)0x552437;
    puVar11 = gensym("list");
    pppppppppppuVar8[-1] = (undefined8 **********)0x552448;
    pd_list((long *)pppppuVar4,puVar11,uVar2,pppppppppppuVar9);
    goto joined_r0x0055244c;
  }
  pppppppppppuVar8[-1] = (undefined8 **********)0x5521da;
  local_48[2] = getbytes((long)(int)uVar2 * 0x28);
  if (local_48[2] == (undefined8 ***********)0x0) {
    pppppppppppuVar8[-1] = (undefined8 **********)0x5522d6;
    pd_error(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
             param_7,param_8,0,"list_alloc: out of memory",extraout_RDX,param_12,param_13,param_14);
    uVar16 = 0;
    pppppppppppuVar12 = local_48[2];
joined_r0x005522d9:
    local_48[2] = pppppppppppuVar12;
    if (0 < (int)uVar2) {
      if (uVar2 == 1) {
        uVar10 = 0;
      }
      else {
        pppppppppppuVar13 = pppppppppppuVar9 + 2;
        uVar10 = 0;
        do {
          ppppppppppuVar7 = pppppppppppuVar12[1];
          pppppppppppuVar13[-2] = *pppppppppppuVar12;
          pppppppppppuVar13[-1] = ppppppppppuVar7;
          ppppppppppuVar7 = pppppppppppuVar12[6];
          *pppppppppppuVar13 = pppppppppppuVar12[5];
          pppppppppppuVar13[1] = ppppppppppuVar7;
          uVar10 = uVar10 + 2;
          pppppppppppuVar13 = pppppppppppuVar13 + 4;
          pppppppppppuVar12 = pppppppppppuVar12 + 10;
        } while ((uVar2 & 0xfffffffe) != uVar10);
      }
      if ((uVar2 & 1) != 0) {
        ppppppppppuVar7 = (local_48[2] + uVar10 * 5)[1];
        pppppppppppuVar9[uVar10 * 2] = local_48[2][uVar10 * 5];
        (pppppppppppuVar9 + uVar10 * 2)[1] = ppppppppppuVar7;
      }
    }
  }
  else {
    uVar16 = uVar2;
    if (0 < (int)uVar2) {
      local_48[1] = (undefined8 ***********)param_10;
      local_48[0] = pppppppppppuVar9;
      puVar11 = local_48[2] + 2;
      lVar17 = 0;
      uVar18 = extraout_RDX;
      do {
        puVar1 = (undefined8 *)(*(long *)(param_9 + 0x40) + lVar17);
        uVar14 = *puVar1;
        uVar6 = puVar1[1];
        puVar11[-2] = uVar14;
        puVar11[-1] = uVar6;
        if (*(int *)(puVar11 + -2) == 3) {
          puVar1 = (undefined8 *)puVar11[-1];
          pppppppppppuVar8[-1] = (undefined8 **********)0x552255;
          gpointer_copy(uVar14,param_2,param_3,param_4,param_5,param_6,param_7,param_8,puVar1,
                        puVar11,uVar18,param_12,param_13,param_14,*(undefined1 *)pppppppppppuVar8);
          puVar11[-1] = puVar11;
          uVar18 = extraout_RDX_00;
        }
        puVar11 = puVar11 + 5;
        lVar17 = lVar17 + 0x28;
        param_10 = local_48[1];
        pppppppppppuVar9 = local_48[0];
        pppppppppppuVar12 = local_48[2];
      } while ((ulong)uVar2 * 0x28 != lVar17);
      goto joined_r0x005522d9;
    }
  }
  pppppuVar4 = param_10[1];
  pppppppppppuVar8[-1] = (undefined8 **********)0x55234d;
  puVar11 = gensym("list");
  pppppppppppuVar8[-1] = (undefined8 **********)0x55235e;
  pppppppppppuVar12 = pppppppppppuVar9;
  uVar18 = pd_list((long *)pppppuVar4,puVar11,uVar2,pppppppppppuVar9);
  if ((int)uVar16 < 1) {
    if (local_48[2] == (undefined8 ***********)0x0) goto joined_r0x0055244c;
  }
  else {
    plVar15 = (long *)(local_48[2] + 1);
    lVar17 = 0;
    uVar14 = extraout_RDX_01;
    do {
      if ((int)plVar15[-1] == 3) {
        lVar5 = *plVar15;
        pppppppppppuVar8[-1] = (undefined8 **********)0x55238e;
        uVar18 = gpointer_unset(uVar18,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar5
                                ,puVar11,uVar14,pppppppppppuVar12,param_13,param_14);
        uVar14 = extraout_RDX_02;
      }
      lVar17 = lVar17 + 1;
      plVar15 = plVar15 + 5;
    } while (lVar17 < (int)uVar16);
  }
  pppppppppppuVar12 = local_48[2];
  pppppppppppuVar8[-1] = (undefined8 **********)0x5523ab;
  freebytes(pppppppppppuVar12);
joined_r0x0055244c:
  if (99 < (int)uVar2) {
    pppppppppppuVar8[-1] = (undefined8 **********)0x5523c0;
    freebytes(pppppppppppuVar9);
  }
  return;
}


