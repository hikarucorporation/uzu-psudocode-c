// Function : oscparse_list
// Namespace: 
// Entry    : 0057f040
// Prototype: undefined oscparse_list(ulong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, ulong param_11, char * * param_12, char * * param_13, uint * param_14)
// Body     : 0057f040 - 0057fa60


void oscparse_list(ulong param_1,ulong param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
                  undefined8 param_10,ulong param_11,char **param_12,char **param_13,uint *param_14)

{
  bool bVar1;
  char **ppcVar2;
  char cVar3;
  long *plVar4;
  char *pcVar5;
  long lVar6;
  char **ppcVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  char **ppcVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  char **ppcVar16;
  ulong uVar17;
  char **extraout_RDX;
  char **ppcVar18;
  char **extraout_RDX_00;
  ulong uVar19;
  char *pcVar20;
  uint uVar21;
  undefined4 uVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  float fVar26;
  double dVar27;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar28;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar29 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM1_Qa;
  undefined8 uVar30;
  undefined8 extraout_XMM1_Qa_00;
  undefined8 extraout_XMM1_Qb;
  undefined1 auVar31 [16];
  undefined8 extraout_XMM1_Qb_00;
  float fVar32;
  undefined4 uVar33;
  undefined1 auVar34 [16];
  undefined8 uStack_480;
  undefined8 local_478;
  char **local_88;
  char **local_80;
  long local_78;
  uint local_70;
  uint local_6c;
  long local_68;
  long local_60;
  ulong local_58;
  char **local_50;
  uint local_44;
  char **local_40;
  char **local_38;
  uint switchD_0057f6ff::switchdataD_0065c270;
  
  uVar12 = (uint)param_11;
  if (uVar12 == 0) {
    return;
  }
  ppcVar7 = (char **)(param_11 & 0xffffffff);
  ppcVar11 = param_12;
  if (0 < (int)uVar12) {
    ppcVar11 = (char **)0x0;
    do {
      if (*(int *)((long)param_12 + (long)ppcVar11) != 1) {
        pcVar20 = "oscparse: takes numbers only";
        goto LAB_0057f66c;
      }
      ppcVar11 = ppcVar11 + 2;
    } while ((char **)((long)ppcVar7 * 0x10) != ppcVar11);
  }
  fVar32 = *(float *)(param_12 + 1);
  param_1 = (ulong)(uint)fVar32;
  param_2 = (ulong)(uint)DAT_0065c260;
  if (DAT_0065c260 == fVar32) {
    if (0xf < (int)uVar12) {
      fVar32 = *(float *)(param_12 + 3);
      auVar34 = ZEXT416((uint)fVar32);
      param_1 = (ulong)(uint)fVar32;
      if (fVar32 == DAT_0065c26c) {
        if (uVar12 < 0x15) {
          return;
        }
        iVar24 = 0x10;
        while( true ) {
          param_1 = auVar34._0_8_;
          lVar10 = (long)iVar24;
          ppcVar11 = (char **)(lVar10 * 0x10);
          uVar13 = ((int)*(float *)(param_12 + 3 + lVar10 * 2) & 0xffU) << 0x10 |
                   (int)*(float *)(param_12 + 1 + lVar10 * 2) << 0x18;
          param_11 = (ulong)uVar13;
          uVar13 = (int)*(float *)(param_12 + 7 + lVar10 * 2) & 0xffU |
                   ((int)*(float *)(param_12 + 5 + lVar10 * 2) & 0xffU) << 8 | uVar13;
          if (((int)uVar13 < 1) || (((int)*(float *)(param_12 + 7 + lVar10 * 2) & 3U) != 0)) break;
          uStack_480 = 0x57f13f;
          auVar34 = oscparse_list(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                  param_9,0,(ulong)uVar13,
                                  (char **)((long)ppcVar11 + (long)param_12) + 8,param_13,param_14);
          param_2 = auVar34._8_8_;
          auVar34._8_8_ = extraout_XMM0_Qb;
          iVar24 = iVar24 + uVar13 + 4;
          if ((int)(uVar12 - 4) <= iVar24) {
            return;
          }
        }
        pcVar20 = "oscparse: bad bundle element size";
        goto LAB_0057f66c;
      }
    }
    pcVar20 = "oscparse: malformed bundle";
  }
  else {
    if (fVar32 == DAT_0065c264) {
      local_60 = param_9;
      ppcVar11 = (char **)0x1;
      iVar24 = 1;
      if (1 < (int)uVar12) {
        ppcVar18 = param_12 + 3;
        iVar24 = 1;
        ppcVar11 = (char **)0x1;
        do {
          fVar32 = *(float *)ppcVar18;
          param_3 = (ulong)(uint)fVar32;
          if (fVar32 == 0.0) goto LAB_0057f1e3;
          iVar24 = iVar24 + (uint)(fVar32 == DAT_0065c264);
          ppcVar11 = (char **)((long)ppcVar11 + 1);
          ppcVar18 = ppcVar18 + 2;
        } while (ppcVar7 != ppcVar11);
        ppcVar11 = (char **)(param_11 & 0xffffffff);
        param_3 = (ulong)(uint)fVar32;
      }
LAB_0057f1e3:
      uVar13 = (int)ppcVar11 + 4U & 0x7ffffffc;
      fVar32 = *(float *)(param_12 + (ulong)uVar13 * 2 + 1);
      if (DAT_0065c268 == fVar32) {
        uVar21 = uVar13 | 1;
        param_13 = (char **)(ulong)uVar21;
        if ((int)uVar21 < (int)uVar12) {
          local_40 = (char **)(ulong)(uVar13 + 1);
          ppcVar18 = param_12 + (long)local_40 * 2 + 1;
          bVar1 = false;
          auVar31 = ZEXT416((uint)DAT_0065c26c);
          pcVar20 = (char *)0x1;
          ppcVar11 = local_40;
          do {
            fVar32 = *(float *)ppcVar18;
            uVar33 = 0;
            if (fVar32 == 0.0) goto LAB_0057f265;
            if (fVar32 == DAT_0065c26c) {
              bVar1 = true;
            }
            ppcVar11 = (char **)((long)ppcVar11 + 1);
            ppcVar18 = ppcVar18 + 2;
          } while (ppcVar7 != ppcVar11);
          ppcVar11 = (char **)(param_11 & 0xffffffff);
LAB_0057f265:
          uVar14 = uVar12;
          if (!bVar1) {
            uVar14 = (uint)ppcVar11;
          }
          local_44 = (uVar14 - uVar21) + iVar24;
          lVar10 = (long)(int)local_44;
          ppcVar16 = (char **)(&local_478 + lVar10 * -2);
          local_38 = ppcVar16;
          uVar14 = (uint)ppcVar11 + 4 & 0x7ffffffc;
          ppcVar18 = (char **)(ulong)uVar14;
          uVar17 = 0;
          auVar29 = ZEXT416(DAT_005d9054);
          local_58 = CONCAT44(local_58._4_4_,DAT_005d9054);
          local_68 = lVar10;
          if ((uVar13 != 0) && (0 < (int)local_44)) {
            local_78 = (long)(int)uVar12;
            local_50 = param_12 + 3;
            auVar31 = ZEXT416((uint)DAT_0065c264);
            lVar6 = 0;
            uVar25 = 0;
            uVar17 = 0;
            local_88 = ppcVar11;
            local_80 = ppcVar7;
            local_70 = uVar21;
            local_6c = uVar14;
            fVar26 = DAT_0065c264;
            do {
              uVar33 = 0;
              fVar15 = auVar31._0_4_;
              local_58 = uVar17;
              if (*(int *)(local_60 + 0x38) == 0) {
                *(undefined4 *)(local_38 + uVar17 * 2) = 2;
                param_14 = (uint *)(param_11 & 0xffffffff);
                if (((int)uVar25 < (int)uVar12) && (fVar26 == fVar15)) {
                  iVar24 = -(int)lVar6;
                  ppcVar11 = local_50 + lVar6 * 2;
                  do {
                    if (uVar12 + iVar24 == 1) {
                      ppcVar11 = (char **)0x0;
                      uVar25 = uVar12;
                      goto LAB_0057f5c2;
                    }
                    iVar24 = iVar24 + -1;
                    fVar26 = *(float *)ppcVar11;
                    ppcVar11 = ppcVar11 + 2;
                  } while (fVar15 == fVar26);
                  uVar25 = -iVar24;
                }
                if ((int)uVar25 < (int)uVar12) {
                  lVar6 = (long)(int)uVar25;
                  ppcVar11 = (char **)(local_78 - lVar6);
                  ppcVar7 = local_50 + lVar6 * 2;
                  pcVar20 = (char *)0x0;
                  do {
                    cVar3 = (char)(int)*(float *)(ppcVar7 + -2);
                    iVar24 = (int)pcVar20;
                    if ((cVar3 == '\0') || (cVar3 == '/')) {
                      ppcVar11 = (char **)pcVar20;
                      param_14 = (uint *)(ulong)(uVar25 + iVar24);
                      uVar25 = uVar25 + iVar24;
                      goto LAB_0057f5c2;
                    }
                    *(char *)((long)&local_478 + (long)pcVar20) = cVar3;
                    if ((char **)pcVar20 == (char **)0x3e6) {
                      ppcVar11 = (char **)0x3e7;
                      param_14 = (uint *)(ulong)(uVar25 + 999);
                      uVar25 = uVar25 + 999;
                      goto LAB_0057f5c2;
                    }
                    if ((char **)((long)ppcVar11 + -1) == (char **)pcVar20) {
                      uVar25 = uVar12;
                      goto LAB_0057f5c2;
                    }
                    cVar3 = (char)(int)*(float *)ppcVar7;
                    if ((cVar3 == '\0') || (cVar3 == '/')) {
                      param_14 = (uint *)((long)pcVar20 + lVar6 + 1);
                      pcVar20 = (char *)((long)pcVar20 + 1);
                      ppcVar11 = (char **)pcVar20;
                      uVar25 = uVar25 + iVar24 + 1;
                      goto LAB_0057f5c2;
                    }
                    *(char *)((long)&local_478 + 1 + (long)pcVar20) = cVar3;
                    pcVar20 = (char *)((long)pcVar20 + 2);
                    ppcVar7 = ppcVar7 + 4;
                  } while (ppcVar11 != (char **)pcVar20);
                  param_14 = (uint *)local_80;
                  uVar25 = uVar12;
                }
                else {
                  ppcVar11 = (char **)0x0;
                  param_14 = (uint *)(ulong)uVar25;
                }
LAB_0057f5c2:
                *(undefined1 *)((long)&local_478 + ((ulong)ppcVar11 & 0xffffffff)) = 0;
                if ((int)uVar12 < (int)param_14) {
                  uVar25 = uVar12;
                }
                (&uStack_480)[lVar10 * -2] = 0x57f5df;
                pcVar5 = (char *)gensym((char *)&local_478);
                local_38[uVar17 * 2 + 1] = pcVar5;
              }
              else {
                uVar21 = uVar12;
                uVar14 = uVar12;
                if (((int)uVar25 < (int)uVar12) && (fVar26 == fVar15)) {
                  iVar24 = -(int)lVar6;
                  ppcVar11 = local_50 + lVar6 * 2;
                  do {
                    if (uVar12 + iVar24 == 1) {
                      uVar17 = 0;
                      goto LAB_0057f524;
                    }
                    iVar24 = iVar24 + -1;
                    fVar26 = *(float *)ppcVar11;
                    ppcVar11 = ppcVar11 + 2;
                  } while (fVar15 == fVar26);
                  uVar25 = -iVar24;
                }
                if ((int)uVar25 < (int)uVar12) {
                  uVar17 = local_78 - (int)uVar25;
                  ppcVar11 = local_50 + (long)(int)uVar25 * 2;
                  uVar19 = 0;
                  do {
                    cVar3 = (char)(int)*(float *)(ppcVar11 + -2);
                    iVar24 = (int)uVar19;
                    if ((cVar3 == '\0') || (cVar3 == '/')) {
                      uVar14 = uVar25 + iVar24;
                      uVar21 = uVar25 + iVar24;
                      uVar17 = uVar19;
LAB_0057f4e8:
                      break;
                    }
                    *(char *)((long)&local_478 + uVar19) = cVar3;
                    if (uVar19 == 0x3e6) {
                      uVar17 = 999;
                      uVar21 = uVar25 + 999;
                      uVar14 = uVar25 + 999;
                      break;
                    }
                    if (uVar17 - 1 == uVar19) break;
                    cVar3 = (char)(int)*(float *)ppcVar11;
                    if ((cVar3 == '\0') || (cVar3 == '/')) {
                      uVar14 = uVar25 + iVar24 + 1;
                      uVar21 = uVar25 + iVar24 + 1;
                      uVar17 = uVar19 + 1;
                      goto LAB_0057f4e8;
                    }
                    *(char *)((long)&local_478 + uVar19 + 1) = cVar3;
                    uVar19 = uVar19 + 2;
                    ppcVar11 = ppcVar11 + 4;
                  } while (uVar17 != uVar19);
                }
                else {
                  uVar17 = 0;
                  uVar21 = uVar25;
                  uVar14 = uVar25;
                }
LAB_0057f524:
                *(undefined1 *)((long)&local_478 + (uVar17 & 0xffffffff)) = 0;
                uVar25 = uVar21;
                if ((int)uVar12 < (int)uVar14) {
                  uVar25 = uVar12;
                }
                (&uStack_480)[lVar10 * -2] = 0x57f541;
                plVar4 = gensym((char *)&local_478);
                local_478 = (char *)0x0;
                pcVar5 = (char *)*plVar4;
                pcVar20 = (char *)&local_478;
                (&uStack_480)[lVar10 * -2] = 0x57f55e;
                dVar27 = strtod(pcVar5,(char **)pcVar20);
                if (((float)dVar27 == DAT_005d9058) && ((char *)*plVar4 == local_478)) {
                  *(undefined4 *)(local_38 + local_58 * 2) = 2;
                  local_38[local_58 * 2 + 1] = (char *)plVar4;
                }
                else {
                  *(undefined4 *)(local_38 + local_58 * 2) = 1;
                  *(float *)(local_38 + local_58 * 2 + 1) = (float)dVar27;
                }
              }
              auVar31 = ZEXT416((uint)DAT_0065c264);
              uVar17 = local_58 + 1;
              if ((int)uVar13 <= (int)uVar25) goto LAB_0057f620;
              lVar6 = (long)(int)uVar25;
              fVar26 = *(float *)(param_12 + lVar6 * 2 + 1);
              fVar32 = 0.0;
              uVar33 = 0;
              if ((fVar26 == 0.0) || (local_68 <= (long)uVar17)) goto LAB_0057f620;
            } while( true );
          }
          goto LAB_0057f688;
        }
      }
      pd_error((ulong)(uint)fVar32,(ulong)(uint)DAT_0065c268,param_3,param_4,param_5,param_6,param_7
               ,param_8,param_9,"oscparse: malformed type string (char %d, index %d)",
               (ulong)(uint)(int)fVar32,(ulong)uVar13,(char *)param_13,param_14);
      return;
    }
    pcVar20 = "oscparse: not an OSC message (no leading slash)";
  }
LAB_0057f66c:
  pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,pcVar20,param_11,
           ppcVar11,(char *)param_13,param_14);
  return;
