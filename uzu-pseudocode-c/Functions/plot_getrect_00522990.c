// Function : plot_getrect
// Namespace: 
// Entry    : 00522990
// Prototype: undefined plot_getrect(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, long param_11, long param_12, int * param_13, int * param_14, int * param_15, int * param_16)
// Body     : 00522990 - 00523125


void plot_getrect(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 ulong param_5,undefined8 param_6,undefined8 param_7,ulong param_8,long param_9,
                 long param_10,long param_11,long param_12,int *param_13,int *param_14,int *param_15
                 ,int *param_16)

{
  float fVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  long *plVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float local_14c;
  float local_148;
  float local_144;
  ulong local_140;
  long local_138;
  int *local_130;
  float local_124;
  long local_120;
  ulong local_118;
  char *local_110;
  long local_108;
  float local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  int local_cc;
  double local_c8;
  long local_c0;
  long local_b8;
  double local_b0;
  double local_a8;
  int *local_a0;
  int *local_98;
  long local_90;
  long local_88;
  undefined8 local_80;
  long local_78;
  long local_70;
  char *local_68;
  int *local_60;
  undefined8 *local_58;
  undefined8 local_50;
  long local_48;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  if ((*(long *)(param_10 + 0x30) == 0) || (*(long *)(*(long *)(param_10 + 0x30) + 8) != 0)) {
    local_108 = param_10;
    local_a0 = param_13;
    local_98 = param_14;
    uVar3 = plot_readownertemplate
                      (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                       param_11,param_12,&local_58,(char *)&local_60,&local_34,&local_dc,&local_e0,
                       &local_e4,&local_38,&local_e8,&local_ec,&local_3c,(long *)&local_68,&local_70
                       ,&local_78);
    iVar5 = -0x7fffffff;
    iVar12 = 0x7fffffff;
    if (((int)uVar3 == 0) && (local_e8 != 0.0)) {
      uVar3 = array_getfields((ulong)(uint)local_e8,0,param_3,param_4,param_5,param_6,param_7,
                              param_8,local_58,&local_48,&local_50,&local_cc,local_68,local_70,
                              local_78,&local_d8,&local_d0,&local_d4);
      if ((int)uVar3 == 0) {
        local_b8 = local_78;
        local_138 = local_70;
        local_110 = local_68;
        iVar9 = *local_60;
        iVar14 = -0x7fffffff;
        iVar8 = 0x7fffffff;
        iVar5 = -0x7fffffff;
        if (0 < iVar9) {
          iVar5 = 1;
          if (2000 < iVar9) {
            iVar5 = iVar9 / 1000;
          }
          local_120 = (long)local_cc;
          local_118 = (ulong)local_d8;
          local_140 = (ulong)local_d0;
          fVar19 = local_dc + (float)param_1;
          fVar16 = (float)param_2 + local_e4;
          local_c0 = (long)iVar5;
          local_130 = local_60;
          local_124 = local_e0;
          if (local_ec == 0.0) {
            local_120 = local_120 * local_c0;
            iVar14 = -0x7fffffff;
            iVar8 = 0x7fffffff;
            lVar6 = 0;
            uVar7 = 0;
            iVar5 = -0x7fffffff;
            iVar12 = 0x7fffffff;
            do {
              array_getcoordinate(fVar19,(ulong)(uint)fVar16,(ulong)(uint)local_124,param_5,
                                  (ulong)(uint)fVar19,param_7,param_8,local_108,
                                  *(long *)(local_130 + 2) + lVar6,(uint)local_118,local_140,
                                  (ulong)local_d4,uVar7 & 0xffffffff,(long)local_110,local_138,
                                  local_b8,&local_144,&local_148,&local_14c);
              if (local_144 < (float)iVar8) {
                iVar8 = (int)local_144;
              }
              if ((float)iVar5 < local_144) {
                iVar5 = (int)local_144;
              }
              if (local_148 - local_14c < (float)iVar12) {
                iVar12 = (int)(local_148 - local_14c);
              }
              if ((float)iVar14 < local_14c + local_148) {
                iVar14 = (int)(local_14c + local_148);
              }
              uVar7 = uVar7 + local_c0;
              lVar6 = lVar6 + local_120;
            } while ((long)uVar7 < (long)*local_130);
          }
          else {
            local_a8 = (double)(float)param_1;
            local_b0 = (double)local_e0;
            local_90 = local_48;
            local_80 = local_50;
            iVar14 = -0x7fffffff;
            iVar8 = 0x7fffffff;
            local_c8 = 0.0;
            local_88 = 0;
            iVar5 = -0x7fffffff;
            iVar12 = 0x7fffffff;
            do {
              uVar7 = local_118;
              uVar21 = (undefined4)((ulong)param_7 >> 0x20);
              lVar6 = local_88 * local_120;
              uVar10 = (uint)local_118;
              array_getcoordinate(fVar19,(ulong)(uint)fVar16,(ulong)(uint)local_124,param_5,
                                  (ulong)(uint)fVar19,param_7,param_8,local_108,
                                  *(long *)(local_130 + 2) + lVar6,uVar10,local_140,(ulong)local_d4,
                                  local_88,(long)local_110,local_138,local_b8,&local_144,&local_148,
                                  &local_14c);
              if (local_144 < (float)iVar8) {
                iVar8 = (int)local_144;
              }
              if ((float)iVar5 < local_144) {
                iVar5 = (int)local_144;
              }
              iVar9 = (int)(local_148 - local_14c);
              if ((float)iVar12 <= local_148 - local_14c) {
                iVar9 = iVar12;
              }
              iVar12 = iVar9;
              iVar9 = (int)(local_14c + local_148);
              if (local_14c + local_148 <= (float)iVar14) {
                iVar9 = iVar14;
              }
              iVar14 = iVar9;
              if ((int)uVar10 < 0) {
                fVar20 = (float)(local_c8 + local_a8);
                local_c8 = local_c8 + local_b0;
                if (-1 < (int)local_140) goto LAB_00522e5c;
LAB_00522eba:
                fVar22 = 0.0;
              }
              else {
                fVar20 = *(float *)(lVar6 + *(long *)(local_130 + 2) + uVar7);
                fVar22 = *(float *)(local_110 + 0x10);
                if (*(float *)(local_110 + 0x14) != fVar22) {
                  fVar17 = *(float *)(local_110 + 0x18);
                  fVar18 = *(float *)(local_110 + 0x1c);
                  param_5 = (ulong)(uint)(fVar18 - fVar17);
                  fVar20 = ((fVar20 - fVar22) * (fVar18 - fVar17)) /
                           (*(float *)(local_110 + 0x14) - fVar22) + fVar17;
                  fVar22 = fVar17;
                  if (fVar18 <= fVar17) {
                    fVar22 = fVar18;
                  }
                  if (fVar22 <= fVar20) {
                    fVar22 = fVar20;
                  }
                  if (fVar17 <= fVar18) {
                    fVar17 = fVar18;
                  }
                  fVar20 = fVar17;
                  if (fVar22 <= fVar17) {
                    fVar20 = fVar22;
                  }
                }
                uVar21 = 0;
                fVar20 = fVar20 + fVar19;
                if ((int)local_140 < 0) goto LAB_00522eba;
LAB_00522e5c:
                fVar22 = *(float *)(lVar6 + *(long *)(local_130 + 2) + local_140);
              }
              fVar17 = *(float *)(local_138 + 0x10);
              if (*(float *)(local_138 + 0x14) == fVar17) {
                plVar11 = *(long **)(local_90 + 0x30);
              }
              else {
                fVar18 = *(float *)(local_138 + 0x18);
                fVar1 = *(float *)(local_138 + 0x1c);
                param_5 = (ulong)(uint)(fVar1 - fVar18);
                fVar22 = ((fVar22 - fVar17) * (fVar1 - fVar18)) /
                         (*(float *)(local_138 + 0x14) - fVar17) + fVar18;
                param_8 = (ulong)(uint)fVar22;
                fVar17 = fVar18;
                if (fVar1 <= fVar18) {
                  fVar17 = fVar1;
                }
                if (fVar17 <= fVar22) {
                  fVar17 = fVar22;
                }
                if (fVar18 <= fVar1) {
                  fVar18 = fVar1;
                }
                fVar22 = fVar18;
                if (fVar17 <= fVar18) {
                  fVar22 = fVar17;
                }
                plVar11 = *(long **)(local_90 + 0x30);
              }
              if (plVar11 != (long *)0x0) {
                iVar9 = iVar8;
                iVar13 = iVar12;
                iVar15 = iVar14;
                local_100 = fVar20;
                do {
                  puVar4 = (undefined8 *)pd_getparentwidget(plVar11);
                  if (puVar4 != (undefined8 *)0x0) {
                    (*(code *)*puVar4)(local_100,fVar22 + fVar16,plVar11,local_108,
                                       *(long *)(local_130 + 2) + lVar6,local_80,&local_f0,&local_f8
                                       ,&local_f4,&local_fc);
                    bVar2 = local_f0 < iVar8;
                    iVar8 = iVar9;
                    if (bVar2) {
                      iVar8 = local_f0;
                    }
                    bVar2 = local_f8 < iVar12;
                    iVar12 = iVar13;
                    if (bVar2) {
                      iVar12 = local_f8;
                    }
                    if (iVar5 < local_f4) {
                      iVar5 = local_f4;
                    }
                    bVar2 = iVar14 < local_fc;
                    iVar14 = iVar15;
                    iVar9 = iVar8;
                    iVar13 = iVar12;
                    if (bVar2) {
                      iVar14 = local_fc;
                      iVar15 = local_fc;
                    }
                  }
                  plVar11 = (long *)plVar11[1];
                } while (plVar11 != (long *)0x0);
              }
              param_7 = CONCAT44(uVar21,fVar20);
              local_88 = local_88 + local_c0;
            } while (local_88 < *local_130);
          }
        }
      }
      else {
        iVar14 = -0x7fffffff;
        iVar8 = 0x7fffffff;
        iVar5 = -0x7fffffff;
      }
    }
    else {
      iVar14 = -0x7fffffff;
      iVar8 = 0x7fffffff;
    }
    *local_a0 = iVar8;
    *local_98 = iVar12;
    *param_15 = iVar5;
    *param_16 = iVar14;
  }
  else {
    *param_14 = -0x7fffffff;
    *param_13 = -0x7fffffff;
    *param_16 = 0x7fffffff;
    *param_15 = 0x7fffffff;
  }
  return;
}


