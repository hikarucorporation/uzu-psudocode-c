// Function : position_cluster
// Namespace: 
// Entry    : 003ff380
// Prototype: undefined position_cluster(uint * param_1, long param_2, hb_buffer_t * param_3, uint param_4, uint param_5, undefined4 param_6)
// Body     : 003ff380 - 003ffd7e


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* position_cluster(hb_ot_shape_plan_t const*, hb_font_t*, hb_buffer_t*, unsigned int, unsigned int,
   bool) */

void __cdecl
position_cluster(uint *param_1,long param_2,hb_buffer_t *param_3,uint param_4,uint param_5,
                undefined4 param_6)

{
  int *piVar1;
  ushort uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined4 uVar5;
  undefined1 auVar6 [16];
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  int iVar16;
  ulong uVar17;
  uint *puVar18;
  int iVar19;
  byte bVar20;
  byte bVar21;
  int iVar22;
  int iVar23;
  ulong uVar24;
  long lVar25;
  uint uVar26;
  ulong uVar27;
  uint uVar28;
  ushort uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  int local_d4;
  uint local_c8;
  int local_c0;
  int local_bc;
  undefined1 local_b8 [16];
  ulong local_a8;
  hb_buffer_t *local_a0;
  undefined1 local_98 [16];
  uint local_80;
  uint local_7c;
  int local_78;
  uint local_74;
  ulong local_70;
  long local_68;
  long local_60;
  undefined4 local_58;
  uint local_54;
  int local_50;
  uint local_4c;
  uint *local_48;
  ulong local_40;
  long local_38;
  
  uVar10 = (ulong)param_4;
  if ((1 < param_5 - param_4) && (param_4 < param_5)) {
    local_38 = *(long *)(param_3 + 0x70);
    lVar11 = local_38;
    uVar39 = _DAT_006524b0;
    uVar9 = _UNK_006524b4;
    uVar42 = _UNK_006524b8;
    uVar44 = _UNK_006524bc;
    local_a0 = param_3;
    local_68 = param_2;
    local_58 = param_6;
    local_54 = param_5;
    local_48 = param_1;
    do {
      while (uVar28 = (uint)uVar10,
            (0x1c00U >> (*(uint *)(lVar11 + 0x10 + uVar10 * 0x14) & 0x1f) & 1) != 0) {
        uVar10 = (ulong)(uVar28 + 1);
        if (param_5 <= uVar28 + 1) {
          return;
        }
      }
      uVar13 = uVar28 + 1;
      uVar14 = uVar13;
      if (uVar13 < param_5) {
        uVar14 = param_5;
      }
      iVar22 = uVar14 - 1;
      uVar24 = uVar10;
      do {
        iVar8 = (int)uVar24;
        uVar30 = iVar8 + 1;
        uVar24 = (ulong)uVar30;
        if (param_5 <= uVar30) goto LAB_003ff483;
      } while ((0x1c00U >> (*(uint *)(lVar11 + 0x10 + (ulong)uVar30 * 0x14) & 0x1f) & 1) != 0);
      uVar14 = uVar30;
      iVar22 = iVar8;
LAB_003ff483:
      uVar30 = *(uint *)(param_3 + 0x60);
      if (uVar14 <= *(uint *)(param_3 + 0x60)) {
        uVar30 = uVar14;
      }
      if (1 < uVar30 - uVar28) {
        param_3[0xc0] = (hb_buffer_t)((byte)param_3[0xc0] | 0x20);
        lVar11 = *(long *)(param_3 + 0x70);
        uVar26 = 0xffffffff;
        if (uVar30 != uVar28) {
          if (*(int *)(param_3 + 0x1c) == 2) {
            if (uVar28 < uVar30) {
              uVar17 = (ulong)uVar30;
              uVar27 = uVar17 - uVar10;
              uVar26 = 0xffffffff;
              uVar24 = uVar10;
              if (8 < uVar27) {
                uVar24 = (ulong)((uint)uVar27 & 7);
                if (uVar24 == 0) {
                  uVar24 = 8;
                }
                lVar25 = (uVar24 + uVar10) - uVar17;
                puVar18 = (uint *)(lVar11 + uVar10 * 0x14 + 0x94);
                uVar32 = 0xffffffff;
                uVar26 = 0xffffffff;
                uVar31 = 0xffffffff;
                uVar33 = 0xffffffff;
                uVar36 = 0xffffffff;
                uVar34 = 0xffffffff;
                uVar35 = 0xffffffff;
                uVar37 = 0xffffffff;
                do {
                  uVar38 = -(uint)((int)(uVar26 ^ uVar39) < (int)(puVar18[-0x23] ^ uVar39));
                  uVar40 = -(uint)((int)(uVar31 ^ uVar9) < (int)(puVar18[-0x1e] ^ uVar9));
                  uVar41 = -(uint)((int)(uVar32 ^ uVar42) < (int)(puVar18[-0x19] ^ uVar42));
                  uVar43 = -(uint)((int)(uVar33 ^ uVar44) < (int)(puVar18[-0x14] ^ uVar44));
                  uVar26 = ~uVar38 & puVar18[-0x23] | uVar26 & uVar38;
                  uVar31 = ~uVar40 & puVar18[-0x1e] | uVar31 & uVar40;
                  uVar32 = ~uVar41 & puVar18[-0x19] | uVar32 & uVar41;
                  uVar33 = ~uVar43 & puVar18[-0x14] | uVar33 & uVar43;
                  uVar38 = -(uint)((int)(uVar34 ^ uVar39) < (int)(puVar18[-0xf] ^ uVar39));
                  uVar40 = -(uint)((int)(uVar35 ^ uVar9) < (int)(puVar18[-10] ^ uVar9));
                  uVar41 = -(uint)((int)(uVar36 ^ uVar42) < (int)(puVar18[-5] ^ uVar42));
                  uVar43 = -(uint)((int)(uVar37 ^ uVar44) < (int)(*puVar18 ^ uVar44));
                  uVar34 = ~uVar38 & puVar18[-0xf] | uVar34 & uVar38;
                  uVar35 = ~uVar40 & puVar18[-10] | uVar35 & uVar40;
                  uVar36 = ~uVar41 & puVar18[-5] | uVar36 & uVar41;
                  uVar37 = ~uVar43 & *puVar18 | uVar37 & uVar43;
                  puVar18 = puVar18 + 0x28;
                  lVar25 = lVar25 + 8;
                } while (lVar25 != 0);
                uVar24 = (uVar27 - uVar24) + uVar10;
                uVar38 = -(uint)((int)(uVar26 ^ uVar39) < (int)(uVar34 ^ uVar39));
                uVar40 = -(uint)((int)(uVar31 ^ uVar9) < (int)(uVar35 ^ uVar9));
                uVar42 = -(uint)((int)(uVar32 ^ uVar42) < (int)(uVar36 ^ uVar42));
                uVar44 = -(uint)((int)(uVar33 ^ uVar44) < (int)(uVar37 ^ uVar44));
                uVar26 = ~uVar38 & uVar34 | uVar26 & uVar38;
                uVar31 = ~uVar40 & uVar35 | uVar31 & uVar40;
                uVar32 = ~uVar42 & uVar36 | uVar32 & uVar42;
                uVar33 = ~uVar44 & uVar37 | uVar33 & uVar44;
                uVar42 = -(uint)((int)(uVar26 ^ uVar39) < (int)(uVar32 ^ uVar39));
                uVar44 = -(uint)((int)(uVar31 ^ uVar9) < (int)(uVar33 ^ uVar9));
                uVar9 = ~uVar42 & uVar32 | uVar26 & uVar42;
                uVar42 = ~uVar44 & uVar33 | uVar31 & uVar44;
                uVar39 = -(uint)((int)(uVar9 ^ uVar39) < (int)(uVar42 ^ uVar39));
                uVar26 = ~uVar39 & uVar42 | uVar9 & uVar39;
              }
              lVar25 = uVar17 - uVar24;
              puVar18 = (uint *)(lVar11 + uVar24 * 0x14 + 8);
              do {
                if (*puVar18 < uVar26) {
                  uVar26 = *puVar18;
                }
                puVar18 = puVar18 + 5;
                lVar25 = lVar25 + -1;
              } while (lVar25 != 0);
            }
          }
          else {
            uVar26 = *(uint *)(lVar11 + 8 + uVar10 * 0x14);
            uVar39 = *(uint *)(lVar11 + 8 + (ulong)(uVar30 - 1) * 0x14);
            if (uVar39 < uVar26) {
              uVar26 = uVar39;
            }
          }
        }
        hb_buffer_t::_infos_set_glyph_flags(param_3,lVar11,uVar28,uVar30,uVar26,3);
        param_2 = local_68;
      }
      local_98 = (undefined1  [16])0x0;
      lVar11 = *(long *)(*(long *)(param_2 + 0x90) + 0x10);
      if (lVar11 == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(undefined8 *)(lVar11 + 0x68);
      }
      iVar8 = (**(code **)(*(long *)(param_2 + 0x90) + 0x88))
                        (param_2,*(undefined8 *)(param_2 + 0x98),
                         *(undefined4 *)(*(long *)(param_3 + 0x70) + uVar10 * 0x14),local_98,uVar12)
      ;
      uVar44 = _UNK_006524bc;
      uVar42 = _UNK_006524b8;
      uVar9 = _UNK_006524b4;
      uVar39 = _DAT_006524b0;
      local_50 = iVar22;
      if (iVar8 == 0) {
        if (uVar13 < uVar14) {
          lVar11 = *(long *)(param_3 + 0x70);
          uVar10 = (ulong)uVar13;
          if ((char)local_58 == '\0') {
            lVar15 = uVar14 - uVar10;
            lVar25 = uVar10 * 0x14;
            do {
              if ((*(ushort *)(lVar11 + 0x10 + lVar25) & 0x1f) == 0xc) {
                *(undefined8 *)(*(long *)(param_3 + 0x80) + lVar25) = 0;
              }
              lVar25 = lVar25 + 0x14;
              lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
          }
          else {
            lVar15 = uVar14 - uVar10;
            lVar25 = uVar10 * 0x14;
            do {
              if ((*(ushort *)(lVar11 + 0x10 + lVar25) & 0x1f) == 0xc) {
                lVar3 = *(long *)(param_3 + 0x80);
                piVar1 = (int *)(lVar3 + 8 + lVar25);
                *piVar1 = *piVar1 - *(int *)(lVar3 + lVar25);
                piVar1 = (int *)(lVar3 + 0xc + lVar25);
                *piVar1 = *piVar1 - *(int *)(lVar3 + 4 + lVar25);
                *(undefined4 *)(lVar3 + lVar25) = 0;
                *(undefined4 *)(lVar3 + 4 + lVar25) = 0;
              }
              lVar25 = lVar25 + 0x14;
              lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
          }
        }
      }
      else {
        auVar4._4_8_ = local_98._8_8_;
        auVar4._0_4_ = local_98._4_4_ + *(int *)(*(long *)(param_3 + 0x80) + 0xc + uVar10 * 0x14);
        auVar4._12_4_ = 0;
        local_98 = auVar4 << 0x20;
        local_c8 = (**(code **)(*(long *)(param_2 + 0x90) + 0x48))
                             (param_2,*(undefined8 *)(param_2 + 0x98),
                              *(undefined4 *)(*(long *)(param_3 + 0x70) + uVar10 * 0x14));
        auVar4 = local_98;
        uVar12 = local_98._0_8_;
        local_98._8_4_ = local_c8;
        auVar6 = local_98;
        lVar11 = *(long *)(param_3 + 0x70);
        bVar21 = *(byte *)(lVar11 + 0xe + uVar10 * 0x14);
        local_4c = (uint)bVar21;
        uVar28 = local_4c & 0xf;
        if ((bVar21 & 0x10) == 0) {
          uVar28 = 1;
        }
        if ((*(byte *)(lVar11 + 0xc + uVar10 * 0x14) & 4) == 0) {
          uVar28 = 1;
        }
        local_d4 = 0;
        local_c0 = 0;
        if ((*(uint *)(param_3 + 0x38) & 0xfffffffd) == 4) {
          local_c0 = -*(int *)(*(long *)(param_3 + 0x80) + uVar10 * 0x14);
          local_d4 = -*(int *)(*(long *)(param_3 + 0x80) + 4 + uVar10 * 0x14);
        }
        param_2 = local_68;
        uVar39 = _DAT_006524b0;
        uVar9 = _UNK_006524b4;
        uVar42 = _UNK_006524b8;
        uVar44 = _UNK_006524bc;
        if (uVar13 < uVar14) {
          local_98._0_4_ = auVar4._0_4_;
          local_a8 = uVar12 & 0xffffffff;
          local_98._4_4_ = auVar4._4_4_;
          lVar25 = (ulong)uVar13 * 0x14;
          local_bc = -1;
          uVar29 = 0xff;
          local_80 = 0;
          local_7c = local_98._0_4_;
          local_74 = local_98._4_4_;
          uVar10 = (ulong)(uint)local_98._4_4_;
          local_70 = (ulong)local_c8;
          local_78 = local_98._12_4_;
          local_98 = auVar6;
          local_60 = lVar11;
          iVar22 = local_98._12_4_;
          do {
            uVar2 = *(ushort *)(lVar11 + 0x10 + lVar25);
            if (((0x1c00U >> (uVar2 & 0x1f) & 1) == 0) || (uVar2 < 0x100)) {
              lVar15 = *(long *)(param_3 + 0x80);
              iVar8 = *(int *)(lVar15 + lVar25);
              if ((*(uint *)(param_3 + 0x38) & 0xfffffffd) == 4) {
                iVar8 = -iVar8;
                iVar16 = -*(int *)(lVar15 + 4 + lVar25);
              }
              else {
                iVar16 = *(int *)(lVar15 + 4 + lVar25);
              }
              local_c0 = local_c0 + iVar8;
              local_d4 = local_d4 + iVar16;
            }
            else {
              uVar2 = uVar2 >> 8;
              if (uVar28 < 2) {
joined_r0x003ff999:
                if (uVar29 != uVar2) {
LAB_003ff99b:
                  local_70 = (ulong)local_c8;
                  local_a8 = (ulong)local_7c;
                  uVar10 = (ulong)local_74;
                  iVar22 = local_78;
                }
              }
              else {
                bVar21 = *(byte *)(lVar11 + 0xe + lVar25);
                bVar20 = bVar21 & 0xf;
                if ((bVar21 & 0x10) != 0) {
                  bVar20 = 0;
                }
                uVar39 = (uint)bVar20;
                if (uVar28 < bVar20) {
                  uVar39 = uVar28;
                }
                if (0x1f < (byte)(bVar21 ^ (byte)local_4c)) {
                  uVar39 = uVar28;
                }
                if ((byte)local_4c < 0x20) {
                  uVar39 = uVar28;
                }
                iVar8 = uVar39 - 1;
                param_3 = local_a0;
                local_40 = uVar10;
                if (local_bc == iVar8) goto joined_r0x003ff999;
                uVar5 = local_98._0_4_;
                local_74 = local_98._4_4_;
                uVar7 = local_98._8_4_;
                local_78 = local_98._12_4_;
                uVar9 = local_80;
                if (local_80 == 0) {
                  uVar9 = *local_48;
                  if ((uVar9 & 0xfffffffe) != 4) {
                    uVar12 = hb_script_get_horizontal_direction(local_48[1]);
                    uVar9 = (uint)uVar12;
                    param_2 = local_68;
                  }
                }
                iVar16 = uVar28 - uVar39;
                if (uVar9 == 4) {
                  iVar16 = iVar8;
                }
                local_7c = (iVar16 * uVar7) / (int)uVar28 + uVar5;
                local_c8 = (int)uVar7 / (int)uVar28;
                uVar10 = local_40;
                param_3 = local_a0;
                local_bc = iVar8;
                local_80 = uVar9;
                if (uVar2 != 0xff) goto LAB_003ff99b;
              }
              local_b8 = (undefined1  [16])0x0;
              lVar11 = *(long *)(*(long *)(param_2 + 0x90) + 0x10);
              if (lVar11 == 0) {
                uVar12 = 0;
              }
              else {
                uVar12 = *(undefined8 *)(lVar11 + 0x68);
              }
              iVar8 = (**(code **)(*(long *)(param_2 + 0x90) + 0x88))
                                (param_2,*(undefined8 *)(param_2 + 0x98),
                                 *(undefined4 *)(*(long *)(param_3 + 0x70) + lVar25),local_b8,uVar12
                                );
              if (iVar8 == 0) {
                lVar11 = *(long *)(local_a0 + 0x80);
                uVar39 = _DAT_006524b0;
                uVar9 = _UNK_006524b4;
                uVar42 = _UNK_006524b8;
                uVar44 = _UNK_006524bc;
              }
              else {
                iVar8 = *(int *)(param_2 + 0x2c);
                iVar16 = iVar8 + 0xf;
                if (-1 < iVar8) {
                  iVar16 = iVar8;
                }
                lVar11 = *(long *)(local_a0 + 0x80);
                *(undefined4 *)(lVar11 + 0xc + lVar25) = 0;
                uVar44 = _UNK_006524bc;
                uVar42 = _UNK_006524b8;
                uVar9 = _UNK_006524b4;
                uVar39 = _DAT_006524b0;
                uVar24 = (ulong)(uVar2 + 0x38 & 0xff);
                bVar21 = (byte)(uVar2 + 0x38);
                iVar23 = (int)local_70;
                iVar19 = (int)local_a8;
                if (0x22 < bVar21) goto LAB_003ffb99;
                if ((0x10040001UL >> (uVar24 & 0x3f) & 1) == 0) {
                  if ((0x100410000U >> (uVar24 & 0x3f) & 1) == 0) {
                    if ((0x600000000U >> (uVar24 & 0x3f) & 1) != 0) {
                      if (*(int *)(local_a0 + 0x38) != 5) {
                        if (*(int *)(local_a0 + 0x38) != 4) goto LAB_003ffb99;
                        iVar19 = iVar23 + iVar19;
                      }
                      iVar19 = iVar19 - (int)local_b8._8_4_ / 2;
                      goto LAB_003ffbe1;
                    }
LAB_003ffb99:
                    *(int *)(lVar11 + 8 + lVar25) =
                         (iVar19 - local_b8._0_4_) + (iVar23 - local_b8._8_4_) / 2;
                  }
                  else {
                    *(int *)(lVar11 + 8 + lVar25) =
                         (iVar23 + iVar19) - (local_b8._8_4_ + local_b8._0_4_);
                  }
                }
                else {
LAB_003ffbe1:
                  *(int *)(lVar11 + 8 + lVar25) = iVar19 - local_b8._0_4_;
                }
                if (bVar21 < 0x23) {
                  iVar16 = iVar16 >> 4;
                  switch(uVar24) {
                  case 0x12:
                  case 0x14:
                  case 0x16:
                  case 0x21:
                    iVar22 = iVar22 - iVar16;
                  case 0:
                  case 2:
                    iVar16 = (iVar22 + (int)uVar10) - local_b8._4_4_;
                    if (0 < iVar16 == iVar8 < 0x10) {
                      iVar8 = iVar16;
                      iVar16 = 0;
                    }
                    else {
                      iVar8 = 0;
                    }
                    *(int *)(lVar11 + 0xc + lVar25) = iVar8;
                    iVar22 = (iVar22 + local_b8._12_4_) - iVar16;
                    break;
                  case 0x1c:
                  case 0x1e:
                  case 0x20:
                  case 0x22:
                    uVar10 = (ulong)(uint)((int)uVar10 + iVar16);
                    iVar22 = iVar22 - iVar16;
                  case 0xe:
                  case 0x10:
                    iVar16 = (int)uVar10;
                    iVar23 = iVar16 - (local_b8._4_4_ + local_b8._12_4_);
                    if (0 < iVar23 == iVar8 < 0x10) {
                      iVar8 = iVar23 / 2;
                      iVar16 = iVar16 - iVar8;
                      iVar22 = iVar22 + iVar8;
                      iVar23 = iVar23 - iVar8;
                    }
                    *(int *)(lVar11 + 0xc + lVar25) = iVar23;
                    uVar10 = (ulong)(uint)(iVar16 - local_b8._12_4_);
                    iVar22 = iVar22 + local_b8._12_4_;
                  }
                }
              }
              *(undefined8 *)(lVar11 + lVar25) = 0;
              piVar1 = (int *)(lVar11 + 8 + lVar25);
              *piVar1 = *piVar1 + local_c0;
              piVar1 = (int *)(lVar11 + 0xc + lVar25);
              *piVar1 = *piVar1 + local_d4;
              lVar11 = local_60;
              param_3 = local_a0;
              uVar29 = uVar2;
            }
            uVar13 = uVar13 + 1;
            lVar25 = lVar25 + 0x14;
          } while (uVar13 < uVar14);
        }
      }
      uVar10 = (ulong)(local_50 + 1U);
      lVar11 = local_38;
      param_5 = local_54;
    } while (local_50 + 1U < local_54);
  }
  return;
}


