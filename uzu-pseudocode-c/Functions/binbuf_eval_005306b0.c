// Function : binbuf_eval
// Namespace: 
// Entry    : 005306b0
// Prototype: undefined binbuf_eval(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, uint * param_9, uint * param_10, ulong param_11, long param_12, undefined8 param_13, undefined8 param_14)
// Body     : 005306b0 - 00530c02


void binbuf_eval(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                double param_5,double param_6,double param_7,undefined8 param_8,uint *param_9,
                uint *param_10,ulong param_11,long param_12,undefined8 param_13,uint *param_14)

{
  undefined4 *puVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  uint *puVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  long lVar9;
  undefined8 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  ulong extraout_RDX_01;
  ulong extraout_RDX_02;
  ulong extraout_RDX_03;
  ulong extraout_RDX_04;
  ulong extraout_RDX_05;
  ulong extraout_RDX_06;
  ulong extraout_RDX_07;
  ulong extraout_RDX_08;
  ulong extraout_RDX_09;
  ulong extraout_RDX_10;
  ulong extraout_RDX_11;
  undefined8 uVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  char *pcVar18;
  uint uVar19;
  char *pcVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  uint *puVar25;
  uint *puVar26;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar27;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 uVar28;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 uVar29;
  undefined4 uVar30;
  uint local_c8 [22];
  uint *local_70;
  uint *local_68;
  uint local_5c;
  long local_58;
  uint local_50;
  uint local_4c;
  uint *local_48;
  ulong local_40;
  uint *local_38;
  uint switchD_00530812::switchdataD_00655dcc;
  
  puVar17 = local_c8;
  local_4c = (uint)param_11;
  puVar25 = *(uint **)(param_9 + 2);
  uVar15 = *param_9;
  uVar13 = (ulong)uVar15;
  pcVar18 = (char *)param_10;
  if ((int)uVar15 < 6) {
    local_50 = 0;
    puVar8 = local_c8;
    puVar17 = local_c8;
    goto LAB_00530779;
  }
  local_40 = uVar13;
  if (param_10 == (uint *)PTR_pd_objectmaker_00715510) {
LAB_00530746:
    if (uVar15 < 1000) {
      puVar17 = local_c8 + (ulong)uVar15 * -4;
      puVar8 = puVar17;
    }
    else {
      puVar8 = getbytes((ulong)uVar15 * 0x10);
      param_1 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
      puVar17 = local_c8;
      param_11 = extraout_RDX;
    }
    local_50 = uVar15;
  }
  else {
    uVar7 = -(uint)(param_10 == (uint *)0x0);
    if (uVar15 == 1) {
      uVar13 = 0;
      uVar21 = 0;
      param_11 = 1;
      uVar22 = uVar21;
    }
    else {
      param_11 = (ulong)(uVar15 & 0xfffffffe);
      pcVar18 = (char *)(puVar25 + 4);
      uVar13 = 0;
      uVar21 = 0;
      uVar24 = 0;
      uVar22 = uVar21;
      uVar19 = uVar7;
      do {
        uVar7 = 0xffffffff;
        if (*(uint *)((long)pcVar18 + -0x10) == 4) {
          uVar16 = 0xffffffff;
          uVar19 = *(uint *)pcVar18;
        }
        else if (*(uint *)((long)pcVar18 + -0x10) == 5) {
          uVar16 = 0;
          uVar19 = *(uint *)pcVar18;
        }
        else {
          uVar16 = uVar19 + 1;
          bVar2 = (int)uVar21 <= (int)uVar19;
          uVar21 = uVar24;
          if (bVar2) {
            uVar21 = uVar16;
          }
          uVar19 = *(uint *)pcVar18;
          uVar22 = uVar21;
          uVar24 = uVar21;
        }
        if (uVar19 != 4) {
          if (uVar19 == 5) {
            uVar7 = 0;
          }
          else {
            uVar7 = uVar16 + 1;
            bVar2 = (int)uVar21 <= (int)uVar16;
            uVar21 = uVar24;
            uVar22 = uVar24;
            if (bVar2) {
              uVar21 = uVar7;
              uVar22 = uVar7;
              uVar24 = uVar7;
            }
          }
        }
        uVar13 = uVar13 + 2;
        pcVar18 = (char *)((long)pcVar18 + 0x20);
        uVar19 = uVar7;
      } while (param_11 != uVar13);
    }
    uVar24 = uVar15 & 1;
    uVar15 = uVar21;
    if (((uVar24 != 0) && (1 < puVar25[uVar13 * 4] - 4)) &&
       (uVar15 = uVar22, (int)uVar21 <= (int)uVar7)) {
      uVar15 = uVar7 + 1;
    }
    if (5 < (int)uVar15) goto LAB_00530746;
    local_50 = uVar15;
    puVar8 = local_c8;
  }
  uVar13 = local_40;
LAB_00530779:
  local_70 = puVar8 + 4;
  local_68 = param_10;
  local_38 = puVar8;
  local_58 = param_12;
  if (param_10 == (uint *)0x0) goto LAB_00530a05;
  do {
    uVar15 = (uint)uVar13;
joined_r0x0053079b:
    if (uVar15 == 0) goto LAB_00530bdc;
    local_48 = param_10;
    local_5c = (uint)(param_10 == (uint *)PTR_pd_objectmaker_00715510);
    lVar9 = 0;
    uVar15 = 0;
    local_40 = uVar13;
    uVar13 = uVar13 & 0xffffffff;
    puVar26 = puVar25;
    do {
      puVar4 = local_48;
      uVar21 = local_4c;
      lVar5 = local_58;
      uVar7 = local_5c;
      iVar23 = (int)uVar13;
      puVar11 = &switchD_00530812::switchdataD_00655dcc;
      switch(*(undefined4 *)((long)puVar25 + lVar9)) {
      case 1:
      case 2:
        puVar1 = (undefined4 *)((long)puVar25 + lVar9);
        uVar27 = *puVar1;
        uVar28 = puVar1[1];
        uVar29 = puVar1[2];
        uVar30 = puVar1[3];
LAB_00530880:
        param_1 = CONCAT44(uVar28,uVar27);
        auVar3._8_4_ = uVar29;
        auVar3._0_8_ = param_1;
        auVar3._12_4_ = uVar30;
        *(undefined1 (*) [16])((long)puVar8 + lVar9) = auVar3;
        break;
      default:
        *(undefined8 *)((long)puVar17 + -8) = 0x530bd8;
        bug(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"bad item in binbuf",
            pcVar18,param_11,puVar11,(char *)puVar8,param_14,*(undefined1 *)puVar17);
        puVar8 = local_38;
        goto LAB_00530bdc;
      case 4:
        if (local_48 == (uint *)PTR_pd_objectmaker_00715510) {
          *(undefined4 *)((long)puVar8 + lVar9) = 2;
          pcVar20 = ";";
          goto LAB_005307d0;
        }
        puVar26 = (uint *)((long)puVar25 + lVar9);
        local_40 = (ulong)uVar15;
        param_10 = (uint *)0x0;
        puVar25 = local_70;
        param_12 = local_58;
        goto joined_r0x00530b16;
      case 5:
        if (local_48 != (uint *)PTR_pd_objectmaker_00715510) {
          local_40 = (ulong)uVar15;
          goto LAB_00530953;
        }
        *(undefined4 *)((long)puVar8 + lVar9) = 2;
        pcVar20 = ",";
LAB_005307d0:
        *(undefined8 *)((long)puVar17 + -8) = 0x5307d5;
        puVar10 = gensym(pcVar20);
        param_1 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
        param_11 = extraout_RDX_00;
LAB_005307d9:
        *(undefined8 **)((long)local_38 + lVar9 + 8) = puVar10;
        puVar8 = local_38;
        break;
      case 8:
        uVar7 = *(uint *)((long)puVar25 + lVar9 + 8);
        param_11 = (ulong)uVar7;
        if ((0 < (int)uVar7) && ((int)uVar7 <= (int)local_4c)) {
          param_11 = (ulong)(uVar7 - 1) * 0x10;
          puVar1 = (undefined4 *)(local_58 + param_11);
          uVar27 = *puVar1;
          uVar28 = puVar1[1];
          uVar29 = puVar1[2];
          uVar30 = puVar1[3];
          goto LAB_00530880;
        }
        if (uVar7 == 0) {
          *(undefined4 *)((long)puVar8 + lVar9) = 1;
          *(undefined8 *)((long)puVar17 + -8) = 0x53092a;
          iVar6 = canvas_getdollarzero
                            (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
          param_1 = (ulong)(uint)(float)iVar6;
          *(float *)((long)local_38 + lVar9 + 8) = (float)iVar6;
          param_11 = extraout_RDX_04;
          puVar8 = local_38;
        }
        else {
          if (local_48 != (uint *)PTR_pd_objectmaker_00715510) {
            pcVar18 = "$%d: argument number out of range";
            *(undefined8 *)((long)puVar17 + -8) = 0x5308d3;
            param_1 = pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                               (long)puVar4,"$%d: argument number out of range",param_11,
                               &switchD_00530812::switchdataD_00655dcc,(char *)puVar8,param_14);
            param_11 = extraout_RDX_02;
            puVar8 = local_38;
          }
          *(undefined4 *)((long)puVar8 + lVar9) = 1;
          *(undefined4 *)((long)puVar8 + lVar9 + 8) = 0;
        }
        break;
      case 9:
        puVar10 = *(undefined8 **)((long)puVar25 + lVar9 + 8);
        pcVar18 = (char *)(ulong)local_4c;
        puVar11 = (uint *)(ulong)local_5c;
        *(undefined8 *)((long)puVar17 + -8) = 0x53089e;
        puVar10 = binbuf_realizedollsym
                            (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,puVar10
                             ,uVar21,lVar5,uVar7,(char *)puVar8,param_14);
        puVar4 = local_48;
        param_1 = CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
        if (puVar10 == (undefined8 *)0x0) {
          uVar12 = **(undefined8 **)((long)puVar25 + lVar9 + 8);
          pcVar18 = "%s: argument number out of range";
          *(undefined8 *)((long)puVar17 + -8) = 0x530907;
          param_1 = pd_error(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,
                             param_4,param_5,param_6,param_7,param_8,(long)puVar4,
                             "%s: argument number out of range",uVar12,puVar11,(char *)puVar8,
                             param_14);
          *(undefined4 *)((long)local_38 + lVar9) = 2;
          puVar10 = *(undefined8 **)((long)puVar25 + lVar9 + 8);
          param_11 = extraout_RDX_03;
        }
        else {
          *(undefined4 *)((long)local_38 + lVar9) = 2;
          param_11 = extraout_RDX_01;
        }
        goto LAB_005307d9;
      }
      puVar26 = puVar26 + 4;
      uVar15 = uVar15 + 1;
      lVar9 = lVar9 + 0x10;
      uVar13 = (ulong)(iVar23 - 1U);
    } while (iVar23 - 1U != 0);
    iVar23 = 0;
LAB_00530953:
    param_10 = local_48;
    puVar25 = local_70;
    param_12 = local_58;
    puVar4 = local_48;
    uVar15 = (uint)local_40;
joined_r0x00530b16:
    local_70 = puVar25;
    local_58 = param_12;
    local_48 = puVar4;
    if (uVar15 != 0) {
      uVar15 = *puVar8;
      iVar6 = (int)local_40;
      if (uVar15 == 1) {
        if (iVar6 == 1) {
          *(undefined8 *)((long)puVar17 + -8) = 0x5309a9;
          param_1 = pd_float((long *)puVar4);
          param_11 = extraout_RDX_06;
        }
        else {
LAB_005309d3:
          pcVar18 = (char *)0x0;
          *(undefined8 *)((long)puVar17 + -8) = 0x5309e1;
          param_1 = pd_list((long *)puVar4,0,iVar6,puVar8);
          param_11 = extraout_RDX_09;
        }
      }
      else if (uVar15 == 3) {
        if (iVar6 != 1) goto LAB_005309d3;
        pcVar18 = *(char **)(puVar8 + 2);
        *(undefined8 *)((long)puVar17 + -8) = 0x5309c1;
        param_1 = pd_pointer((long *)puVar4);
        param_11 = extraout_RDX_07;
      }
      else if (uVar15 == 2) {
        pcVar18 = *(char **)(puVar8 + 2);
        *(undefined8 *)((long)puVar17 + -8) = 0x53098f;
        param_1 = pd_typedmess(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                               (long *)puVar4,(undefined8 *)pcVar18,iVar6 - 1,(int *)puVar25,puVar8,
                               param_14);
        param_11 = extraout_RDX_05;
      }
      else {
        *(undefined8 *)((long)puVar17 + -8) = 0x5309d1;
        param_1 = bug(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"bad selector"
                      ,pcVar18,param_11,puVar11,(char *)puVar8,param_14,*(undefined1 *)puVar17);
        param_11 = extraout_RDX_08;
      }
      puVar8 = local_38;
    }
    if (iVar23 == 0) goto LAB_00530bdc;
    puVar25 = puVar26 + 4;
    uVar13 = (ulong)(iVar23 - 1);
  } while (param_10 != (uint *)0x0);
LAB_00530a05:
  uVar15 = (uint)uVar13;
  while (uVar15 != 0) {
    while( true ) {
      uVar7 = local_4c;
      puVar26 = local_68;
      uVar15 = *puVar25;
      if ((uVar15 & 0xfffffffe) == 4) break;
      if (uVar15 == 9) {
        puVar10 = *(undefined8 **)(puVar25 + 2);
        pcVar18 = (char *)(ulong)local_4c;
        uVar12 = 0;
        *(undefined8 *)((long)puVar17 + -8) = 0x530a6c;
        puVar10 = binbuf_realizedollsym
                            (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,puVar10
                             ,uVar7,param_12,0,(char *)puVar8,param_14);
        param_1 = CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02);
        param_11 = extraout_RDX_10;
        puVar26 = local_68;
        if (puVar10 != (undefined8 *)0x0) goto LAB_00530a90;
        uVar14 = **(undefined8 **)(puVar25 + 2);
        pcVar18 = "$%s: not enough arguments supplied";
LAB_00530aaa:
        *(undefined8 *)((long)puVar17 + -8) = 0x530ab1;
        param_1 = pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                           (long)puVar26,pcVar18,uVar14,uVar12,(char *)puVar8,param_14);
      }
      else {
        if (uVar15 != 8) {
          *(undefined8 *)((long)puVar17 + -8) = 0x530a90;
          puVar10 = (undefined8 *)atom_getsymbol((int *)puVar25);
          param_1 = CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03);
          param_11 = extraout_RDX_11;
LAB_00530a90:
          param_10 = (uint *)puVar10[1];
          if (param_10 == (uint *)0x0) {
            uVar14 = *puVar10;
            pcVar18 = "%s: no such object ";
            uVar12 = 0;
            goto LAB_00530aaa;
          }
          puVar25 = puVar25 + 4;
          uVar15 = (int)uVar13 - 1;
          uVar13 = (ulong)uVar15;
          puVar8 = local_38;
          goto joined_r0x0053079b;
        }
        uVar15 = puVar25[2];
        param_11 = (ulong)uVar15;
        if (((int)uVar15 < 1) || ((int)local_4c < (int)uVar15)) {
          pcVar18 = "$%d: not enough arguments supplied";
        }
        else {
          lVar9 = (ulong)(uVar15 - 1) * 0x10;
          if (*(int *)(param_12 + lVar9) == 2) {
            puVar10 = *(undefined8 **)(param_12 + 8 + lVar9);
            goto LAB_00530a90;
          }
          pcVar18 = "$%d: symbol needed as message destination";
        }
        *(undefined8 *)((long)puVar17 + -8) = 0x530ad0;
        param_1 = pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                           (long)puVar26,pcVar18,param_11,8,(char *)puVar8,param_14);
      }
      puVar26 = puVar25;
      do {
        puVar8 = local_38;
        if ((int)uVar13 == 1) goto LAB_00530bdc;
        puVar25 = puVar26 + 4;
        uVar13 = (ulong)((int)uVar13 - 1);
        puVar11 = puVar26 + 4;
        puVar26 = puVar25;
      } while (*puVar11 != 4);
    }
    puVar25 = puVar25 + 4;
    uVar15 = (int)uVar13 - 1;
    uVar13 = (ulong)uVar15;
  }
LAB_00530bdc:
  if (999 < (int)local_50) {
    *(undefined8 *)((long)puVar17 + -8) = 0x530bf4;
    freebytes(puVar8);
  }
  return;
}


