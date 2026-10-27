// Function : drawnumber_getrect
// Namespace: 
// Entry    : 00525800
// Prototype: undefined drawnumber_getrect(undefined8 param_1, ulong param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, long param_11, long param_12, int * param_13, int * param_14, int * param_15, int * param_16)
// Body     : 00525800 - 00525bbb


void drawnumber_getrect(ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,
                       ulong param_6,undefined8 param_7,undefined8 param_8,long param_9,
                       long param_10,long param_11,long param_12,int *param_13,int *param_14,
                       int *param_15,int *param_16)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  size_t sVar8;
  long *plVar9;
  float *pfVar10;
  long extraout_RDX;
  long *extraout_RDX_00;
  long *extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  int iVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  int *piVar15;
  char *__s;
  uint uVar16;
  float fVar17;
  float fVar18;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  float fVar19;
  float fVar20;
  float fVar21;
  ulong uVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 in_stack_fffffffffffffba8;
  char local_438 [1032];
  
  fVar19 = (float)param_2;
  uVar16 = (uint)param_1;
  if (*(char *)(param_9 + 0xb0) == '\x01') {
    pfVar10 = (float *)(param_9 + 0xb8);
    if (*(char *)(param_9 + 0xb1) == '\0') {
LAB_005258af:
      fVar17 = 0.0;
      if (*pfVar10 != 0.0) {
        lVar12 = param_11;
        piVar14 = param_13;
        uVar22 = param_2;
        if (*(char *)(param_9 + 0x38) == '\x01') {
          if (*(char *)(param_9 + 0x39) == '\0') {
            fVar17 = *(float *)(param_9 + 0x40);
          }
          else {
            if (param_12 == 0) {
              bug(0,param_2,param_3,param_4,param_5,param_6,param_1,param_8,"template_find_field",
                  param_10,param_11,pfVar10,(char *)param_13,param_14,(char)param_1);
              param_1 = (ulong)uVar16;
              fVar17 = 0.0;
              lVar12 = extraout_RDX;
            }
            else {
              fVar17 = 0.0;
              if (0 < (int)*(uint *)(param_12 + 0x18)) {
                plVar9 = (long *)(*(long *)(param_12 + 0x20) + 8);
                pfVar10 = (float *)0x0;
                do {
                  if (*plVar9 == *(long *)(param_9 + 0x40)) {
                    if ((int)plVar9[-1] == 0) {
                      fVar17 = *(float *)(param_11 + (int)pfVar10);
                    }
                    break;
                  }
                  pfVar10 = pfVar10 + 2;
                  plVar9 = plVar9 + 3;
                } while ((float *)((ulong)*(uint *)(param_12 + 0x18) * 8) != pfVar10);
              }
            }
            fVar18 = *(float *)(param_9 + 0x48);
            fVar20 = *(float *)(param_9 + 0x4c);
            uVar22 = (ulong)(uint)fVar20;
            param_3 = (ulong)(uint)fVar18;
            if (fVar20 != fVar18) {
              fVar21 = *(float *)(param_9 + 0x50);
              fVar23 = *(float *)(param_9 + 0x54);
              param_5 = (ulong)(uint)fVar23;
              param_6 = (ulong)(uint)(fVar23 - fVar21);
              fVar17 = ((fVar17 - fVar18) * (fVar23 - fVar21)) / (fVar20 - fVar18) + fVar21;
              fVar20 = fVar21;
              if (fVar23 <= fVar21) {
                fVar20 = fVar23;
              }
              if (fVar20 <= fVar17) {
                fVar20 = fVar17;
              }
              if (fVar21 <= fVar23) {
                fVar21 = fVar23;
              }
              fVar17 = fVar21;
              if (fVar20 <= fVar21) {
                fVar17 = fVar20;
              }
              param_4 = (ulong)(uint)fVar17;
              uVar22 = (ulong)(uint)fVar20;
              param_3 = (ulong)(uint)fVar18;
            }
          }
        }
        lVar13 = param_10;
        piVar15 = param_14;
        fVar18 = glist_xtopixels((ulong)(uint)(fVar17 + (float)param_1),uVar22,param_3,param_4,
                                 param_5,param_6,param_1,param_8,param_10,param_10,lVar12,pfVar10,
                                 (char *)piVar14,param_14);
        fVar17 = 0.0;
        plVar9 = extraout_RDX_00;
        uVar25 = extraout_XMM0_Db;
        if (*(char *)(param_9 + 0x60) == '\x01') {
          if (*(char *)(param_9 + 0x61) == '\0') {
            fVar17 = *(float *)(param_9 + 0x68);
          }
          else {
            if (param_12 == 0) {
              bug(0,uVar22,param_3,param_4,param_5,param_6,param_2 & 0xffffffff,
                  CONCAT44(extraout_XMM0_Db,fVar18),"template_find_field",lVar13,extraout_RDX_00,
                  pfVar10,(char *)piVar14,piVar15,SUB41(fVar18,0));
              uVar25 = 0;
              fVar17 = 0.0;
              plVar9 = extraout_RDX_01;
            }
            else {
              fVar17 = 0.0;
              if (0 < (int)*(uint *)(param_12 + 0x18)) {
                lVar13 = *(long *)(param_9 + 0x68);
                plVar9 = (long *)(*(long *)(param_12 + 0x20) + 8);
                pfVar10 = (float *)0x0;
                do {
                  if (*plVar9 == lVar13) {
                    if ((int)plVar9[-1] == 0) {
                      fVar17 = *(float *)(param_11 + (int)pfVar10);
                    }
                    break;
                  }
                  pfVar10 = pfVar10 + 2;
                  plVar9 = plVar9 + 3;
                } while ((float *)((ulong)*(uint *)(param_12 + 0x18) * 8) != pfVar10);
              }
            }
            fVar20 = *(float *)(param_9 + 0x70);
            fVar21 = *(float *)(param_9 + 0x74);
            uVar22 = (ulong)(uint)fVar21;
            param_3 = (ulong)(uint)fVar20;
            if (fVar21 != fVar20) {
              fVar23 = *(float *)(param_9 + 0x78);
              fVar1 = *(float *)(param_9 + 0x7c);
              param_5 = (ulong)(uint)fVar1;
              param_6 = (ulong)(uint)(fVar1 - fVar23);
              fVar17 = ((fVar17 - fVar20) * (fVar1 - fVar23)) / (fVar21 - fVar20) + fVar23;
              fVar21 = fVar23;
              if (fVar1 <= fVar23) {
                fVar21 = fVar1;
              }
              if (fVar21 <= fVar17) {
                fVar21 = fVar17;
              }
              uVar22 = (ulong)(uint)fVar21;
              if (fVar23 <= fVar1) {
                fVar23 = fVar1;
              }
              fVar17 = fVar23;
              if (fVar21 <= fVar23) {
                fVar17 = fVar21;
              }
              param_4 = (ulong)(uint)fVar17;
              param_3 = (ulong)(uint)fVar20;
            }
          }
        }
        uVar24 = 0;
        iVar2 = (int)fVar18;
        __s = local_438;
        fVar17 = glist_ytopixels((ulong)(uint)(fVar17 + fVar19),uVar22,param_3,param_4,param_5,
                                 param_6,param_2 & 0xffffffff,CONCAT44(uVar25,fVar18),param_10,
                                 lVar13,plVar9,pfVar10,(char *)piVar14,piVar15);
        iVar3 = (int)fVar17;
        iVar4 = glist_fontwidth(CONCAT44(extraout_XMM0_Db_00,fVar17),uVar22,param_3,param_4,param_5,
                                param_6,CONCAT44(uVar24,fVar19),CONCAT44(uVar25,fVar18),param_10,
                                lVar13,extraout_RDX_02,pfVar10,(char *)piVar14,piVar15);
        iVar5 = glist_fontheight(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da),uVar22,param_3,
                                 param_4,param_5,param_6,CONCAT44(uVar24,fVar19),
                                 CONCAT44(uVar25,fVar18),param_10,lVar13,extraout_RDX_03,pfVar10,
                                 (char *)piVar14,piVar15);
        drawnumber_getbuf(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_00),uVar22,param_3,param_4,
                          param_5,param_6,CONCAT44(uVar24,fVar19),CONCAT44(uVar25,fVar18),param_9,
                          param_11,param_12,__s,(char *)piVar14,piVar15);
        pcVar7 = strchr(__s,10);
        if (pcVar7 == (char *)0x0) {
          uVar16 = 0;
          iVar11 = 1;
        }
        else {
          iVar11 = 1;
          uVar16 = 0;
          __s = local_438;
          do {
            if ((long)(int)uVar16 < (long)pcVar7 - (long)__s) {
              uVar16 = (uint)((long)pcVar7 - (long)__s);
            }
            iVar11 = iVar11 + 1;
            __s = pcVar7 + 1;
            pcVar7 = strchr(__s,10);
          } while (pcVar7 != (char *)0x0);
        }
        sVar8 = strlen(__s);
        uVar6 = (uint)sVar8;
        if (sVar8 <= uVar16) {
          uVar6 = uVar16;
        }
        *param_13 = iVar2;
        *param_14 = iVar3;
        *param_15 = uVar6 * iVar4 + iVar2;
        *param_16 = iVar11 * iVar5 + iVar3;
        return;
      }
    }
    else if (param_12 == 0) {
      bug(param_1,param_2,param_3,param_4,param_5,param_6,param_1,param_8,"template_find_field",
          param_10,param_11,pfVar10,(char *)param_13,param_14,in_stack_fffffffffffffba8);
    }
    else if (0 < (int)*(uint *)(param_12 + 0x18)) {
      plVar9 = (long *)(*(long *)(param_12 + 0x20) + 8);
      lVar12 = 0;
      do {
        if (*plVar9 == *(long *)pfVar10) {
          if ((int)plVar9[-1] == 0) {
            pfVar10 = (float *)((int)lVar12 + param_11);
            goto LAB_005258af;
          }
          break;
        }
        lVar12 = lVar12 + 8;
        plVar9 = plVar9 + 3;
      } while ((ulong)*(uint *)(param_12 + 0x18) * 8 != lVar12);
    }
  }
  *param_14 = 0x7fffffff;
  *param_13 = 0x7fffffff;
  *param_16 = -0x7fffffff;
  *param_15 = -0x7fffffff;
  return;
}


