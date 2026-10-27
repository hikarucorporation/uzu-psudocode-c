// Function : getGlyphsBounds
// Namespace: juce:detail:ShapedText
// Entry    : 003cb640
// Prototype: undefined getGlyphsBounds(undefined8 * param_1, long param_2, long param_3, long param_4)
// Body     : 003cb640 - 003cca01


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::detail::ShapedText::getGlyphsBounds(juce::Range<long long>) const */

void __cdecl
juce::detail::ShapedText::getGlyphsBounds
          (undefined8 *param_1,long param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  byte bVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  float *pfVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  byte bVar14;
  uint uVar15;
  uint uVar16;
  ulong *puVar17;
  long *plVar18;
  long lVar19;
  ulong *puVar20;
  long lVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  uint uVar28;
  ulong uVar29;
  long lVar30;
  int iVar31;
  ulong uVar32;
  ulong uVar33;
  long lVar34;
  ulong uVar35;
  ulong uVar36;
  int iVar37;
  uint uVar38;
  undefined8 *puVar39;
  bool bVar40;
  float fVar41;
  float fVar42;
  float fVar45;
  float fVar46;
  undefined8 uVar47;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined4 uVar48;
  undefined4 uVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  uint local_170;
  uint local_16c;
  ulong local_148;
  ulong local_140;
  undefined8 *local_138;
  uint local_130;
  uint local_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  uint local_10c;
  undefined8 local_108;
  float fStack_100;
  float fStack_fc;
  ulong local_f8;
  ulong uStack_f0;
  ulong local_e8;
  ulong uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  long local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulong local_a8;
  undefined8 uStack_a0;
  ulong local_98;
  ulong uStack_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  float local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 *local_50;
  float local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (*(long *)(param_2 + 0x150) == *(long *)(param_2 + 0x158)) {
    return;
  }
  local_138 = (undefined8 *)0x0;
  local_130 = 0;
  local_12c = 0;
  local_148 = 0;
  uVar28 = _DAT_006524b0;
  do {
    local_170 = local_12c;
    local_16c = local_12c;
LAB_003cb6bc:
    while( true ) {
      lVar21 = 0;
      lVar26 = param_3;
      do {
        if (param_4 <= lVar26) {
          return;
        }
        plVar3 = *(long **)(param_2 + 0x150);
        uVar29 = (long)*(long **)(param_2 + 0x158) - (long)plVar3;
        plVar18 = plVar3;
        if (0 < (long)uVar29) {
          uVar29 = uVar29 >> 4;
          do {
            uVar32 = uVar29 >> 1;
            uVar33 = uVar32;
            if (plVar18[uVar32 * 2 + 1] <= lVar26) {
              uVar33 = ~uVar32 + uVar29;
              plVar18 = plVar18 + uVar32 * 2 + 2;
            }
            uVar29 = uVar33;
          } while (0 < (long)uVar33);
        }
        if (plVar18 == *(long **)(param_2 + 0x158)) {
          return;
        }
        if (lVar26 < *plVar18) {
          return;
        }
        lVar30 = (long)plVar18 - (long)plVar3 >> 4;
        lVar10 = *plVar18;
        param_3 = plVar18[1];
        if (param_4 <= plVar18[1]) {
          param_3 = param_4;
        }
        lVar4 = *(long *)(*(long *)(param_2 + 0x148) + 8);
        lVar25 = lVar10;
        if (lVar10 < lVar26) {
          lVar25 = lVar26;
        }
        lVar34 = *(long *)(*(long *)(param_2 + 0x148) + 0x10) - lVar4 >> 5;
        if (lVar34 < 0) {
          lVar34 = lVar21;
        }
        lVar9 = 0;
        if (-1 < lVar10) {
          lVar9 = lVar10;
        }
        if (lVar34 < lVar25) {
          lVar25 = lVar34;
        }
        lVar19 = lVar25 - lVar9;
        if (lVar25 - lVar9 == 0 || lVar25 < lVar9) {
          lVar19 = lVar21;
        }
        lVar5 = *(long *)(param_2 + 0x168);
        fVar41 = *(float *)(lVar5 + 8 + lVar30 * 0x28);
        if (lVar19 != 0) {
          if (lVar25 < lVar10) {
            lVar25 = lVar10;
          }
          if (lVar25 < 1) {
            lVar25 = lVar21;
          }
          lVar9 = lVar9 << 5;
          do {
            fVar41 = fVar41 + *(float *)(lVar4 + lVar9);
            lVar9 = lVar9 + 0x20;
          } while (lVar25 * 0x20 != lVar9);
        }
        lVar10 = lVar26;
        if (lVar26 < param_3) {
          lVar10 = param_3;
        }
        lVar25 = 0;
        if (-1 < lVar26) {
          lVar25 = lVar26;
        }
        if (lVar34 < lVar10) {
          lVar10 = lVar34;
        }
        lVar34 = lVar10 - lVar25;
        if (lVar10 - lVar25 == 0 || lVar10 < lVar25) {
          lVar34 = lVar21;
        }
        fVar56 = fVar41;
        if (lVar34 != 0) {
          if (lVar10 < lVar26) {
            lVar10 = lVar26;
          }
          if (lVar10 < 1) {
            lVar10 = lVar21;
          }
          lVar25 = lVar25 << 5;
          do {
            fVar56 = fVar56 + *(float *)(lVar4 + lVar25);
            lVar25 = lVar25 + 0x20;
          } while (lVar10 * 0x20 != lVar25);
        }
        fVar51 = *(float *)(lVar5 + 0x1c + lVar30 * 0x28);
        fVar54 = *(float *)(lVar5 + 0x20 + lVar30 * 0x28);
        fVar52 = fVar41 - fVar56;
        fVar50 = fVar51 - fVar54;
        if (fVar52 < 0.0) {
          fVar52 = (float)((uint)fVar52 ^ uVar28);
        }
        if (fVar50 < 0.0) {
          fVar50 = (float)((uint)fVar50 ^ uVar28);
        }
        lVar26 = param_3;
      } while ((fVar52 <= 0.0) || (fVar50 <= 0.0));
      if (fVar41 <= fVar56) {
        fVar56 = fVar41;
      }
      if (fVar51 <= fVar54) {
        fVar54 = fVar51;
      }
      if ((uint)local_148 != 0) break;
      iVar37 = 0;
      if ((int)local_130 < 1) {
        local_138 = realloc(local_138,0x80);
        uVar28 = _DAT_006524b0;
        *param_1 = local_138;
        iVar37 = *(int *)((long)param_1 + 0xc);
        *(undefined4 *)(param_1 + 1) = 8;
        local_130 = 8;
      }
      local_148 = (ulong)(iVar37 + 1U);
      *(uint *)((long)param_1 + 0xc) = iVar37 + 1U;
      pfVar11 = (float *)(local_138 + (long)iVar37 * 2);
      *pfVar11 = fVar56;
      pfVar11[1] = fVar54;
      pfVar11[2] = fVar52;
      pfVar11[3] = fVar50;
      local_170 = local_130;
      local_16c = local_130;
      local_12c = local_130;
    }
    puVar13 = local_138;
    if (0 < (int)(uint)local_148) {
      if (fVar52 <= 0.0) goto LAB_003cc919;
      fVar63 = fVar56 + fVar52;
      fVar64 = fVar54 + fVar50;
      uVar65 = 0;
      uVar66 = 0;
      fVar57 = fVar54 + fVar50;
      lVar26 = (ulong)((uint)local_148 - 1) << 4;
      iVar37 = -(uint)local_148;
      uStack_64 = 0;
      uStack_60 = 0;
      uStack_5c = 0;
      local_78 = ZEXT416((uint)fVar54);
      local_88 = ZEXT416((uint)fVar57);
      uVar29 = 0;
      uVar33 = (ulong)((uint)local_148 - 1);
      fVar41 = fVar50;
      fVar51 = fVar50;
      fVar46 = fVar50;
      fVar60 = fVar50;
      fVar59 = fVar56;
      fVar58 = fVar54;
      local_c8 = param_4;
      local_c0 = param_1;
      local_68 = fVar56;
      do {
        fVar42 = (float)*(undefined8 *)((long)puVar13 + lVar26);
        if ((fVar63 <= fVar42) ||
           (fVar45 = (float)((ulong)*(undefined8 *)((long)puVar13 + lVar26) >> 0x20),
           fVar57 <= fVar45)) {
LAB_003cbb90:
          uVar32 = uVar29;
        }
        else {
          uVar47 = *(undefined8 *)((long)puVar13 + lVar26 + 8);
          fVar53 = (float)uVar47;
          fVar55 = (float)((ulong)uVar47 >> 0x20);
          fVar61 = fVar42 + fVar53;
          fVar62 = fVar45 + fVar55;
          if (((fVar61 <= fVar59) ||
              (((fVar45 + fVar55 <= fVar58 || (fVar41 <= 0.0)) || (fVar53 <= 0.0)))) ||
             (fVar55 <= 0.0)) goto LAB_003cbb90;
          if (((fVar42 < fVar59) || (fVar45 < fVar58)) ||
             ((fVar63 < fVar61 || (fVar57 < fVar45 + fVar55)))) {
            bVar14 = (fVar59 <= fVar42) + 2;
            if (fVar45 < fVar58) {
              bVar14 = fVar59 <= fVar42;
            }
            bVar7 = bVar14 + 4;
            if (fVar63 <= fVar61) {
              bVar7 = bVar14;
            }
            if (fVar61 < fVar59) {
              bVar7 = bVar14;
            }
            bVar14 = bVar7 | 8;
            if (fVar57 <= fVar62) {
              bVar14 = bVar7;
            }
            if (fVar62 < fVar58) {
              bVar14 = bVar7;
            }
            uVar32 = 1;
            switch(bVar14) {
            case 7:
              *(float *)((long)puVar13 + lVar26 + 0xc) = fVar62 - fVar57;
              *(float *)((long)puVar13 + lVar26 + 4) = fVar57;
              break;
            default:
              goto switchD_003cba32_caseD_8;
            case 0xb:
              *(float *)((long)puVar13 + lVar26 + 8) = fVar61 - fVar63;
              *(float *)((long)puVar13 + lVar26) = fVar63;
              break;
            case 0xd:
              *(float *)((long)puVar13 + lVar26 + 0xc) = fVar58 - fVar45;
              break;
            case 0xe:
              *(float *)((long)puVar13 + lVar26 + 8) = fVar59 - fVar42;
            }
            goto LAB_003cbb90;
          }
          if (uVar33 < local_148) {
            local_d8 = CONCAT71(local_d8._1_7_,(char)uVar29);
            local_128 = (ulong *)CONCAT44(fVar64,fVar63);
            uStack_120 = CONCAT44(uVar66,uVar65);
            local_108 = (float *)CONCAT44(fVar51,fVar41);
            iVar31 = (int)local_148;
            local_138 = puVar13;
            fStack_100 = fVar46;
            fStack_fc = fVar60;
            memmove((void *)((long)puVar13 + lVar26),(void *)((long)puVar13 + lVar26 + 0x10),
                    (long)(iVar31 + iVar37) << 4);
            uVar28 = iVar31 - 1;
            *(uint *)((long)local_c0 + 0xc) = uVar28;
            iVar31 = iVar31 * 2 + -2;
            if (iVar31 < 0) {
              iVar31 = 0;
            }
            puVar13 = local_138;
            if (iVar31 < (int)local_12c) {
              uVar24 = 4;
              if (4 < (int)uVar28) {
                uVar24 = uVar28;
              }
              if ((int)uVar24 < (int)local_12c) {
                puVar13 = realloc(local_138,(ulong)uVar24 << 4);
                *local_c0 = puVar13;
                *(uint *)(local_c0 + 1) = uVar24;
                uVar32 = local_d8 & 0xff;
                local_170 = uVar24;
                local_16c = uVar24;
                local_130 = uVar24;
                local_12c = uVar24;
              }
              else {
                uVar32 = local_d8 & 0xff;
              }
            }
            else {
              uVar32 = local_d8 & 0xff;
            }
            local_148 = (ulong)uVar28;
            fVar41 = (float)local_108;
            fVar51 = local_108._4_4_;
            fVar46 = fStack_100;
            fVar60 = fStack_fc;
            fVar59 = local_68;
            uVar28 = _DAT_006524b0;
            fVar57 = (float)local_88._0_4_;
            fVar58 = (float)local_78._0_4_;
            fVar63 = (float)local_128;
            fVar64 = local_128._4_4_;
            uVar65 = (undefined4)uStack_120;
            uVar66 = uStack_120._4_4_;
          }
          else {
            uVar32 = uVar29;
          }
        }
switchD_003cba32_caseD_8:
        param_1 = local_c0;
        param_4 = local_c8;
        lVar26 = lVar26 + -0x10;
        iVar37 = iVar37 + 1;
        bVar40 = 0 < (long)uVar33;
        uVar29 = uVar32;
        uVar33 = uVar33 - 1;
      } while (bVar40);
      local_148._0_4_ = *(uint *)((long)local_c0 + 0xc);
      uVar29 = (ulong)(uint)local_148;
      if ((uVar32 & 1) == 0) {
        if ((int)local_170 <= (int)(uint)local_148) goto LAB_003cc926;
        goto LAB_003cc9aa;
      }
      if ((uint)local_148 == 0) goto LAB_003cc919;
      local_108 = (float *)CONCAT44(fVar51,fVar41);
      local_138 = puVar13;
      fStack_100 = fVar46;
      fStack_fc = fVar60;
      pfVar11 = malloc(0x80);
      *pfVar11 = fVar56;
      pfVar11[1] = fVar54;
      pfVar11[2] = fVar52;
      pfVar11[3] = fVar50;
      if (0.0 < (float)local_108) {
        puVar13 = local_138 + (long)(int)(uint)local_148 * 2;
        fVar52 = local_68 + fVar52;
        uVar24 = 8;
        uVar33 = 1;
        local_50 = puVar13;
        local_48 = fVar52;
        uStack_44 = uStack_64;
        uStack_40 = uStack_60;
        uStack_3c = uStack_5c;
        puVar39 = local_138;
        fVar41 = (float)local_88._0_4_;
        fVar56 = (float)local_78._0_4_;
        uVar28 = _DAT_006524b0;
        fVar51 = local_68;
        local_108 = pfVar11;
        do {
          uVar16 = (uint)uVar33;
          puVar12 = (ulong *)*puVar39;
          fVar50 = SUB84(puVar12,0);
          fVar54 = (float)((ulong)puVar12 >> 0x20);
          if (fVar50 < fVar52) {
            if (fVar54 < fVar41) {
              fVar46 = *(float *)((long)puVar39 + 0xc);
              fVar59 = fVar50 + *(float *)(puVar39 + 1);
              fVar60 = fVar54 + fVar46;
              if (fVar51 < fVar59) {
                if (fVar56 < fVar54 + fVar46) {
                  if (0.0 < *(float *)(puVar39 + 1)) {
                    if (0.0 < fVar46) {
                      if (uVar16 != 0) {
                        if ((int)uVar16 < 1) {
                          uVar32 = 0;
                          puVar12 = (ulong *)0x0;
LAB_003cbfd1:
                          local_b8 = CONCAT44(fVar54,fVar50);
                          uStack_b0 = CONCAT44(fVar60,fVar59);
                        }
                        else {
                          local_f8 = 0;
                          uStack_f0 = 0;
                          uVar22 = uVar16 + ((int)((int)(uVar33 >> 0x1f) + uVar16) >> 1) + 8 &
                                   0xfffffff8;
                          if ((int)uVar22 < 1) {
                            puVar12 = (ulong *)0x0;
                            fVar41 = fVar54;
                          }
                          else {
                            uStack_120 = 0;
                            local_d8 = CONCAT44(fVar60,fVar59);
                            uStack_d0 = 0;
                            local_128 = puVar12;
                            puVar12 = malloc((ulong)uVar22 << 4);
                            fVar50 = (float)local_128;
                            fVar41 = local_128._4_4_;
                            uVar28 = _DAT_006524b0;
                            fVar59 = (float)local_d8;
                            fVar60 = local_d8._4_4_;
                          }
                          puVar17 = puVar12;
                          if (2 < uVar16 - 1) {
                            uVar15 = uVar16 & 0xfffffffc;
                            do {
                              *puVar17 = local_f8;
                              puVar17[1] = uStack_f0;
                              puVar17[2] = local_f8;
                              puVar17[3] = uStack_f0;
                              puVar17[4] = local_f8;
                              puVar17[5] = uStack_f0;
                              puVar17[6] = local_f8;
                              puVar17[7] = uStack_f0;
                              puVar17 = puVar17 + 8;
                              uVar15 = uVar15 - 4;
                            } while (uVar15 != 0);
                          }
                          if ((uVar33 & 3) != 0) {
                            lVar26 = 0;
                            do {
                              *(ulong *)((long)puVar17 + lVar26) = local_f8;
                              ((ulong *)((long)puVar17 + lVar26))[1] = uStack_f0;
                              lVar26 = lVar26 + 0x10;
                            } while ((uVar16 & 3) << 4 != (int)lVar26);
                          }
                          uVar32 = uVar33;
                          if ((int)uVar16 < 1) {
                            fVar54 = fVar41;
                            goto LAB_003cbfd1;
                          }
                          uVar35 = uVar33 & 3;
                          puVar17 = puVar12;
                          pfVar11 = local_108;
                          if (uVar35 == 0) {
                            uVar35 = uVar33;
                          }
                          else {
                            do {
                              uVar27 = *(ulong *)pfVar11;
                              uVar47 = *(undefined8 *)(pfVar11 + 2);
                              *puVar17 = uVar27;
                              puVar17[1] = CONCAT44((float)((ulong)uVar47 >> 0x20) +
                                                    (float)(uVar27 >> 0x20),
                                                    (float)uVar47 + (float)uVar27);
                              pfVar11 = pfVar11 + 4;
                              puVar17 = puVar17 + 2;
                              uVar35 = uVar35 - 1;
                            } while (uVar35 != 0);
                            uVar35 = (ulong)(uVar16 & 0xfffffffc);
                          }
                          if (2 < uVar33 - 1) {
                            uVar35 = uVar35 - 1;
                            lVar26 = 0;
                            do {
                              uVar47 = *(undefined8 *)((long)pfVar11 + lVar26);
                              uVar1 = *(undefined8 *)((long)pfVar11 + lVar26 + 8);
                              *(undefined8 *)((long)puVar17 + lVar26) = uVar47;
                              ((undefined8 *)((long)puVar17 + lVar26))[1] =
                                   CONCAT44((float)((ulong)uVar1 >> 0x20) +
                                            (float)((ulong)uVar47 >> 0x20),
                                            (float)uVar1 + (float)uVar47);
                              uVar47 = *(undefined8 *)((long)pfVar11 + lVar26 + 0x10);
                              uVar1 = *(undefined8 *)((long)pfVar11 + lVar26 + 0x18);
                              puVar13 = (undefined8 *)((long)puVar17 + lVar26 + 0x10);
                              *puVar13 = uVar47;
                              puVar13[1] = CONCAT44((float)((ulong)uVar1 >> 0x20) +
                                                    (float)((ulong)uVar47 >> 0x20),
                                                    (float)uVar1 + (float)uVar47);
                              uVar47 = *(undefined8 *)((long)pfVar11 + lVar26 + 0x20);
                              uVar1 = *(undefined8 *)((long)pfVar11 + lVar26 + 0x28);
                              puVar13 = (undefined8 *)((long)puVar17 + lVar26 + 0x20);
                              *puVar13 = uVar47;
                              puVar13[1] = CONCAT44((float)((ulong)uVar1 >> 0x20) +
                                                    (float)((ulong)uVar47 >> 0x20),
                                                    (float)uVar1 + (float)uVar47);
                              uVar47 = *(undefined8 *)((long)pfVar11 + lVar26 + 0x30);
                              uVar1 = *(undefined8 *)((long)pfVar11 + lVar26 + 0x38);
                              puVar13 = (undefined8 *)((long)puVar17 + lVar26 + 0x30);
                              *puVar13 = uVar47;
                              puVar13[1] = CONCAT44((float)((ulong)uVar1 >> 0x20) +
                                                    (float)((ulong)uVar47 >> 0x20),
                                                    (float)uVar1 + (float)uVar47);
                              uVar35 = uVar35 - 4;
                              lVar26 = lVar26 + 0x40;
                            } while (uVar35 < 0xfffffffffffffffe);
                          }
                          local_b8 = CONCAT44(fVar41,fVar50);
                          uStack_b0 = CONCAT44(fVar60,fVar59);
                          if (0 < (int)uVar16) {
                            uVar35 = uVar33;
                            local_10c = uVar24;
                            do {
                              puVar20 = &local_e8;
                              uVar24 = (uint)uVar35;
                              uVar38 = uVar24 - 1;
                              uVar35 = (ulong)uVar38;
                              uVar27 = puVar12[uVar35 * 2];
                              fVar56 = (float)uVar27;
                              fVar51 = (float)(uVar27 >> 0x20);
                              uVar2 = puVar12[uVar35 * 2 + 1];
                              uVar8 = puVar12[uVar35 * 2];
                              uStack_90 = (puVar12 + uVar35 * 2)[1];
                              local_98 = uVar8;
                              auVar43._4_4_ = -(uint)(fVar56 < fVar59);
                              auVar43._0_4_ = -(uint)(fVar56 < fVar59);
                              auVar43._8_4_ = -(uint)(fVar51 < fVar60);
                              auVar43._12_4_ = -(uint)(fVar51 < fVar60);
                              uVar15 = movmskpd((int)puVar17,auVar43);
                              puVar17 = (ulong *)(ulong)uVar15;
                              if ((((uVar15 & 1) == 0) || (fVar52 = (float)uVar2, fVar52 <= fVar50))
                                 || (bVar14 = (byte)uVar15 >> 1,
                                    puVar17 = (ulong *)(ulong)CONCAT31((int3)(uVar15 >> 8),bVar14),
                                    bVar14 == 0)) {
LAB_003cc4ea:
                                uVar38 = (uint)uVar35;
                                uVar24 = local_10c;
                              }
                              else {
                                fVar46 = (float)(uVar2 >> 0x20);
                                puVar17 = (ulong *)(ulong)(ushort)-(ushort)(fVar41 < fVar46);
                                if ((-(ushort)(fVar41 < fVar46) & 1) == 0) goto LAB_003cc4ea;
                                puVar17 = puVar12 + uVar35 * 2;
                                local_e8 = _DAT_005efcf8;
                                uStack_e0 = _UNK_005efd00;
                                local_f8 = _DAT_005efce8;
                                uStack_f0 = _UNK_005efcf0;
                                uVar65 = (undefined4)(uVar8 >> 0x20);
                                uVar15 = (uint)uVar32;
                                if ((fVar50 <= fVar56) || (fVar52 <= fVar50)) {
                                  if ((fVar59 <= fVar56) || (fVar52 <= fVar59)) {
                                    if ((fVar51 < fVar54) && (fVar54 < fVar46)) {
                                      lVar26 = 4;
                                      uVar36 = _UNK_005efd00;
                                      if (*(float *)(local_88 + (_UNK_005efd00 - 0x30)) <=
                                          *(float *)(local_88 + (_UNK_005efd00 - 0x10)))
                                      goto LAB_003cc152;
                                      goto LAB_003cc2a4;
                                    }
                                    if ((fVar60 <= fVar51) || (lVar26 = 4, fVar46 <= fVar60)) {
                                      if (uVar15 <= uVar38) goto LAB_003cc4ea;
                                      puVar17 = (ulong *)(ulong)(uVar15 - uVar24);
                                      local_128 = puVar12;
                                      memmove(puVar12 + (long)(int)uVar38 * 2,
                                              puVar12 + (long)(int)uVar38 * 2 + 2,
                                              (long)(int)(uVar15 - uVar24) << 4);
                                      uVar23 = uVar15 - 1;
                                      uVar32 = (ulong)uVar23;
                                      iVar37 = uVar15 * 2 + -2;
                                      if (iVar37 < 0) {
                                        iVar37 = 0;
                                      }
                                      puVar12 = local_128;
                                      uVar28 = _DAT_006524b0;
                                      uVar24 = local_10c;
                                      if (iVar37 < (int)uVar22) {
                                        uVar27 = 4;
                                        if (4 < (int)uVar23) {
                                          uVar27 = (ulong)uVar23;
                                        }
                                        if ((int)(uint)uVar27 < (int)uVar22) {
                                          puVar12 = realloc(local_128,uVar27 << 4);
                                          uVar28 = _DAT_006524b0;
                                          uVar22 = (uint)uVar27;
                                          uVar24 = local_10c;
                                        }
                                      }
                                      goto joined_r0x003cc1a0;
                                    }
                                  }
                                  else {
                                    puVar20 = &local_f8;
                                    lVar26 = 0;
                                    fVar60 = fVar59;
                                  }
                                  local_140 = uVar27;
                                  *(float *)((long)&local_140 + lVar26) = fVar60;
                                  *puVar17 = local_140;
                                  puVar12[uVar35 * 2 + 1] = uVar2;
                                  uVar27 = puVar20[1];
                                  if (((*(float *)(local_88 + (uVar27 - 0x30)) <
                                        *(float *)(local_88 + (uVar27 - 0x10)) ||
                                        *(float *)(local_88 + (uVar27 - 0x30)) ==
                                        *(float *)(local_88 + (uVar27 - 0x10))) &&
                                      (*(float *)(local_88 + (uVar27 - 8)) <
                                       *(float *)(local_88 + (uVar27 - 0x28)) ||
                                       *(float *)(local_88 + (uVar27 - 8)) ==
                                       *(float *)(local_88 + (uVar27 - 0x28)))) &&
                                     (*(float *)(local_88 + (*puVar20 - 0x30)) <
                                      *(float *)(local_88 + (*puVar20 - 0x10)) ||
                                      *(float *)(local_88 + (*puVar20 - 0x30)) ==
                                      *(float *)(local_88 + (*puVar20 - 0x10)))) goto LAB_003cc4ea;
                                  local_140 = uStack_90;
                                  *(undefined4 *)((long)&local_140 + *puVar20) =
                                       *(undefined4 *)(local_88 + (*puVar20 - 0x28));
LAB_003cc2f4:
                                  uVar66 = (int)uVar8;
                                  uVar48 = 0;
                                  uVar49 = 0;
                                  uVar38 = uVar22;
                                  uVar32 = local_140;
                                  uVar47 = 0;
                                  if ((int)uVar22 <= (int)uVar15) {
                                    puVar17 = (ulong *)(ulong)uVar22;
                                    uVar38 = uVar15 + ((int)((uVar15 - ((int)(uVar15 + 1) >> 0x1f))
                                                            + 1) >> 1) + 9 & 0xfffffff8;
                                    if (uVar22 != uVar38) {
                                      uStack_a0 = 0;
                                      uStack_d0 = 0;
                                      local_d8 = uVar8;
                                      local_a8 = local_140;
                                      if ((int)uVar38 < 1) {
                                        free(puVar12);
                                        puVar12 = (ulong *)0x0;
                                      }
                                      else {
                                        puVar12 = realloc(puVar12,(ulong)uVar38 << 4);
                                      }
                                      uVar66 = (float)local_d8;
                                      uVar65 = local_d8._4_4_;
                                      uVar48 = (undefined4)uStack_d0;
                                      uVar49 = uStack_d0._4_4_;
                                      uVar28 = _DAT_006524b0;
                                      uVar32 = local_a8;
                                      uVar47 = uStack_a0;
                                    }
                                  }
                                  if (uVar15 < uVar24 || uVar15 - uVar24 == 0) {
                                    puVar20 = puVar12 + (long)(int)uVar15 * 2;
                                    uVar22 = uVar38;
                                  }
                                  else {
                                    lVar26 = (long)(int)uVar24;
                                    puVar17 = (ulong *)(lVar26 * 0x10);
                                    puVar20 = puVar12 + lVar26 * 2;
                                    local_128 = (ulong *)CONCAT44(local_128._4_4_,uVar38);
                                    local_d8 = CONCAT44(uVar65,uVar66);
                                    uStack_d0 = CONCAT44(uVar49,uVar48);
                                    local_a8 = uVar32;
                                    uStack_a0 = uVar47;
                                    memmove(puVar12 + lVar26 * 2 + 2,puVar20,
                                            (long)(int)(uVar15 - uVar24) << 4);
                                    uVar66 = (float)local_d8;
                                    uVar65 = local_d8._4_4_;
                                    uVar28 = _DAT_006524b0;
                                    uVar22 = (uint)(float)local_128;
                                    uVar32 = local_a8;
                                  }
                                  *(undefined4 *)puVar20 = uVar66;
                                  *(undefined4 *)((long)puVar20 + 4) = uVar65;
                                  *(int *)(puVar20 + 1) = (int)uVar32;
                                  *(int *)((long)puVar20 + 0xc) = (int)(uVar32 >> 0x20);
                                  uVar32 = (ulong)(uVar15 + 1);
                                  uVar35 = (ulong)(uVar24 + 1);
                                  goto LAB_003cc4ea;
                                }
                                puVar20 = &local_f8;
                                lVar26 = 0;
                                uVar36 = _UNK_005efcf0;
                                fVar46 = fVar52;
                                fVar54 = fVar50;
                                if (*(float *)(local_88 + (_UNK_005efcf0 - 0x10)) <
                                    *(float *)(local_88 + (_UNK_005efcf0 - 0x30))) {
LAB_003cc2a4:
                                  local_140 = uVar27;
                                  *(float *)((long)&local_140 + lVar26) = fVar54;
                                  *puVar17 = local_140;
                                  puVar12[uVar35 * 2 + 1] = uVar2;
                                  local_140 = uStack_90;
                                  *(undefined4 *)((long)&local_140 + *puVar20) =
                                       *(undefined4 *)(local_88 + (*puVar20 - 0x30));
                                  goto LAB_003cc2f4;
                                }
LAB_003cc152:
                                if ((*(float *)(local_88 + (uVar36 - 0x28)) <
                                     *(float *)(local_88 + (uVar36 - 8))) ||
                                   (*(float *)(local_88 + lVar26 + -0x28) < fVar46))
                                goto LAB_003cc2a4;
                                local_140 = uVar2;
                                *(float *)((long)&local_140 + lVar26) = fVar54;
                                *puVar17 = uVar27;
                                puVar12[uVar35 * 2 + 1] = local_140;
                                uVar24 = local_10c;
                              }
joined_r0x003cc1a0:
                              local_10c = uVar24;
                              if ((int)uVar38 < 1) break;
                              fVar50 = (float)local_b8;
                              fVar54 = (float)((ulong)local_b8 >> 0x20);
                              fVar59 = (float)uStack_b0;
                              fVar60 = (float)((ulong)uStack_b0 >> 0x20);
                              fVar41 = fVar54;
                            } while( true );
                          }
                        }
                        param_4 = local_c8;
                        uVar22 = (uint)uVar32;
                        uVar15 = uVar22 - uVar16;
                        if ((int)uVar15 < 1) {
                          if (-1 < (int)uVar15) goto LAB_003cc728;
                          uVar15 = 0;
                          if (-1 < (int)uVar16) {
                            uVar15 = uVar16;
                          }
                          uVar38 = uVar22;
                          if ((int)uVar16 < (int)uVar22) {
                            uVar38 = uVar16;
                          }
                          if ((int)uVar22 < 0) {
                            uVar38 = 0;
                          }
                          uVar23 = uVar15 - uVar38;
                          local_10c = uVar24;
                          if (!(uVar23 == 0 || (int)uVar15 < (int)uVar38)) {
                            local_128 = puVar12;
                            memmove(local_108 + (long)(int)uVar38 * 4,
                                    local_108 + (long)(int)uVar38 * 4 + (ulong)uVar23 * 4,
                                    (long)(int)(uVar16 - uVar15) << 4);
                            uVar16 = uVar16 - uVar23;
                            uVar33 = (ulong)uVar16;
                            iVar37 = uVar16 * 2;
                            if (iVar37 < 0) {
                              iVar37 = 0;
                            }
                            if (iVar37 < (int)local_10c) {
                              uVar24 = 4;
                              if (4 < (int)uVar16) {
                                uVar24 = uVar16;
                              }
                              if ((int)local_10c <= (int)uVar24) goto LAB_003cc7be;
                              local_108 = realloc(local_108,(ulong)uVar24 << 4);
                            }
                            else {
LAB_003cc7be:
                              uVar24 = local_10c;
                            }
                            puVar12 = local_128;
                            uVar28 = _DAT_006524b0;
                          }
                        }
                        else {
                          local_f8 = 0;
                          uStack_f0 = 0;
                          if ((int)uVar24 < (int)uVar22) {
                            uVar38 = uVar22 + ((int)((int)(uVar32 >> 0x1f) + uVar22) >> 1) + 8 &
                                     0xfffffff8;
                            bVar40 = uVar24 != uVar38;
                            uVar24 = uVar38;
                            if (bVar40) {
                              if ((int)uVar38 < 1) {
                                local_128 = puVar12;
                                free(local_108);
                                local_108 = (float *)0x0;
                              }
                              else {
                                local_128 = puVar12;
                                local_108 = realloc(local_108,(ulong)uVar38 << 4);
                              }
                              puVar12 = local_128;
                              uVar28 = _DAT_006524b0;
                            }
                          }
                          pfVar11 = local_108 + (long)(int)uVar16 * 4;
                          if (2 < ~uVar16 + uVar22) {
                            uVar16 = uVar15 & 0xfffffffc;
                            do {
                              *(ulong *)pfVar11 = local_f8;
                              *(ulong *)(pfVar11 + 2) = uStack_f0;
                              *(ulong *)(pfVar11 + 4) = local_f8;
                              *(ulong *)(pfVar11 + 6) = uStack_f0;
                              *(ulong *)(pfVar11 + 8) = local_f8;
                              *(ulong *)(pfVar11 + 10) = uStack_f0;
                              *(ulong *)(pfVar11 + 0xc) = local_f8;
                              *(ulong *)(pfVar11 + 0xe) = uStack_f0;
                              pfVar11 = pfVar11 + 0x10;
                              uVar16 = uVar16 - 4;
                            } while (uVar16 != 0);
                          }
                          if ((uVar15 & 3) != 0) {
                            lVar26 = 0;
                            do {
                              *(ulong *)((long)pfVar11 + lVar26) = local_f8;
                              ((ulong *)((long)pfVar11 + lVar26))[1] = uStack_f0;
                              lVar26 = lVar26 + 0x10;
                            } while (((byte)((char)uVar32 - (char)uVar33) & 3) << 4 != (int)lVar26);
                          }
                          uVar33 = uVar32;
LAB_003cc728:
                          param_4 = local_c8;
                        }
                        if (0 < (int)uVar22) {
                          uVar32 = uVar32 + 1;
                          lVar26 = 0;
                          do {
                            uVar35 = *(ulong *)((long)puVar12 + lVar26);
                            uVar27 = *(ulong *)((long)puVar12 + lVar26 + 8);
                            auVar44._8_8_ = 0;
                            auVar44._0_8_ = uVar27;
                            fVar41 = (float)uVar35 - (float)uVar27;
                            fVar56 = (float)(uVar35 >> 0x20) - (float)(uVar27 >> 0x20);
                            if (fVar41 < 0.0) {
                              fVar41 = (float)((uint)fVar41 ^ uVar28);
                            }
                            if (fVar56 < 0.0) {
                              fVar56 = (float)((uint)fVar56 ^ uVar28);
                            }
                            auVar6._8_8_ = 0;
                            auVar6._0_8_ = uVar35;
                            auVar43 = minps(auVar44,auVar6);
                            *(undefined8 *)((long)local_108 + lVar26) = auVar43._0_8_;
                            ((undefined8 *)((long)local_108 + lVar26))[1] = CONCAT44(fVar56,fVar41);
                            lVar26 = lVar26 + 0x10;
                            uVar32 = uVar32 - 1;
                          } while (1 < uVar32);
                        }
                        free(puVar12);
                        puVar13 = local_50;
                        fVar52 = local_48;
                        fVar41 = (float)local_88._0_4_;
                        fVar56 = (float)local_78._0_4_;
                        uVar28 = _DAT_006524b0;
                        fVar51 = local_68;
                        if ((int)uVar33 != 0) goto LAB_003cbe30;
                      }
                      free(local_108);
                      param_1 = local_c0;
                      uVar28 = _DAT_006524b0;
                      local_148 = uVar29;
                      goto LAB_003cb6bc;
                    }
                  }
                }
              }
            }
          }
LAB_003cbe30:
          iVar37 = (int)uVar33;
          puVar39 = puVar39 + 2;
        } while (puVar39 != puVar13);
        uVar29 = (ulong)*(uint *)((long)local_c0 + 0xc);
        pfVar11 = local_108;
        param_1 = local_c0;
      }
      else {
        iVar37 = 1;
      }
      iVar31 = iVar37 + (int)uVar29;
      if ((int)local_16c < iVar31) {
        local_130 = iVar31 / 2 + iVar31 + 8U & 0xfffffff8;
        if (local_16c != local_130) {
          if ((int)local_130 < 1) {
            free(local_138);
            *param_1 = 0;
            local_138 = (undefined8 *)0x0;
          }
          else {
            local_138 = realloc(local_138,(ulong)local_130 << 4);
            *param_1 = local_138;
          }
        }
        *(uint *)(param_1 + 1) = local_130;
        local_170 = local_130;
        local_16c = local_130;
      }
      else {
      }
      if (iVar37 != 0) {
        uVar29 = (ulong)*(int *)((long)param_1 + 0xc);
        lVar26 = uVar29 * 0x10;
        lVar21 = 0;
        do {
          uVar47 = ((undefined8 *)((long)pfVar11 + lVar21))[1];
          puVar13 = (undefined8 *)((long)local_138 + lVar21 + lVar26);
          *puVar13 = *(undefined8 *)((long)pfVar11 + lVar21);
          puVar13[1] = uVar47;
          lVar21 = lVar21 + 0x10;
          uVar28 = (int)uVar29 + 1;
          uVar29 = (ulong)uVar28;
        } while ((long)iVar37 * 0x10 != lVar21);
        *(uint *)((long)param_1 + 0xc) = uVar28;
      }
      free(pfVar11);
      uVar28 = _DAT_006524b0;
      local_148 = uVar29;
      local_12c = local_16c;
      goto LAB_003cb6bc;
    }
LAB_003cc919:
    if ((int)local_170 <= (int)(uint)local_148) {
LAB_003cc926:
      uVar24 = (uint)local_148 +
               ((int)(((uint)local_148 - ((int)((uint)local_148 + 1) >> 0x1f)) + 1) >> 1) + 9 &
               0xfffffff8;
      if (local_170 != uVar24) {
        if ((int)uVar24 < 1) {
          free(puVar13);
          *param_1 = 0;
          puVar13 = (undefined8 *)0x0;
        }
        else {
          puVar13 = realloc(puVar13,(ulong)uVar24 << 4);
          *param_1 = puVar13;
        }
        uVar28 = _DAT_006524b0;
      }
      *(uint *)(param_1 + 1) = uVar24;
      local_148._0_4_ = *(uint *)((long)param_1 + 0xc);
      local_170 = uVar24;
      local_130 = uVar24;
    }
LAB_003cc9aa:
    *(uint *)((long)param_1 + 0xc) = (uint)local_148 + 1;
    pfVar11 = (float *)(puVar13 + (long)(int)(uint)local_148 * 2);
    *pfVar11 = fVar56;
    pfVar11[1] = fVar54;
    pfVar11[2] = fVar52;
    pfVar11[3] = fVar50;
    local_148 = (ulong)((uint)local_148 + 1);
    local_138 = puVar13;
    local_12c = local_170;
  } while( true );
}


