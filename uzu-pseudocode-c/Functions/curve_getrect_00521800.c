// Function : curve_getrect
// Namespace: 
// Entry    : 00521800
// Prototype: undefined curve_getrect(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, char * param_10, long * param_11, long * param_12, uint * param_13, int * param_14, uint * param_15, int * param_16)
// Body     : 00521800 - 00521bcf


void curve_getrect(undefined8 param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,
                  ulong param_6,ulong param_7,undefined8 param_8,long param_9,char *param_10,
                  long *param_11,long *param_12,uint *param_13,int *param_14,uint *param_15,
                  int *param_16)

{
  float fVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long *extraout_RDX;
  long *extraout_RDX_00;
  long extraout_RDX_01;
  long extraout_RDX_02;
  int iVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  float *pfVar9;
  char *pcVar10;
  int *piVar11;
  char *pcVar12;
  uint uVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  undefined4 extraout_XMM0_Db;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined1 in_stack_ffffffffffffff88;
  uint local_74;
  uint local_70;
  
  fVar17 = (float)param_2;
  if (*(char *)(param_9 + 0xb0) == '\x01') {
    iVar2 = *(int *)(param_9 + 0xd8);
    pfVar9 = (float *)(param_9 + 0xb8);
    if (*(char *)(param_9 + 0xb1) == '\0') {
LAB_005218b0:
      if (*pfVar9 != 0.0) {
        if ((param_10[0xe8] & 0x20U) == 0) {
          uVar13 = *(uint *)(param_9 + 0x30) & 4;
        }
        else {
          uVar13 = *(uint *)(param_9 + 0x30) & 8;
        }
        if (uVar13 == 0) {
          if (iVar2 < 1) {
            local_70 = 0x80000001;
            local_74 = 0x7fffffff;
            iVar7 = 0x7fffffff;
            iVar5 = -0x7fffffff;
          }
          else {
            pcVar12 = *(char **)(param_9 + 0xe0);
            iVar7 = 0x7fffffff;
            iVar5 = -0x7fffffff;
            iVar14 = 0;
            local_70 = 0x80000001;
            local_74 = 0x7fffffff;
            plVar4 = param_12;
            plVar6 = param_11;
            piVar11 = param_14;
            do {
              fVar15 = 0.0;
              if (*pcVar12 == '\x01') {
                if (pcVar12[1] == '\0') {
                  fVar15 = *(float *)(pcVar12 + 8);
                }
                else {
                  if (param_12 == (long *)0x0) {
                    plVar4 = param_12;
                    bug(0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        "template_find_field",pfVar9,plVar6,0,param_10,piVar11,
                        in_stack_ffffffffffffff88);
                    fVar15 = 0.0;
                    plVar6 = extraout_RDX_00;
                  }
                  else {
                    fVar15 = 0.0;
                    plVar4 = param_12;
                    if (0 < (int)*(uint *)(param_12 + 3)) {
                      plVar6 = *(long **)(pcVar12 + 8);
                      plVar4 = (long *)(param_12[4] + 8);
                      pfVar9 = (float *)0x0;
                      do {
                        if ((long *)*plVar4 == plVar6) {
                          if ((int)plVar4[-1] == 0) {
                            fVar15 = *(float *)((long)param_11 + (long)(int)pfVar9);
                            plVar4 = param_11;
                          }
                          break;
                        }
                        pfVar9 = pfVar9 + 2;
                        plVar4 = plVar4 + 3;
                      } while ((float *)((ulong)*(uint *)(param_12 + 3) * 8) != pfVar9);
                    }
                  }
                  fVar16 = *(float *)(pcVar12 + 0x10);
                  fVar18 = *(float *)(pcVar12 + 0x14);
                  param_2 = (ulong)(uint)fVar18;
                  param_3 = (ulong)(uint)fVar16;
                  if (fVar18 != fVar16) {
                    fVar20 = *(float *)(pcVar12 + 0x18);
                    fVar19 = *(float *)(pcVar12 + 0x1c);
                    param_5 = (ulong)(uint)fVar19;
                    param_6 = (ulong)(uint)(fVar19 - fVar20);
                    fVar15 = ((fVar15 - fVar16) * (fVar19 - fVar20)) / (fVar18 - fVar16) + fVar20;
                    fVar18 = fVar20;
                    if (fVar19 <= fVar20) {
                      fVar18 = fVar19;
                    }
                    if (fVar18 <= fVar15) {
                      fVar18 = fVar15;
                    }
                    param_2 = (ulong)(uint)fVar18;
                    if (fVar20 <= fVar19) {
                      fVar20 = fVar19;
                    }
                    fVar15 = fVar20;
                    if (fVar18 <= fVar20) {
                      fVar15 = fVar18;
                    }
                    param_4 = (ulong)(uint)fVar15;
                    param_3 = (ulong)(uint)fVar16;
                  }
                }
              }
              pcVar10 = param_10;
              fVar16 = glist_xtopixels((ulong)(uint)(fVar15 + (float)param_1),param_2,param_3,
                                       param_4,param_5,param_6,param_7,param_8,(long)param_10,pfVar9
                                       ,plVar6,plVar4,param_10,piVar11);
              fVar15 = 0.0;
              lVar8 = extraout_RDX_01;
              if (pcVar12[0x28] == '\x01') {
                if (pcVar12[0x29] == '\0') {
                  fVar15 = *(float *)(pcVar12 + 0x30);
                }
                else {
                  if (param_12 == (long *)0x0) {
                    plVar4 = param_12;
                    bug(CONCAT44(extraout_XMM0_Db,fVar16),param_2,param_3,param_4,param_5,0,param_7,
                        param_8,"template_find_field",pfVar9,extraout_RDX_01,0,pcVar10,piVar11,
                        in_stack_ffffffffffffff88);
                    fVar15 = 0.0;
                    lVar8 = extraout_RDX_02;
                  }
                  else {
                    fVar15 = 0.0;
                    plVar4 = param_12;
                    if (0 < (int)*(uint *)(param_12 + 3)) {
                      lVar8 = *(long *)(pcVar12 + 0x30);
                      plVar4 = (long *)(param_12[4] + 8);
                      pfVar9 = (float *)0x0;
                      do {
                        if (*plVar4 == lVar8) {
                          if ((int)plVar4[-1] == 0) {
                            fVar15 = *(float *)((long)param_11 + (long)(int)pfVar9);
                            plVar4 = param_11;
                          }
                          break;
                        }
                        pfVar9 = pfVar9 + 2;
                        plVar4 = plVar4 + 3;
                      } while ((float *)((ulong)*(uint *)(param_12 + 3) * 8) != pfVar9);
                    }
                  }
                  fVar18 = *(float *)(pcVar12 + 0x38);
                  param_2 = (ulong)(uint)fVar18;
                  fVar20 = *(float *)(pcVar12 + 0x3c);
                  param_7 = (ulong)(uint)fVar20;
                  if (fVar20 != fVar18) {
                    fVar19 = *(float *)(pcVar12 + 0x40);
                    fVar1 = *(float *)(pcVar12 + 0x44);
                    param_4 = (ulong)(uint)fVar1;
                    param_5 = (ulong)(uint)(fVar1 - fVar19);
                    param_7 = (ulong)(uint)(fVar20 - fVar18);
                    fVar15 = ((fVar15 - fVar18) * (fVar1 - fVar19)) / (fVar20 - fVar18) + fVar19;
                    fVar18 = fVar19;
                    if (fVar1 <= fVar19) {
                      fVar18 = fVar1;
                    }
                    if (fVar18 <= fVar15) {
                      fVar18 = fVar15;
                    }
                    param_2 = (ulong)(uint)fVar18;
                    if (fVar19 <= fVar1) {
                      fVar19 = fVar1;
                    }
                    fVar15 = fVar19;
                    if (fVar18 <= fVar19) {
                      fVar15 = fVar18;
                    }
                    param_3 = (ulong)(uint)fVar15;
                  }
                }
              }
              uVar21 = 0;
              uVar13 = (uint)fVar16;
              fVar15 = fVar15 + fVar17;
              fVar16 = glist_ytopixels((ulong)(uint)fVar15,param_2,param_3,param_4,param_5,
                                       (ulong)(uint)fVar15,param_7,param_8,(long)param_10,pfVar9,
                                       lVar8,plVar4,pcVar10,piVar11);
              param_6 = CONCAT44(uVar21,fVar15);
              iVar3 = (int)fVar16;
              if ((int)uVar13 < (int)local_74) {
                local_74 = uVar13;
              }
              if ((int)local_70 < (int)uVar13) {
                local_70 = uVar13;
              }
              plVar4 = (long *)(ulong)local_70;
              if (iVar3 < iVar7) {
                iVar7 = iVar3;
              }
              if (iVar5 < iVar3) {
                iVar5 = iVar3;
              }
              iVar14 = iVar14 + 1;
              pcVar12 = pcVar12 + 0x50;
              plVar6 = extraout_RDX;
            } while (iVar14 != iVar2);
          }
          *param_13 = local_74;
          *param_14 = iVar7;
          *param_15 = local_70;
          *param_16 = iVar5;
          return;
        }
      }
    }
    else if (param_12 == (long *)0x0) {
      bug(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"template_find_field",
          pfVar9,param_11,0,param_10,param_14,in_stack_ffffffffffffff88);
    }
    else if (0 < (int)*(uint *)(param_12 + 3)) {
      plVar6 = (long *)(param_12[4] + 8);
      lVar8 = 0;
      do {
        if (*plVar6 == *(long *)pfVar9) {
          if ((int)plVar6[-1] == 0) {
            pfVar9 = (float *)((long)(int)lVar8 + (long)param_11);
            goto LAB_005218b0;
          }
          break;
        }
        lVar8 = lVar8 + 8;
        plVar6 = plVar6 + 3;
      } while ((ulong)*(uint *)(param_12 + 3) * 8 != lVar8);
    }
  }
  *param_14 = 0x7fffffff;
  *param_13 = 0x7fffffff;
  *param_16 = -0x7fffffff;
  *param_15 = 0x80000001;
  return;
}