LAB_0057f620:
  auVar29 = ZEXT416((uint)(float)(int)uVar17);
  local_58 = CONCAT44(local_58._4_4_,(float)(int)uVar17);
  param_13 = (char **)(ulong)local_70;
  ppcVar18 = (char **)(ulong)local_6c;
  ppcVar11 = local_88;
LAB_0057f688:
  uVar22 = (undefined4)uVar17;
  local_478._0_4_ = (uint)ppcVar18;
  if ((uint)param_13 < (uint)ppcVar11) {
    iVar24 = uVar12 - 4;
    ppcVar11 = (char **)((ulong)ppcVar11 & 0xffffffff);
    local_68 = CONCAT44(local_68._4_4_,iVar24);
    local_50 = ppcVar11;
    ppcVar7 = local_40;
    do {
      ppcVar2 = local_38;
      lVar6 = local_60;
      local_40 = ppcVar7;
      uVar19 = (ulong)(uint)(int)*(float *)(param_12 + (long)ppcVar7 * 2 + 1);
      uVar28 = auVar29._0_8_;
      uVar30 = auVar31._0_8_;
      iVar23 = (int)uVar17;
      switch((int)*(float *)(param_12 + (long)ppcVar7 * 2 + 1)) {
      case 0x62:
        lVar9 = (long)(int)(uint)local_478;
        if (iVar24 < (int)(uint)local_478) {
LAB_0057fa0f:
          (&uStack_480)[lVar10 * -2] = 0x57fa21;
          pd_error(uVar28,uVar30,CONCAT44(uVar33,fVar32),param_4,param_5,param_6,param_7,param_8,
                   lVar6,"oscparse: OSC message ended prematurely",ppcVar18,uVar19,(char *)param_13,
                   &switchD_0057f6ff::switchdataD_0065c270);
          return;
        }
        uVar13 = ((int)*(float *)(param_12 + lVar9 * 2 + 3) & 0xffU) << 0x10 |
                 (int)*(float *)(param_12 + lVar9 * 2 + 1) << 0x18;
        pcVar20 = (char *)(ulong)uVar13;
        uVar21 = (uint)*(float *)(param_12 + lVar9 * 2 + 7);
        param_13 = (char **)(ulong)uVar21;
        uVar13 = ((int)*(float *)(param_12 + lVar9 * 2 + 5) & 0xffU) << 8 | uVar13;
        uVar19 = (ulong)uVar13;
        uVar13 = uVar21 & 0xff | uVar13;
        ppcVar18 = (char **)(ulong)uVar13;
        if ((int)uVar13 < 0) goto LAB_0057fa0f;
        uVar14 = (uint)local_478 + 4;
        uVar8 = (ulong)uVar14;
        uVar19 = (ulong)(uVar12 - uVar14);
        if ((int)(uVar12 - uVar14) < (int)uVar13) goto LAB_0057fa0f;
        uVar19 = (ulong)(uVar13 + iVar23);
        if ((int)local_44 <= (int)(uVar13 + iVar23)) {
          pcVar5 = "oscparse 4";
          goto LAB_0057fa55;
        }
        uVar19 = (ulong)(uVar13 + uVar14);
        if ((int)uVar12 < (int)(uVar13 + uVar14)) goto LAB_0057fa0f;
        auVar29 = ZEXT416((uint)(float)(int)uVar13);
        *(undefined4 *)(local_38 + (long)iVar23 * 2) = 1;
        *(float *)(local_38 + (long)iVar23 * 2 + 1) = (float)(int)uVar13;
        uVar17 = (ulong)(iVar23 + 1U);
        pcVar20 = (char *)local_38;
        if (uVar13 != 0) {
          uVar17 = (ulong)(int)(iVar23 + 1U);
          uVar8 = (ulong)(int)uVar14;
          uVar21 = uVar21 & 1;
          param_13 = (char **)(ulong)uVar21;
          if (uVar13 != 1) {
            pcVar20 = (char *)(param_12 + uVar8 * 2);
            lVar6 = 0x18;
            ppcVar18 = (char **)0x0;
            do {
              *(undefined4 *)((long)local_38 + lVar6 + uVar17 * 0x10 + -0x18) = 1;
              *(undefined4 *)((long)local_38 + lVar6 + uVar17 * 0x10 + -0x10) =
                   *(undefined4 *)((long)pcVar20 + lVar6 + -0x10);
              *(undefined4 *)((long)local_38 + lVar6 + uVar17 * 0x10 + -8) = 1;
              auVar29 = ZEXT416(*(uint *)((long)pcVar20 + lVar6));
              *(uint *)((long)local_38 + lVar6 + uVar17 * 0x10) = *(uint *)((long)pcVar20 + lVar6);
              ppcVar18 = (char **)((long)ppcVar18 + -2);
              lVar6 = lVar6 + 0x20;
            } while (uVar21 - uVar13 != (int)ppcVar18);
            uVar8 = uVar8 - (long)ppcVar18;
            uVar17 = uVar17 - (long)ppcVar18;
          }
          if (uVar21 != 0) {
            *(undefined4 *)(local_38 + uVar17 * 2) = 1;
            ppcVar18 = (char **)(uVar8 * 0x10);
            auVar29 = ZEXT416(*(uint *)(param_12 + 1 + uVar8 * 2));
            *(uint *)(local_38 + uVar17 * 2 + 1) = *(uint *)(param_12 + 1 + uVar8 * 2);
            uVar8 = uVar8 + 1;
            uVar17 = uVar17 + 1;
            pcVar20 = (char *)local_38;
          }
        }
        local_478._0_4_ = (int)uVar8 + 3U & 0xfffffffc;
        break;
      default:
        pcVar20 = "oscparse: unknown tag \'%c\' (%d)";
        (&uStack_480)[lVar10 * -2] = 0x57f6c6;
        pd_error(uVar28,uVar30,CONCAT44(uVar33,fVar32),param_4,param_5,param_6,param_7,param_8,lVar6
                 ,"oscparse: unknown tag \'%c\' (%d)",uVar19,uVar19,(char *)param_13,
                 &switchD_0057f6ff::switchdataD_0065c270);
        auVar31._8_8_ = extraout_XMM1_Qb;
        auVar31._0_8_ = extraout_XMM1_Qa;
        auVar29._8_8_ = extraout_XMM0_Qb_00;
        auVar29._0_8_ = extraout_XMM0_Qa;
        ppcVar18 = extraout_RDX;
        break;
      case 0x66:
        lVar9 = (long)(int)(uint)local_478;
        if (iVar24 < (int)(uint)local_478) goto LAB_0057fa0f;
        uVar8 = (ulong)local_44;
        if ((int)local_44 <= iVar23) {
          (&uStack_480)[lVar10 * -2] = 0x57fa40;
          bug(uVar28,uVar30,CONCAT44(uVar33,fVar32),param_4,param_5,param_6,param_7,param_8,
              "oscparse 1: %d >=%d",uVar17 & 0xffffffff,uVar8,uVar19,(char *)param_13,
              &switchD_0057f6ff::switchdataD_0065c270,*(undefined1 *)ppcVar16);
          return;
        }
        uVar13 = ((int)*(float *)(param_12 + lVar9 * 2 + 3) & 0xffU) << 0x10 |
                 (int)*(float *)(param_12 + lVar9 * 2 + 1) << 0x18;
        uVar21 = ((int)*(float *)(param_12 + lVar9 * 2 + 5) & 0xffU) << 8 | uVar13;
        pcVar20 = (char *)(ulong)uVar21;
        fVar15 = (float)((int)*(float *)(param_12 + lVar9 * 2 + 7) & 0xffU | uVar21);
        auVar31 = ZEXT416((uint)fVar15);
        uVar13 = uVar13 & 0x7f800000;
        fVar26 = (float)(~-(uint)(fVar15 != DAT_005d9058) & (uint)fVar15);
        fVar32 = fVar26;
        if (uVar13 != 0x7f800000) {
          fVar32 = fVar15;
        }
        uVar33 = 0;
        if (uVar13 != 0) {
          fVar26 = fVar32;
        }
        auVar29 = ZEXT416((uint)fVar26);
        *(undefined4 *)(local_38 + (long)iVar23 * 2) = 1;
        *(float *)(local_38 + (long)iVar23 * 2 + 1) = fVar26;
        uVar17 = (ulong)(iVar23 + 1);
        local_478._0_4_ = (uint)local_478 + 4;
        ppcVar18 = local_38;
        break;
      case 0x69:
        lVar9 = (long)(int)(uint)local_478;
        if (iVar24 < (int)(uint)local_478) goto LAB_0057fa0f;
        if ((int)local_44 <= iVar23) {
          pcVar5 = "oscparse 2";
          goto LAB_0057fa55;
        }
        *(undefined4 *)(local_38 + (long)iVar23 * 2) = 1;
        uVar13 = ((int)*(float *)(param_12 + lVar9 * 2 + 5) & 0xffU) << 8 |
                 ((int)*(float *)(param_12 + lVar9 * 2 + 3) & 0xffU) << 0x10 |
                 (int)*(float *)(param_12 + lVar9 * 2 + 1) << 0x18;
        pcVar20 = (char *)(ulong)uVar13;
        uVar13 = (int)*(float *)(param_12 + lVar9 * 2 + 7) & 0xffU | uVar13;
        fVar26 = (float)(int)uVar13;
        auVar29 = ZEXT416((uint)fVar26);
        *(float *)(local_38 + (long)iVar23 * 2 + 1) = fVar26;
        uVar17 = (ulong)(iVar23 + 1);
        local_478._0_4_ = (uint)local_478 + 4;
        ppcVar18 = (char **)(ulong)uVar13;
        param_13 = local_38;
        break;
      case 0x73:
        if ((int)local_44 <= iVar23) {
          pcVar5 = "oscparse 3";
LAB_0057fa55:
          (&uStack_480)[lVar10 * -2] = 0x57fa5c;
          bug(uVar28,uVar30,CONCAT44(uVar33,fVar32),param_4,param_5,param_6,param_7,param_8,pcVar5,
              pcVar20,ppcVar18,uVar19,(char *)param_13,&switchD_0057f6ff::switchdataD_0065c270,
              *(undefined1 *)ppcVar16);
          return;
        }
        *(undefined4 *)(local_38 + (long)iVar23 * 2) = 2;
        (&uStack_480)[lVar10 * -2] = 0x57f9c3;
        pcVar20 = (char *)param_12;
        pcVar5 = (char *)grabstring(uVar12,(long)param_12,(uint *)&local_478,0);
        auVar31._8_8_ = extraout_XMM1_Qb_00;
        auVar31._0_8_ = extraout_XMM1_Qa_00;
        auVar29._8_8_ = extraout_XMM0_Qb_01;
        auVar29._0_8_ = extraout_XMM0_Qa_00;
        ppcVar2[(long)iVar23 * 2 + 1] = pcVar5;
        uVar17 = (ulong)(iVar23 + 1);
        ppcVar18 = extraout_RDX_00;
        ppcVar11 = local_50;
        iVar24 = (int)local_68;
      }
      uVar22 = (undefined4)uVar17;
      param_14 = &switchD_0057f6ff::switchdataD_0065c270;
      ppcVar7 = (char **)((long)local_40 + 1);
    } while (ppcVar7 != ppcVar11);
  }
  lVar6 = local_60;
  plVar4 = *(long **)(local_60 + 0x30);
  uVar17 = local_58 & 0xffffffff;
  (&uStack_480)[lVar10 * -2] = 0x57f9f8;
  outlet_float(uVar17,auVar31._0_8_,CONCAT44(uVar33,fVar32),param_4,param_5,param_6,param_7,param_8,
               plVar4);
  ppcVar11 = local_38;
  plVar4 = *(long **)(lVar6 + 0x18);
  (&uStack_480)[lVar10 * -2] = 0x57fa0a;
  outlet_list(extraout_XMM0_Qa_01,auVar31._0_8_,CONCAT44(uVar33,fVar32),param_4,param_5,param_6,
              param_7,param_8,plVar4,0,uVar22,ppcVar11,(char *)param_13,param_14);
  return;
}


