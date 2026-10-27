// Function : setup_syllables_khmer
// Namespace: 
// Entry    : 00424160
// Prototype: undefined8 setup_syllables_khmer(undefined8 param_1, undefined8 param_2, hb_buffer_t * param_3)
// Body     : 00424160 - 00424b7d


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* setup_syllables_khmer(hb_ot_shape_plan_t const*, hb_font_t*, hb_buffer_t*) */

undefined8 __cdecl setup_syllables_khmer(undefined8 param_1,undefined8 param_2,hb_buffer_t *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  char cVar9;
  byte bVar10;
  ulong uVar11;
  char *pcVar12;
  byte *pbVar13;
  uint *puVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  int local_3c;
  
  param_3[0xb8] = (hb_buffer_t)((byte)param_3[0xb8] | 8);
  lVar15 = *(long *)(param_3 + 0x70);
  uVar24 = *(uint *)(param_3 + 0x60);
  iVar20 = 1;
  local_3c = 0;
  iVar1 = 0x15;
  uVar19 = 0;
  uVar2 = 0;
  uVar17 = 0;
  if (uVar24 == 0) goto LAB_004247df;
LAB_004241ae:
  lVar8 = (long)iVar1;
  if (_khmer_syllable_machine_from_state_actions[lVar8] == '\a') {
    uVar2 = uVar17;
  }
  bVar10 = *(byte *)(lVar15 + 0x12 + (ulong)uVar17 * 0x14);
  lVar4 = (long)(char)_khmer_syllable_machine_key_spans[lVar8];
  if (((byte)_khmer_syllable_machine_trans_keys[lVar8 * 2] <= bVar10) &&
     (bVar10 <= (byte)_khmer_syllable_machine_trans_keys[lVar8 * 2 + 1])) {
    lVar4 = (ulong)bVar10 - (ulong)(byte)_khmer_syllable_machine_trans_keys[lVar8 * 2];
  }
  uVar5 = (ulong)(char)_khmer_syllable_machine_indicies
                       [*(short *)(_khmer_syllable_machine_index_offsets + lVar8 * 2) + lVar4];
  do {
    iVar1 = (int)(char)_khmer_syllable_machine_trans_targs[uVar5];
    uVar3 = uVar17;
    if ((0xf9f645708ae2U >> (uVar5 & 0x3f) & 1) != 0) goto switchD_00424258_caseD_6;
    cVar9 = (char)iVar20;
    switch(_khmer_syllable_machine_trans_actions[uVar5]) {
    case 1:
      uVar3 = uVar19 - 1;
      if (uVar2 < uVar19) {
        cVar9 = cVar9 << 4;
        uVar5 = (ulong)uVar2;
        uVar6 = ~uVar5;
        if ((uVar19 - uVar2 & 7) != 0) {
          pcVar12 = (char *)(lVar15 + uVar5 * 0x14 + 0xf);
          lVar8 = 0;
          do {
            *pcVar12 = cVar9;
            lVar8 = lVar8 + -1;
            pcVar12 = pcVar12 + 0x14;
          } while (-lVar8 != ((ulong)(uVar19 - uVar2) & 7));
          uVar5 = uVar5 - lVar8;
        }
        if (6 < uVar6 + uVar19) {
          lVar8 = uVar19 - uVar5;
          pcVar12 = (char *)(lVar15 + uVar5 * 0x14 + 0x9b);
          do {
            pcVar12[-0x8c] = cVar9;
            pcVar12[-0x78] = cVar9;
            pcVar12[-100] = cVar9;
            pcVar12[-0x50] = cVar9;
            pcVar12[-0x3c] = cVar9;
            pcVar12[-0x28] = cVar9;
            pcVar12[-0x14] = cVar9;
            *pcVar12 = cVar9;
            pcVar12 = pcVar12 + 0xa0;
            lVar8 = lVar8 + -8;
          } while (lVar8 != 0);
        }
      }
      goto LAB_00424487;
    case 2:
      uVar19 = uVar17 + 1;
      break;
    case 3:
      if (uVar2 < uVar19) {
        bVar10 = cVar9 << 4 | 1;
        uVar5 = (ulong)uVar2;
        uVar6 = ~uVar5;
        if ((uVar19 - uVar2 & 7) != 0) {
          pbVar13 = (byte *)(lVar15 + uVar5 * 0x14 + 0xf);
          lVar8 = 0;
          do {
            *pbVar13 = bVar10;
            lVar8 = lVar8 + -1;
            pbVar13 = pbVar13 + 0x14;
          } while (-lVar8 != ((ulong)(uVar19 - uVar2) & 7));
          uVar5 = uVar5 - lVar8;
        }
        if (6 < uVar6 + uVar19) {
          lVar8 = uVar19 - uVar5;
          pbVar13 = (byte *)(lVar15 + uVar5 * 0x14 + 0x9b);
          do {
            pbVar13[-0x8c] = bVar10;
            pbVar13[-0x78] = bVar10;
            pbVar13[-100] = bVar10;
            pbVar13[-0x50] = bVar10;
            pbVar13[-0x3c] = bVar10;
            pbVar13[-0x28] = bVar10;
            pbVar13[-0x14] = bVar10;
            *pbVar13 = bVar10;
            pbVar13 = pbVar13 + 0xa0;
            lVar8 = lVar8 + -8;
          } while (lVar8 != 0);
        }
      }
      iVar20 = iVar20 + 1;
      if (iVar20 == 0x10) {
        iVar20 = 1;
      }
      param_3[0xc0] = (hb_buffer_t)((byte)param_3[0xc0] | 0x40);
      uVar3 = uVar19 - 1;
      break;
    case 4:
      uVar19 = uVar17 + 1;
      local_3c = 2;
      break;
    case 5:
      if (local_3c == 3) {
        if (uVar2 < uVar19) {
          bVar10 = cVar9 << 4 | 2;
          uVar5 = (ulong)uVar2;
          uVar6 = ~uVar5;
          if ((uVar19 - uVar2 & 7) != 0) {
            pbVar13 = (byte *)(lVar15 + uVar5 * 0x14 + 0xf);
            lVar8 = 0;
            do {
              *pbVar13 = bVar10;
              lVar8 = lVar8 + -1;
              pbVar13 = pbVar13 + 0x14;
            } while (-lVar8 != ((ulong)(uVar19 - uVar2) & 7));
            uVar5 = uVar5 - lVar8;
          }
          if (6 < uVar6 + uVar19) {
            lVar8 = uVar19 - uVar5;
            pbVar13 = (byte *)(lVar15 + uVar5 * 0x14 + 0x9b);
            do {
              pbVar13[-0x8c] = bVar10;
              pbVar13[-0x78] = bVar10;
              pbVar13[-100] = bVar10;
              pbVar13[-0x50] = bVar10;
              pbVar13[-0x3c] = bVar10;
              pbVar13[-0x28] = bVar10;
              pbVar13[-0x14] = bVar10;
              *pbVar13 = bVar10;
              pbVar13 = pbVar13 + 0xa0;
              lVar8 = lVar8 + -8;
            } while (lVar8 != 0);
          }
        }
        iVar20 = iVar20 + 1;
        if (iVar20 == 0x10) {
          iVar20 = 1;
        }
        local_3c = 3;
        uVar3 = uVar19 - 1;
      }
      else if (local_3c == 2) {
        if (uVar2 < uVar19) {
          bVar10 = cVar9 << 4 | 1;
          uVar5 = (ulong)uVar2;
          uVar6 = ~uVar5;
          if ((uVar19 - uVar2 & 7) != 0) {
            pbVar13 = (byte *)(lVar15 + uVar5 * 0x14 + 0xf);
            lVar8 = 0;
            do {
              *pbVar13 = bVar10;
              lVar8 = lVar8 + -1;
              pbVar13 = pbVar13 + 0x14;
            } while (-lVar8 != ((ulong)(uVar19 - uVar2) & 7));
            uVar5 = uVar5 - lVar8;
          }
          if (6 < uVar6 + uVar19) {
            lVar8 = uVar19 - uVar5;
            pbVar13 = (byte *)(lVar15 + uVar5 * 0x14 + 0x9b);
            do {
              pbVar13[-0x8c] = bVar10;
              pbVar13[-0x78] = bVar10;
              pbVar13[-100] = bVar10;
              pbVar13[-0x50] = bVar10;
              pbVar13[-0x3c] = bVar10;
              pbVar13[-0x28] = bVar10;
              pbVar13[-0x14] = bVar10;
              *pbVar13 = bVar10;
              pbVar13 = pbVar13 + 0xa0;
              lVar8 = lVar8 + -8;
            } while (lVar8 != 0);
          }
        }
        iVar20 = iVar20 + 1;
        if (iVar20 == 0x10) {
          iVar20 = 1;
        }
        param_3[0xc0] = (hb_buffer_t)((byte)param_3[0xc0] | 0x40);
        local_3c = 2;
        uVar3 = uVar19 - 1;
      }
      break;
    case 8:
      uVar19 = uVar17 + 1;
      if (uVar2 < uVar19) {
        bVar10 = cVar9 << 4 | 2;
        uVar5 = (ulong)uVar2;
        uVar6 = ~uVar5;
        if ((uVar19 - uVar2 & 7) != 0) {
          pbVar13 = (byte *)(lVar15 + uVar5 * 0x14 + 0xf);
          lVar8 = 0;
          do {
            *pbVar13 = bVar10;
            lVar8 = lVar8 + -1;
            pbVar13 = pbVar13 + 0x14;
          } while (-lVar8 != ((ulong)(uVar19 - uVar2) & 7));
          uVar5 = uVar5 - lVar8;
        }
        if (6 < uVar6 + uVar19) {
          lVar8 = uVar19 - uVar5;
          pbVar13 = (byte *)(lVar15 + uVar5 * 0x14 + 0x9b);
          do {
            pbVar13[-0x8c] = bVar10;
            pbVar13[-0x78] = bVar10;
            pbVar13[-100] = bVar10;
            pbVar13[-0x50] = bVar10;
            pbVar13[-0x3c] = bVar10;
            pbVar13[-0x28] = bVar10;
            pbVar13[-0x14] = bVar10;
            *pbVar13 = bVar10;
            pbVar13 = pbVar13 + 0xa0;
            lVar8 = lVar8 + -8;
          } while (lVar8 != 0);
        }
      }
LAB_00424487:
      iVar20 = iVar20 + 1;
      if (iVar20 == 0x10) {
        iVar20 = 1;
      }
      break;
    case 9:
      uVar19 = uVar17 + 1;
      local_3c = 3;
      break;
    case 10:
      if (uVar2 < uVar17) {
        cVar9 = cVar9 << 4;
        uVar5 = (ulong)uVar2;
        uVar6 = ~uVar5;
        if ((uVar17 - uVar2 & 7) != 0) {
          pcVar12 = (char *)(lVar15 + uVar5 * 0x14 + 0xf);
          lVar8 = 0;
          do {
            *pcVar12 = cVar9;
            lVar8 = lVar8 + -1;
            pcVar12 = pcVar12 + 0x14;
          } while (-lVar8 != ((ulong)(uVar17 - uVar2) & 7));
          uVar5 = uVar5 - lVar8;
        }
        if (6 < uVar6 + uVar17) {
          lVar8 = uVar17 - uVar5;
          pcVar12 = (char *)(lVar15 + uVar5 * 0x14 + 0x9b);
          do {
            pcVar12[-0x8c] = cVar9;
            pcVar12[-0x78] = cVar9;
            pcVar12[-100] = cVar9;
            pcVar12[-0x50] = cVar9;
            pcVar12[-0x3c] = cVar9;
            pcVar12[-0x28] = cVar9;
            pcVar12[-0x14] = cVar9;
            *pcVar12 = cVar9;
            pcVar12 = pcVar12 + 0xa0;
            lVar8 = lVar8 + -8;
          } while (lVar8 != 0);
        }
      }
      goto LAB_004247a7;
    case 0xb:
      if (uVar2 < uVar17) {
        bVar10 = cVar9 << 4 | 1;
        uVar5 = (ulong)uVar2;
        uVar6 = ~uVar5;
        if ((uVar17 - uVar2 & 7) != 0) {
          pbVar13 = (byte *)(lVar15 + uVar5 * 0x14 + 0xf);
          lVar8 = 0;
          do {
            *pbVar13 = bVar10;
            lVar8 = lVar8 + -1;
            pbVar13 = pbVar13 + 0x14;
          } while (-lVar8 != ((ulong)(uVar17 - uVar2) & 7));
          uVar5 = uVar5 - lVar8;
        }
        if (6 < uVar6 + uVar17) {
          lVar8 = uVar17 - uVar5;
          pbVar13 = (byte *)(lVar15 + uVar5 * 0x14 + 0x9b);
          do {
            pbVar13[-0x8c] = bVar10;
            pbVar13[-0x78] = bVar10;
            pbVar13[-100] = bVar10;
            pbVar13[-0x50] = bVar10;
            pbVar13[-0x3c] = bVar10;
            pbVar13[-0x28] = bVar10;
            pbVar13[-0x14] = bVar10;
            *pbVar13 = bVar10;
            pbVar13 = pbVar13 + 0xa0;
            lVar8 = lVar8 + -8;
          } while (lVar8 != 0);
        }
      }
      iVar20 = iVar20 + 1;
      if (iVar20 == 0x10) {
        iVar20 = 1;
      }
      param_3[0xc0] = (hb_buffer_t)((byte)param_3[0xc0] | 0x40);
      goto LAB_004247b8;
    case 0xc:
      if (uVar2 < uVar17) {
        bVar10 = cVar9 << 4 | 2;
        uVar5 = (ulong)uVar2;
        uVar6 = ~uVar5;
        if ((uVar17 - uVar2 & 7) != 0) {
          pbVar13 = (byte *)(lVar15 + uVar5 * 0x14 + 0xf);
          lVar8 = 0;
          do {
            *pbVar13 = bVar10;
            lVar8 = lVar8 + -1;
            pbVar13 = pbVar13 + 0x14;
          } while (-lVar8 != ((ulong)(uVar17 - uVar2) & 7));
          uVar5 = uVar5 - lVar8;
        }
        if (6 < uVar6 + uVar17) {
          lVar8 = uVar17 - uVar5;
          pbVar13 = (byte *)(lVar15 + uVar5 * 0x14 + 0x9b);
          do {
            pbVar13[-0x8c] = bVar10;
            pbVar13[-0x78] = bVar10;
            pbVar13[-100] = bVar10;
            pbVar13[-0x50] = bVar10;
            pbVar13[-0x3c] = bVar10;
            pbVar13[-0x28] = bVar10;
            pbVar13[-0x14] = bVar10;
            *pbVar13 = bVar10;
            pbVar13 = pbVar13 + 0xa0;
            lVar8 = lVar8 + -8;
          } while (lVar8 != 0);
        }
      }
LAB_004247a7:
      iVar20 = iVar20 + 1;
      if (iVar20 == 0x10) {
        iVar20 = 1;
      }
LAB_004247b8:
      uVar3 = uVar17 - 1;
      uVar19 = uVar17;
    }
switchD_00424258_caseD_6:
    if (_khmer_syllable_machine_to_state_actions[iVar1] == '\x06') {
      uVar2 = 0;
    }
    uVar17 = uVar3 + 1;
    if (uVar17 != uVar24) goto LAB_004241ae;
LAB_004247df:
    if (iVar1 == 0x15) {
      uVar19 = *(uint *)(param_3 + 0x60);
      if (uVar19 == 0) {
        return 0;
      }
      lVar15 = *(long *)(param_3 + 0x70);
      uVar5 = 0;
      break;
    }
    uVar5 = (long)*(short *)(_khmer_syllable_machine_eof_trans + (long)iVar1 * 2) - 1;
    uVar17 = uVar24;
  } while( true );
  while (uVar5 = uVar6,
        *(char *)(lVar15 + 0xf) == *(char *)(lVar15 + 0xf + (uVar6 & 0xffffffff) * 0x14)) {
    uVar6 = uVar5 + 1;
    if (uVar19 - 1 == uVar5) {
      uVar6 = (ulong)uVar19;
      break;
    }
  }
  uVar5 = 0;
  uVar24 = uVar19;
  do {
    uVar17 = (uint)uVar6;
    uVar11 = uVar6 & 0xffffffff;
    uVar7 = uVar6 & 0xffffffff;
    if (uVar24 < uVar17) {
      uVar7 = (ulong)uVar24;
    }
    uVar2 = (uint)uVar7;
    uVar3 = (uint)uVar5;
    if (1 < uVar2 - uVar3) {
      param_3[0xc0] = (hb_buffer_t)((byte)param_3[0xc0] | 0x20);
      uVar24 = 0xffffffff;
      if (uVar2 != uVar3) {
        if (*(int *)(param_3 + 0x1c) == 2) {
          if (uVar3 < uVar2) {
            uVar18 = uVar7 - uVar5;
            uVar24 = 0xffffffff;
            if (8 < uVar18) {
              uVar16 = (ulong)((uint)uVar18 & 7);
              if (uVar16 == 0) {
                uVar16 = 8;
              }
              lVar8 = (uVar16 + uVar5) - uVar7;
              puVar14 = (uint *)(lVar15 + uVar5 * 0x14 + 0x94);
              uVar28 = 0xffffffff;
              uVar24 = 0xffffffff;
              uVar25 = 0xffffffff;
              uVar21 = 0xffffffff;
              uVar22 = 0xffffffff;
              uVar27 = 0xffffffff;
              uVar30 = 0xffffffff;
              uVar23 = 0xffffffff;
              do {
                uVar26 = -(uint)((int)(uVar24 ^ _DAT_006524b0) <
                                (int)(puVar14[-0x23] ^ _DAT_006524b0));
                uVar29 = -(uint)((int)(uVar25 ^ _UNK_006524b4) <
                                (int)(puVar14[-0x1e] ^ _UNK_006524b4));
                uVar31 = -(uint)((int)(uVar28 ^ _UNK_006524b8) <
                                (int)(puVar14[-0x19] ^ _UNK_006524b8));
                uVar32 = -(uint)((int)(uVar21 ^ _UNK_006524bc) <
                                (int)(puVar14[-0x14] ^ _UNK_006524bc));
                uVar24 = ~uVar26 & puVar14[-0x23] | uVar24 & uVar26;
                uVar25 = ~uVar29 & puVar14[-0x1e] | uVar25 & uVar29;
                uVar28 = ~uVar31 & puVar14[-0x19] | uVar28 & uVar31;
                uVar21 = ~uVar32 & puVar14[-0x14] | uVar21 & uVar32;
                uVar26 = -(uint)((int)(uVar27 ^ _DAT_006524b0) <
                                (int)(puVar14[-0xf] ^ _DAT_006524b0));
                uVar29 = -(uint)((int)(uVar30 ^ _UNK_006524b4) < (int)(puVar14[-10] ^ _UNK_006524b4)
                                );
                uVar31 = -(uint)((int)(uVar22 ^ _UNK_006524b8) < (int)(puVar14[-5] ^ _UNK_006524b8))
                ;
                uVar32 = -(uint)((int)(uVar23 ^ _UNK_006524bc) < (int)(*puVar14 ^ _UNK_006524bc));
                uVar27 = ~uVar26 & puVar14[-0xf] | uVar27 & uVar26;
                uVar30 = ~uVar29 & puVar14[-10] | uVar30 & uVar29;
                uVar22 = ~uVar31 & puVar14[-5] | uVar22 & uVar31;
                uVar23 = ~uVar32 & *puVar14 | uVar23 & uVar32;
                puVar14 = puVar14 + 0x28;
                lVar8 = lVar8 + 8;
              } while (lVar8 != 0);
              uVar5 = uVar5 + (uVar18 - uVar16);
              uVar26 = -(uint)((int)(uVar24 ^ _DAT_006524b0) < (int)(uVar27 ^ _DAT_006524b0));
              uVar29 = -(uint)((int)(uVar25 ^ _UNK_006524b4) < (int)(uVar30 ^ _UNK_006524b4));
              uVar31 = -(uint)((int)(uVar28 ^ _UNK_006524b8) < (int)(uVar22 ^ _UNK_006524b8));
              uVar32 = -(uint)((int)(uVar21 ^ _UNK_006524bc) < (int)(uVar23 ^ _UNK_006524bc));
              uVar27 = ~uVar26 & uVar27 | uVar24 & uVar26;
              uVar30 = ~uVar29 & uVar30 | uVar25 & uVar29;
              uVar28 = ~uVar31 & uVar22 | uVar28 & uVar31;
              uVar21 = ~uVar32 & uVar23 | uVar21 & uVar32;
              uVar24 = -(uint)((int)(uVar27 ^ _DAT_006524b0) < (int)(uVar28 ^ _DAT_006524b0));
              uVar25 = -(uint)((int)(uVar30 ^ _UNK_006524b4) < (int)(uVar21 ^ _UNK_006524b4));
              uVar24 = ~uVar24 & uVar28 | uVar27 & uVar24;
              uVar25 = ~uVar25 & uVar21 | uVar30 & uVar25;
              uVar28 = -(uint)((int)(uVar24 ^ _DAT_006524b0) < (int)(uVar25 ^ _DAT_006524b0));
              uVar24 = ~uVar28 & uVar25 | uVar24 & uVar28;
            }
            lVar8 = uVar7 - uVar5;
            puVar14 = (uint *)(lVar15 + uVar5 * 0x14 + 8);
            do {
              if (*puVar14 < uVar24) {
                uVar24 = *puVar14;
              }
              puVar14 = puVar14 + 5;
              lVar8 = lVar8 + -1;
            } while (lVar8 != 0);
          }
        }
        else {
          uVar24 = *(uint *)(lVar15 + 8 + uVar5 * 0x14);
          uVar25 = *(uint *)(lVar15 + 8 + (ulong)(uVar2 - 1) * 0x14);
          if (uVar25 < uVar24) {
            uVar24 = uVar25;
          }
        }
      }
      hb_buffer_t::_infos_set_glyph_flags(param_3,lVar15,uVar3,uVar2,uVar24,3);
      uVar24 = *(uint *)(param_3 + 0x60);
      lVar15 = *(long *)(param_3 + 0x70);
    }
    uVar5 = uVar6 & 0xffffffff;
    uVar2 = uVar17 + 1;
    if (uVar17 + 1 < uVar24) {
      uVar2 = uVar24;
    }
    uVar6 = uVar6 & 0xffffffff;
    do {
      uVar3 = (int)uVar6 + 1;
      uVar6 = (ulong)uVar3;
      if (uVar24 <= uVar3) {
        uVar6 = (ulong)uVar2;
        break;
      }
    } while (*(char *)(lVar15 + 0xf + uVar5 * 0x14) == *(char *)(lVar15 + 0xf + (ulong)uVar3 * 0x14)
            );
    uVar5 = uVar11;
    if (uVar19 <= uVar17) {
      return 0;
    }
  } while( true );
}


