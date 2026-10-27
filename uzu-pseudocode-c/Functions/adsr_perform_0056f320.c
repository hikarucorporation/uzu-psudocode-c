// Function : adsr_perform
// Namespace: 
// Entry    : 0056f320
// Prototype: long adsr_perform(long param_1)
// Body     : 0056f320 - 005701a5


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long adsr_perform(long param_1)

{
  ulong uVar1;
  double *pdVar2;
  uint *puVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  int iVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  uint uVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  double dVar47;
  double dVar48;
  undefined1 auVar49 [16];
  uint uVar50;
  uint uVar51;
  float fVar52;
  double dVar53;
  undefined8 uVar54;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;
  
  lVar10 = *(long *)(param_1 + 8);
  uVar41 = *(uint *)(lVar10 + 0x40);
  uVar38 = (ulong)uVar41;
  lVar11 = *(long *)(lVar10 + 0xe0);
  lVar12 = *(long *)(lVar10 + 0xe8);
  lVar13 = *(long *)(lVar10 + 0xb0);
  lVar14 = *(long *)(lVar10 + 0xb8);
  lVar15 = *(long *)(lVar10 + 0xc0);
  lVar16 = *(long *)(lVar10 + 200);
  uVar17 = *(undefined8 *)(lVar10 + 0xd0);
  lVar18 = *(long *)(lVar10 + 0xa0);
  lVar19 = *(long *)(lVar10 + 0xa8);
  lVar20 = *(long *)(lVar10 + 0x98);
  if (0 < (int)uVar41) {
    uVar51 = *(uint *)(lVar10 + 0x44);
    if ((int)uVar51 < 1) {
      if (uVar41 < 8) {
        uVar40 = 0;
      }
      else {
        uVar40 = (ulong)(uVar41 & 0xfffffff8);
        uVar39 = 0;
        do {
          puVar3 = (uint *)(lVar11 + uVar39);
          uVar41 = *puVar3;
          uVar51 = puVar3[1];
          uVar50 = puVar3[2];
          uVar29 = puVar3[3];
          puVar3 = (uint *)(lVar11 + 0x10 + uVar39);
          uVar30 = *puVar3;
          uVar31 = puVar3[1];
          uVar32 = puVar3[2];
          uVar33 = puVar3[3];
          puVar3 = (uint *)(lVar11 + uVar39);
          *puVar3 = (int)((uVar41 >> 0x1d ^ uVar41 >> 0x1e) << 0x1f) >> 0x1f & uVar41;
          puVar3[1] = (int)((uVar51 >> 0x1d ^ uVar51 >> 0x1e) << 0x1f) >> 0x1f & uVar51;
          puVar3[2] = (int)((uVar50 >> 0x1d ^ uVar50 >> 0x1e) << 0x1f) >> 0x1f & uVar50;
          puVar3[3] = (int)((uVar29 >> 0x1d ^ uVar29 >> 0x1e) << 0x1f) >> 0x1f & uVar29;
          puVar3 = (uint *)(lVar11 + 0x10 + uVar39);
          *puVar3 = (int)((uVar30 >> 0x1d ^ uVar30 >> 0x1e) << 0x1f) >> 0x1f & uVar30;
          puVar3[1] = (int)((uVar31 >> 0x1d ^ uVar31 >> 0x1e) << 0x1f) >> 0x1f & uVar31;
          puVar3[2] = (int)((uVar32 >> 0x1d ^ uVar32 >> 0x1e) << 0x1f) >> 0x1f & uVar32;
          puVar3[3] = (int)((uVar33 >> 0x1d ^ uVar33 >> 0x1e) << 0x1f) >> 0x1f & uVar33;
          uVar39 = uVar39 + 0x20;
        } while ((uVar38 * 4 & 0xffffffffffffffe0) != uVar39);
        if (uVar40 == uVar38) goto LAB_005700e2;
      }
      do {
        uVar41 = *(uint *)(lVar11 + uVar40 * 4);
        uVar51 = 0;
        if (((uVar41 >> 0x1d ^ uVar41 >> 0x1e) & 1) != 0) {
          uVar51 = uVar41;
        }
        *(uint *)(lVar11 + uVar40 * 4) = uVar51;
        uVar40 = uVar40 + 1;
      } while (uVar38 != uVar40);
    }
    else {
      lVar21 = *(long *)(param_1 + 0x10);
      lVar22 = *(long *)(param_1 + 0x18);
      lVar23 = *(long *)(param_1 + 0x20);
      lVar24 = *(long *)(param_1 + 0x28);
      lVar25 = *(long *)(param_1 + 0x30);
      lVar26 = *(long *)(param_1 + 0x38);
      lVar27 = *(long *)(param_1 + 0x40);
      iVar5 = *(int *)(param_1 + 0x68);
      iVar6 = *(int *)(param_1 + 0x60);
      iVar7 = *(int *)(param_1 + 0x58);
      iVar8 = *(int *)(param_1 + 0x48);
      iVar9 = *(int *)(param_1 + 0x50);
      uVar40 = 0;
      do {
        uVar39 = 0;
        do {
          uVar1 = uVar39 + uVar40 * uVar51;
          uVar35 = uVar1;
          if (iVar8 == 1) {
            uVar35 = uVar39;
          }
          uVar36 = uVar1;
          if (iVar9 == 1) {
            uVar36 = uVar39;
          }
          uVar37 = uVar1;
          if (iVar7 == 1) {
            uVar37 = uVar39;
          }
          fVar46 = *(float *)(lVar22 + uVar35 * 4);
          auVar49 = ZEXT416((uint)fVar46);
          uVar35 = uVar1;
          if (iVar6 == 1) {
            uVar35 = uVar39;
          }
          fVar52 = *(float *)(lVar25 + uVar35 * 4);
          fVar45 = *(float *)(lVar21 + uVar1 * 4);
          uVar35 = uVar1;
          if (iVar5 == 1) {
            uVar35 = uVar39;
          }
          if (fVar52 <= 0.0) {
            fVar52 = 0.0;
          }
          fVar4 = *(float *)(lVar10 + 0x70);
          fVar44 = *(float *)(lVar10 + 0x80);
          fVar42 = roundf(*(float *)(lVar23 + uVar36 * 4) * fVar44);
          if (fVar42 <= DAT_005d9038) {
            fVar42 = DAT_005d9038;
          }
          fVar43 = roundf(*(float *)(lVar24 + uVar37 * 4) * fVar44);
          fVar44 = roundf(fVar44 * *(float *)(lVar26 + uVar35 * 4));
          if (*(int *)(lVar10 + 0x30) == 0) {
            uVar54 = 0;
            if (*(uint *)(lVar13 + uVar40 * 4) != (uint)(fVar45 != 0.0 || fVar4 != 0.0)) {
              if (fVar45 == 0.0) {
                *(uint *)(lVar13 + uVar40 * 4) = (uint)(fVar4 != 0.0);
                if (fVar4 == 0.0) {
                  if (*(int *)(lVar10 + 0x3c) != 0) {
                    fVar46 = *(float *)(lVar11 + uVar40 * 4);
                    *(double *)(lVar18 + uVar40 * 8) = (double)(float)((uint)fVar46 ^ _DAT_006524b0)
                    ;
                    *(undefined4 *)(lVar16 + uVar40 * 4) = 0;
                    *(undefined4 *)(lVar15 + uVar40 * 4) = 0;
                    *(undefined4 *)(lVar14 + uVar40 * 4) = 0;
                    lVar28 = *(long *)(lVar10 + 0x90);
                    dVar48 = *(double *)(*(long *)(lVar10 + 0xa0) + uVar40 * 8);
                    dVar47 = exp((double)*(float *)(lVar10 + 0xd8));
                    dVar48 = dVar48 / (_DAT_005d9000 - dVar47);
                    *(double *)(lVar28 + uVar40 * 8) = dVar48;
                    dVar48 = (double)fVar46 + dVar48;
                    goto LAB_0056f94f;
                  }
                  goto LAB_0056f6fa;
                }
              }
              else {
                *(undefined4 *)(lVar13 + uVar40 * 4) = 1;
              }
              fVar45 = (float)(~-(uint)(fVar4 != 0.0) & (uint)fVar45 |
                              (uint)fVar4 & -(uint)(fVar4 != 0.0));
              *(float *)(lVar10 + 0x78) = fVar45;
              *(float *)(lVar12 + uVar40 * 4) = fVar45;
              *(undefined4 *)(lVar14 + uVar40 * 4) = 1;
              *(undefined4 *)(lVar16 + uVar40 * 4) = 0;
              *(undefined4 *)(lVar15 + uVar40 * 4) = 0;
              fVar46 = *(float *)(lVar11 + uVar40 * 4);
              *(double *)(lVar18 + uVar40 * 8) = (double)(fVar45 - fVar46);
              lVar28 = *(long *)(lVar10 + 0x90);
              dVar48 = *(double *)(*(long *)(lVar10 + 0xa0) + uVar40 * 8);
              dVar47 = exp((double)*(float *)(lVar10 + 0xd8));
              dVar47 = _DAT_005d9000 - dVar47;
              dVar48 = dVar48 / dVar47;
              *(double *)(lVar28 + uVar40 * 8) = dVar48;
              dVar53 = (double)fVar46;
              dVar48 = dVar48 + dVar53;
              *(double *)(*(long *)(lVar10 + 0x88) + uVar40 * 8) = dVar48;
              if (*(int *)(lVar10 + 0xdc) == 0) {
                *(undefined4 *)(lVar10 + 0xdc) = 1;
                outlet_float((ulong)(uint)DAT_005d9038,dVar47,dVar48,auVar49._0_8_,uVar54,in_XMM5_Qa
                             ,in_XMM6_Qa,in_XMM7_Qa,*(long **)(lVar10 + 0x68));
                dVar53 = (double)*(float *)(lVar11 + uVar40 * 4);
              }
              *(double *)(lVar19 + uVar40 * 8) = dVar53;
              *(double *)(lVar20 + uVar40 * 8) = *(double *)(lVar18 + uVar40 * 8) / (double)fVar42;
              if (*(int *)(lVar10 + 0x34) != 0) {
                *(undefined4 *)(lVar10 + 0x34) = 0;
                *(undefined4 *)(lVar10 + 0x70) = 0;
              }
              goto LAB_0056f6fa;
            }
            iVar34 = *(int *)(lVar14 + uVar40 * 4);
            if ((iVar34 != 0) && (fVar46 != 0.0)) {
              uVar41 = -(uint)(0.0 < *(float *)(lVar10 + 0x78));
              fVar45 = (float)(~uVar41 & ((uint)fVar46 ^ _DAT_006524b0) | uVar41 & (uint)fVar46);
              *(float *)(lVar12 + uVar40 * 4) = fVar45;
              fVar46 = *(float *)(lVar11 + uVar40 * 4);
              dVar53 = (double)fVar46;
              *(double *)(lVar19 + uVar40 * 8) = dVar53;
              *(double *)(lVar18 + uVar40 * 8) = (double)(fVar45 - fVar46);
              *(undefined4 *)(lVar16 + uVar40 * 4) = 0;
              *(undefined4 *)(lVar15 + uVar40 * 4) = 0;
              lVar28 = *(long *)(lVar10 + 0x90);
              dVar48 = *(double *)(*(long *)(lVar10 + 0xa0) + uVar40 * 8);
              dVar47 = exp((double)*(float *)(lVar10 + 0xd8));
              dVar48 = dVar48 / (_DAT_005d9000 - dVar47);
              *(double *)(lVar28 + uVar40 * 8) = dVar48;
              dVar48 = dVar48 + dVar53;
LAB_0056f94f:
              *(double *)(*(long *)(lVar10 + 0x88) + uVar40 * 8) = dVar48;
              goto LAB_0056f6fa;
            }
          }
          else {
            *(float *)(lVar12 + uVar40 * 4) = fVar4;
            fVar46 = *(float *)(lVar11 + uVar40 * 4);
            dVar53 = (double)fVar46;
            *(double *)(lVar19 + uVar40 * 8) = dVar53;
            *(double *)(lVar18 + uVar40 * 8) = (double)(fVar4 - fVar46);
            *(undefined4 *)(lVar16 + uVar40 * 4) = 0;
            *(undefined4 *)(lVar15 + uVar40 * 4) = 0;
            lVar28 = *(long *)(lVar10 + 0x90);
            dVar48 = *(double *)(*(long *)(lVar10 + 0xa0) + uVar40 * 8);
            dVar47 = exp((double)*(float *)(lVar10 + 0xd8));
            dVar48 = dVar48 / (_DAT_005d9000 - dVar47);
            *(double *)(lVar28 + uVar40 * 8) = dVar48;
            *(double *)(*(long *)(lVar10 + 0x88) + uVar40 * 8) = dVar48 + dVar53;
            *(undefined4 *)(lVar14 + uVar40 * 4) = 1;
            *(undefined4 *)(lVar10 + 0x30) = 0;
LAB_0056f6fa:
            iVar34 = *(int *)(lVar14 + uVar40 * 4);
          }
          if (iVar34 == 0) {
            if (fVar44 <= DAT_005d9038) {
              fVar44 = DAT_005d9038;
            }
            auVar49 = ZEXT416((uint)fVar44);
            uVar35 = (ulong)(uint)fVar44;
            dVar48 = *(double *)(lVar18 + uVar40 * 8) / (double)fVar44;
            *(double *)(lVar20 + uVar40 * 8) = dVar48;
            dVar48 = dVar48 + *(double *)(lVar19 + uVar40 * 8);
            *(double *)(lVar19 + uVar40 * 8) = dVar48;
            if (*(int *)(lVar10 + 0x38) == 0) {
              if ((double)(float)((uint)*(float *)(lVar10 + 0xd8) & _DAT_005d91c0) <= DAT_00651e50)
              {
                fVar46 = (float)dVar48;
              }
              else {
                dVar48 = exp((double)(*(float *)(lVar10 + 0xd8) / fVar44));
                uVar35 = auVar49._0_8_;
                dVar48 = dVar48 * *(double *)(*(long *)(lVar10 + 0x90) + uVar40 * 8);
                *(double *)(*(long *)(lVar10 + 0x90) + uVar40 * 8) = dVar48;
                fVar46 = (float)(*(double *)(*(long *)(lVar10 + 0x88) + uVar40 * 8) - dVar48);
                *(float *)(lVar11 + uVar40 * 4) = fVar46;
              }
            }
            else {
              dVar48 = exp(DAT_0065b5a0 / (double)fVar44);
              uVar35 = auVar49._0_8_;
              fVar46 = (float)dVar48 * *(float *)(lVar11 + uVar40 * 4);
            }
            pdVar2 = (double *)(lVar20 + uVar40 * 8);
            dVar48 = *(double *)(lVar19 + uVar40 * 8);
            if (0.0 < *pdVar2 || *pdVar2 == 0.0) {
              if (0.0 <= dVar48) goto LAB_0056fcf8;
            }
            else if (dVar48 <= 0.0) {
LAB_0056fcf8:
              *(undefined8 *)(lVar19 + uVar40 * 8) = 0;
              fVar46 = 0.0;
              if (*(int *)(lVar10 + 0xdc) != 0) {
                if (0 < (int)*(uint *)(lVar10 + 0x40)) {
                  uVar36 = 0;
                  do {
                    if (*(double *)(lVar19 + uVar36 * 8) != 0.0) goto LAB_0056f4d3;
                    uVar36 = uVar36 + 1;
                  } while (*(uint *)(lVar10 + 0x40) != uVar36);
                }
                *(undefined4 *)(lVar10 + 0xdc) = 0;
                outlet_float(0,0,0,uVar35,0,in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa,
                             *(long **)(lVar10 + 0x68));
                fVar46 = 0.0;
              }
            }
LAB_0056f4d3:
            *(float *)(lVar11 + uVar40 * 4) = fVar46;
            *(float *)(lVar27 + uVar1 * 4) = fVar46;
          }
          else if (*(int *)(lVar16 + uVar40 * 4) == 0) {
            if (fVar43 <= DAT_005d9038) {
              fVar43 = DAT_005d9038;
            }
            iVar34 = *(int *)(lVar15 + uVar40 * 4);
            fVar46 = fVar42;
            if (iVar34 != 0) {
              fVar46 = fVar43;
            }
            dVar48 = *(double *)(lVar18 + uVar40 * 8) / (double)fVar46;
            *(double *)(lVar20 + uVar40 * 8) = dVar48;
            dVar48 = dVar48 + *(double *)(lVar19 + uVar40 * 8);
            *(double *)(lVar19 + uVar40 * 8) = dVar48;
            if (*(int *)(lVar10 + 0x38) == 0) {
              if ((double)(float)((uint)*(float *)(lVar10 + 0xd8) & _DAT_005d91c0) <= DAT_00651e50)
              goto joined_r0x0056fd64;
              if (iVar34 == 0) {
                fVar43 = fVar42;
              }
              dVar48 = exp((double)(*(float *)(lVar10 + 0xd8) / fVar43));
              dVar48 = dVar48 * *(double *)(*(long *)(lVar10 + 0x90) + uVar40 * 8);
              *(double *)(*(long *)(lVar10 + 0x90) + uVar40 * 8) = dVar48;
              fVar46 = (float)(*(double *)(*(long *)(lVar10 + 0x88) + uVar40 * 8) - dVar48);
              *(float *)(lVar11 + uVar40 * 4) = fVar46;
              if (iVar34 != 0) goto LAB_0056fd6a;
LAB_0056fedb:
              fVar45 = *(float *)(lVar12 + uVar40 * 4);
              dVar48 = *(double *)(lVar19 + uVar40 * 8);
              dVar47 = (double)fVar45;
              if (fVar45 <= 0.0) {
                if (dVar48 <= dVar47) goto LAB_0056ff12;
              }
              else if (dVar47 <= dVar48) {
LAB_0056ff12:
                if (DAT_005d9038 <= fVar52) {
                  fVar52 = DAT_005d9038;
                }
                *(double *)(lVar19 + uVar40 * 8) = dVar47;
                *(float *)(lVar11 + uVar40 * 4) = fVar45;
                *(undefined4 *)(lVar15 + uVar40 * 4) = 1;
                fVar46 = *(float *)(lVar12 + uVar40 * 4);
                fVar52 = fVar52 * fVar46;
                *(double *)(lVar18 + uVar40 * 8) = (double)(fVar52 - fVar46);
                *(float *)(lVar12 + uVar40 * 4) = fVar52;
                lVar28 = *(long *)(lVar10 + 0x90);
                dVar48 = *(double *)(*(long *)(lVar10 + 0xa0) + uVar40 * 8);
                dVar47 = exp((double)*(float *)(lVar10 + 0xd8));
                dVar48 = dVar48 / (_DAT_005d9000 - dVar47);
                *(double *)(lVar28 + uVar40 * 8) = dVar48;
                *(double *)(*(long *)(lVar10 + 0x88) + uVar40 * 8) =
                     (double)*(float *)(lVar11 + uVar40 * 4) + dVar48;
                fVar46 = fVar45;
              }
            }
            else {
              dVar48 = exp(DAT_0065b5a0 / (double)fVar46);
              fVar46 = *(float *)(lVar12 + uVar40 * 4);
              dVar48 = (double)(*(float *)(lVar11 + uVar40 * 4) - fVar46) * dVar48 + (double)fVar46;
joined_r0x0056fd64:
              fVar46 = (float)dVar48;
              if (iVar34 == 0) goto LAB_0056fedb;
LAB_0056fd6a:
              pdVar2 = (double *)(lVar18 + uVar40 * 8);
              dVar48 = *(double *)(lVar19 + uVar40 * 8);
              fVar52 = *(float *)(lVar12 + uVar40 * 4);
              dVar47 = (double)fVar52;
              if (0.0 < *pdVar2 || *pdVar2 == 0.0) {
                if (dVar47 <= dVar48) goto LAB_0056fda4;
              }
              else if (dVar48 <= dVar47) {
LAB_0056fda4:
                *(double *)(lVar19 + uVar40 * 8) = dVar47;
                *(undefined4 *)(lVar16 + uVar40 * 4) = 1;
                *(undefined8 *)(lVar18 + uVar40 * 8) = 0;
                fVar46 = fVar52;
              }
            }
            *(float *)(lVar11 + uVar40 * 4) = fVar46;
            *(float *)(lVar27 + uVar1 * 4) = fVar46;
          }
          else {
            fVar46 = *(float *)(lVar12 + uVar40 * 4);
            *(double *)(lVar19 + uVar40 * 8) = (double)fVar46;
            *(float *)(lVar11 + uVar40 * 4) = fVar46;
            *(float *)(lVar27 + uVar1 * 4) = fVar46;
            if (*(int *)(lVar13 + uVar40 * 4) == 0) {
              *(double *)(lVar18 + uVar40 * 8) =
                   (double)(float)(*(uint *)(lVar11 + uVar40 * 4) ^ _DAT_006524b0);
              *(undefined4 *)(lVar12 + uVar40 * 4) = 0;
              *(undefined4 *)(lVar16 + uVar40 * 4) = 0;
              *(undefined4 *)(lVar15 + uVar40 * 4) = 0;
              *(undefined4 *)(lVar14 + uVar40 * 4) = 0;
              lVar28 = *(long *)(lVar10 + 0x90);
              dVar48 = *(double *)(*(long *)(lVar10 + 0xa0) + uVar40 * 8);
              dVar47 = exp((double)*(float *)(lVar10 + 0xd8));
              dVar48 = dVar48 / (_DAT_005d9000 - dVar47);
              *(double *)(lVar28 + uVar40 * 8) = dVar48;
              *(double *)(*(long *)(lVar10 + 0x88) + uVar40 * 8) =
                   (double)*(float *)(lVar11 + uVar40 * 4) + dVar48;
            }
          }
          uVar39 = uVar39 + 1;
        } while (uVar39 != uVar51);
        uVar41 = *(uint *)(lVar11 + uVar40 * 4);
        uVar50 = 0;
        if (((uVar41 >> 0x1d ^ uVar41 >> 0x1e) & 1) != 0) {
          uVar50 = uVar41;
        }
        *(uint *)(lVar11 + uVar40 * 4) = uVar50;
        uVar40 = uVar40 + 1;
      } while (uVar40 != uVar38);
    }
  }
LAB_005700e2:
  *(long *)(lVar10 + 0xe0) = lVar11;
  *(long *)(lVar10 + 0xe8) = lVar12;
  *(long *)(lVar10 + 0x98) = lVar20;
  *(long *)(lVar10 + 0xa8) = lVar19;
  *(long *)(lVar10 + 0xa0) = lVar18;
  *(long *)(lVar10 + 0xb0) = lVar13;
  *(long *)(lVar10 + 0xb8) = lVar14;
  *(long *)(lVar10 + 0xc0) = lVar15;
  *(long *)(lVar10 + 200) = lVar16;
  *(undefined8 *)(lVar10 + 0xd0) = uVar17;
  return param_1 + 0x70;
}


