// Function : preprocess_text_hangul
// Namespace: 
// Entry    : 00421ae0
// Prototype: undefined preprocess_text_hangul(undefined8 param_1, hb_buffer_t * param_2, long param_3)
// Body     : 00421ae0 - 00423505


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* preprocess_text_hangul(hb_ot_shape_plan_t const*, hb_buffer_t*, hb_font_t*) */

void __cdecl preprocess_text_hangul(undefined8 param_1,hb_buffer_t *param_2,long param_3)

{
  hb_buffer_t *phVar1;
  hb_buffer_t *phVar2;
  hb_buffer_t *phVar3;
  hb_buffer_t *phVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  hb_buffer_t hVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined4 *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  uint *puVar23;
  ulong uVar24;
  ulong uVar25;
  short sVar26;
  uint uVar27;
  void *pvVar28;
  ulong uVar29;
  long lVar30;
  void *pvVar31;
  uint uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  uint uVar35;
  undefined1 auVar36 [16];
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  uint uVar50;
  uint uVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined8 local_58;
  ulong uStack_50;
  undefined4 local_48;
  int local_44;
  ulong local_40;
  ulong local_38;
  
  param_2[0xb8] = (hb_buffer_t)((byte)param_2[0xb8] | 0x80);
  *(undefined2 *)(param_2 + 0x5a) = 1;
  *(undefined4 *)(param_2 + 100) = 0;
  *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(param_2 + 0x70);
  uVar9 = *(uint *)(param_2 + 0x60);
  *(undefined4 *)(param_2 + 0x5c) = 0;
  if (uVar9 != 0) {
    phVar1 = param_2 + 0x5c;
    phVar2 = param_2 + 100;
    phVar3 = param_2 + 0x70;
    phVar4 = param_2 + 0x78;
    auVar54._4_4_ = _UNK_006524b4;
    auVar54._0_4_ = _DAT_006524b0;
    auVar54._8_4_ = _UNK_006524b8;
    auVar54._12_4_ = _UNK_006524bc;
    uVar22 = 0;
    uVar24 = 0;
    uVar21 = 0;
    do {
      if (param_2[0x58] == (hb_buffer_t)0x0) break;
      lVar10 = *(long *)phVar3;
      uVar11 = (uint)uVar21;
      uVar27 = *(uint *)(lVar10 + uVar21 * 0x14);
      uVar32 = (uint)uVar24;
      if ((uVar27 & 0xfffffffe) == 0x302e) {
        uVar12 = (uint)uVar22;
        if ((uVar32 < uVar12 || uVar32 - uVar12 == 0) || (uVar32 != *(uint *)phVar2)) {
          if (((byte)param_2[0x18] & 0x10) == 0) {
            local_58 = (ulong)local_58._4_4_ << 0x20;
            lVar10 = *(long *)(*(long *)(param_3 + 0x90) + 0x10);
            if (lVar10 == 0) {
              uVar19 = 0;
            }
            else {
              uVar19 = *(undefined8 *)(lVar10 + 0x10);
            }
            iVar13 = (**(code **)(*(long *)(param_3 + 0x90) + 0x30))
                               (param_3,*(undefined8 *)(param_3 + 0x98),0x25cc,&local_58,uVar19);
            auVar54._4_4_ = _UNK_006524b4;
            auVar54._0_4_ = _DAT_006524b0;
            auVar54._8_4_ = _UNK_006524b8;
            auVar54._12_4_ = _UNK_006524bc;
            if (iVar13 != 0) {
              local_58 = local_58 & 0xffffffff00000000;
              lVar10 = *(long *)(*(long *)(param_3 + 0x90) + 0x10);
              if (lVar10 == 0) {
                uVar19 = 0;
              }
              else {
                uVar19 = *(undefined8 *)(lVar10 + 0x10);
              }
              iVar13 = (**(code **)(*(long *)(param_3 + 0x90) + 0x30))
                                 (param_3,*(undefined8 *)(param_3 + 0x98),uVar27,&local_58,uVar19);
              uVar11 = uVar27;
              if (iVar13 == 0) {
                uVar32 = 0x25cc;
              }
              else {
                lVar10 = *(long *)(*(long *)(param_3 + 0x90) + 0x10);
                if (lVar10 == 0) {
                  uVar19 = 0;
                }
                else {
                  uVar19 = *(undefined8 *)(lVar10 + 0x28);
                }
                iVar13 = (**(code **)(*(long *)(param_3 + 0x90) + 0x48))
                                   (param_3,*(undefined8 *)(param_3 + 0x98),local_58 & 0xffffffff,
                                    uVar19);
                uVar32 = 0x25cc;
                if (iVar13 == 0) {
                  uVar11 = 0x25cc;
                  uVar32 = uVar27;
                }
              }
              auVar54._4_4_ = _UNK_006524b4;
              auVar54._0_4_ = _DAT_006524b0;
              auVar54._8_4_ = _UNK_006524b8;
              auVar54._12_4_ = _UNK_006524bc;
              uVar27 = *(int *)(param_2 + 100) + 2;
              if ((uVar27 != 0) && (*(uint *)(param_2 + 0x68) <= uVar27)) {
                uVar19 = hb_buffer_t::enlarge(param_2,uVar27);
                auVar54._4_4_ = _UNK_006524b4;
                auVar54._0_4_ = _DAT_006524b0;
                auVar54._8_4_ = _UNK_006524b8;
                auVar54._12_4_ = _UNK_006524bc;
                if ((char)uVar19 == '\0') goto LAB_00421b90;
              }
              pvVar28 = *(void **)phVar4;
              if ((pvVar28 == *(void **)phVar3) &&
                 (uVar27 = *(uint *)phVar2, *(uint *)phVar1 + 1 < uVar27 + 2)) {
                pvVar28 = *(void **)(param_2 + 0x80);
                *(void **)(param_2 + 0x78) = pvVar28;
                if ((ulong)uVar27 != 0) {
                  memcpy(pvVar28,*(void **)phVar3,(ulong)uVar27 * 0x14);
                  auVar54._4_4_ = _UNK_006524b4;
                  auVar54._0_4_ = _DAT_006524b0;
                  auVar54._8_4_ = _UNK_006524b8;
                  auVar54._12_4_ = _UNK_006524bc;
                  pvVar28 = *(void **)phVar4;
                }
              }
              uVar27 = *(uint *)(param_2 + 0x5c);
              uVar12 = *(uint *)(param_2 + 100);
              uVar24 = (ulong)uVar12;
              uVar20 = uVar12 - 1;
              if (uVar12 == 0) {
                uVar20 = 0;
              }
              if (*(uint *)(param_2 + 0x60) > uVar27) {
                uVar20 = uVar27;
              }
              uVar21 = (ulong)uVar20;
              lVar10 = *(long *)(param_2 + (ulong)(*(uint *)(param_2 + 0x60) <= uVar27) * 8 + 0x70);
              puVar5 = (undefined8 *)(lVar10 + uVar21 * 0x14);
              uVar19 = puVar5[1];
              puVar6 = (undefined8 *)((long)pvVar28 + uVar24 * 0x14);
              *puVar6 = *puVar5;
              puVar6[1] = uVar19;
              *(undefined4 *)((long)pvVar28 + uVar24 * 0x14 + 0x10) =
                   *(undefined4 *)(lVar10 + 0x10 + uVar21 * 0x14);
              *(uint *)((long)pvVar28 + uVar24 * 0x14) = uVar11;
              puVar5 = (undefined8 *)(lVar10 + uVar21 * 0x14);
              uVar19 = puVar5[1];
              puVar6 = (undefined8 *)((long)pvVar28 + uVar24 * 0x14 + 0x14);
              *puVar6 = *puVar5;
              puVar6[1] = uVar19;
              *(undefined4 *)((long)pvVar28 + uVar24 * 0x14 + 0x24) =
                   *(undefined4 *)(lVar10 + 0x10 + uVar21 * 0x14);
              *(uint *)((long)pvVar28 + uVar24 * 0x14 + 0x14) = uVar32;
              *(int *)(param_2 + 0x5c) = *(int *)(param_2 + 0x5c) + 1;
              *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + 2;
              goto LAB_00421b90;
            }
          }
          if (param_2[0x5a] != (hb_buffer_t)0x0) {
            pvVar31 = *(void **)phVar4;
            pvVar28 = *(void **)phVar3;
            uVar27 = *(uint *)phVar2;
            if ((pvVar31 != pvVar28) || (uVar27 != *(uint *)phVar1)) {
              uVar27 = uVar27 + 1;
              if ((uVar27 == 0) || (uVar27 < *(uint *)(param_2 + 0x68))) {
                if (pvVar31 == pvVar28) {
LAB_00421eb3:
                  uVar27 = *(uint *)phVar2;
                  if (*(uint *)phVar1 + 1 < uVar27 + 1) {
                    pvVar31 = *(void **)(param_2 + 0x80);
                    *(void **)(param_2 + 0x78) = pvVar31;
                    if ((ulong)uVar27 != 0) {
                      memcpy(pvVar31,pvVar28,(ulong)uVar27 * 0x14);
                      auVar54._4_4_ = _UNK_006524b4;
                      auVar54._0_4_ = _DAT_006524b0;
                      auVar54._8_4_ = _UNK_006524b8;
                      auVar54._12_4_ = _UNK_006524bc;
                      pvVar28 = *(void **)phVar3;
                      pvVar31 = *(void **)phVar4;
                    }
                  }
                  else {
                    pvVar31 = pvVar28;
                  }
                }
              }
              else {
                uVar19 = hb_buffer_t::enlarge(param_2,uVar27);
                auVar54._4_4_ = _UNK_006524b4;
                auVar54._0_4_ = _DAT_006524b0;
                auVar54._8_4_ = _UNK_006524b8;
                auVar54._12_4_ = _UNK_006524bc;
                if ((char)uVar19 == '\0') goto LAB_00421b90;
                pvVar31 = *(void **)phVar4;
                pvVar28 = *(void **)phVar3;
                if (pvVar31 == pvVar28) goto LAB_00421eb3;
              }
              uVar27 = *(uint *)phVar1;
              uVar11 = *(uint *)phVar2;
              *(undefined4 *)((long)pvVar31 + (ulong)uVar11 * 0x14 + 0x10) =
                   *(undefined4 *)((long)pvVar28 + (ulong)uVar27 * 0x14 + 0x10);
              puVar5 = (undefined8 *)((long)pvVar28 + (ulong)uVar27 * 0x14);
              uVar19 = puVar5[1];
              puVar6 = (undefined8 *)((long)pvVar31 + (ulong)uVar11 * 0x14);
              *puVar6 = *puVar5;
              puVar6[1] = uVar19;
              uVar27 = *(uint *)phVar2;
            }
            *(uint *)phVar2 = uVar27 + 1;
          }
          *(uint *)phVar1 = *(uint *)phVar1 + 1;
        }
        else {
          hb_buffer_t::_set_glyph_flags(param_2,3,uVar12,uVar11,'\x01');
          if (param_2[0x5a] != (hb_buffer_t)0x0) {
            pvVar31 = *(void **)phVar4;
            pvVar28 = *(void **)phVar3;
            uVar11 = *(uint *)phVar2;
            if ((pvVar31 != pvVar28) || (uVar11 != *(uint *)phVar1)) {
              uVar11 = uVar11 + 1;
              if ((uVar11 == 0) || (uVar11 < *(uint *)(param_2 + 0x68))) {
                if (pvVar31 == pvVar28) goto LAB_00421c52;
              }
              else {
                uVar19 = hb_buffer_t::enlarge(param_2,uVar11);
                if ((char)uVar19 == '\0') break;
                pvVar31 = *(void **)phVar4;
                pvVar28 = *(void **)phVar3;
                if (pvVar31 == pvVar28) {
LAB_00421c52:
                  uVar11 = *(uint *)phVar2;
                  if (*(uint *)phVar1 + 1 < uVar11 + 1) {
                    pvVar31 = *(void **)(param_2 + 0x80);
                    *(void **)(param_2 + 0x78) = pvVar31;
                    if ((ulong)uVar11 != 0) {
                      memcpy(pvVar31,pvVar28,(ulong)uVar11 * 0x14);
                      pvVar28 = *(void **)phVar3;
                      pvVar31 = *(void **)phVar4;
                    }
                  }
                  else {
                    pvVar31 = pvVar28;
                  }
                }
              }
              uVar11 = *(uint *)phVar1;
              uVar20 = *(uint *)phVar2;
              *(undefined4 *)((long)pvVar31 + (ulong)uVar20 * 0x14 + 0x10) =
                   *(undefined4 *)((long)pvVar28 + (ulong)uVar11 * 0x14 + 0x10);
              puVar5 = (undefined8 *)((long)pvVar28 + (ulong)uVar11 * 0x14);
              uVar19 = puVar5[1];
              puVar6 = (undefined8 *)((long)pvVar31 + (ulong)uVar20 * 0x14);
              *puVar6 = *puVar5;
              puVar6[1] = uVar19;
              uVar11 = *(uint *)phVar2;
            }
            *(uint *)phVar2 = uVar11 + 1;
          }
          *(uint *)phVar1 = *(uint *)phVar1 + 1;
          local_58 = local_58 & 0xffffffff00000000;
          lVar10 = *(long *)(*(long *)(param_3 + 0x90) + 0x10);
          if (lVar10 == 0) {
            uVar19 = 0;
          }
          else {
            uVar19 = *(undefined8 *)(lVar10 + 0x10);
          }
          iVar13 = (**(code **)(*(long *)(param_3 + 0x90) + 0x30))
                             (param_3,*(undefined8 *)(param_3 + 0x98),uVar27,&local_58,uVar19);
          if (iVar13 != 0) {
            lVar10 = *(long *)(*(long *)(param_3 + 0x90) + 0x10);
            if (lVar10 == 0) {
              uVar19 = 0;
            }
            else {
              uVar19 = *(undefined8 *)(lVar10 + 0x28);
            }
            iVar13 = (**(code **)(*(long *)(param_3 + 0x90) + 0x48))
                               (param_3,*(undefined8 *)(param_3 + 0x98),local_58 & 0xffffffff,uVar19
                               );
            auVar54._4_4_ = _UNK_006524b4;
            auVar54._0_4_ = _DAT_006524b0;
            auVar54._8_4_ = _UNK_006524b8;
            auVar54._12_4_ = _UNK_006524bc;
            if (iVar13 == 0) goto LAB_00421b90;
          }
          hb_buffer_t::merge_out_clusters(param_2,uVar12,uVar32 + 1);
          lVar10 = *(long *)(param_2 + 0x78);
          local_48 = *(undefined4 *)(lVar10 + 0x10 + uVar24 * 0x14);
          puVar7 = (ulong *)(lVar10 + uVar24 * 0x14);
          local_58 = *puVar7;
          uStack_50 = puVar7[1];
          memmove((void *)(lVar10 + (ulong)(uVar12 + 1) * 0x14),(void *)(lVar10 + uVar22 * 0x14),
                  (ulong)(uVar32 - uVar12) * 0x14);
          auVar54._4_4_ = _UNK_006524b4;
          auVar54._0_4_ = _DAT_006524b0;
          auVar54._8_4_ = _UNK_006524b8;
          auVar54._12_4_ = _UNK_006524bc;
          puVar7 = (ulong *)(lVar10 + uVar22 * 0x14);
          *puVar7 = local_58;
          puVar7[1] = uStack_50;
          *(undefined4 *)(lVar10 + 0x10 + uVar22 * 0x14) = local_48;
        }
LAB_00421b90:
        uVar22 = (ulong)*(uint *)phVar2;
        uVar24 = (ulong)*(uint *)phVar2;
      }
      else {
        uVar32 = *(uint *)phVar2;
        uVar22 = (ulong)uVar32;
        if ((uVar27 - 0x1100 < 0x60) || (uVar27 - 0xa960 < 0x1d)) {
          if ((uVar9 <= uVar11 + 1) ||
             ((iVar13 = *(int *)(lVar10 + (ulong)(uVar11 + 1) * 0x14), 0x47 < iVar13 - 0x1160U &&
              (0x16 < iVar13 - 0xd7b0U)))) goto LAB_00421d70;
          uVar24 = 0;
          iVar14 = 0;
          if (uVar11 + 2 < uVar9) {
            iVar14 = *(int *)(lVar10 + (ulong)(uVar11 + 2) * 0x14);
            uVar24 = (ulong)(iVar14 - 0x11a7);
            if (0x30 < iVar14 - 0xd7cbU && 0x57 < iVar14 - 0x11a8U) {
              uVar24 = 0;
              iVar14 = 0;
            }
          }
          uVar20 = 3 - (iVar14 == 0);
          uVar12 = uVar20 + uVar11;
          if (*(uint *)(param_2 + 0x60) < uVar20 + uVar11) {
            uVar12 = *(uint *)(param_2 + 0x60);
          }
          if (1 < uVar12 - uVar11) {
            param_2[0xc0] = (hb_buffer_t)((byte)param_2[0xc0] | 0x20);
            uVar41 = 0xffffffff;
            if (uVar12 != uVar11) {
              if (*(int *)(param_2 + 0x1c) == 2) {
                if (uVar11 < uVar12) {
                  uVar18 = (ulong)uVar12;
                  uVar25 = uVar18 - uVar21;
                  uVar41 = 0xffffffff;
                  if (8 < uVar25) {
                    uVar29 = (ulong)((uint)uVar25 & 7);
                    if (uVar29 == 0) {
                      uVar29 = 8;
                    }
                    lVar30 = (uVar29 + uVar21) - uVar18;
                    puVar17 = (undefined4 *)(lVar10 + uVar21 * 0x14 + 0x94);
                    auVar34._8_4_ = 0xffffffff;
                    auVar34._0_8_ = 0xffffffffffffffff;
                    auVar34._12_4_ = 0xffffffff;
                    auVar36._8_4_ = 0xffffffff;
                    auVar36._0_8_ = 0xffffffffffffffff;
                    auVar36._12_4_ = 0xffffffff;
                    do {
                      auVar52._12_4_ = puVar17[-0x14];
                      auVar52._8_4_ = puVar17[-0x19];
                      auVar52._4_4_ = puVar17[-0x1e];
                      auVar52._0_4_ = puVar17[-0x23];
                      auVar53._12_4_ = *puVar17;
                      auVar53._8_4_ = puVar17[-5];
                      auVar53._4_4_ = puVar17[-10];
                      auVar53._0_4_ = puVar17[-0xf];
                      auVar42 = auVar52 ^ auVar54;
                      auVar33 = auVar34 ^ auVar54;
                      auVar45._0_4_ = -(uint)(auVar33._0_4_ < auVar42._0_4_);
                      auVar45._4_4_ = -(uint)(auVar33._4_4_ < auVar42._4_4_);
                      auVar45._8_4_ = -(uint)(auVar33._8_4_ < auVar42._8_4_);
                      auVar45._12_4_ = -(uint)(auVar33._12_4_ < auVar42._12_4_);
                      auVar34 = ~auVar45 & auVar52 | auVar34 & auVar45;
                      auVar42 = auVar53 ^ auVar54;
                      auVar33 = auVar36 ^ auVar54;
                      auVar43._0_4_ = -(uint)(auVar33._0_4_ < auVar42._0_4_);
                      auVar43._4_4_ = -(uint)(auVar33._4_4_ < auVar42._4_4_);
                      auVar43._8_4_ = -(uint)(auVar33._8_4_ < auVar42._8_4_);
                      auVar43._12_4_ = -(uint)(auVar33._12_4_ < auVar42._12_4_);
                      auVar36 = ~auVar43 & auVar53 | auVar36 & auVar43;
                      puVar17 = puVar17 + 0x28;
                      lVar30 = lVar30 + 8;
                    } while (lVar30 != 0);
                    uVar21 = uVar21 + (uVar25 - uVar29);
                    auVar33 = auVar34 ^ auVar54;
                    auVar42 = auVar36 ^ auVar54;
                    auVar44._0_4_ = -(uint)(auVar33._0_4_ < auVar42._0_4_);
                    auVar44._4_4_ = -(uint)(auVar33._4_4_ < auVar42._4_4_);
                    auVar44._8_4_ = -(uint)(auVar33._8_4_ < auVar42._8_4_);
                    auVar44._12_4_ = -(uint)(auVar33._12_4_ < auVar42._12_4_);
                    auVar45 = ~auVar44 & auVar36 | auVar34 & auVar44;
                    auVar33._0_8_ = auVar45._8_8_;
                    auVar33._8_4_ = auVar45._8_4_;
                    auVar33._12_4_ = auVar45._12_4_;
                    auVar34 = auVar45 ^ auVar54;
                    auVar36 = auVar33 ^ auVar54;
                    auVar42._0_4_ = -(uint)(auVar34._0_4_ < auVar36._0_4_);
                    auVar42._4_4_ = -(uint)(auVar34._4_4_ < auVar36._4_4_);
                    auVar42._8_4_ = -(uint)(auVar34._8_4_ < auVar36._8_4_);
                    auVar42._12_4_ = -(uint)(auVar34._12_4_ < auVar36._12_4_);
                    auVar34 = ~auVar42 & auVar33 | auVar45 & auVar42;
                    uVar37 = auVar34._4_4_;
                    uVar41 = auVar34._0_4_;
                    uVar39 = -(uint)((int)(uVar41 ^ auVar54._0_4_) < (int)(uVar37 ^ auVar54._0_4_));
                    uVar41 = ~uVar39 & uVar37 | uVar41 & uVar39;
                    local_38 = (ulong)uVar20;
                  }
                  lVar30 = uVar18 - uVar21;
                  puVar23 = (uint *)(lVar10 + uVar21 * 0x14 + 8);
                  do {
                    if (*puVar23 < uVar41) {
                      uVar41 = *puVar23;
                    }
                    puVar23 = puVar23 + 5;
                    lVar30 = lVar30 + -1;
                  } while (lVar30 != 0);
                }
              }
              else {
                uVar41 = *(uint *)(lVar10 + 8 + uVar21 * 0x14);
                uVar37 = *(uint *)(lVar10 + 8 + (ulong)(uVar12 - 1) * 0x14);
                if (uVar37 < uVar41) {
                  uVar41 = uVar37;
                }
              }
            }
            local_40 = uVar24;
            hb_buffer_t::_infos_set_glyph_flags(param_2,lVar10,uVar11,uVar12,uVar41,3);
            auVar54._4_4_ = _UNK_006524b4;
            auVar54._0_4_ = _DAT_006524b0;
            auVar54._8_4_ = _UNK_006524b8;
            auVar54._12_4_ = _UNK_006524bc;
            uVar24 = local_40;
          }
          if (((uVar27 - 0x1100 < 0x13) && (iVar13 - 0x1161U < 0x15)) &&
             ((iVar14 == 0 || (iVar14 - 0x11a8U < 0x1b)))) {
            local_44 = iVar13 * 0x1c + uVar27 * 0x24c + (int)uVar24 + -0x28469c;
            local_58 = local_58 & 0xffffffff00000000;
            lVar10 = *(long *)(*(long *)(param_3 + 0x90) + 0x10);
            if (lVar10 == 0) {
              uVar19 = 0;
            }
            else {
              uVar19 = *(undefined8 *)(lVar10 + 0x10);
            }
            iVar13 = (**(code **)(*(long *)(param_3 + 0x90) + 0x30))
                               (param_3,*(undefined8 *)(param_3 + 0x98),local_44,&local_58,uVar19);
            if (iVar13 != 0) {
              hb_buffer_t::replace_glyphs<unsigned_int>(param_2,uVar20,&local_44);
LAB_00422721:
              uVar24 = (ulong)(uVar32 + 1);
              auVar54._4_4_ = _UNK_006524b4;
              auVar54._0_4_ = _DAT_006524b0;
              auVar54._8_4_ = _UNK_006524b8;
              auVar54._12_4_ = _UNK_006524bc;
              goto LAB_00421b96;
            }
            auVar54._4_4_ = _UNK_006524b4;
            auVar54._0_4_ = _DAT_006524b0;
            auVar54._8_4_ = _UNK_006524b8;
            auVar54._12_4_ = _UNK_006524bc;
          }
          *(undefined1 *)
           (*(long *)(param_2 + 0x70) + 0x13 + (ulong)*(uint *)(param_2 + 0x5c) * 0x14) = 1;
          if (param_2[0x5a] == (hb_buffer_t)0x0) {
LAB_004227a0:
            uVar27 = *(uint *)phVar1 + 1;
            *(uint *)phVar1 = uVar27;
          }
          else {
            pvVar31 = *(void **)phVar4;
            pvVar28 = *(void **)phVar3;
            uVar27 = *(uint *)phVar2;
            if ((pvVar31 == pvVar28) && (uVar27 == *(uint *)phVar1)) {
LAB_0042279a:
              *(uint *)phVar2 = uVar27 + 1;
              goto LAB_004227a0;
            }
            uVar27 = uVar27 + 1;
            if ((uVar27 == 0) || (uVar27 < *(uint *)(param_2 + 0x68))) {
              if (pvVar31 == pvVar28) {
LAB_00422688:
                uVar27 = *(uint *)phVar2;
                if (*(uint *)phVar1 + 1 < uVar27 + 1) {
                  pvVar31 = *(void **)(param_2 + 0x80);
                  *(void **)(param_2 + 0x78) = pvVar31;
                  if ((ulong)uVar27 != 0) {
                    memcpy(pvVar31,pvVar28,(ulong)uVar27 * 0x14);
                    pvVar28 = *(void **)phVar3;
                    pvVar31 = *(void **)phVar4;
                  }
                  auVar54._4_4_ = _UNK_006524b4;
                  auVar54._0_4_ = _DAT_006524b0;
                  auVar54._8_4_ = _UNK_006524b8;
                  auVar54._12_4_ = _UNK_006524bc;
                }
                else {
                  pvVar31 = pvVar28;
                }
              }
LAB_00422777:
              uVar27 = *(uint *)phVar1;
              uVar11 = *(uint *)phVar2;
              *(undefined4 *)((long)pvVar31 + (ulong)uVar11 * 0x14 + 0x10) =
                   *(undefined4 *)((long)pvVar28 + (ulong)uVar27 * 0x14 + 0x10);
              puVar5 = (undefined8 *)((long)pvVar28 + (ulong)uVar27 * 0x14);
              uVar19 = puVar5[1];
              puVar6 = (undefined8 *)((long)pvVar31 + (ulong)uVar11 * 0x14);
              *puVar6 = *puVar5;
              puVar6[1] = uVar19;
              uVar27 = *(uint *)phVar2;
              goto LAB_0042279a;
            }
            uVar19 = hb_buffer_t::enlarge(param_2,uVar27);
            if ((char)uVar19 != '\0') {
              pvVar31 = *(void **)phVar4;
              pvVar28 = *(void **)phVar3;
              auVar54._4_4_ = _UNK_006524b4;
              auVar54._0_4_ = _DAT_006524b0;
              auVar54._8_4_ = _UNK_006524b8;
              auVar54._12_4_ = _UNK_006524bc;
              if (pvVar31 == pvVar28) goto LAB_00422688;
              goto LAB_00422777;
            }
            uVar27 = *(uint *)phVar1;
            auVar54._4_4_ = _UNK_006524b4;
            auVar54._0_4_ = _DAT_006524b0;
            auVar54._8_4_ = _UNK_006524b8;
            auVar54._12_4_ = _UNK_006524bc;
          }
          *(undefined1 *)(*(long *)(param_2 + 0x70) + 0x13 + (ulong)uVar27 * 0x14) = 2;
          if (param_2[0x5a] == (hb_buffer_t)0x0) {
LAB_0042287f:
            *(uint *)phVar1 = *(uint *)phVar1 + 1;
          }
          else {
            pvVar31 = *(void **)phVar4;
            pvVar28 = *(void **)phVar3;
            uVar27 = *(uint *)phVar2;
            if ((pvVar31 == pvVar28) && (uVar27 == *(uint *)phVar1)) {
LAB_00422879:
              *(uint *)phVar2 = uVar27 + 1;
              goto LAB_0042287f;
            }
            uVar27 = uVar27 + 1;
            if ((uVar27 == 0) || (uVar27 < *(uint *)(param_2 + 0x68))) {
              if (pvVar31 == pvVar28) {
LAB_004227f7:
                uVar27 = *(uint *)phVar2;
                if (*(uint *)phVar1 + 1 < uVar27 + 1) {
                  pvVar31 = *(void **)(param_2 + 0x80);
                  *(void **)(param_2 + 0x78) = pvVar31;
                  if ((ulong)uVar27 != 0) {
                    memcpy(pvVar31,pvVar28,(ulong)uVar27 * 0x14);
                    pvVar28 = *(void **)phVar3;
                    pvVar31 = *(void **)phVar4;
                  }
                  auVar54._4_4_ = _UNK_006524b4;
                  auVar54._0_4_ = _DAT_006524b0;
                  auVar54._8_4_ = _UNK_006524b8;
                  auVar54._12_4_ = _UNK_006524bc;
                }
                else {
                  pvVar31 = pvVar28;
                }
              }
LAB_00422856:
              uVar27 = *(uint *)phVar1;
              uVar11 = *(uint *)phVar2;
              *(undefined4 *)((long)pvVar31 + (ulong)uVar11 * 0x14 + 0x10) =
                   *(undefined4 *)((long)pvVar28 + (ulong)uVar27 * 0x14 + 0x10);
              puVar5 = (undefined8 *)((long)pvVar28 + (ulong)uVar27 * 0x14);
              uVar19 = puVar5[1];
              puVar6 = (undefined8 *)((long)pvVar31 + (ulong)uVar11 * 0x14);
              *puVar6 = *puVar5;
              puVar6[1] = uVar19;
              uVar27 = *(uint *)phVar2;
              goto LAB_00422879;
            }
            uVar19 = hb_buffer_t::enlarge(param_2,uVar27);
            auVar54._4_4_ = _UNK_006524b4;
            auVar54._0_4_ = _DAT_006524b0;
            auVar54._8_4_ = _UNK_006524b8;
            auVar54._12_4_ = _UNK_006524bc;
            if ((char)uVar19 != '\0') {
              pvVar31 = *(void **)phVar4;
              pvVar28 = *(void **)phVar3;
              if (pvVar31 == pvVar28) goto LAB_004227f7;
              goto LAB_00422856;
            }
          }
          if (iVar14 == 0) {
            iVar13 = 2;
            hVar8 = param_2[0x58];
          }
          else {
            *(undefined1 *)
             (*(long *)(param_2 + 0x70) + 0x13 + (ulong)*(uint *)(param_2 + 0x5c) * 0x14) = 3;
            if (param_2[0x5a] != (hb_buffer_t)0x0) {
              pvVar31 = *(void **)phVar4;
              pvVar28 = *(void **)phVar3;
              uVar27 = *(uint *)phVar2;
              if ((pvVar31 != pvVar28) || (uVar27 != *(uint *)phVar1)) {
                uVar27 = uVar27 + 1;
                if ((uVar27 == 0) || (uVar27 < *(uint *)(param_2 + 0x68))) {
                  if (pvVar31 == pvVar28) {
LAB_004228e0:
                    uVar27 = *(uint *)phVar2;
                    if (*(uint *)phVar1 + 1 < uVar27 + 1) {
                      pvVar31 = *(void **)(param_2 + 0x80);
                      *(void **)(param_2 + 0x78) = pvVar31;
                      if ((ulong)uVar27 != 0) {
                        memcpy(pvVar31,pvVar28,(ulong)uVar27 * 0x14);
                        pvVar28 = *(void **)phVar3;
                        pvVar31 = *(void **)phVar4;
                      }
                      auVar54._4_4_ = _UNK_006524b4;
                      auVar54._0_4_ = _DAT_006524b0;
                      auVar54._8_4_ = _UNK_006524b8;
                      auVar54._12_4_ = _UNK_006524bc;
                    }
                    else {
                      pvVar31 = pvVar28;
                    }
                  }
                }
                else {
                  uVar19 = hb_buffer_t::enlarge(param_2,uVar27);
                  if ((char)uVar19 == '\0') {
                    iVar13 = 3;
                    auVar54._4_4_ = _UNK_006524b4;
                    auVar54._0_4_ = _DAT_006524b0;
                    auVar54._8_4_ = _UNK_006524b8;
                    auVar54._12_4_ = _UNK_006524bc;
                    hVar8 = param_2[0x58];
                    goto joined_r0x004234e9;
                  }
                  pvVar31 = *(void **)phVar4;
                  pvVar28 = *(void **)phVar3;
                  auVar54._4_4_ = _UNK_006524b4;
                  auVar54._0_4_ = _DAT_006524b0;
                  auVar54._8_4_ = _UNK_006524b8;
                  auVar54._12_4_ = _UNK_006524bc;
                  if (pvVar31 == pvVar28) goto LAB_004228e0;
                }
                uVar27 = *(uint *)phVar1;
                uVar11 = *(uint *)phVar2;
                *(undefined4 *)((long)pvVar31 + (ulong)uVar11 * 0x14 + 0x10) =
                     *(undefined4 *)((long)pvVar28 + (ulong)uVar27 * 0x14 + 0x10);
                puVar5 = (undefined8 *)((long)pvVar28 + (ulong)uVar27 * 0x14);
                uVar19 = puVar5[1];
                puVar6 = (undefined8 *)((long)pvVar31 + (ulong)uVar11 * 0x14);
                *puVar6 = *puVar5;
                puVar6[1] = uVar19;
                uVar27 = *(uint *)phVar2;
              }
              *(uint *)phVar2 = uVar27 + 1;
            }
            *(uint *)phVar1 = *(uint *)phVar1 + 1;
            iVar13 = 3;
            hVar8 = param_2[0x58];
          }
joined_r0x004234e9:
          if (hVar8 == (hb_buffer_t)0x0) break;
          uVar24 = (ulong)(iVar13 + uVar32);
          if (*(int *)(param_2 + 0x1c) == 0) {
            hb_buffer_t::merge_out_clusters(param_2,uVar32,iVar13 + uVar32);
LAB_00423220:
            auVar54._4_4_ = _UNK_006524b4;
            auVar54._0_4_ = _DAT_006524b0;
            auVar54._8_4_ = _UNK_006524b8;
            auVar54._12_4_ = _UNK_006524bc;
          }
        }
        else {
          uVar11 = uVar27 - 0xac00;
          if (uVar11 < 0x2ba4) {
            local_58 = (ulong)local_58._4_4_ << 0x20;
            lVar10 = *(long *)(*(long *)(param_3 + 0x90) + 0x10);
            if (lVar10 == 0) {
              uVar19 = 0;
            }
            else {
              uVar19 = *(undefined8 *)(lVar10 + 0x10);
            }
            iVar13 = (**(code **)(*(long *)(param_3 + 0x90) + 0x30))
                               (param_3,*(undefined8 *)(param_3 + 0x98),uVar27,&local_58,uVar19);
            uVar20 = (uVar11 & 0xffff) / 0x24c;
            uVar11 = uVar11 + uVar20 * -0x24c;
            uVar12 = (uVar11 & 0xffff) >> 2;
            sVar26 = (short)uVar11 + (short)(uVar12 / 7) * -0x1c;
            if (sVar26 == 0) {
              auVar54._4_4_ = _UNK_006524b4;
              auVar54._0_4_ = _DAT_006524b0;
              auVar54._8_4_ = _UNK_006524b8;
              auVar54._12_4_ = _UNK_006524bc;
              if ((*(uint *)phVar1 + 1 < uVar9) &&
                 (iVar14 = *(int *)(*(long *)phVar3 + (ulong)(*(uint *)phVar1 + 1) * 0x14),
                 iVar14 - 0x11a8U < 0x1b)) {
                local_44 = uVar27 + iVar14 + -0x11a7;
                local_58 = local_58 & 0xffffffff00000000;
                lVar10 = *(long *)(*(long *)(param_3 + 0x90) + 0x10);
                if (lVar10 == 0) {
                  uVar19 = 0;
                }
                else {
                  uVar19 = *(undefined8 *)(lVar10 + 0x10);
                }
                iVar14 = (**(code **)(*(long *)(param_3 + 0x90) + 0x30))
                                   (param_3,*(undefined8 *)(param_3 + 0x98),local_44,&local_58,
                                    uVar19);
                if (iVar14 != 0) {
                  hb_buffer_t::replace_glyphs<unsigned_int>(param_2,2,&local_44);
                  goto LAB_00422721;
                }
                uVar27 = *(uint *)(param_2 + 0x5c);
                uVar21 = (ulong)uVar27;
                uVar11 = uVar27 + 2;
                if (*(uint *)(param_2 + 0x60) < uVar27 + 2) {
                  uVar11 = *(uint *)(param_2 + 0x60);
                }
                if (uVar11 - uVar27 < 2) {
                  auVar54._4_4_ = _UNK_006524b4;
                  auVar54._0_4_ = _DAT_006524b0;
                  auVar54._8_4_ = _UNK_006524b8;
                  auVar54._12_4_ = _UNK_006524bc;
                }
                else {
                  param_2[0xc0] = (hb_buffer_t)((byte)param_2[0xc0] | 0x20);
                  lVar10 = *(long *)(param_2 + 0x70);
                  uVar41 = 0xffffffff;
                  if (uVar11 != uVar27) {
                    if (*(int *)(param_2 + 0x1c) == 2) {
                      if (uVar27 < uVar11) {
                        uVar18 = (ulong)uVar11;
                        uVar25 = uVar18 - uVar21;
                        uVar41 = 0xffffffff;
                        if (8 < uVar25) {
                          uVar29 = (ulong)((uint)uVar25 & 7);
                          if (uVar29 == 0) {
                            uVar29 = 8;
                          }
                          lVar30 = (uVar29 + uVar21) - uVar18;
                          puVar23 = (uint *)(lVar10 + uVar21 * 0x14 + 0x94);
                          uVar39 = 0xffffffff;
                          uVar41 = 0xffffffff;
                          uVar37 = 0xffffffff;
                          uVar35 = 0xffffffff;
                          uVar40 = 0xffffffff;
                          uVar38 = 0xffffffff;
                          uVar46 = 0xffffffff;
                          uVar47 = 0xffffffff;
                          do {
                            uVar49 = -(uint)((int)(uVar41 ^ _DAT_006524b0) <
                                            (int)(puVar23[-0x23] ^ _DAT_006524b0));
                            uVar51 = -(uint)((int)(uVar37 ^ _UNK_006524b4) <
                                            (int)(puVar23[-0x1e] ^ _UNK_006524b4));
                            uVar48 = -(uint)((int)(uVar39 ^ _UNK_006524b8) <
                                            (int)(puVar23[-0x19] ^ _UNK_006524b8));
                            uVar50 = -(uint)((int)(uVar35 ^ _UNK_006524bc) <
                                            (int)(puVar23[-0x14] ^ _UNK_006524bc));
                            uVar41 = ~uVar49 & puVar23[-0x23] | uVar41 & uVar49;
                            uVar37 = ~uVar51 & puVar23[-0x1e] | uVar37 & uVar51;
                            uVar39 = ~uVar48 & puVar23[-0x19] | uVar39 & uVar48;
                            uVar35 = ~uVar50 & puVar23[-0x14] | uVar35 & uVar50;
                            uVar49 = -(uint)((int)(uVar38 ^ _DAT_006524b0) <
                                            (int)(puVar23[-0xf] ^ _DAT_006524b0));
                            uVar51 = -(uint)((int)(uVar46 ^ _UNK_006524b4) <
                                            (int)(puVar23[-10] ^ _UNK_006524b4));
                            uVar48 = -(uint)((int)(uVar40 ^ _UNK_006524b8) <
                                            (int)(puVar23[-5] ^ _UNK_006524b8));
                            uVar50 = -(uint)((int)(uVar47 ^ _UNK_006524bc) <
                                            (int)(*puVar23 ^ _UNK_006524bc));
                            uVar38 = ~uVar49 & puVar23[-0xf] | uVar38 & uVar49;
                            uVar46 = ~uVar51 & puVar23[-10] | uVar46 & uVar51;
                            uVar40 = ~uVar48 & puVar23[-5] | uVar40 & uVar48;
                            uVar47 = ~uVar50 & *puVar23 | uVar47 & uVar50;
                            puVar23 = puVar23 + 0x28;
                            lVar30 = lVar30 + 8;
                          } while (lVar30 != 0);
                          uVar21 = (uVar25 - uVar29) + uVar21;
                          uVar49 = -(uint)((int)(uVar41 ^ _DAT_006524b0) <
                                          (int)(uVar38 ^ _DAT_006524b0));
                          uVar51 = -(uint)((int)(uVar37 ^ _UNK_006524b4) <
                                          (int)(uVar46 ^ _UNK_006524b4));
                          uVar48 = -(uint)((int)(uVar39 ^ _UNK_006524b8) <
                                          (int)(uVar40 ^ _UNK_006524b8));
                          uVar50 = -(uint)((int)(uVar35 ^ _UNK_006524bc) <
                                          (int)(uVar47 ^ _UNK_006524bc));
                          uVar38 = ~uVar49 & uVar38 | uVar41 & uVar49;
                          uVar46 = ~uVar51 & uVar46 | uVar37 & uVar51;
                          uVar39 = ~uVar48 & uVar40 | uVar39 & uVar48;
                          uVar35 = ~uVar50 & uVar47 | uVar35 & uVar50;
                          uVar41 = -(uint)((int)(uVar38 ^ _DAT_006524b0) <
                                          (int)(uVar39 ^ _DAT_006524b0));
                          uVar37 = -(uint)((int)(uVar46 ^ _UNK_006524b4) <
                                          (int)(uVar35 ^ _UNK_006524b4));
                          uVar41 = ~uVar41 & uVar39 | uVar38 & uVar41;
                          uVar37 = ~uVar37 & uVar35 | uVar46 & uVar37;
                          uVar39 = -(uint)((int)(uVar41 ^ _DAT_006524b0) <
                                          (int)(uVar37 ^ _DAT_006524b0));
                          uVar41 = ~uVar39 & uVar37 | uVar41 & uVar39;
                        }
                        lVar30 = uVar18 - uVar21;
                        puVar23 = (uint *)(lVar10 + uVar21 * 0x14 + 8);
                        do {
                          if (*puVar23 < uVar41) {
                            uVar41 = *puVar23;
                          }
                          puVar23 = puVar23 + 5;
                          lVar30 = lVar30 + -1;
                        } while (lVar30 != 0);
                      }
                    }
                    else {
                      uVar41 = *(uint *)(lVar10 + 8 + uVar21 * 0x14);
                      uVar37 = *(uint *)(lVar10 + 8 + (ulong)(uVar11 - 1) * 0x14);
                      if (uVar37 < uVar41) {
                        uVar41 = uVar37;
                      }
                    }
                  }
                  hb_buffer_t::_infos_set_glyph_flags(param_2,lVar10,uVar27,uVar11,uVar41,3);
                  auVar54._4_4_ = _UNK_006524b4;
                  auVar54._0_4_ = _DAT_006524b0;
                  auVar54._8_4_ = _UNK_006524b8;
                  auVar54._12_4_ = _UNK_006524bc;
                }
              }
              if ((iVar13 != 0) &&
                 ((uVar9 <= *(uint *)phVar1 + 1 ||
                  ((iVar14 = *(int *)(*(long *)phVar3 + (ulong)(*(uint *)phVar1 + 1) * 0x14),
                   0x57 < iVar14 - 0x11a8U && (0x30 < iVar14 - 0xd7cbU)))))) goto LAB_0042316f;
LAB_00422c04:
              local_58 = local_58 & 0xffffffff00000000;
              lVar10 = *(long *)(*(long *)(param_3 + 0x90) + 0x10);
              if (lVar10 == 0) {
                uVar19 = 0;
              }
              else {
                uVar19 = *(undefined8 *)(lVar10 + 0x10);
              }
              iVar14 = (**(code **)(*(long *)(param_3 + 0x90) + 0x30))
                                 (param_3,*(undefined8 *)(param_3 + 0x98),uVar20 | 0x1100,&local_58,
                                  uVar19);
              if (iVar14 == 0) {
LAB_00422cf2:
                auVar54._4_4_ = _UNK_006524b4;
                auVar54._0_4_ = _DAT_006524b0;
                auVar54._8_4_ = _UNK_006524b8;
                auVar54._12_4_ = _UNK_006524bc;
                if (sVar26 == 0) {
                  uVar27 = *(uint *)phVar1;
                  uVar21 = (ulong)uVar27;
                  if (uVar27 + 1 < uVar9) {
                    lVar10 = *(long *)phVar3;
                    iVar14 = *(int *)(lVar10 + (ulong)(uVar27 + 1) * 0x14);
                    if ((iVar14 - 0x11a8U < 0x58) || (iVar14 - 0xd7cbU < 0x31)) {
                      uVar11 = uVar27 + 2;
                      if (*(uint *)(param_2 + 0x60) < uVar27 + 2) {
                        uVar11 = *(uint *)(param_2 + 0x60);
                      }
                      if (1 < uVar11 - uVar27) {
                        param_2[0xc0] = (hb_buffer_t)((byte)param_2[0xc0] | 0x20);
                        uVar12 = 0xffffffff;
                        if (uVar11 != uVar27) {
                          if (*(int *)(param_2 + 0x1c) == 2) {
                            if (uVar27 < uVar11) {
                              uVar18 = (ulong)uVar11;
                              uVar25 = uVar18 - uVar21;
                              uVar12 = 0xffffffff;
                              if (8 < uVar25) {
                                uVar29 = (ulong)((uint)uVar25 & 7);
                                if (uVar29 == 0) {
                                  uVar29 = 8;
                                }
                                lVar30 = (uVar29 + uVar21) - uVar18;
                                puVar23 = (uint *)(lVar10 + uVar21 * 0x14 + 0x94);
                                uVar41 = 0xffffffff;
                                uVar12 = 0xffffffff;
                                uVar20 = 0xffffffff;
                                uVar37 = 0xffffffff;
                                uVar38 = 0xffffffff;
                                uVar39 = 0xffffffff;
                                uVar35 = 0xffffffff;
                                uVar46 = 0xffffffff;
                                do {
                                  uVar40 = -(uint)((int)(uVar12 ^ _DAT_006524b0) <
                                                  (int)(puVar23[-0x23] ^ _DAT_006524b0));
                                  uVar47 = -(uint)((int)(uVar20 ^ _UNK_006524b4) <
                                                  (int)(puVar23[-0x1e] ^ _UNK_006524b4));
                                  uVar49 = -(uint)((int)(uVar41 ^ _UNK_006524b8) <
                                                  (int)(puVar23[-0x19] ^ _UNK_006524b8));
                                  uVar51 = -(uint)((int)(uVar37 ^ _UNK_006524bc) <
                                                  (int)(puVar23[-0x14] ^ _UNK_006524bc));
                                  uVar12 = ~uVar40 & puVar23[-0x23] | uVar12 & uVar40;
                                  uVar20 = ~uVar47 & puVar23[-0x1e] | uVar20 & uVar47;
                                  uVar41 = ~uVar49 & puVar23[-0x19] | uVar41 & uVar49;
                                  uVar37 = ~uVar51 & puVar23[-0x14] | uVar37 & uVar51;
                                  uVar40 = -(uint)((int)(uVar39 ^ _DAT_006524b0) <
                                                  (int)(puVar23[-0xf] ^ _DAT_006524b0));
                                  uVar47 = -(uint)((int)(uVar35 ^ _UNK_006524b4) <
                                                  (int)(puVar23[-10] ^ _UNK_006524b4));
                                  uVar49 = -(uint)((int)(uVar38 ^ _UNK_006524b8) <
                                                  (int)(puVar23[-5] ^ _UNK_006524b8));
                                  uVar51 = -(uint)((int)(uVar46 ^ _UNK_006524bc) <
                                                  (int)(*puVar23 ^ _UNK_006524bc));
                                  uVar39 = ~uVar40 & puVar23[-0xf] | uVar39 & uVar40;
                                  uVar35 = ~uVar47 & puVar23[-10] | uVar35 & uVar47;
                                  uVar38 = ~uVar49 & puVar23[-5] | uVar38 & uVar49;
                                  uVar46 = ~uVar51 & *puVar23 | uVar46 & uVar51;
                                  puVar23 = puVar23 + 0x28;
                                  lVar30 = lVar30 + 8;
                                } while (lVar30 != 0);
                                uVar21 = (uVar25 - uVar29) + uVar21;
                                uVar40 = -(uint)((int)(uVar12 ^ _DAT_006524b0) <
                                                (int)(uVar39 ^ _DAT_006524b0));
                                uVar47 = -(uint)((int)(uVar20 ^ _UNK_006524b4) <
                                                (int)(uVar35 ^ _UNK_006524b4));
                                uVar49 = -(uint)((int)(uVar41 ^ _UNK_006524b8) <
                                                (int)(uVar38 ^ _UNK_006524b8));
                                uVar51 = -(uint)((int)(uVar37 ^ _UNK_006524bc) <
                                                (int)(uVar46 ^ _UNK_006524bc));
                                uVar39 = ~uVar40 & uVar39 | uVar12 & uVar40;
                                uVar35 = ~uVar47 & uVar35 | uVar20 & uVar47;
                                uVar41 = ~uVar49 & uVar38 | uVar41 & uVar49;
                                uVar37 = ~uVar51 & uVar46 | uVar37 & uVar51;
                                uVar12 = -(uint)((int)(uVar39 ^ _DAT_006524b0) <
                                                (int)(uVar41 ^ _DAT_006524b0));
                                uVar20 = -(uint)((int)(uVar35 ^ _UNK_006524b4) <
                                                (int)(uVar37 ^ _UNK_006524b4));
                                uVar12 = ~uVar12 & uVar41 | uVar39 & uVar12;
                                uVar20 = ~uVar20 & uVar37 | uVar35 & uVar20;
                                uVar41 = -(uint)((int)(uVar12 ^ _DAT_006524b0) <
                                                (int)(uVar20 ^ _DAT_006524b0));
                                uVar12 = ~uVar41 & uVar20 | uVar12 & uVar41;
                              }
                              lVar30 = uVar18 - uVar21;
                              puVar23 = (uint *)(lVar10 + uVar21 * 0x14 + 8);
                              do {
                                if (*puVar23 < uVar12) {
                                  uVar12 = *puVar23;
                                }
                                puVar23 = puVar23 + 5;
                                lVar30 = lVar30 + -1;
                              } while (lVar30 != 0);
                            }
                          }
                          else {
                            uVar12 = *(uint *)(lVar10 + 8 + uVar21 * 0x14);
                            uVar20 = *(uint *)(lVar10 + 8 + (ulong)(uVar11 - 1) * 0x14);
                            if (uVar20 < uVar12) {
                              uVar12 = uVar20;
                            }
                          }
                        }
                        hb_buffer_t::_infos_set_glyph_flags(param_2,lVar10,uVar27,uVar11,uVar12,3);
                        auVar54._4_4_ = _UNK_006524b4;
                        auVar54._0_4_ = _DAT_006524b0;
                        auVar54._8_4_ = _UNK_006524b8;
                        auVar54._12_4_ = _UNK_006524bc;
                      }
                    }
                  }
                }
                goto LAB_0042316f;
              }
              iVar14 = uVar12 / 7 + 0x1161;
              local_58 = local_58 & 0xffffffff00000000;
              lVar10 = *(long *)(*(long *)(param_3 + 0x90) + 0x10);
              if (lVar10 == 0) {
                uVar19 = 0;
              }
              else {
                uVar19 = *(undefined8 *)(lVar10 + 0x10);
              }
              iVar15 = (**(code **)(*(long *)(param_3 + 0x90) + 0x30))
                                 (param_3,*(undefined8 *)(param_3 + 0x98),iVar14,&local_58,uVar19);
              if (iVar15 == 0) goto LAB_00422cf2;
              auVar54._4_4_ = _UNK_006524b4;
              auVar54._0_4_ = _DAT_006524b0;
              auVar54._8_4_ = _UNK_006524b8;
              auVar54._12_4_ = _UNK_006524bc;
              local_40 = CONCAT44(local_40._4_4_,(uint)(ushort)(sVar26 + 0x11a7U));
              if (sVar26 == 0) {
                iVar15 = 2;
              }
              else {
                local_58 = local_58 & 0xffffffff00000000;
                lVar10 = *(long *)(*(long *)(param_3 + 0x90) + 0x10);
                if (lVar10 == 0) {
                  uVar19 = 0;
                }
                else {
                  uVar19 = *(undefined8 *)(lVar10 + 0x10);
                }
                iVar16 = (**(code **)(*(long *)(param_3 + 0x90) + 0x30))
                                   (param_3,*(undefined8 *)(param_3 + 0x98),sVar26 + 0x11a7U,
                                    &local_58,uVar19);
                iVar15 = 3;
                auVar54._4_4_ = _UNK_006524b4;
                auVar54._0_4_ = _DAT_006524b0;
                auVar54._8_4_ = _UNK_006524b8;
                auVar54._12_4_ = _UNK_006524bc;
                if (iVar16 == 0) goto LAB_0042316f;
              }
              uVar27 = *(int *)(param_2 + 100) + iVar15;
              if ((uVar27 == 0) || (uVar27 < *(uint *)(param_2 + 0x68))) {
LAB_00422f82:
                pvVar28 = *(void **)phVar4;
                if ((pvVar28 == *(void **)phVar3) &&
                   (uVar27 = *(uint *)phVar2, *(uint *)phVar1 + 1 < uVar27 + iVar15)) {
                  pvVar28 = *(void **)(param_2 + 0x80);
                  *(void **)(param_2 + 0x78) = pvVar28;
                  if ((ulong)uVar27 != 0) {
                    memcpy(pvVar28,*(void **)phVar3,(ulong)uVar27 * 0x14);
                    pvVar28 = *(void **)phVar4;
                  }
                  auVar54._4_4_ = _UNK_006524b4;
                  auVar54._0_4_ = _DAT_006524b0;
                  auVar54._8_4_ = _UNK_006524b8;
                  auVar54._12_4_ = _UNK_006524bc;
                }
                uVar27 = *(uint *)(param_2 + 100);
                uVar24 = (ulong)uVar27;
                uVar11 = uVar27 - 1;
                if (uVar27 == 0) {
                  uVar11 = 0;
                }
                uVar27 = *(uint *)(param_2 + 0x5c);
                if (*(uint *)(param_2 + 0x60) > uVar27) {
                  uVar11 = uVar27;
                }
                uVar21 = (ulong)uVar11;
                lVar10 = *(long *)(param_2 + (ulong)(*(uint *)(param_2 + 0x60) <= uVar27) * 8 + 0x70
                                  );
                puVar5 = (undefined8 *)(lVar10 + uVar21 * 0x14);
                uVar19 = puVar5[1];
                puVar6 = (undefined8 *)((long)pvVar28 + uVar24 * 0x14);
                *puVar6 = *puVar5;
                puVar6[1] = uVar19;
                *(undefined4 *)((long)pvVar28 + uVar24 * 0x14 + 0x10) =
                     *(undefined4 *)(lVar10 + 0x10 + uVar21 * 0x14);
                *(uint *)((long)pvVar28 + uVar24 * 0x14) = uVar20 | 0x1100;
                puVar5 = (undefined8 *)(lVar10 + uVar21 * 0x14);
                uVar19 = puVar5[1];
                puVar6 = (undefined8 *)((long)pvVar28 + uVar24 * 0x14 + 0x14);
                *puVar6 = *puVar5;
                puVar6[1] = uVar19;
                *(undefined4 *)((long)pvVar28 + uVar24 * 0x14 + 0x24) =
                     *(undefined4 *)(lVar10 + 0x10 + uVar21 * 0x14);
                *(int *)((long)pvVar28 + uVar24 * 0x14 + 0x14) = iVar14;
                if (sVar26 != 0) {
                  puVar5 = (undefined8 *)(lVar10 + uVar21 * 0x14);
                  uVar19 = puVar5[1];
                  *(undefined8 *)((long)pvVar28 + uVar24 * 0x14 + 0x28) = *puVar5;
                  *(undefined8 *)((long)pvVar28 + uVar24 * 0x14 + 0x30) = uVar19;
                  *(undefined4 *)((long)pvVar28 + uVar24 * 0x14 + 0x38) =
                       *(undefined4 *)(puVar5 + 2);
                  *(undefined4 *)((long)pvVar28 + uVar24 * 0x14 + 0x28) = (undefined4)local_40;
                }
                *(uint *)phVar1 = *(uint *)phVar1 + 1;
                *(uint *)phVar2 = *(uint *)phVar2 + iVar15;
              }
              else {
                uVar19 = hb_buffer_t::enlarge(param_2,uVar27);
                auVar54._4_4_ = _UNK_006524b4;
                auVar54._0_4_ = _DAT_006524b0;
                auVar54._8_4_ = _UNK_006524b8;
                auVar54._12_4_ = _UNK_006524bc;
                if ((char)uVar19 != '\0') goto LAB_00422f82;
              }
              if ((sVar26 == 0) && (iVar13 != 0)) {
                if (param_2[0x5a] == (hb_buffer_t)0x0) {
LAB_004231ba:
                  *(uint *)phVar1 = *(uint *)phVar1 + 1;
                }
                else {
                  pvVar31 = *(void **)phVar4;
                  pvVar28 = *(void **)phVar3;
                  uVar27 = *(uint *)phVar2;
                  if ((pvVar31 == pvVar28) && (uVar27 == *(uint *)phVar1)) {
LAB_004231b4:
                    *(uint *)phVar2 = uVar27 + 1;
                    goto LAB_004231ba;
                  }
                  uVar27 = uVar27 + 1;
                  if ((uVar27 == 0) || (uVar27 < *(uint *)(param_2 + 0x68))) {
                    if (pvVar31 == pvVar28) {
LAB_004230ce:
                      uVar27 = *(uint *)phVar2;
                      if (*(uint *)phVar1 + 1 < uVar27 + 1) {
                        pvVar31 = *(void **)(param_2 + 0x80);
                        *(void **)(param_2 + 0x78) = pvVar31;
                        if ((ulong)uVar27 != 0) {
                          memcpy(pvVar31,pvVar28,(ulong)uVar27 * 0x14);
                          pvVar28 = *(void **)phVar3;
                          pvVar31 = *(void **)phVar4;
                        }
                        auVar54._4_4_ = _UNK_006524b4;
                        auVar54._0_4_ = _DAT_006524b0;
                        auVar54._8_4_ = _UNK_006524b8;
                        auVar54._12_4_ = _UNK_006524bc;
                      }
                      else {
                        pvVar31 = pvVar28;
                      }
                    }
LAB_00423191:
                    uVar27 = *(uint *)phVar1;
                    uVar11 = *(uint *)phVar2;
                    *(undefined4 *)((long)pvVar31 + (ulong)uVar11 * 0x14 + 0x10) =
                         *(undefined4 *)((long)pvVar28 + (ulong)uVar27 * 0x14 + 0x10);
                    puVar5 = (undefined8 *)((long)pvVar28 + (ulong)uVar27 * 0x14);
                    uVar19 = puVar5[1];
                    puVar6 = (undefined8 *)((long)pvVar31 + (ulong)uVar11 * 0x14);
                    *puVar6 = *puVar5;
                    puVar6[1] = uVar19;
                    uVar27 = *(uint *)phVar2;
                    goto LAB_004231b4;
                  }
                  uVar19 = hb_buffer_t::enlarge(param_2,uVar27);
                  auVar54._4_4_ = _UNK_006524b4;
                  auVar54._0_4_ = _DAT_006524b0;
                  auVar54._8_4_ = _UNK_006524b8;
                  auVar54._12_4_ = _UNK_006524bc;
                  if ((char)uVar19 != '\0') {
                    pvVar31 = *(void **)phVar4;
                    pvVar28 = *(void **)phVar3;
                    if (pvVar31 == pvVar28) goto LAB_004230ce;
                    goto LAB_00423191;
                  }
                }
                iVar15 = iVar15 + 1;
              }
              if (param_2[0x58] != (hb_buffer_t)0x0) {
                lVar10 = *(long *)phVar4;
                uVar27 = iVar15 + uVar32;
                uVar24 = (ulong)uVar27;
                *(undefined1 *)(lVar10 + 0x13 + uVar22 * 0x14) = 1;
                *(undefined1 *)(lVar10 + 0x13 + (ulong)(uVar32 + 1) * 0x14) = 2;
                if (uVar32 + 2 < uVar27) {
                  *(undefined1 *)(lVar10 + 0x13 + (ulong)(uVar32 + 2) * 0x14) = 3;
                }
                if (*(int *)(param_2 + 0x1c) != 0) goto LAB_00421b96;
                hb_buffer_t::merge_out_clusters(param_2,uVar32,uVar27);
                goto LAB_00423220;
              }
              break;
            }
            auVar54._4_4_ = _UNK_006524b4;
            auVar54._0_4_ = _DAT_006524b0;
            auVar54._8_4_ = _UNK_006524b8;
            auVar54._12_4_ = _UNK_006524bc;
            if (iVar13 == 0) goto LAB_00422c04;
LAB_0042316f:
            if (iVar13 != 0) {
              uVar24 = (ulong)(uVar32 + 1);
            }
            hVar8 = param_2[0x5a];
          }
          else {
LAB_00421d70:
            hVar8 = param_2[0x5a];
          }
          if (hVar8 != (hb_buffer_t)0x0) {
            pvVar31 = *(void **)phVar4;
            pvVar28 = *(void **)phVar3;
            uVar27 = *(uint *)phVar2;
            if ((pvVar31 != pvVar28) || (uVar27 != *(uint *)phVar1)) {
              uVar27 = uVar27 + 1;
              if ((uVar27 == 0) || (uVar27 < *(uint *)(param_2 + 0x68))) {
                if (pvVar31 == pvVar28) {
LAB_00421db3:
                  uVar27 = *(uint *)phVar2;
                  if (*(uint *)phVar1 + 1 < uVar27 + 1) {
                    pvVar31 = *(void **)(param_2 + 0x80);
                    *(void **)(param_2 + 0x78) = pvVar31;
                    if ((ulong)uVar27 != 0) {
                      memcpy(pvVar31,pvVar28,(ulong)uVar27 * 0x14);
                      auVar54._4_4_ = _UNK_006524b4;
                      auVar54._0_4_ = _DAT_006524b0;
                      auVar54._8_4_ = _UNK_006524b8;
                      auVar54._12_4_ = _UNK_006524bc;
                      pvVar28 = *(void **)phVar3;
                      pvVar31 = *(void **)phVar4;
                    }
                  }
                  else {
                    pvVar31 = pvVar28;
                  }
                }
              }
              else {
                uVar19 = hb_buffer_t::enlarge(param_2,uVar27);
                if ((char)uVar19 == '\0') {
                  auVar54._4_4_ = _UNK_006524b4;
                  auVar54._0_4_ = _DAT_006524b0;
                  auVar54._8_4_ = _UNK_006524b8;
                  auVar54._12_4_ = _UNK_006524bc;
                  goto LAB_00421b96;
                }
                pvVar31 = *(void **)phVar4;
                pvVar28 = *(void **)phVar3;
                auVar54._4_4_ = _UNK_006524b4;
                auVar54._0_4_ = _DAT_006524b0;
                auVar54._8_4_ = _UNK_006524b8;
                auVar54._12_4_ = _UNK_006524bc;
                if (pvVar31 == pvVar28) goto LAB_00421db3;
              }
              uVar27 = *(uint *)phVar1;
              uVar11 = *(uint *)phVar2;
              *(undefined4 *)((long)pvVar31 + (ulong)uVar11 * 0x14 + 0x10) =
                   *(undefined4 *)((long)pvVar28 + (ulong)uVar27 * 0x14 + 0x10);
              puVar5 = (undefined8 *)((long)pvVar28 + (ulong)uVar27 * 0x14);
              uVar19 = puVar5[1];
              puVar6 = (undefined8 *)((long)pvVar31 + (ulong)uVar11 * 0x14);
              *puVar6 = *puVar5;
              puVar6[1] = uVar19;
              uVar27 = *(uint *)phVar2;
            }
            *(uint *)phVar2 = uVar27 + 1;
          }
          *(uint *)phVar1 = *(uint *)phVar1 + 1;
        }
      }
LAB_00421b96:
      uVar21 = (ulong)*(uint *)phVar1;
    } while (*(uint *)phVar1 < uVar9);
  }
  hb_buffer_t::sync(param_2);
  return;
}


