// Function : draw
// Namespace: juce:TextLayout
// Entry    : 003c8a80
// Prototype: undefined draw(undefined8 param_1_00, undefined8 param_2, long * param_3, long * param_4)
// Body     : 003c8a80 - 003c9677


/* WARNING: Unknown calling convention: __cdecl */
/* juce::TextLayout::draw(juce::Graphics&, juce::Rectangle<float>) const */

void __cdecl
juce::TextLayout::draw(undefined8 param_1_00,undefined8 param_2,long *param_3,long *param_4)

{
  long *plVar1;
  pthread_mutex_t *__mutex;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *pvVar6;
  int extraout_var;
  ulong uVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  uint *puVar10;
  uint *puVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined2 *puVar15;
  uint *puVar16;
  int extraout_var_00;
  long *plVar17;
  ulong uVar18;
  long extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined2 *puVar19;
  undefined8 *puVar20;
  long *plVar21;
  ulong uVar22;
  ulong uVar23;
  bool bVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  SharedFontInternal *pSVar28;
  int iVar29;
  ulong uVar30;
  uint *puVar31;
  uint uVar32;
  uint uVar33;
  float fVar34;
  float fVar35;
  uint uVar36;
  uint uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined2 *local_110;
  uint *local_108;
  undefined8 local_e8;
  float local_e0;
  float fStack_dc;
  undefined4 uStack_d8;
  float fStack_d4;
  undefined1 local_d0 [16];
  undefined8 local_c0;
  uint *local_b8;
  undefined2 *local_b0;
  float local_a8;
  float local_98;
  undefined1 local_88 [16];
  long *local_78;
  long *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined1 local_58 [16];
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  local_a8 = (float)((ulong)param_1_00 >> 0x20);
  local_98 = (float)param_1_00;
  fVar34 = (float)((ulong)param_2 >> 0x20);
  uVar32 = *(uint *)(param_3 + 3);
  if ((uVar32 & 4) == 0) {
    if ((uVar32 & 2) != 0) {
      fVar38 = (float)param_2 - *(float *)(param_3 + 2);
      goto LAB_003c8ad4;
    }
  }
  else {
    fVar38 = ((float)param_2 - *(float *)(param_3 + 2)) * DAT_005d9044;
LAB_003c8ad4:
    local_98 = local_98 + fVar38;
  }
  if ((uVar32 & 0x20) == 0) {
    if ((uVar32 & 0x10) == 0) goto LAB_003c8b1b;
    fVar34 = fVar34 - *(float *)((long)param_3 + 0x14);
  }
  else {
    fVar34 = (fVar34 - *(float *)((long)param_3 + 0x14)) * DAT_005d9044;
  }
  local_a8 = local_a8 + fVar34;
LAB_003c8b1b:
  (**(code **)(*param_4 + 0x70))(param_4);
  (**(code **)(*param_4 + 0x60))(param_4);
  if ((long)*(int *)((long)param_3 + 0xc) == 0) {
    puVar31 = (uint *)0x0;
    puVar19 = (undefined2 *)0x0;
  }
  else {
    fVar34 = (float)extraout_var - local_a8;
    fVar38 = (float)(extraout_var_00 + extraout_var) - local_a8;
    plVar17 = (long *)*param_3;
    local_78 = plVar17 + *(int *)((long)param_3 + 0xc);
    puVar19 = (undefined2 *)0x0;
    local_110 = (undefined2 *)0x0;
    local_b0 = (undefined2 *)0x0;
    puVar31 = (uint *)0x0;
    local_108 = (uint *)0x0;
    local_b8 = (uint *)0x0;
    do {
      plVar21 = (long *)*plVar17;
      fVar35 = *(float *)((long)plVar21 + 0x1c) - *(float *)(plVar21 + 4);
      fVar39 = *(float *)((long)plVar21 + 0x1c) + *(float *)((long)plVar21 + 0x24);
      if (fVar39 <= fVar35) {
        fVar39 = fVar35;
      }
      local_70 = plVar17;
      if (fVar34 <= fVar39) {
        if (fVar38 < fVar35) break;
        if ((long)*(int *)((long)plVar21 + 0xc) != 0) {
          fStack_44 = (float)((ulong)plVar21[3] >> 0x20);
          fVar39 = local_98 + (float)plVar21[3];
          local_48 = fStack_44 + local_a8;
          puVar20 = (undefined8 *)*plVar21;
          local_68 = puVar20 + *(int *)((long)plVar21 + 0xc);
          fStack_40 = fStack_44;
          fStack_3c = fStack_44;
          do {
            plVar17 = (long *)*puVar20;
                    /* try { // try from 003c8d14 to 003c8d1f has its CatchHandler @ 003c96cd */
            (**(code **)(*param_4 + 0xf8))(param_4,plVar17);
            local_e8 = (long *)CONCAT44(local_e8._4_4_,(int)plVar17[1]);
            local_e0 = 0.0;
            fStack_dc = 0.0;
            uStack_d8 = 0;
            fStack_d4 = 0.0;
            local_d0 = ZEXT416(DAT_005d9038);
            local_c0 = 0x3f800000;
                    /* try { // try from 003c8d4d to 003c8d5a has its CatchHandler @ 003c96d5 */
            (**(code **)(*param_4 + 0x90))(param_4,&local_e8);
            plVar21 = (long *)CONCAT44(fStack_d4,uStack_d8);
            if (plVar21 != (long *)0x0) {
              LOCK();
              plVar2 = plVar21 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)(*plVar21 + 8))();
              }
            }
            pvVar6 = (void *)CONCAT44(fStack_dc,local_e0);
            local_60 = puVar20;
            if (pvVar6 != (void *)0x0) {
              *(undefined4 *)((long)pvVar6 + 0x24) = 0;
              free(*(void **)((long)pvVar6 + 0x18));
              operator_delete(pvVar6);
            }
            iVar29 = *(int *)((long)plVar17 + 0x1c);
            uVar22 = (ulong)iVar29;
            uVar26 = (long)local_110 - (long)puVar19;
            uVar7 = (long)uVar26 >> 1;
            if (uVar7 < uVar22) {
              uVar7 = uVar22 - uVar7;
              if (uVar7 != 0) {
                if ((ulong)((long)local_b0 - (long)local_110 >> 1) < uVar7) {
                  uVar23 = uVar26 >> 1;
                  if ((uVar23 ^ 0x3fffffffffffffff) < uVar7) {
                    /* try { // try from 003c9660 to 003c9677 has its CatchHandler @ 003c9689 */
                    /* WARNING: Subroutine does not return */
                    std::__throw_length_error("vector::_M_default_append");
                  }
                  uVar22 = uVar23;
                  if (uVar23 < uVar7) {
                    uVar22 = uVar7;
                  }
                  uVar30 = uVar22 + uVar23;
                  if (0x3fffffffffffffff < uVar30) {
                    uVar30 = 0x3fffffffffffffff;
                  }
                  if (CARRY8(uVar22,uVar23)) {
                    uVar30 = 0x3fffffffffffffff;
                  }
                  if (uVar30 == 0) {
                    puVar8 = (undefined2 *)0x0;
                  }
                  else {
                    /* try { // try from 003c8e2a to 003c8e2e has its CatchHandler @ 003c9687 */
                    puVar8 = operator_new(uVar30 * 2);
                  }
                  puVar8[uVar23] = 0;
                  if (uVar7 != 1) {
                    memset(puVar8 + uVar23 + 1,0,uVar7 * 2 - 2);
                  }
                  if ((uVar26 != 0) && (puVar19 != local_110)) {
                    puVar9 = puVar8;
                    puVar15 = puVar19;
                    if (0x1d < uVar26 - 2) {
                      uVar27 = (uVar26 - 2 >> 1) + 1;
                      uVar22 = uVar27 & 0xfffffffffffffff0;
                      uVar18 = (uVar22 - 0x10 >> 4) + 1;
                      uVar26 = (ulong)((uint)uVar18 & 3);
                      if (uVar22 - 0x10 < 0x30) {
                        lVar13 = 0;
                      }
                      else {
                        uVar18 = uVar18 & 0xfffffffffffffffc;
                        lVar13 = 0;
                        do {
                          uVar3 = *(undefined8 *)((long)(puVar19 + lVar13) + 8);
                          uVar4 = *(undefined8 *)(puVar19 + lVar13 + 8);
                          uVar5 = *(undefined8 *)((long)(puVar19 + lVar13 + 8) + 8);
                          *(undefined8 *)(puVar8 + lVar13) = *(undefined8 *)(puVar19 + lVar13);
                          *(undefined8 *)((long)(puVar8 + lVar13) + 8) = uVar3;
                          *(undefined8 *)(puVar8 + lVar13 + 8) = uVar4;
                          *(undefined8 *)((long)(puVar8 + lVar13 + 8) + 8) = uVar5;
                          uVar3 = *(undefined8 *)((long)(puVar19 + lVar13 + 0x10) + 8);
                          uVar4 = *(undefined8 *)(puVar19 + lVar13 + 0x18);
                          uVar5 = *(undefined8 *)((long)(puVar19 + lVar13 + 0x18) + 8);
                          *(undefined8 *)(puVar8 + lVar13 + 0x10) =
                               *(undefined8 *)(puVar19 + lVar13 + 0x10);
                          *(undefined8 *)((long)(puVar8 + lVar13 + 0x10) + 8) = uVar3;
                          *(undefined8 *)(puVar8 + lVar13 + 0x18) = uVar4;
                          *(undefined8 *)((long)(puVar8 + lVar13 + 0x18) + 8) = uVar5;
                          uVar3 = *(undefined8 *)((long)(puVar19 + lVar13 + 0x20) + 8);
                          uVar4 = *(undefined8 *)(puVar19 + lVar13 + 0x28);
                          uVar5 = *(undefined8 *)((long)(puVar19 + lVar13 + 0x28) + 8);
                          *(undefined8 *)(puVar8 + lVar13 + 0x20) =
                               *(undefined8 *)(puVar19 + lVar13 + 0x20);
                          *(undefined8 *)((long)(puVar8 + lVar13 + 0x20) + 8) = uVar3;
                          *(undefined8 *)(puVar8 + lVar13 + 0x28) = uVar4;
                          *(undefined8 *)((long)(puVar8 + lVar13 + 0x28) + 8) = uVar5;
                          uVar3 = *(undefined8 *)((long)(puVar19 + lVar13 + 0x30) + 8);
                          uVar4 = *(undefined8 *)(puVar19 + lVar13 + 0x38);
                          uVar5 = *(undefined8 *)((long)(puVar19 + lVar13 + 0x38) + 8);
                          *(undefined8 *)(puVar8 + lVar13 + 0x30) =
                               *(undefined8 *)(puVar19 + lVar13 + 0x30);
                          *(undefined8 *)((long)(puVar8 + lVar13 + 0x30) + 8) = uVar3;
                          *(undefined8 *)(puVar8 + lVar13 + 0x38) = uVar4;
                          *(undefined8 *)((long)(puVar8 + lVar13 + 0x38) + 8) = uVar5;
                          lVar13 = lVar13 + 0x40;
                          uVar18 = uVar18 - 4;
                        } while (uVar18 != 0);
                      }
                      if (uVar26 != 0) {
                        lVar25 = 0;
                        do {
                          puVar14 = (undefined8 *)((long)puVar19 + lVar25 + lVar13 * 2);
                          uVar3 = puVar14[1];
                          puVar20 = (undefined8 *)((long)puVar19 + lVar25 + lVar13 * 2 + 0x10);
                          uVar4 = *puVar20;
                          uVar5 = puVar20[1];
                          puVar20 = (undefined8 *)((long)puVar8 + lVar25 + lVar13 * 2);
                          *puVar20 = *puVar14;
                          puVar20[1] = uVar3;
                          puVar20 = (undefined8 *)((long)puVar8 + lVar25 + lVar13 * 2 + 0x10);
                          *puVar20 = uVar4;
                          puVar20[1] = uVar5;
                          lVar25 = lVar25 + 0x20;
                        } while (uVar26 * 0x20 != lVar25);
                      }
                      if (uVar27 == uVar22) goto LAB_003c8ff3;
                      puVar15 = puVar19 + uVar22;
                      puVar9 = puVar8 + uVar22;
                    }
                    do {
                      *puVar9 = *puVar15;
                      puVar15 = puVar15 + 1;
                      puVar9 = puVar9 + 1;
                    } while (puVar15 != local_110);
                  }
LAB_003c8ff3:
                  if (puVar19 != (undefined2 *)0x0) {
                    operator_delete(puVar19);
                  }
                  local_b0 = puVar8 + uVar30;
                  iVar29 = *(int *)((long)plVar17 + 0x1c);
                  uVar22 = (ulong)iVar29;
                  puVar19 = puVar8;
                  local_110 = puVar8 + uVar23 + uVar7;
                }
                else {
                  *local_110 = 0;
                  if (uVar7 == 1) {
                    local_110 = local_110 + 1;
                  }
                  else {
                    memset(local_110 + 1,0,uVar7 * 2 - 2);
                    local_110 = local_110 + uVar7;
                  }
                }
              }
            }
            else if (uVar22 < uVar7) {
              local_110 = puVar19 + uVar22;
            }
            if (iVar29 != 0) {
              lVar13 = plVar17[2];
              lVar25 = 0;
              puVar8 = puVar19;
              do {
                *puVar8 = *(undefined2 *)(lVar13 + lVar25);
                puVar8 = puVar8 + 1;
                lVar25 = lVar25 + 0x10;
              } while (uVar22 * 0x10 != lVar25);
            }
            uVar23 = (long)local_108 - (long)puVar31;
            uVar7 = (long)uVar23 >> 3;
            uVar26 = uVar22 - uVar7;
            if (uVar22 < uVar7 || uVar26 == 0) {
              if (uVar22 < uVar7) {
                local_108 = puVar31 + uVar22 * 2;
              }
              iVar29 = *(int *)((long)plVar17 + 0x1c);
              fStack_d4 = local_48;
            }
            else {
              if (uVar26 != 0) {
                if ((ulong)((long)local_b8 - (long)local_108 >> 3) < uVar26) {
                  uVar7 = uVar23 >> 3;
                  if ((uVar7 ^ 0xfffffffffffffff) < uVar26) {
                    /* WARNING: Subroutine does not return */
                    std::__throw_length_error("vector::_M_default_append");
                  }
                  uVar22 = uVar7;
                  if (uVar7 < uVar26) {
                    uVar22 = uVar26;
                  }
                  uVar30 = uVar22 + uVar7;
                  if (0xfffffffffffffff < uVar30) {
                    uVar30 = 0xfffffffffffffff;
                  }
                  if (CARRY8(uVar22,uVar7)) {
                    uVar30 = 0xfffffffffffffff;
                  }
                  local_88._0_8_ = uVar30;
                  if (uVar30 == 0) {
                    puVar10 = (uint *)0x0;
                  }
                  else {
                    /* try { // try from 003c90fb to 003c90ff has its CatchHandler @ 003c9687 */
                    puVar10 = operator_new(uVar30 * 8);
                  }
                  memset(puVar10 + uVar7 * 2,0,uVar26 * 8);
                  if (puVar31 != local_108) {
                    puVar11 = puVar31;
                    puVar16 = puVar10;
                    if (0x17 < uVar23 - 8) {
                      uVar18 = (uVar23 - 8 >> 3) + 1;
                      uVar22 = uVar18 & 0x3ffffffffffffffc;
                      uVar30 = (uVar22 - 4 >> 2) + 1;
                      uVar23 = (ulong)((uint)uVar30 & 3);
                      if (uVar22 - 4 < 0xc) {
                        lVar13 = 0;
                      }
                      else {
                        uVar30 = uVar30 & 0xfffffffffffffffc;
                        lVar13 = 0;
                        do {
                          uVar3 = *(undefined8 *)(puVar31 + lVar13 * 2 + 2);
                          uVar4 = *(undefined8 *)(puVar31 + lVar13 * 2 + 4);
                          uVar5 = *(undefined8 *)(puVar31 + lVar13 * 2 + 4 + 2);
                          *(undefined8 *)(puVar10 + lVar13 * 2) =
                               *(undefined8 *)(puVar31 + lVar13 * 2);
                          *(undefined8 *)(puVar10 + lVar13 * 2 + 2) = uVar3;
                          *(undefined8 *)(puVar10 + lVar13 * 2 + 4) = uVar4;
                          *(undefined8 *)(puVar10 + lVar13 * 2 + 4 + 2) = uVar5;
                          uVar3 = *(undefined8 *)(puVar31 + lVar13 * 2 + 8 + 2);
                          uVar4 = *(undefined8 *)(puVar31 + lVar13 * 2 + 0xc);
                          uVar5 = *(undefined8 *)(puVar31 + lVar13 * 2 + 0xc + 2);
                          *(undefined8 *)(puVar10 + lVar13 * 2 + 8) =
                               *(undefined8 *)(puVar31 + lVar13 * 2 + 8);
                          *(undefined8 *)(puVar10 + lVar13 * 2 + 8 + 2) = uVar3;
                          *(undefined8 *)(puVar10 + lVar13 * 2 + 0xc) = uVar4;
                          *(undefined8 *)(puVar10 + lVar13 * 2 + 0xc + 2) = uVar5;
                          uVar3 = *(undefined8 *)(puVar31 + lVar13 * 2 + 0x10 + 2);
                          uVar4 = *(undefined8 *)(puVar31 + lVar13 * 2 + 0x14);
                          uVar5 = *(undefined8 *)(puVar31 + lVar13 * 2 + 0x14 + 2);
                          *(undefined8 *)(puVar10 + lVar13 * 2 + 0x10) =
                               *(undefined8 *)(puVar31 + lVar13 * 2 + 0x10);
                          *(undefined8 *)(puVar10 + lVar13 * 2 + 0x10 + 2) = uVar3;
                          *(undefined8 *)(puVar10 + lVar13 * 2 + 0x14) = uVar4;
                          *(undefined8 *)(puVar10 + lVar13 * 2 + 0x14 + 2) = uVar5;
                          uVar3 = *(undefined8 *)(puVar31 + lVar13 * 2 + 0x18 + 2);
                          uVar4 = *(undefined8 *)(puVar31 + lVar13 * 2 + 0x1c);
                          uVar5 = *(undefined8 *)(puVar31 + lVar13 * 2 + 0x1c + 2);
                          *(undefined8 *)(puVar10 + lVar13 * 2 + 0x18) =
                               *(undefined8 *)(puVar31 + lVar13 * 2 + 0x18);
                          *(undefined8 *)(puVar10 + lVar13 * 2 + 0x18 + 2) = uVar3;
                          *(undefined8 *)(puVar10 + lVar13 * 2 + 0x1c) = uVar4;
                          *(undefined8 *)(puVar10 + lVar13 * 2 + 0x1c + 2) = uVar5;
                          lVar13 = lVar13 + 0x10;
                          uVar30 = uVar30 - 4;
                        } while (uVar30 != 0);
                      }
                      if (uVar23 != 0) {
                        lVar25 = 0;
                        do {
                          puVar14 = (undefined8 *)((long)puVar31 + lVar25 + lVar13 * 8);
                          uVar3 = puVar14[1];
                          puVar20 = (undefined8 *)((long)puVar31 + lVar25 + lVar13 * 8 + 0x10);
                          uVar4 = *puVar20;
                          uVar5 = puVar20[1];
                          puVar20 = (undefined8 *)((long)puVar10 + lVar25 + lVar13 * 8);
                          *puVar20 = *puVar14;
                          puVar20[1] = uVar3;
                          puVar20 = (undefined8 *)((long)puVar10 + lVar25 + lVar13 * 8 + 0x10);
                          *puVar20 = uVar4;
                          puVar20[1] = uVar5;
                          lVar25 = lVar25 + 0x20;
                        } while (uVar23 * 0x20 != lVar25);
                      }
                      if (uVar18 == uVar22) goto LAB_003c92d3;
                      puVar16 = puVar10 + uVar22 * 2;
                      puVar11 = puVar31 + uVar22 * 2;
                    }
                    do {
                      *(undefined8 *)puVar16 = *(undefined8 *)puVar11;
                      puVar11 = puVar11 + 2;
                      puVar16 = puVar16 + 2;
                    } while (puVar11 != local_108);
                  }
LAB_003c92d3:
                  if (puVar31 != (uint *)0x0) {
                    operator_delete(puVar31);
                  }
                  local_108 = puVar10 + uVar7 * 2 + uVar26 * 2;
                  local_b8 = puVar10 + local_88._0_8_ * 2;
                  iVar29 = *(int *)((long)plVar17 + 0x1c);
                  puVar31 = puVar10;
                  fStack_d4 = local_48;
                  goto joined_r0x003c9312;
                }
                memset(local_108,0,uVar26 * 8);
                local_108 = local_108 + uVar26 * 2;
              }
              iVar29 = *(int *)((long)plVar17 + 0x1c);
              fStack_d4 = local_48;
            }
joined_r0x003c9312:
            if ((long)iVar29 != 0) {
              lVar13 = plVar17[2];
              lVar25 = 0;
              puVar10 = puVar31;
              do {
                *(undefined8 *)puVar10 = *(undefined8 *)(lVar13 + 4 + lVar25);
                puVar10 = puVar10 + 2;
                lVar25 = lVar25 + 0x10;
              } while ((long)iVar29 * 0x10 != lVar25);
            }
            uVar7 = (long)local_108 - (long)puVar31 >> 3;
            local_e8 = (long *)&DAT_3f800000;
            fStack_dc = 0.0;
            uStack_d8 = 0x3f800000;
                    /* try { // try from 003c9394 to 003c93a7 has its CatchHandler @ 003c96e7 */
            puVar20 = &local_e8;
            puVar10 = puVar31;
            local_e0 = fVar39;
            local_48 = fStack_d4;
            (**(code **)(*param_4 + 0x108))(param_4,(long)local_110 - (long)puVar19 >> 1,puVar19);
            pSVar28 = (SharedFontInternal *)*plVar17;
            if (pSVar28[0x7d] != (SharedFontInternal)0x0) {
              if ((long)*(int *)((long)plVar17 + 0x1c) == 0) {
                local_88 = ZEXT816(0);
                fVar35 = *(float *)(pSVar28 + 100);
                lVar13 = extraout_RDX;
                if (fVar35 <= DAT_005d9058) goto LAB_003c946b;
              }
              else {
                uVar7 = plVar17[2];
                lVar12 = (long)*(int *)((long)plVar17 + 0x1c) * 0x10;
                local_88 = ZEXT816(0);
                bVar24 = true;
                lVar25 = 0;
                do {
                  while( true ) {
                    lVar13 = lVar25;
                    fVar35 = *(float *)(uVar7 + 4 + lVar13);
                    fVar40 = *(float *)(uVar7 + 0xc + lVar13) + fVar35;
                    if (fVar40 <= fVar35) {
                      fVar40 = fVar35;
                    }
                    if (!bVar24) break;
                    bVar24 = false;
                    local_88._4_4_ = fVar40;
                    local_88._0_4_ = fVar35;
                    local_88._8_8_ = 0;
                    lVar25 = lVar13 + 0x10;
                    if (lVar12 == lVar13 + 0x10) goto LAB_003c942a;
                  }
                  if (local_88._0_4_ <= fVar35) {
                    fVar35 = local_88._0_4_;
                  }
                  if (fVar40 <= local_88._4_4_) {
                    fVar40 = local_88._4_4_;
                  }
                  if (fVar40 <= fVar35) {
                    fVar40 = fVar35;
                  }
                  local_88._4_4_ = fVar40;
                  local_88._0_4_ = fVar35;
                  local_88._8_8_ = 0;
                  lVar25 = lVar13 + 0x10;
                } while (lVar12 != lVar13 + 0x10);
LAB_003c942a:
                lVar13 = lVar13 + 0x10;
                fVar35 = *(float *)(pSVar28 + 100);
                if (fVar35 <= DAT_005d9058) {
LAB_003c946b:
                  fVar35 = *(float *)(pSVar28 + 0x68);
                    /* try { // try from 003c9478 to 003c9482 has its CatchHandler @ 003c9698 */
                  uVar3 = Font::SharedFontInternal::getAscentDescent
                                    (pSVar28,plVar17,lVar13,uVar7,puVar10,(ulong)puVar20);
                  fVar35 = fVar35 * ((float)((ulong)uVar3 >> 0x20) + (float)uVar3);
                  pSVar28 = (SharedFontInternal *)*plVar17;
                }
              }
              __mutex = (pthread_mutex_t *)(pSVar28 + 0x80);
              pthread_mutex_lock(__mutex);
              pthread_mutex_lock(__mutex);
              plVar21 = *(long **)(pSVar28 + 0x10);
              if (plVar21 == (long *)0x0) {
                plVar21 = *(long **)(pSVar28 + 0x28);
                if (plVar21 == (long *)0x0) {
                    /* try { // try from 003c94ee to 003c9502 has its CatchHandler @ 003c967a */
                  lVar13 = SingletonHolder<juce::TypefaceCache,juce::CriticalSection,false>::get();
                  TypefaceCache::findTypefaceFor
                            (&local_e8,lVar13,plVar17,uVar7,puVar10,(ulong)puVar20);
                }
                else {
                  LOCK();
                  *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
                  UNLOCK();
                  local_e8 = *(long **)(pSVar28 + 0x28);
                  if (local_e8 != (long *)0x0) {
                    LOCK();
                    *(int *)(local_e8 + 1) = (int)local_e8[1] + 1;
                    UNLOCK();
                  }
                }
                plVar2 = *(long **)(pSVar28 + 0x10);
                *(long **)(pSVar28 + 0x10) = local_e8;
                local_e8 = plVar2;
                if (plVar2 != (long *)0x0) {
                  LOCK();
                  plVar1 = plVar2 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)(*plVar2 + 8))();
                  }
                }
                if (plVar21 != (long *)0x0) {
                  LOCK();
                  plVar2 = plVar21 + 1;
                  *(int *)plVar2 = (int)*plVar2 + -1;
                  UNLOCK();
                  if ((int)*plVar2 == 0) {
                    (**(code **)(*plVar21 + 8))(plVar21);
                  }
                }
                plVar21 = *(long **)(pSVar28 + 0x10);
                if (plVar21 != (long *)0x0) goto LAB_003c9548;
                pthread_mutex_unlock(__mutex);
                local_58 = ZEXT816(0);
              }
              else {
LAB_003c9548:
                LOCK();
                *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
                UNLOCK();
                pthread_mutex_unlock(__mutex);
                    /* try { // try from 003c9558 to 003c955d has its CatchHandler @ 003c96a8 */
                lVar13 = (**(code **)(*plVar21 + 0x18))(plVar21);
                uVar32 = *(uint *)(*plVar17 + 0x60);
                uVar7 = (ulong)uVar32;
                if (uVar32 == 1) {
                  puVar14 = (undefined8 *)(lVar13 + 0x10);
LAB_003c957a:
                  uVar36 = (uint)*puVar14;
                  uVar37 = (uint)((ulong)*puVar14 >> 0x20);
                }
                else {
                  uVar36 = 0;
                  uVar37 = 0;
                  if (uVar32 == 0) {
                    puVar14 = (undefined8 *)(lVar13 + 8);
                    goto LAB_003c957a;
                  }
                }
                fVar40 = (float)*(undefined8 *)(pSVar28 + 0x74);
                fVar41 = (float)((ulong)*(undefined8 *)(pSVar28 + 0x74) >> 0x20);
                uVar32 = -(uint)(fVar40 < 0.0);
                uVar33 = -(uint)(fVar41 < 0.0);
                local_58._8_8_ = 0;
                local_58._0_8_ =
                     CONCAT44(~uVar33 & (uint)fVar41,~uVar32 & (uint)fVar40) |
                     CONCAT44(uVar37 & uVar33,uVar36 & uVar32);
                LOCK();
                plVar2 = plVar21 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
                  (**(code **)(*plVar21 + 8))(plVar21);
                }
              }
              pthread_mutex_unlock(__mutex);
              pSVar28 = (SharedFontInternal *)*plVar17;
              fVar40 = *(float *)(pSVar28 + 100);
              if (fVar40 <= DAT_005d9058) {
                fVar40 = *(float *)(pSVar28 + 0x68);
                    /* try { // try from 003c9603 to 003c960a has its CatchHandler @ 003c96a0 */
                uVar3 = Font::SharedFontInternal::getAscentDescent
                                  (pSVar28,plVar17,extraout_RDX_00,uVar7,puVar10,(ulong)puVar20);
                fVar40 = fVar40 * ((float)((ulong)uVar3 >> 0x20) + (float)uVar3);
              }
              fStack_dc = (fVar35 + (DAT_005d9054 / ((float)local_58._4_4_ + (float)local_58._0_4_))
                                    * (float)local_58._0_4_ * fVar40) * DAT_005d9088;
              local_e0 = (float)local_88._4_4_ - (float)local_88._0_4_;
              local_e8 = (long *)CONCAT44(fStack_dc + fStack_dc + local_48,
                                          fVar39 + (float)local_88._0_4_);
                    /* try { // try from 003c8ce2 to 003c8cef has its CatchHandler @ 003c96cb */
              (**(code **)(*param_4 + 0xb8))(param_4,&local_e8);
            }
            puVar20 = local_60 + 1;
          } while (puVar20 != local_68);
        }
      }
      plVar17 = local_70 + 1;
    } while (plVar17 != local_78);
  }
                    /* try { // try from 003c962e to 003c9633 has its CatchHandler @ 003c9678 */
  (**(code **)(*param_4 + 0x78))(param_4);
  if (puVar31 != (uint *)0x0) {
    operator_delete(puVar31);
  }
  if (puVar19 != (undefined2 *)0x0) {
    operator_delete(puVar19);
  }
  return;
}


