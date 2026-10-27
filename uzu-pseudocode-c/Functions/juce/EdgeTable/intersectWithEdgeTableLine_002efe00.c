// Function : intersectWithEdgeTableLine
// Namespace: juce:EdgeTable
// Entry    : 002efe00
// Prototype: uint * intersectWithEdgeTableLine(EdgeTable * this, int param_1, int * param_2)
// Body     : 002efe00 - 002f11ce


/* juce::EdgeTable::intersectWithEdgeTableLine(int, int const*) */

uint * __thiscall
juce::EdgeTable::intersectWithEdgeTableLine(EdgeTable *this,int param_1,int *param_2)

{
  uint *puVar1;
  long lVar2;
  undefined8 *puVar3;
  size_t sVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  int *piVar12;
  EdgeTable *pEVar13;
  long lVar14;
  uint *puVar15;
  uint uVar16;
  int *piVar17;
  void *pvVar18;
  int *piVar19;
  uint uVar20;
  void *pvVar21;
  ulong uVar22;
  void *pvVar23;
  long lVar24;
  int iVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  long lVar29;
  int iVar30;
  void *pvVar31;
  long lVar32;
  long lVar33;
  int iVar34;
  long lVar35;
  ulong uVar36;
  void *pvVar37;
  ulong uVar38;
  long lVar39;
  void *pvVar40;
  undefined7 uVar43;
  void *pvVar41;
  ulong uVar42;
  undefined1 auStack_f8 [8];
  ulong local_f0;
  void *local_e8;
  ulong local_e0;
  ulong local_d8;
  void *local_d0;
  void *local_c8;
  uint *local_c0;
  ulong local_b8;
  void *local_b0;
  ulong local_a8;
  ulong local_a0;
  void *local_98;
  ulong local_90;
  EdgeTable *local_88;
  ulong local_80;
  int *local_78;
  uint local_6c;
  int local_68;
  int local_64;
  int local_60;
  uint local_5c;
  int *local_58;
  void *local_50;
  int local_44;
  int *local_40;
  undefined1 local_31;
  
  piVar17 = (int *)auStack_f8;
  local_50 = *(void **)this;
  puVar10 = (uint *)((long)param_1 * (long)*(int *)(this + 0x24));
  iVar34 = *(int *)((long)local_50 + (long)puVar10 * 4);
  lVar35 = (long)iVar34;
  if (lVar35 == 0) {
    return puVar10;
  }
  local_58 = (int *)((long)local_50 + (long)puVar10 * 4);
  iVar25 = *param_2;
  if ((long)iVar25 == 0) {
LAB_002f0dd1:
    *local_58 = 0;
  }
  else {
    puVar11 = (uint *)(local_58 + 1);
    local_64 = (*(int *)(this + 0x18) + *(int *)(this + 0x10)) * 0x100;
    if ((iVar25 != 2) || (param_2[2] < 0xff)) {
      puVar11 = (uint *)(ulong)*puVar11;
      local_40 = local_58 + 2;
      uVar36 = lVar35 * 2 - 1;
      uVar20 = param_2[1];
      puVar10 = (uint *)(param_2 + 2);
      local_a8 = (long)iVar25 * 2 + -1;
      iVar34 = 0;
      local_d8 = 0;
      local_60 = 0;
      pvVar23 = (void *)0x0;
      pvVar41 = (void *)0x0;
      iVar25 = 0;
      local_88 = this;
      local_68 = param_1;
      do {
        uVar16 = (uint)puVar11;
        if ((int)uVar20 < (int)uVar16) {
          pvVar23 = (void *)(ulong)*puVar10;
          piVar19 = local_40;
          uVar16 = uVar20;
          if (local_a8 == 1) {
            puVar10 = puVar10 + 1;
            puVar15 = (uint *)(ulong)uVar20;
            lVar35 = 0;
            uVar20 = 0;
          }
          else {
            puVar1 = puVar10 + 1;
            puVar10 = puVar10 + 2;
            lVar35 = local_a8 + -2;
            puVar15 = (uint *)(ulong)uVar20;
            uVar20 = *puVar1;
          }
        }
        else {
          if (uVar16 == uVar20) {
            pvVar23 = (void *)(ulong)*puVar10;
            if (local_a8 == 1) {
              puVar10 = puVar10 + 1;
              local_a8 = 0;
              uVar20 = 0;
            }
            else {
              uVar20 = puVar10[1];
              puVar10 = puVar10 + 2;
              local_a8 = local_a8 + -2;
            }
          }
          iVar34 = *local_40;
          puVar15 = puVar11;
          lVar35 = local_a8;
          if (uVar36 == 1) {
            uVar36 = 0;
            piVar19 = local_40 + 1;
            puVar11 = (uint *)0x0;
          }
          else {
            uVar36 = uVar36 - 2;
            piVar19 = local_40 + 2;
            puVar11 = (uint *)(ulong)(uint)local_40[1];
          }
        }
        local_40 = piVar19;
        iVar30 = iVar25;
        if (local_64 <= (int)uVar16) break;
        local_d0 = (void *)CONCAT44(local_d0._4_4_,(int)puVar15);
        uVar9 = ((int)pvVar23 + 1) * iVar34;
        puVar15 = (uint *)(ulong)uVar9;
        uVar16 = uVar9 + 0xff;
        if (-1 < (int)uVar9) {
          uVar16 = uVar9;
        }
        iVar30 = (int)uVar16 >> 8;
        local_a8 = lVar35;
        if (iVar25 != iVar30) {
          iVar25 = (int)local_d8;
          if (iVar25 < *(int *)(this + 0x20)) {
            local_d8 = (ulong)(iVar25 + 1);
            if (((ulong)pvVar41 & 1) == 0) {
              local_80 = CONCAT44(local_80._4_4_,iVar30);
              iVar25 = *(int *)(this + 0x24);
              local_c0 = puVar10;
              local_44 = iVar34;
              goto LAB_002f0462;
            }
LAB_002f0580:
          }
          else {
            *local_58 = iVar25;
            local_5c = (uint)puVar11;
            local_80 = CONCAT44(local_80._4_4_,iVar30);
            if (((ulong)pvVar41 & 1) == 0) {
              uVar16 = iVar25 * 2;
              if ((int)uVar16 < 0x101) {
                uVar16 = 0x100;
              }
              if (*(uint *)(this + 0x20) == uVar16) {
                iVar25 = *(int *)(this + 0x24);
                pvVar41 = pvVar23;
                local_c0 = puVar10;
                local_44 = iVar34;
              }
              else {
                *(uint *)(this + 0x20) = uVar16;
                pvVar40 = (void *)(long)*(int *)(this + 0x1c);
                iVar25 = 0;
                if (0 < (long)pvVar40) {
                  iVar25 = *(int *)(this + 0x1c);
                }
                uVar9 = uVar16 * 2 + 1;
                local_a0 = (ulong)uVar9;
                local_e0 = (ulong)((iVar25 + 2) * uVar9);
                sVar4 = local_e0 * 4;
                local_c0 = puVar10;
                local_b8 = uVar36;
                local_98 = pvVar23;
                local_6c = uVar20;
                local_44 = iVar34;
                *(undefined8 *)((long)piVar17 + -8) = 0x2f0172;
                local_b0 = malloc(sVar4);
                pvVar23 = local_50;
                this = local_88;
                pvVar41 = pvVar40;
                if (pvVar40 != (void *)0x0) {
                  local_78 = (int *)(long)*(int *)(local_88 + 0x24);
                  local_58 = (int *)((ulong)uVar16 * 8 + 4);
                  lVar35 = (long)local_b0 + 0x74;
                  lVar26 = (long)local_50 + 0x74;
                  local_90 = (long)local_78 * 4;
                  lVar32 = (long)local_b0 + 0x14;
                  lVar33 = (long)local_50 + 0x14;
                  pvVar37 = (void *)0x0;
                  do {
                    lVar39 = (long)pvVar37 * (long)local_78;
                    iVar34 = *(int *)((long)local_50 + lVar39 * 4);
                    uVar36 = (long)iVar34 * 8 + 4;
                    if (0 < (long)uVar36) {
                      *(int *)((long)local_b0 + (long)pvVar37 * local_a0 * 4) = iVar34;
                      if (4 < uVar36) {
                        pvVar18 = (void *)((long)local_50 + lVar39 * 4);
                        pvVar41 = (void *)((long)local_b0 + (long)pvVar37 * local_a0 * 4);
                        uVar22 = uVar36 >> 2;
                        pvVar21 = (void *)(uVar22 - (uVar22 != 1));
                        if (pvVar21 < (void *)0x8) {
                        }
                        else {
                          uVar27 = (long)local_b0 + (long)local_58 * (long)pvVar37 + 4;
                          uVar42 = (long)local_50 + lVar39 * 4 + 4;
                          local_31 = uVar22 == 1;
                          if ((uVar27 < uVar42 + (long)pvVar21 * 4) &&
                             (uVar42 < (uVar36 + (ulong)(byte)local_31 * 4 + uVar27) - 4)) {
                          }
                          else {
                            pvVar31 = (void *)((ulong)pvVar21 & 0xfffffffffffffff8);
                            uVar36 = ((long)pvVar31 - 8U >> 3) + 1;
                            uVar42 = (ulong)((uint)uVar36 & 3);
                            if ((long)pvVar31 - 8U < 0x18) {
                              lVar39 = 0;
                            }
                            else {
                              uVar36 = uVar36 & 0x3ffffffffffffffc;
                              lVar39 = 0;
                              do {
                                puVar3 = (undefined8 *)(lVar26 + -0x70 + lVar39 * 4);
                                uVar6 = puVar3[1];
                                puVar5 = (undefined8 *)(lVar26 + -0x60 + lVar39 * 4);
                                uVar7 = *puVar5;
                                uVar8 = puVar5[1];
                                puVar5 = (undefined8 *)(lVar35 + -0x70 + lVar39 * 4);
                                *puVar5 = *puVar3;
                                puVar5[1] = uVar6;
                                puVar3 = (undefined8 *)(lVar35 + -0x60 + lVar39 * 4);
                                *puVar3 = uVar7;
                                puVar3[1] = uVar8;
                                puVar3 = (undefined8 *)(lVar26 + -0x50 + lVar39 * 4);
                                uVar6 = puVar3[1];
                                puVar5 = (undefined8 *)(lVar26 + -0x40 + lVar39 * 4);
                                uVar7 = *puVar5;
                                uVar8 = puVar5[1];
                                puVar5 = (undefined8 *)(lVar35 + -0x50 + lVar39 * 4);
                                *puVar5 = *puVar3;
                                puVar5[1] = uVar6;
                                puVar3 = (undefined8 *)(lVar35 + -0x40 + lVar39 * 4);
                                *puVar3 = uVar7;
                                puVar3[1] = uVar8;
                                puVar3 = (undefined8 *)(lVar26 + -0x30 + lVar39 * 4);
                                uVar6 = puVar3[1];
                                puVar5 = (undefined8 *)(lVar26 + -0x20 + lVar39 * 4);
                                uVar7 = *puVar5;
                                uVar8 = puVar5[1];
                                puVar5 = (undefined8 *)(lVar35 + -0x30 + lVar39 * 4);
                                *puVar5 = *puVar3;
                                puVar5[1] = uVar6;
                                puVar3 = (undefined8 *)(lVar35 + -0x20 + lVar39 * 4);
                                *puVar3 = uVar7;
                                puVar3[1] = uVar8;
                                puVar3 = (undefined8 *)(lVar26 + -0x10 + lVar39 * 4);
                                uVar6 = puVar3[1];
                                puVar5 = (undefined8 *)(lVar26 + lVar39 * 4);
                                uVar7 = *puVar5;
                                uVar8 = puVar5[1];
                                puVar5 = (undefined8 *)(lVar35 + -0x10 + lVar39 * 4);
                                *puVar5 = *puVar3;
                                puVar5[1] = uVar6;
                                puVar3 = (undefined8 *)(lVar35 + lVar39 * 4);
                                *puVar3 = uVar7;
                                puVar3[1] = uVar8;
                                lVar39 = lVar39 + 0x20;
                                uVar36 = uVar36 - 4;
                              } while (uVar36 != 0);
                            }
                            if (uVar42 != 0) {
                              lVar29 = lVar32 + lVar39 * 4;
                              lVar39 = lVar33 + lVar39 * 4;
                              lVar14 = 0;
                              do {
                                puVar5 = (undefined8 *)(lVar39 + -0x10 + lVar14);
                                uVar6 = puVar5[1];
                                puVar3 = (undefined8 *)(lVar39 + lVar14);
                                uVar7 = *puVar3;
                                uVar8 = puVar3[1];
                                puVar3 = (undefined8 *)(lVar29 + -0x10 + lVar14);
                                *puVar3 = *puVar5;
                                puVar3[1] = uVar6;
                                puVar3 = (undefined8 *)(lVar29 + lVar14);
                                *puVar3 = uVar7;
                                puVar3[1] = uVar8;
                                lVar14 = lVar14 + 0x20;
                              } while (uVar42 * 0x20 != lVar14);
                            }
                            local_e8 = pvVar21;
                            if (pvVar21 == pvVar31) goto LAB_002f01e0;
                            pvVar18 = (void *)((long)pvVar18 + (long)pvVar31 * 4);
                            pvVar41 = (void *)((long)pvVar41 + (long)pvVar31 * 4);
                            uVar22 = uVar22 - (long)pvVar31;
                          }
                        }
                        lVar39 = 4;
                        do {
                          uVar22 = uVar22 - 1;
                          *(undefined4 *)((long)pvVar41 + lVar39) =
                               *(undefined4 *)((long)pvVar18 + lVar39);
                          lVar39 = lVar39 + 4;
                        } while (1 < uVar22);
                      }
                    }
LAB_002f01e0:
                    pvVar37 = (void *)((long)pvVar37 + 1);
                    lVar35 = lVar35 + (long)local_58;
                    lVar26 = lVar26 + local_90;
                    lVar32 = lVar32 + (long)local_58;
                    lVar33 = lVar33 + local_90;
                  } while (pvVar37 != pvVar40);
                }
                *(void **)local_88 = local_b0;
                *(ulong *)(local_88 + 8) = local_e0;
                local_c8 = pvVar40;
                *(undefined8 *)((long)piVar17 + -8) = 0x2f0418;
                free(pvVar23);
                iVar25 = (int)local_a0;
                *(int *)(this + 0x24) = iVar25;
                local_50 = *(void **)this;
                pvVar23 = local_98;
                uVar36 = local_b8;
                uVar20 = local_6c;
              }
              puVar11 = (uint *)(ulong)local_5c;
              local_58 = (int *)((long)local_50 + (long)(iVar25 * local_68) * 4);
              local_d8 = (ulong)((int)local_d8 + 1);
LAB_002f0462:
              lVar35 = (long)iVar25 * (long)*(int *)(this + 0x1c);
              piVar19 = (int *)((long)local_50 + lVar35 * 4);
              uVar43 = (undefined7)((ulong)pvVar41 >> 8);
              pvVar41 = (void *)CONCAT71(uVar43,1);
              puVar10 = local_c0;
              iVar30 = (int)local_80;
              iVar34 = local_44;
              if ((long)uVar36 < 1) {
                local_40 = piVar19;
              }
              else {
                uVar22 = uVar36 & 0x3fffffffffffffff;
                uVar42 = uVar22 + (uVar22 == 0);
                this = local_88;
                local_b8 = uVar36;
                local_98 = pvVar23;
                local_6c = uVar20;
                if ((uVar42 < 8) ||
                   ((piVar19 < local_40 + (uVar22 - (uVar22 != 0)) + 1 &&
                    (local_40 <
                     (int *)(((uVar22 + lVar35) - (ulong)(uVar22 != 0)) * 4 + 4 + (long)local_50))))
                   ) {
                  piVar12 = piVar19;
                }
                else {
                  local_5c = (uint)puVar11;
                  uVar28 = uVar42 & 0xfffffffffffffff8;
                  uVar38 = (uVar28 - 8 >> 3) + 1;
                  uVar27 = (ulong)((uint)uVar38 & 3);
                  if (uVar28 - 8 < 0x18) {
                    lVar32 = 0;
                  }
                  else {
                    uVar38 = uVar38 & 0x3ffffffffffffffc;
                    lVar26 = lVar35 * 4;
                    lVar32 = 0;
                    do {
                      uVar6 = *(undefined8 *)(local_40 + lVar32 + 2);
                      uVar7 = *(undefined8 *)(local_40 + lVar32 + 4);
                      uVar8 = *(undefined8 *)(local_40 + lVar32 + 4 + 2);
                      puVar3 = (undefined8 *)((long)local_50 + lVar32 * 4 + lVar26);
                      *puVar3 = *(undefined8 *)(local_40 + lVar32);
                      puVar3[1] = uVar6;
                      puVar3 = (undefined8 *)((long)local_50 + lVar32 * 4 + lVar26 + 0x10);
                      *puVar3 = uVar7;
                      puVar3[1] = uVar8;
                      uVar6 = *(undefined8 *)(local_40 + lVar32 + 8 + 2);
                      uVar7 = *(undefined8 *)(local_40 + lVar32 + 0xc);
                      uVar8 = *(undefined8 *)(local_40 + lVar32 + 0xc + 2);
                      puVar3 = (undefined8 *)((long)local_50 + lVar32 * 4 + lVar26 + 0x20);
                      *puVar3 = *(undefined8 *)(local_40 + lVar32 + 8);
                      puVar3[1] = uVar6;
                      puVar3 = (undefined8 *)((long)local_50 + lVar32 * 4 + lVar26 + 0x30);
                      *puVar3 = uVar7;
                      puVar3[1] = uVar8;
                      uVar6 = *(undefined8 *)(local_40 + lVar32 + 0x10 + 2);
                      uVar7 = *(undefined8 *)(local_40 + lVar32 + 0x14);
                      uVar8 = *(undefined8 *)(local_40 + lVar32 + 0x14 + 2);
                      puVar3 = (undefined8 *)((long)local_50 + lVar32 * 4 + lVar26 + 0x40);
                      *puVar3 = *(undefined8 *)(local_40 + lVar32 + 0x10);
                      puVar3[1] = uVar6;
                      puVar3 = (undefined8 *)((long)local_50 + lVar32 * 4 + lVar26 + 0x50);
                      *puVar3 = uVar7;
                      puVar3[1] = uVar8;
                      uVar6 = *(undefined8 *)(local_40 + lVar32 + 0x18 + 2);
                      uVar7 = *(undefined8 *)(local_40 + lVar32 + 0x1c);
                      uVar8 = *(undefined8 *)(local_40 + lVar32 + 0x1c + 2);
                      puVar3 = (undefined8 *)((long)local_50 + lVar32 * 4 + lVar26 + 0x60);
                      *puVar3 = *(undefined8 *)(local_40 + lVar32 + 0x18);
                      puVar3[1] = uVar6;
                      puVar3 = (undefined8 *)((long)local_50 + lVar32 * 4 + lVar26 + 0x70);
                      *puVar3 = uVar7;
                      puVar3[1] = uVar8;
                      lVar32 = lVar32 + 0x20;
                      uVar38 = uVar38 - 4;
                    } while (uVar38 != 0);
                  }
                  if (uVar27 != 0) {
                    lVar35 = (lVar35 + lVar32) * 4;
                    lVar26 = 0;
                    do {
                      puVar5 = (undefined8 *)((long)local_40 + lVar26 + lVar32 * 4);
                      uVar6 = puVar5[1];
                      puVar3 = (undefined8 *)((long)local_40 + lVar26 + lVar32 * 4 + 0x10);
                      uVar7 = *puVar3;
                      uVar8 = puVar3[1];
                      puVar3 = (undefined8 *)((long)local_50 + lVar26 + lVar35);
                      *puVar3 = *puVar5;
                      puVar3[1] = uVar6;
                      puVar3 = (undefined8 *)((long)local_50 + lVar26 + lVar35 + 0x10);
                      *puVar3 = uVar7;
                      puVar3[1] = uVar8;
                      lVar26 = lVar26 + 0x20;
                    } while (uVar27 * 0x20 != lVar26);
                  }
                  if (uVar42 == uVar28) {
                    pvVar41 = (void *)CONCAT71(uVar43,1);
                    local_40 = piVar19;
                    goto LAB_002f0c63;
                  }
                  uVar22 = uVar22 - uVar28;
                  piVar12 = piVar19 + uVar28;
                  local_40 = local_40 + uVar28;
                }
                uVar22 = uVar22 + 1;
                lVar35 = 0;
                do {
                  *(undefined4 *)((long)piVar12 + lVar35) = *(undefined4 *)((long)local_40 + lVar35)
                  ;
                  uVar22 = uVar22 - 1;
                  lVar35 = lVar35 + 4;
                } while (1 < uVar22);
                pvVar41 = (void *)CONCAT71(uVar43,1);
                local_40 = piVar19;
              }
              goto LAB_002f0580;
            }
            piVar17 = (int *)((long)piVar17 + -(uVar36 * 4 + 0xf & 0xfffffffffffffff0));
            if (0 < (long)uVar36) {
              uVar22 = uVar36 & 0x3fffffffffffffff;
              uVar42 = (uVar22 - (uVar22 != 0)) + 1;
              piVar12 = piVar17;
              if (uVar42 < 8) {
              }
              else if ((piVar17 < piVar19 + (uVar22 - (uVar22 != 0)) + 1) &&
                      (piVar19 < piVar17 + (uVar22 == 0) + uVar36)) {
              }
              else {
                uVar28 = uVar42 & 0xfffffffffffffff8;
                uVar38 = (uVar28 - 8 >> 3) + 1;
                uVar27 = (ulong)((uint)uVar38 & 3);
                if (uVar28 - 8 < 0x18) {
                  lVar35 = 0;
                }
                else {
                  uVar38 = uVar38 & 0x3ffffffffffffffc;
                  lVar35 = 0;
                  do {
                    uVar6 = *(undefined8 *)(piVar19 + lVar35 + 2);
                    uVar7 = *(undefined8 *)(piVar19 + lVar35 + 4);
                    uVar8 = *(undefined8 *)(piVar19 + lVar35 + 4 + 2);
                    *(undefined8 *)(piVar17 + lVar35) = *(undefined8 *)(piVar19 + lVar35);
                    *(undefined8 *)(piVar17 + lVar35 + 2) = uVar6;
                    *(undefined8 *)(piVar17 + lVar35 + 4) = uVar7;
                    *(undefined8 *)(piVar17 + lVar35 + 4 + 2) = uVar8;
                    uVar6 = *(undefined8 *)(piVar19 + lVar35 + 8 + 2);
                    uVar7 = *(undefined8 *)(piVar19 + lVar35 + 0xc);
                    uVar8 = *(undefined8 *)(piVar19 + lVar35 + 0xc + 2);
                    *(undefined8 *)(piVar17 + lVar35 + 8) = *(undefined8 *)(piVar19 + lVar35 + 8);
                    *(undefined8 *)(piVar17 + lVar35 + 8 + 2) = uVar6;
                    *(undefined8 *)(piVar17 + lVar35 + 0xc) = uVar7;
                    *(undefined8 *)(piVar17 + lVar35 + 0xc + 2) = uVar8;
                    uVar6 = *(undefined8 *)(piVar19 + lVar35 + 0x10 + 2);
                    uVar7 = *(undefined8 *)(piVar19 + lVar35 + 0x14);
                    uVar8 = *(undefined8 *)(piVar19 + lVar35 + 0x14 + 2);
                    *(undefined8 *)(piVar17 + lVar35 + 0x10) =
                         *(undefined8 *)(piVar19 + lVar35 + 0x10);
                    *(undefined8 *)(piVar17 + lVar35 + 0x10 + 2) = uVar6;
                    *(undefined8 *)(piVar17 + lVar35 + 0x14) = uVar7;
                    *(undefined8 *)(piVar17 + lVar35 + 0x14 + 2) = uVar8;
                    uVar6 = *(undefined8 *)(piVar19 + lVar35 + 0x18 + 2);
                    uVar7 = *(undefined8 *)(piVar19 + lVar35 + 0x1c);
                    uVar8 = *(undefined8 *)(piVar19 + lVar35 + 0x1c + 2);
                    *(undefined8 *)(piVar17 + lVar35 + 0x18) =
                         *(undefined8 *)(piVar19 + lVar35 + 0x18);
                    *(undefined8 *)(piVar17 + lVar35 + 0x18 + 2) = uVar6;
                    *(undefined8 *)(piVar17 + lVar35 + 0x1c) = uVar7;
                    *(undefined8 *)(piVar17 + lVar35 + 0x1c + 2) = uVar8;
                    lVar35 = lVar35 + 0x20;
                    uVar38 = uVar38 - 4;
                  } while (uVar38 != 0);
                }
                if (uVar27 != 0) {
                  lVar26 = 0;
                  do {
                    puVar5 = (undefined8 *)((long)piVar19 + lVar26 + lVar35 * 4);
                    uVar6 = puVar5[1];
                    puVar3 = (undefined8 *)((long)piVar19 + lVar26 + lVar35 * 4 + 0x10);
                    uVar7 = *puVar3;
                    uVar8 = puVar3[1];
                    puVar3 = (undefined8 *)((long)piVar17 + lVar26 + lVar35 * 4);
                    *puVar3 = *puVar5;
                    puVar3[1] = uVar6;
                    puVar3 = (undefined8 *)((long)piVar17 + lVar26 + lVar35 * 4 + 0x10);
                    *puVar3 = uVar7;
                    puVar3[1] = uVar8;
                    lVar26 = lVar26 + 0x20;
                  } while (uVar27 * 0x20 != lVar26);
                }
                local_44 = iVar34;
                if (uVar42 == uVar28) goto LAB_002f0854;
                uVar22 = uVar22 - uVar28;
                piVar12 = piVar17 + uVar28;
                piVar19 = piVar19 + uVar28;
              }
              uVar22 = uVar22 + 1;
              lVar35 = 0;
              do {
                *(undefined4 *)((long)piVar12 + lVar35) = *(undefined4 *)((long)piVar19 + lVar35);
                uVar22 = uVar22 - 1;
                lVar35 = lVar35 + 4;
              } while (1 < uVar22);
            }
LAB_002f0854:
            uVar16 = iVar25 * 2;
            if ((int)uVar16 < 0x101) {
              uVar16 = 0x100;
            }
            local_e8 = pvVar41;
            local_78 = piVar17;
            if (*(uint *)(local_88 + 0x20) == uVar16) {
              iVar25 = *(int *)(local_88 + 0x24);
              pEVar13 = local_88;
              local_98 = pvVar23;
              local_6c = uVar20;
            }
            else {
              *(uint *)(local_88 + 0x20) = uVar16;
              pvVar41 = (void *)(long)*(int *)(local_88 + 0x1c);
              iVar25 = 0;
              if (0 < (long)pvVar41) {
                iVar25 = *(int *)(local_88 + 0x1c);
              }
              uVar9 = uVar16 * 2 + 1;
              local_90 = (ulong)uVar9;
              local_f0 = (ulong)((iVar25 + 2) * uVar9);
              sVar4 = local_f0 * 4;
              local_c0 = puVar10;
              local_b8 = uVar36;
              local_98 = pvVar23;
              local_6c = uVar20;
              local_44 = iVar34;
              piVar17[-2] = 0x2f08d7;
              piVar17[-1] = 0;
              local_58 = malloc(sVar4);
              pvVar23 = local_50;
              pEVar13 = local_88;
              if (pvVar41 != (void *)0x0) {
                local_a0 = (ulong)*(int *)(local_88 + 0x24);
                local_40 = (int *)((ulong)uVar16 * 8 + 4);
                lVar35 = (long)local_58 + 0x74;
                lVar26 = (long)local_50 + 0x74;
                local_c8 = (void *)(local_a0 * 4);
                lVar32 = (long)local_58 + 0x14;
                lVar33 = (long)local_50 + 0x14;
                pvVar40 = (void *)0x0;
                do {
                  lVar39 = (long)pvVar40 * local_a0;
                  iVar34 = *(int *)((long)local_50 + lVar39 * 4);
                  uVar36 = (long)iVar34 * 8 + 4;
                  if (0 < (long)uVar36) {
                    *(int *)((long)local_58 + (long)pvVar40 * local_90 * 4) = iVar34;
                    if (4 < uVar36) {
                      pvVar37 = (void *)((long)local_50 + lVar39 * 4);
                      pvVar18 = (void *)((long)local_58 + (long)pvVar40 * local_90 * 4);
                      uVar42 = uVar36 >> 2;
                      uVar22 = uVar42 - (uVar42 != 1);
                      if (uVar22 < 8) {
                      }
                      else {
                        uVar38 = (long)local_58 + (long)local_40 * (long)pvVar40 + 4;
                        uVar27 = (long)local_50 + lVar39 * 4 + 4;
                        local_31 = uVar42 == 1;
                        if ((uVar38 < uVar27 + uVar22 * 4) &&
                           (uVar27 < (uVar36 + (ulong)(byte)local_31 * 4 + uVar38) - 4)) {
                        }
                        else {
                          uVar27 = uVar22 & 0xfffffffffffffff8;
                          uVar36 = (uVar27 - 8 >> 3) + 1;
                          uVar38 = (ulong)((uint)uVar36 & 3);
                          if (uVar27 - 8 < 0x18) {
                            lVar39 = 0;
                          }
                          else {
                            uVar36 = uVar36 & 0x3ffffffffffffffc;
                            lVar39 = 0;
                            do {
                              puVar3 = (undefined8 *)(lVar26 + -0x70 + lVar39 * 4);
                              uVar6 = puVar3[1];
                              puVar5 = (undefined8 *)(lVar26 + -0x60 + lVar39 * 4);
                              uVar7 = *puVar5;
                              uVar8 = puVar5[1];
                              puVar5 = (undefined8 *)(lVar35 + -0x70 + lVar39 * 4);
                              *puVar5 = *puVar3;
                              puVar5[1] = uVar6;
                              puVar3 = (undefined8 *)(lVar35 + -0x60 + lVar39 * 4);
                              *puVar3 = uVar7;
                              puVar3[1] = uVar8;
                              puVar3 = (undefined8 *)(lVar26 + -0x50 + lVar39 * 4);
                              uVar6 = puVar3[1];
                              puVar5 = (undefined8 *)(lVar26 + -0x40 + lVar39 * 4);
                              uVar7 = *puVar5;
                              uVar8 = puVar5[1];
                              puVar5 = (undefined8 *)(lVar35 + -0x50 + lVar39 * 4);
                              *puVar5 = *puVar3;
                              puVar5[1] = uVar6;
                              puVar3 = (undefined8 *)(lVar35 + -0x40 + lVar39 * 4);
                              *puVar3 = uVar7;
                              puVar3[1] = uVar8;
                              puVar3 = (undefined8 *)(lVar26 + -0x30 + lVar39 * 4);
                              uVar6 = puVar3[1];
                              puVar5 = (undefined8 *)(lVar26 + -0x20 + lVar39 * 4);
                              uVar7 = *puVar5;
                              uVar8 = puVar5[1];
                              puVar5 = (undefined8 *)(lVar35 + -0x30 + lVar39 * 4);
                              *puVar5 = *puVar3;
                              puVar5[1] = uVar6;
                              puVar3 = (undefined8 *)(lVar35 + -0x20 + lVar39 * 4);
                              *puVar3 = uVar7;
                              puVar3[1] = uVar8;
                              puVar3 = (undefined8 *)(lVar26 + -0x10 + lVar39 * 4);
                              uVar6 = puVar3[1];
                              puVar5 = (undefined8 *)(lVar26 + lVar39 * 4);
                              uVar7 = *puVar5;
                              uVar8 = puVar5[1];
                              puVar5 = (undefined8 *)(lVar35 + -0x10 + lVar39 * 4);
                              *puVar5 = *puVar3;
                              puVar5[1] = uVar6;
                              puVar3 = (undefined8 *)(lVar35 + lVar39 * 4);
                              *puVar3 = uVar7;
                              puVar3[1] = uVar8;
                              lVar39 = lVar39 + 0x20;
                              uVar36 = uVar36 - 4;
                            } while (uVar36 != 0);
                          }
                          if (uVar38 != 0) {
                            lVar29 = lVar32 + lVar39 * 4;
                            lVar39 = lVar33 + lVar39 * 4;
                            lVar14 = 0;
                            do {
                              puVar5 = (undefined8 *)(lVar39 + -0x10 + lVar14);
                              uVar6 = puVar5[1];
                              puVar3 = (undefined8 *)(lVar39 + lVar14);
                              uVar7 = *puVar3;
                              uVar8 = puVar3[1];
                              puVar3 = (undefined8 *)(lVar29 + -0x10 + lVar14);
                              *puVar3 = *puVar5;
                              puVar3[1] = uVar6;
                              puVar3 = (undefined8 *)(lVar29 + lVar14);
                              *puVar3 = uVar7;
                              puVar3[1] = uVar8;
                              lVar14 = lVar14 + 0x20;
                            } while (uVar38 * 0x20 != lVar14);
                          }
                          local_e0 = uVar22;
                          if (uVar22 == uVar27) goto LAB_002f0940;
                          pvVar37 = (void *)((long)pvVar37 + uVar27 * 4);
                          pvVar18 = (void *)((long)pvVar18 + uVar27 * 4);
                          uVar42 = uVar42 - uVar27;
                        }
                      }
                      lVar39 = 4;
                      do {
                        uVar42 = uVar42 - 1;
                        *(undefined4 *)((long)pvVar18 + lVar39) =
                             *(undefined4 *)((long)pvVar37 + lVar39);
                        lVar39 = lVar39 + 4;
                      } while (1 < uVar42);
                    }
                  }
LAB_002f0940:
                  pvVar40 = (void *)((long)pvVar40 + 1);
                  lVar35 = lVar35 + (long)local_40;
                  lVar26 = lVar26 + (long)local_c8;
                  lVar32 = lVar32 + (long)local_40;
                  lVar33 = lVar33 + (long)local_c8;
                } while (pvVar40 != pvVar41);
              }
              *(int **)local_88 = local_58;
              *(ulong *)(local_88 + 8) = local_f0;
              local_b0 = pvVar41;
              piVar17[-2] = 0x2f0b75;
              piVar17[-1] = 0;
              free(pvVar23);
              iVar25 = (int)local_90;
              *(int *)(pEVar13 + 0x24) = iVar25;
              local_50 = *(void **)pEVar13;
              uVar36 = local_b8;
              puVar10 = local_c0;
              iVar30 = (int)local_80;
              iVar34 = local_44;
            }
            local_90 = (ulong)(uint)(iVar25 * local_68);
            lVar35 = (long)iVar25 * (long)*(int *)(pEVar13 + 0x1c);
            local_40 = (int *)((long)local_50 + lVar35 * 4);
            if (0 < (long)(uVar36 * 4)) {
              uVar22 = uVar36 & 0x3fffffffffffffff;
              if ((uVar36 * 4 < 0x20) ||
                 ((local_40 < local_78 + uVar36 &&
                  (local_78 < (int *)((long)local_50 + (uVar22 + lVar35) * 4))))) {
                piVar19 = local_40;
              }
              else {
                uVar27 = uVar36 & 0x3ffffffffffffff8;
                uVar42 = (uVar27 - 8 >> 3) + 1;
                uVar38 = (ulong)((uint)uVar42 & 3);
                if (uVar27 - 8 < 0x18) {
                  lVar26 = 0;
                }
                else {
                  uVar42 = uVar42 & 0x3ffffffffffffffc;
                  lVar26 = 0;
                  do {
                    uVar6 = *(undefined8 *)(local_78 + lVar26 + 2);
                    uVar7 = *(undefined8 *)(local_78 + lVar26 + 4);
                    uVar8 = *(undefined8 *)(local_78 + lVar26 + 4 + 2);
                    puVar3 = (undefined8 *)((long)local_50 + lVar26 * 4 + lVar35 * 4);
                    *puVar3 = *(undefined8 *)(local_78 + lVar26);
                    puVar3[1] = uVar6;
                    puVar3 = (undefined8 *)((long)local_50 + lVar26 * 4 + lVar35 * 4 + 0x10);
                    *puVar3 = uVar7;
                    puVar3[1] = uVar8;
                    uVar6 = *(undefined8 *)(local_78 + lVar26 + 8 + 2);
                    uVar7 = *(undefined8 *)(local_78 + lVar26 + 0xc);
                    uVar8 = *(undefined8 *)(local_78 + lVar26 + 0xc + 2);
                    puVar3 = (undefined8 *)((long)local_50 + lVar26 * 4 + lVar35 * 4 + 0x20);
                    *puVar3 = *(undefined8 *)(local_78 + lVar26 + 8);
                    puVar3[1] = uVar6;
                    puVar3 = (undefined8 *)((long)local_50 + lVar26 * 4 + lVar35 * 4 + 0x30);
                    *puVar3 = uVar7;
                    puVar3[1] = uVar8;
                    uVar6 = *(undefined8 *)(local_78 + lVar26 + 0x10 + 2);
                    uVar7 = *(undefined8 *)(local_78 + lVar26 + 0x14);
                    uVar8 = *(undefined8 *)(local_78 + lVar26 + 0x14 + 2);
                    puVar3 = (undefined8 *)((long)local_50 + lVar26 * 4 + lVar35 * 4 + 0x40);
                    *puVar3 = *(undefined8 *)(local_78 + lVar26 + 0x10);
                    puVar3[1] = uVar6;
                    puVar3 = (undefined8 *)((long)local_50 + lVar26 * 4 + lVar35 * 4 + 0x50);
                    *puVar3 = uVar7;
                    puVar3[1] = uVar8;
                    uVar6 = *(undefined8 *)(local_78 + lVar26 + 0x18 + 2);
                    uVar7 = *(undefined8 *)(local_78 + lVar26 + 0x1c);
                    uVar8 = *(undefined8 *)(local_78 + lVar26 + 0x1c + 2);
                    puVar3 = (undefined8 *)((long)local_50 + lVar26 * 4 + lVar35 * 4 + 0x60);
                    *puVar3 = *(undefined8 *)(local_78 + lVar26 + 0x18);
                    puVar3[1] = uVar6;
                    puVar3 = (undefined8 *)((long)local_50 + lVar26 * 4 + lVar35 * 4 + 0x70);
                    *puVar3 = uVar7;
                    puVar3[1] = uVar8;
                    lVar26 = lVar26 + 0x20;
                    uVar42 = uVar42 - 4;
                  } while (uVar42 != 0);
                }
                if (uVar38 != 0) {
                  lVar32 = 0;
                  do {
                    puVar5 = (undefined8 *)((long)local_78 + lVar32 + lVar26 * 4);
                    uVar6 = puVar5[1];
                    puVar3 = (undefined8 *)((long)local_78 + lVar32 + lVar26 * 4 + 0x10);
                    uVar7 = *puVar3;
                    uVar8 = puVar3[1];
                    puVar3 = (undefined8 *)((long)local_50 + lVar32 + (lVar35 + lVar26) * 4);
                    *puVar3 = *puVar5;
                    puVar3[1] = uVar6;
                    puVar3 = (undefined8 *)((long)local_50 + lVar32 + (lVar35 + lVar26) * 4 + 0x10);
                    *puVar3 = uVar7;
                    puVar3[1] = uVar8;
                    lVar32 = lVar32 + 0x20;
                  } while (uVar38 * 0x20 != lVar32);
                }
                if (uVar22 == uVar27) goto LAB_002f0c34;
                uVar22 = (ulong)((uint)uVar22 & 7);
                piVar19 = local_40 + uVar27;
                local_78 = local_78 + uVar27;
              }
              uVar22 = uVar22 + 1;
              lVar35 = 0;
              do {
                *(undefined4 *)((long)piVar19 + lVar35) = *(undefined4 *)((long)local_78 + lVar35);
                uVar22 = uVar22 - 1;
                lVar35 = lVar35 + 4;
              } while (1 < uVar22);
            }
LAB_002f0c34:
            puVar11 = (uint *)(ulong)local_5c;
            local_58 = (int *)((long)local_50 + (long)(iVar25 * local_68) * 4);
            local_d8 = (ulong)((int)local_d8 + 1);
            pvVar23 = local_98;
            this = local_88;
            pvVar41 = local_e8;
            uVar20 = local_6c;
          }
LAB_002f0c63:
          puVar15 = (uint *)(long)local_60;
          local_58[(long)puVar15 + 1] = (int)local_d0;
          local_60 = local_60 + 2;
          local_58[(long)puVar15 + 2] = iVar30;
        }
        if (uVar36 == 0) break;
        iVar25 = iVar30;
        puVar15 = puVar11;
      } while (local_a8 != 0);
      iVar34 = (int)local_d8;
      if (0 < iVar30) {
        if (*(int *)(this + 0x20) <= iVar34) {
          *local_58 = iVar34;
          uVar20 = 0x100;
          if (0x100 < iVar34 * 2) {
            uVar20 = iVar34 * 2;
          }
          if (*(uint *)(this + 0x20) == uVar20) {
            iVar34 = *(int *)(this + 0x24);
          }
          else {
            *(uint *)(this + 0x20) = uVar20;
            lVar35 = (long)*(int *)(this + 0x1c);
            iVar34 = 0;
            if (0 < lVar35) {
              iVar34 = *(int *)(this + 0x1c);
            }
            uVar16 = uVar20 * 2 + 1;
            local_c8 = (void *)(ulong)uVar16;
            local_a8 = (ulong)((iVar34 + 2) * uVar16);
            sVar4 = local_a8 * 4;
            *(undefined8 *)((long)piVar17 + -8) = 0x2f0e6e;
            local_d0 = malloc(sVar4);
            pvVar41 = local_50;
            pEVar13 = local_88;
            if (lVar35 != 0) {
              local_90 = (ulong)*(int *)(local_88 + 0x24);
              local_40 = (int *)((ulong)uVar20 * 8 + 4);
              lVar26 = (long)local_d0 + 0x74;
              lVar32 = (long)local_50 + 0x74;
              local_b0 = (void *)(local_90 * 4);
              lVar33 = (long)local_d0 + 0x14;
              lVar39 = (long)local_50 + 0x14;
              lVar29 = 0;
              do {
                lVar14 = lVar29 * local_90;
                iVar34 = *(int *)((long)local_50 + lVar14 * 4);
                uVar36 = (long)iVar34 * 8 + 4;
                if (0 < (long)uVar36) {
                  *(int *)((long)local_d0 + lVar29 * (long)local_c8 * 4) = iVar34;
                  if (4 < uVar36) {
                    pvVar23 = (void *)((long)local_50 + lVar14 * 4);
                    pvVar40 = (void *)((long)local_d0 + lVar29 * (long)local_c8 * 4);
                    uVar42 = uVar36 >> 2;
                    uVar22 = uVar42 - (uVar42 != 1);
                    if (uVar22 < 8) {
                    }
                    else {
                      uVar38 = (long)local_d0 + (long)local_40 * lVar29 + 4;
                      uVar27 = (long)local_50 + lVar14 * 4 + 4;
                      local_80 = CONCAT71(local_80._1_7_,uVar42 == 1);
                      local_a0 = uVar22;
                      if ((uVar27 + uVar22 * 4 <= uVar38) ||
                         ((uVar36 + (ulong)(uVar42 == 1) * 4 + uVar38) - 4 <= uVar27)) {
                        local_80 = uVar22 & 0xfffffffffffffff8;
                        uVar27 = (local_80 - 8 >> 3) + 1;
                        uVar36 = (ulong)((uint)uVar27 & 3);
                        if (local_80 - 8 < 0x18) {
                          lVar14 = 0;
                        }
                        else {
                          uVar27 = uVar27 & 0x3ffffffffffffffc;
                          lVar14 = 0;
                          do {
                            puVar3 = (undefined8 *)(lVar32 + -0x70 + lVar14 * 4);
                            uVar6 = puVar3[1];
                            puVar5 = (undefined8 *)(lVar32 + -0x60 + lVar14 * 4);
                            uVar7 = *puVar5;
                            uVar8 = puVar5[1];
                            puVar5 = (undefined8 *)(lVar26 + -0x70 + lVar14 * 4);
                            *puVar5 = *puVar3;
                            puVar5[1] = uVar6;
                            puVar3 = (undefined8 *)(lVar26 + -0x60 + lVar14 * 4);
                            *puVar3 = uVar7;
                            puVar3[1] = uVar8;
                            puVar3 = (undefined8 *)(lVar32 + -0x50 + lVar14 * 4);
                            uVar6 = puVar3[1];
                            puVar5 = (undefined8 *)(lVar32 + -0x40 + lVar14 * 4);
                            uVar7 = *puVar5;
                            uVar8 = puVar5[1];
                            puVar5 = (undefined8 *)(lVar26 + -0x50 + lVar14 * 4);
                            *puVar5 = *puVar3;
                            puVar5[1] = uVar6;
                            puVar3 = (undefined8 *)(lVar26 + -0x40 + lVar14 * 4);
                            *puVar3 = uVar7;
                            puVar3[1] = uVar8;
                            puVar3 = (undefined8 *)(lVar32 + -0x30 + lVar14 * 4);
                            uVar6 = puVar3[1];
                            puVar5 = (undefined8 *)(lVar32 + -0x20 + lVar14 * 4);
                            uVar7 = *puVar5;
                            uVar8 = puVar5[1];
                            puVar5 = (undefined8 *)(lVar26 + -0x30 + lVar14 * 4);
                            *puVar5 = *puVar3;
                            puVar5[1] = uVar6;
                            puVar3 = (undefined8 *)(lVar26 + -0x20 + lVar14 * 4);
                            *puVar3 = uVar7;
                            puVar3[1] = uVar8;
                            puVar5 = (undefined8 *)(lVar32 + -0x10 + lVar14 * 4);
                            uVar6 = puVar5[1];
                            puVar3 = (undefined8 *)(lVar32 + lVar14 * 4);
                            uVar7 = *puVar3;
                            uVar8 = puVar3[1];
                            puVar3 = (undefined8 *)(lVar26 + -0x10 + lVar14 * 4);
                            *puVar3 = *puVar5;
                            puVar3[1] = uVar6;
                            puVar3 = (undefined8 *)(lVar26 + lVar14 * 4);
                            *puVar3 = uVar7;
                            puVar3[1] = uVar8;
                            lVar14 = lVar14 + 0x20;
                            uVar27 = uVar27 - 4;
                          } while (uVar27 != 0);
                        }
                        if (uVar36 != 0) {
                          lVar2 = lVar33 + lVar14 * 4;
                          lVar14 = lVar14 * 4 + lVar39;
                          lVar24 = 0;
                          do {
                            puVar5 = (undefined8 *)(lVar14 + -0x10 + lVar24);
                            uVar6 = puVar5[1];
                            puVar3 = (undefined8 *)(lVar14 + lVar24);
                            uVar7 = *puVar3;
                            uVar8 = puVar3[1];
                            puVar3 = (undefined8 *)(lVar2 + -0x10 + lVar24);
                            *puVar3 = *puVar5;
                            puVar3[1] = uVar6;
                            puVar3 = (undefined8 *)(lVar2 + lVar24);
                            *puVar3 = uVar7;
                            puVar3[1] = uVar8;
                            lVar24 = lVar24 + 0x20;
                          } while (uVar36 * 0x20 != lVar24);
                        }
                        if (uVar22 == local_80) goto LAB_002f0ed0;
                        pvVar23 = (void *)((long)pvVar23 + local_80 * 4);
                        pvVar40 = (void *)((long)pvVar40 + local_80 * 4);
                        uVar42 = uVar42 - local_80;
                      }
                    }
                    lVar14 = 4;
                    do {
                      uVar42 = uVar42 - 1;
                      *(undefined4 *)((long)pvVar40 + lVar14) =
                           *(undefined4 *)((long)pvVar23 + lVar14);
                      lVar14 = lVar14 + 4;
                    } while (1 < uVar42);
                  }
                }
LAB_002f0ed0:
                lVar29 = lVar29 + 1;
                lVar26 = lVar26 + (long)local_40;
                lVar32 = lVar32 + (long)local_b0;
                lVar33 = lVar33 + (long)local_40;
                lVar39 = lVar39 + (long)local_b0;
              } while (lVar29 != lVar35);
            }
            *(void **)local_88 = local_d0;
            *(ulong *)(local_88 + 8) = local_a8;
            local_58 = (int *)lVar35;
            *(undefined8 *)((long)piVar17 + -8) = 0x2f1128;
            free(pvVar41);
            iVar34 = (int)local_c8;
            *(int *)(pEVar13 + 0x24) = iVar34;
            local_50 = *(void **)pEVar13;
          }
          local_58 = (int *)((long)local_50 + (long)(iVar34 * local_68) * 4);
        }
        iVar34 = (int)local_d8 + 1;
        puVar15 = (uint *)(long)local_60;
        local_58[(long)puVar15 + 1] = local_64;
        local_58[(long)puVar15 + 2] = 0;
      }
      *local_58 = iVar34;
      return puVar15;
    }
    if (param_2[3] < local_64) {
      local_64 = param_2[3];
    }
    uVar20 = param_2[1];
    piVar17 = local_58 + lVar35 * 2 + -1;
    puVar10 = puVar11;
    if (local_64 < local_58[lVar35 * 2 + -1]) {
      if (local_64 <= (int)*puVar11) goto LAB_002f0dd1;
      if (local_64 < local_58[lVar35 * 2 + -3]) {
        piVar19 = piVar17;
        do {
          iVar34 = iVar34 + -1;
          *local_58 = iVar34;
          piVar17 = piVar19 + -2;
          piVar12 = piVar19 + -4;
          piVar19 = piVar17;
        } while (local_64 < *piVar12);
      }
      *piVar17 = local_64;
      piVar17[1] = 0;
      uVar16 = *puVar11;
    }
    else {
      uVar16 = *puVar11;
      local_64 = local_58[lVar35 * 2 + -1];
    }
    if ((int)uVar16 < (int)uVar20) {
      piVar19 = piVar17;
      if ((int)uVar20 < local_64) {
        do {
          piVar17 = piVar19 + -2;
          piVar12 = piVar19 + -2;
          piVar19 = piVar17;
        } while ((int)uVar20 < *piVar12);
      }
      puVar10 = (uint *)((ulong)((long)piVar17 - (long)puVar11) >> 2);
      if (1 < (int)(uint)puVar10) {
        iVar34 = *local_58 - ((uint)puVar10 >> 1);
        *local_58 = iVar34;
        puVar10 = memmove(puVar11,piVar17,(long)iVar34 << 3);
      }
      *puVar11 = uVar20;
    }
  }
  return puVar10;
}


