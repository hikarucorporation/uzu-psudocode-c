// Function : text_search_list
// Namespace: 
// Entry    : 005599f0
// Prototype: undefined text_search_list(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, long param_7, char * param_8, ulong param_9, int * param_10, char * param_11, undefined8 param_12)
// Body     : 005599f0 - 00559ee0


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void text_search_list(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,long param_7,char *param_8,ulong param_9,
                     int *param_10,char *param_11,undefined8 param_12)

{
  float fVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  long lVar6;
  int *piVar7;
  float *pfVar8;
  ulong uVar9;
  undefined8 extraout_RDX;
  ulong uVar10;
  int iVar11;
  char *pcVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  int iVar16;
  ulong uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  ulong uVar21;
  ulong uVar22;
  bool bVar23;
  float fVar24;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  double dVar25;
  uint uVar27;
  ulong uVar26;
  float fVar28;
  undefined8 extraout_XMM1_Qa;
  undefined8 uVar29;
  undefined1 in_XMM1 [16];
  undefined8 extraout_XMM1_Qb;
  undefined8 extraout_XMM1_Qb_00;
  undefined8 extraout_XMM1_Qb_01;
  undefined8 extraout_XMM1_Qb_02;
  undefined8 uVar30;
  undefined1 in_XMM2 [16];
  undefined1 auVar31 [16];
  undefined1 in_stack_ffffffffffffff58;
  uint local_9c;
  ulong local_70;
  ulong local_50;
  
  piVar7 = param_10;
  puVar5 = (undefined4 *)
           text_client_getbuf(param_1,in_XMM1._0_8_,in_XMM2._0_8_,param_2,param_3,param_4,param_5,
                              param_6,param_7,param_8,param_9,param_10,param_11,param_12);
  if (puVar5 == (undefined4 *)0x0) {
    return;
  }
  uVar13 = *(uint *)(param_7 + 0x68);
  pcVar12 = (char *)(long)(int)uVar13;
  iVar19 = (int)param_9;
  if (iVar19 < (int)uVar13) {
    param_8 = "need %d keys, only got %d in list";
    piVar7 = (int *)(param_9 & 0xffffffff);
    pd_error(extraout_XMM0_Qa,in_XMM1._0_8_,in_XMM2._0_8_,param_2,param_3,param_4,param_5,param_6,
             param_7,"need %d keys, only got %d in list",(ulong)uVar13,piVar7,param_11,param_12);
    in_XMM1._8_8_ = extraout_XMM1_Qb;
    in_XMM1._0_8_ = extraout_XMM1_Qa;
  }
  lVar6 = binbuf_getvec((long)puVar5);
  uVar3 = binbuf_getnatom(puVar5);
  uVar30 = in_XMM2._0_8_;
  auVar31._8_8_ = in_XMM1._0_8_;
  auVar31._0_8_ = extraout_XMM0_Qa_00;
  if ((int)uVar13 < 1) {
    auVar31 = bug(extraout_XMM0_Qa_00,in_XMM1._0_8_,uVar30,param_2,param_3,param_4,param_5,param_6,
                  "text_search",param_8,extraout_RDX,piVar7,pcVar12,param_12,
                  in_stack_ffffffffffffff58);
    in_XMM1._0_8_ = auVar31._8_8_;
    uVar30 = in_XMM2._0_8_;
    in_XMM1._8_8_ = extraout_XMM1_Qb_02;
  }
  uVar29 = auVar31._8_8_;
  uVar26 = auVar31._0_8_;
  if ((int)uVar3 < 1) {
    local_9c = 0xffffffff;
  }
  else {
    uVar17 = param_9 & 0xffffffff;
    local_9c = 0xffffffff;
    uVar22 = 0;
    uVar18 = 0;
    local_70 = 0xffffffff;
    uVar13 = 0;
    uVar21 = 0;
    do {
      while( true ) {
        uVar30 = in_XMM2._0_8_;
        uVar29 = in_XMM1._0_8_;
        if (((*(uint *)(lVar6 + uVar22 * 0x10) & 0xfffffffe) == 4) || (uVar22 == uVar3 - 1)) break;
        uVar22 = uVar22 + 1;
        if (uVar22 == uVar3) goto LAB_00559ec1;
      }
      if (*(int *)(param_7 + 0x6c) <= (int)uVar18) {
        if (*(int *)(param_7 + 0x6c) + *(int *)(param_7 + 0x70) <= (int)uVar18) break;
        if (iVar19 < 1) {
          if ((int)local_9c < 0) {
            local_9c = uVar18;
          }
          else {
            uVar21 = local_70;
          }
          local_70 = uVar21;
        }
        else {
          iVar20 = (int)uVar21;
          iVar4 = (int)uVar22 - iVar20;
          piVar7 = *(int **)(param_7 + 0x78);
          iVar11 = *piVar7;
          local_50 = (ulong)(uint)piVar7[1];
          pfVar8 = (float *)(param_10 + 2);
          uVar10 = 1;
          uVar15 = local_50;
          iVar16 = iVar11;
          do {
            if (iVar4 <= iVar16) {
LAB_00559c49:
              goto LAB_00559c4d;
            }
            lVar14 = (long)(iVar16 + iVar20) * 0x10;
            if (*(float *)(lVar6 + lVar14) != pfVar8[-2]) goto LAB_00559c49;
            if (*(float *)(lVar6 + lVar14) == 1.4013e-45) {
              switch(uVar15) {
              case 0:
                fVar28 = *(float *)(lVar6 + 8 + lVar14);
                uVar26 = (ulong)(uint)fVar28;
                if (fVar28 != *pfVar8) goto LAB_00559c49;
                break;
              case 1:
                fVar28 = *(float *)(lVar6 + 8 + lVar14);
                uVar26 = (ulong)(uint)fVar28;
                if (fVar28 < *pfVar8 || fVar28 == *pfVar8) goto LAB_00559c49;
                break;
              case 2:
                fVar28 = *(float *)(lVar6 + 8 + lVar14);
                uVar26 = (ulong)(uint)fVar28;
                if (fVar28 < *pfVar8) goto LAB_00559c49;
                break;
              case 3:
                fVar28 = *(float *)(lVar6 + 8 + lVar14);
                uVar26 = (ulong)(uint)fVar28;
                if (*pfVar8 <= fVar28) goto LAB_00559c49;
                break;
              case 4:
                fVar28 = *(float *)(lVar6 + 8 + lVar14);
                uVar26 = (ulong)(uint)fVar28;
                if (*pfVar8 <= fVar28 && fVar28 != *pfVar8) goto LAB_00559c49;
              }
            }
            else {
              if ((int)uVar15 != 0) {
                bVar23 = uVar13 == 0;
                uVar13 = 1;
                if (bVar23) {
                  auVar31 = pd_error(uVar26,uVar29,uVar30,param_2,param_3,param_4,param_5,param_6,
                                     param_7,
                                     "text search (%s): only exact matches allowed for symbols",
                                     **(undefined8 **)pfVar8,pfVar8,pcVar12,-uVar17);
                  in_XMM1._0_8_ = auVar31._8_8_;
                  uVar26 = auVar31._0_8_;
                  in_XMM1._8_8_ = extraout_XMM1_Qb_00;
                }
                goto LAB_00559c4d;
              }
              if (*(long *)(lVar6 + 8 + lVar14) != *(long *)pfVar8) goto LAB_00559c49;
            }
            if ((long)uVar10 < (long)pcVar12) {
              iVar16 = piVar7[uVar10 * 2];
              uVar15 = (ulong)(uint)piVar7[uVar10 * 2 + 1];
            }
            else {
              iVar16 = iVar16 + 1;
            }
            pfVar8 = pfVar8 + 4;
            bVar23 = uVar10 != uVar17;
            uVar10 = uVar10 + 1;
          } while (bVar23);
          uVar27 = local_9c;
          uVar10 = local_70;
          if (-1 >= (int)local_9c) {
            uVar27 = uVar18;
            uVar10 = uVar21;
          }
          uVar9 = (ulong)uVar27;
          if (-1 < (int)local_9c && 0 < iVar19) {
            uVar10 = 1;
            piVar7 = param_10;
            do {
              if ((iVar4 <= iVar11) ||
                 (iVar16 = *(int *)(lVar6 + (long)(iVar11 + iVar20) * 0x10), iVar16 != *piVar7)) {
                auVar31 = bug(uVar26,in_XMM1._0_8_,in_XMM2._0_8_,param_2,param_3,param_4,param_5,
                              param_6,"text search 2",uVar15,(ulong)uVar13,uVar9,pcVar12,-uVar17,
                              in_stack_ffffffffffffff58);
                in_XMM1._0_8_ = auVar31._8_8_;
                uVar26 = auVar31._0_8_;
                in_XMM1._8_8_ = extraout_XMM1_Qb_01;
                iVar16 = *piVar7;
              }
              if (iVar16 != 1) goto LAB_00559df0;
              dVar25 = DAT_006553f8;
              if (-1 < (int)local_70) {
                dVar25 = (double)*(float *)(lVar6 + 8 + (long)((int)local_70 + iVar11) * 0x10);
              }
              fVar28 = *(float *)(lVar6 + 8 + (long)(iVar11 + iVar20) * 0x10);
              in_XMM1 = ZEXT416((uint)fVar28);
              uVar27 = (uint)((ulong)dVar25 >> 0x20);
              fVar24 = (float)dVar25;
              uVar26 = CONCAT44(uVar27,fVar24);
              iVar16 = (int)local_50;
              uVar9 = local_50;
              uVar30 = param_4;
              if (iVar16 - 1U < 2) {
LAB_00559de0:
                if (fVar28 < fVar24) goto LAB_00559e6a;
                if (fVar28 <= fVar24) goto LAB_00559df0;
LAB_00559e5a:
                param_4 = uVar30;
LAB_00559e76:
                goto LAB_00559ae0;
              }
              if (iVar16 - 3U < 2) {
LAB_00559db7:
                if (fVar24 < fVar28) {
LAB_00559e6a:
                  param_4 = uVar30;
                  local_9c = uVar18;
                  local_70 = uVar21;
                  goto LAB_00559e76;
                }
                if (fVar28 < fVar24) goto LAB_00559e5a;
              }
              else if (iVar16 == 5) {
                fVar1 = (float)piVar7[2];
                in_XMM2 = ZEXT416((uint)fVar1);
                if ((fVar1 <= fVar28) && (fVar1 <= fVar24)) goto LAB_00559de0;
                if ((fVar28 <= fVar1) && (fVar24 <= fVar1)) goto LAB_00559db7;
                fVar28 = fVar28 - fVar1;
                fVar24 = fVar24 - fVar1;
                uVar26 = CONCAT44(uVar27,fVar24);
                param_3 = (undefined8)DAT_006524b0;
                uVar30 = 0;
                param_4 = 0;
                fVar28 = (float)(~-(uint)(fVar28 < 0.0) & (uint)fVar28 |
                                ((uint)fVar28 ^ (uint)DAT_006524b0) & -(uint)(fVar28 < 0.0));
                in_XMM2 = ZEXT416((uint)fVar28);
                param_2 = CONCAT44((uVar27 ^ DAT_006524b0._4_4_) & uVar27,
                                   ((uint)fVar24 ^ (uint)DAT_006524b0) & -(uint)(fVar24 < 0.0));
                auVar2._8_8_ = 0;
                auVar2._0_8_ = param_2;
                in_XMM1 = ZEXT416(~-(uint)(fVar24 < 0.0) & (uint)fVar24) | auVar2;
                if (in_XMM1._0_4_ <= fVar28) {
                  uVar30 = 0;
                  if (fVar28 <= in_XMM1._0_4_) goto LAB_00559df0;
                  goto LAB_00559e5a;
                }
                goto LAB_00559e6a;
              }
LAB_00559df0:
              if ((long)uVar10 < (long)pcVar12) {
                iVar11 = *(int *)(*(long *)(param_7 + 0x78) + uVar10 * 8);
                local_50 = (ulong)*(uint *)(*(long *)(param_7 + 0x78) + 4 + uVar10 * 8);
              }
              else {
                iVar11 = iVar11 + 1;
              }
              piVar7 = piVar7 + 4;
              bVar23 = uVar10 != uVar17;
              uVar10 = uVar10 + 1;
            } while (bVar23);
          }
          else {
            local_9c = uVar27;
            local_70 = uVar10;
          }
LAB_00559c4d:
        }
      }
LAB_00559ae0:
      uVar30 = in_XMM2._0_8_;
      uVar29 = in_XMM1._0_8_;
      uVar18 = uVar18 + 1;
      uVar22 = uVar22 + 1;
      uVar21 = uVar22 & 0xffffffff;
    } while (uVar22 != uVar3);
  }
LAB_00559ec1:
  outlet_float((ulong)(uint)(float)(int)local_9c,uVar29,uVar30,param_2,param_3,param_4,param_5,
               param_6,*(long **)(param_7 + 0x60));
  return;
}


