// Function : curve_click
// Namespace: 
// Entry    : 00522180
// Prototype: undefined8 curve_click(undefined8 param_1, ulong param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, float * param_11, long param_12, char * param_13, long param_14, int param_15, int param_16)
// Body     : 00522180 - 00522676


undefined8
curve_click(undefined8 param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,ulong param_6
           ,undefined8 param_7,undefined8 param_8,long param_9,long param_10,float *param_11,
           long param_12,char *param_13,long param_14,int param_15,int param_16)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  float *pfVar7;
  uint uVar8;
  long *plVar9;
  float *extraout_RDX;
  long extraout_RDX_00;
  long extraout_RDX_01;
  float *extraout_RDX_02;
  float *pfVar10;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  uint uVar11;
  char *pcVar12;
  long lVar13;
  char *pcVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  int iVar18;
  float fVar19;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  float fVar20;
  ulong uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  float fVar24;
  undefined4 uVar25;
  undefined1 auVar26 [16];
  int in_stack_00000030;
  float in_stack_ffffffffffffff78;
  uint local_84;
  int local_80;
  
  if (((*(byte *)(param_9 + 0x30) & 0x14) == 0) && (*(char *)(param_9 + 0xb0) == '\x01')) {
    iVar2 = *(int *)(param_9 + 0xd8);
    pfVar7 = (float *)(param_9 + 0xb8);
    if (*(char *)(param_9 + 0xb1) == '\0') {
      fVar16 = *pfVar7;
      lVar13 = param_10;
    }
    else {
      if (param_12 == 0) {
        bug(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"template_find_field",
            param_10,param_11,pfVar7,param_13,param_14,SUB41(in_stack_ffffffffffffff78,0));
        return 0;
      }
      if ((int)*(uint *)(param_12 + 0x18) < 1) {
        return 0;
      }
      lVar13 = *(long *)pfVar7;
      plVar9 = (long *)(*(long *)(param_12 + 0x20) + 8);
      lVar5 = 0;
      while (*plVar9 != lVar13) {
        lVar5 = lVar5 + 8;
        plVar9 = plVar9 + 3;
        if ((ulong)*(uint *)(param_12 + 0x18) * 8 == lVar5) {
          return 0;
        }
      }
      if ((int)plVar9[-1] != 0) {
        return 0;
      }
      pfVar7 = (float *)((long)(int)lVar5 + (long)param_11);
      fVar16 = *pfVar7;
    }
    if (fVar16 != 0.0) {
      if (iVar2 < 1) {
        return 0;
      }
      pcVar12 = *(char **)(param_9 + 0xe0);
      local_84 = 0x7fffffff;
      local_80 = -1;
      iVar15 = 0;
      pfVar10 = param_11;
      pcVar14 = param_13;
      lVar5 = param_14;
      uVar21 = param_2;
      do {
        fVar16 = 0.0;
        if (*pcVar12 == '\x01') {
          if (pcVar12[1] == '\0') {
            fVar16 = *(float *)(pcVar12 + 8);
          }
          else {
            if (param_12 == 0) {
              bug(0,uVar21,param_3,param_4,param_5,param_6,param_7,param_8,"template_find_field",
                  lVar13,pfVar10,pfVar7,pcVar14,lVar5,SUB41(in_stack_ffffffffffffff78,0));
              fVar16 = 0.0;
              pfVar10 = extraout_RDX;
            }
            else {
              fVar16 = 0.0;
              if (0 < (int)*(uint *)(param_12 + 0x18)) {
                pfVar10 = *(float **)(pcVar12 + 8);
                pfVar7 = (float *)(*(long *)(param_12 + 0x20) + 8);
                lVar13 = 0;
                do {
                  if (*(float **)pfVar7 == pfVar10) {
                    if (pfVar7[-2] == 0.0) {
                      fVar16 = *(float *)((long)param_11 + (long)(int)lVar13);
                      pfVar7 = param_11;
                    }
                    break;
                  }
                  lVar13 = lVar13 + 8;
                  pfVar7 = pfVar7 + 6;
                } while ((ulong)*(uint *)(param_12 + 0x18) * 8 != lVar13);
              }
            }
            fVar24 = *(float *)(pcVar12 + 0x10);
            fVar20 = *(float *)(pcVar12 + 0x14);
            uVar21 = (ulong)(uint)fVar20;
            param_3 = (ulong)(uint)fVar24;
            if (fVar20 != fVar24) {
              fVar19 = *(float *)(pcVar12 + 0x18);
              fVar1 = *(float *)(pcVar12 + 0x1c);
              param_5 = (ulong)(uint)fVar1;
              param_6 = (ulong)(uint)(fVar1 - fVar19);
              fVar16 = ((fVar16 - fVar24) * (fVar1 - fVar19)) / (fVar20 - fVar24) + fVar19;
              fVar20 = fVar19;
              if (fVar1 <= fVar19) {
                fVar20 = fVar1;
              }
              if (fVar20 <= fVar16) {
                fVar20 = fVar16;
              }
              uVar21 = (ulong)(uint)fVar20;
              if (fVar19 <= fVar1) {
                fVar19 = fVar1;
              }
              fVar16 = fVar19;
              if (fVar20 <= fVar19) {
                fVar16 = fVar20;
              }
              param_4 = (ulong)(uint)fVar16;
              param_3 = (ulong)(uint)fVar24;
            }
          }
        }
        in_stack_ffffffffffffff78 =
             glist_xtopixels((ulong)(uint)((float)(int)fVar16 + (float)param_1),uVar21,param_3,
                             param_4,param_5,param_6,param_7,param_8,param_10,lVar13,pfVar10,pfVar7,
                             pcVar14,lVar5);
        fVar24 = 0.0;
        lVar6 = extraout_RDX_00;
        if (pcVar12[0x28] == '\x01') {
          if (pcVar12[0x29] == '\0') {
            fVar24 = *(float *)(pcVar12 + 0x30);
          }
          else {
            if (param_12 == 0) {
              bug(CONCAT44(extraout_XMM0_Db,in_stack_ffffffffffffff78),uVar21,param_3,param_4,
                  param_5,param_2 & 0xffffffff,0,param_8,"template_find_field",lVar13,
                  extraout_RDX_00,pfVar7,pcVar14,lVar5,SUB41(in_stack_ffffffffffffff78,0));
              fVar24 = 0.0;
              lVar6 = extraout_RDX_01;
            }
            else {
              fVar24 = 0.0;
              if (0 < (int)*(uint *)(param_12 + 0x18)) {
                lVar6 = *(long *)(pcVar12 + 0x30);
                pfVar7 = (float *)(*(long *)(param_12 + 0x20) + 8);
                lVar13 = 0;
                do {
                  if (*(long *)pfVar7 == lVar6) {
                    if (pfVar7[-2] == 0.0) {
                      fVar24 = *(float *)((long)param_11 + (long)(int)lVar13);
                      pfVar7 = param_11;
                    }
                    break;
                  }
                  lVar13 = lVar13 + 8;
                  pfVar7 = pfVar7 + 6;
                } while ((ulong)*(uint *)(param_12 + 0x18) * 8 != lVar13);
              }
            }
            fVar20 = *(float *)(pcVar12 + 0x38);
            uVar21 = (ulong)(uint)fVar20;
            if (*(float *)(pcVar12 + 0x3c) != fVar20) {
              fVar19 = *(float *)(pcVar12 + 0x40);
              fVar1 = *(float *)(pcVar12 + 0x44);
              param_4 = (ulong)(uint)fVar1;
              param_5 = (ulong)(uint)(fVar1 - fVar19);
              fVar24 = ((fVar24 - fVar20) * (fVar1 - fVar19)) /
                       (*(float *)(pcVar12 + 0x3c) - fVar20) + fVar19;
              fVar17 = fVar19;
              if (fVar1 <= fVar19) {
                fVar17 = fVar1;
              }
              if (fVar17 <= fVar24) {
                fVar17 = fVar24;
              }
              if (fVar19 <= fVar1) {
                fVar19 = fVar1;
              }
              fVar24 = fVar19;
              if (fVar17 <= fVar19) {
                fVar24 = fVar17;
              }
              param_3 = (ulong)(uint)fVar24;
              uVar21 = (ulong)(uint)fVar20;
            }
          }
        }
        uVar25 = 0;
        uVar23 = 0;
        iVar18 = (int)fVar24;
        fVar20 = (float)param_2;
        fVar19 = glist_ytopixels((ulong)(uint)((float)iVar18 + (float)param_2),uVar21,param_3,
                                 param_4,param_5,param_2 & 0xffffffff,(ulong)(uint)fVar24,param_8,
                                 param_10,lVar13,lVar6,pfVar7,pcVar14,lVar5);
        if ((pcVar12[1] != '\0') || (pfVar10 = extraout_RDX_02, pcVar12[0x29] != '\0')) {
          uVar4 = (int)fVar19 - param_16;
          pfVar7 = (float *)(ulong)uVar4;
          uVar8 = -((int)in_stack_ffffffffffffff78 - param_15);
          if ((int)uVar8 < 0) {
            uVar8 = (int)in_stack_ffffffffffffff78 - param_15;
          }
          pfVar10 = (float *)(ulong)uVar8;
          uVar11 = -uVar4;
          if ((int)-uVar4 < 0) {
            uVar11 = uVar4;
          }
          if (uVar11 <= uVar8) {
            uVar11 = uVar8;
          }
          if ((int)uVar11 < (int)local_84) {
            auVar26 = __tls_get_addr(&PTR_007159b0);
            pfVar10 = auVar26._8_8_;
            lVar6 = *(long *)(*(long *)(*auVar26._0_8_ + 0x48) + 8);
            *(float *)(lVar6 + 8) = (float)(int)fVar16;
            *(float *)(lVar6 + 0x14) = (float)iVar18;
            local_84 = uVar11;
            local_80 = iVar15;
          }
        }
        param_7 = CONCAT44(uVar25,fVar24);
        param_6 = CONCAT44(uVar23,fVar20);
        iVar15 = iVar15 + 1;
        pcVar12 = pcVar12 + 0x50;
        if (iVar15 == iVar2) {
          if (6 < (int)local_84) {
            return 0;
          }
          if (in_stack_00000030 == 0) {
            return 1;
          }
          fVar19 = glist_pixelstox((ulong)DAT_005d9038,uVar21,param_3,param_4,param_5,
                                   CONCAT44(uVar23,fVar20),CONCAT44(uVar25,fVar24),param_8,param_10,
                                   lVar13,pfVar10,pfVar7,pcVar14,lVar5);
          fVar16 = glist_pixelstox(0,uVar21,param_3,param_4,param_5,CONCAT44(uVar23,fVar20),
                                   CONCAT44(uVar25,fVar24),param_8,param_10,lVar13,extraout_RDX_03,
                                   pfVar7,pcVar14,lVar5);
          uVar22 = 0;
          fVar19 = fVar19 - fVar16;
          fVar16 = fVar19;
          auVar26 = __tls_get_addr(&PTR_007159b0);
          lVar6 = *auVar26._0_8_;
          *(float *)(*(long *)(*(long *)(lVar6 + 0x48) + 8) + 0xc) = fVar16;
          fVar16 = glist_pixelstoy((ulong)DAT_005d9038,CONCAT44(uVar22,fVar19),param_3,param_4,
                                   param_5,CONCAT44(uVar23,fVar20),CONCAT44(uVar25,fVar24),param_8,
                                   param_10,lVar13,auVar26._8_8_,lVar6,pcVar14,lVar5);
          fVar19 = glist_pixelstoy(0,CONCAT44(uVar22,fVar19),param_3,param_4,param_5,
                                   CONCAT44(uVar23,fVar20),CONCAT44(uVar25,fVar24),param_8,param_10,
                                   lVar13,extraout_RDX_04,lVar6,pcVar14,lVar5);
          fVar16 = fVar16 - fVar19;
          piVar3 = *(int **)(*(long *)(*auVar26._0_8_ + 0x48) + 8);
          piVar3[6] = (int)fVar16;
          piVar3[1] = 0;
          piVar3[4] = 0;
          *(long *)(piVar3 + 8) = param_10;
          *(char **)(piVar3 + 10) = param_13;
          *(long *)(piVar3 + 0xc) = param_14;
          *(float **)(piVar3 + 0xe) = param_11;
          *piVar3 = local_80 * 2;
          *(long *)(piVar3 + 0x10) = param_12;
          if (param_13 == (char *)0x0) {
            gpointer_setarray(CONCAT44(extraout_XMM0_Db_00,fVar19),(ulong)(uint)fVar16,param_3,
                              param_4,param_5,CONCAT44(uVar23,fVar20),CONCAT44(uVar25,fVar24),
                              param_8,(undefined8 *)(piVar3 + 0x12),param_14,param_11,lVar6,pcVar14,
                              lVar5);
          }
          else {
            gpointer_setglist(CONCAT44(extraout_XMM0_Db_00,fVar19),(ulong)(uint)fVar16,param_3,
                              param_4,param_5,CONCAT44(uVar23,fVar20),CONCAT44(uVar25,fVar24),
                              param_8,(undefined8 *)(piVar3 + 0x12),param_10,param_13,lVar6,pcVar14,
                              lVar5);
          }
          glist_grab(param_10,param_9,0x526a30,0,param_15,param_16);
          return 1;
        }
      } while( true );
    }
  }
  return 0;
}


