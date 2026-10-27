// Function : setup_syllables_myanmar
// Namespace: 
// Entry    : 004257a0
// Prototype: undefined8 setup_syllables_myanmar(undefined8 param_1, undefined8 param_2, hb_buffer_t * param_3)
// Body     : 004257a0 - 0042603d


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* setup_syllables_myanmar(hb_ot_shape_plan_t const*, hb_font_t*, hb_buffer_t*) */

undefined8 __cdecl
setup_syllables_myanmar(undefined8 param_1,undefined8 param_2,hb_buffer_t *param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  char cVar8;
  byte bVar9;
  uint *puVar10;
  char *pcVar11;
  byte *pbVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
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
  
  param_3[0xb8] = (hb_buffer_t)((byte)param_3[0xb8] | 8);
  lVar13 = *(long *)(param_3 + 0x70);
  uVar1 = *(uint *)(param_3 + 0x60);
  iVar20 = 1;
  iVar14 = 0;
  uVar2 = 0;
  uVar18 = 0;
  if (uVar1 == 0) goto LAB_00425d6b;
LAB_004257da:
  lVar15 = (long)iVar14;
  if ((&_myanmar_syllable_machine_from_state_actions)[lVar15] == '\x02') {
    uVar2 = uVar18;
  }
  bVar9 = *(byte *)(lVar13 + 0x12 + (ulong)uVar18 * 0x14);
  lVar7 = (long)(char)(&_myanmar_syllable_machine_key_spans)[lVar15];
  if (((byte)(&_myanmar_syllable_machine_trans_keys)[lVar15 * 2] <= bVar9) &&
     (bVar9 <= (byte)(&DAT_005ebd41)[lVar15 * 2])) {
    lVar7 = (ulong)bVar9 - (ulong)(byte)(&_myanmar_syllable_machine_trans_keys)[lVar15 * 2];
  }
  uVar3 = (ulong)(char)_myanmar_syllable_machine_indicies
                       [(short)(&_myanmar_syllable_machine_index_offsets)[lVar15] + lVar7];
  do {
    iVar14 = (int)(char)_myanmar_syllable_machine_trans_targs[uVar3];
    if ((0xffe7ffffedfffeeU >> (uVar3 & 0x3f) & 1) != 0) goto switchD_00425883_default;
    cVar8 = (char)iVar20;
    switch(_myanmar_syllable_machine_trans_actions[uVar3]) {
    case 3:
      uVar6 = uVar18 + 1;
      if (uVar2 < uVar6) {
        bVar9 = cVar8 << 4 | 2;
        uVar3 = (ulong)uVar2;
        uVar4 = ~uVar3;
        if ((uVar6 - uVar2 & 7) != 0) {
          pbVar12 = (byte *)(lVar13 + uVar3 * 0x14 + 0xf);
          lVar15 = 0;
          do {
            *pbVar12 = bVar9;
            lVar15 = lVar15 + -1;
            pbVar12 = pbVar12 + 0x14;
          } while (-lVar15 != ((ulong)(uVar6 - uVar2) & 7));
          uVar3 = uVar3 - lVar15;
        }
        if (6 < uVar4 + uVar6) {
          lVar15 = uVar6 - uVar3;
          pbVar12 = (byte *)(lVar13 + uVar3 * 0x14 + 0x9b);
          do {
            pbVar12[-0x8c] = bVar9;
            pbVar12[-0x78] = bVar9;
            pbVar12[-100] = bVar9;
            pbVar12[-0x50] = bVar9;
            pbVar12[-0x3c] = bVar9;
            pbVar12[-0x28] = bVar9;
            pbVar12[-0x14] = bVar9;
            *pbVar12 = bVar9;
            pbVar12 = pbVar12 + 0xa0;
            lVar15 = lVar15 + -8;
          } while (lVar15 != 0);
        }
      }
      goto LAB_00425b07;
    case 4:
      uVar6 = uVar18 + 1;
      if (uVar2 < uVar6) {
        bVar9 = cVar8 << 4 | 2;
        uVar3 = (ulong)uVar2;
        uVar4 = ~uVar3;
        if ((uVar6 - uVar2 & 7) != 0) {
          pbVar12 = (byte *)(lVar13 + uVar3 * 0x14 + 0xf);
          lVar15 = 0;
          do {
            *pbVar12 = bVar9;
            lVar15 = lVar15 + -1;
            pbVar12 = pbVar12 + 0x14;
          } while (-lVar15 != ((ulong)(uVar6 - uVar2) & 7));
          uVar3 = uVar3 - lVar15;
        }
        if (6 < uVar4 + uVar6) {
          lVar15 = uVar6 - uVar3;
          pbVar12 = (byte *)(lVar13 + uVar3 * 0x14 + 0x9b);
          do {
            pbVar12[-0x8c] = bVar9;
            pbVar12[-0x78] = bVar9;
            pbVar12[-100] = bVar9;
            pbVar12[-0x50] = bVar9;
            pbVar12[-0x3c] = bVar9;
            pbVar12[-0x28] = bVar9;
            pbVar12[-0x14] = bVar9;
            *pbVar12 = bVar9;
            pbVar12 = pbVar12 + 0xa0;
            lVar15 = lVar15 + -8;
          } while (lVar15 != 0);
        }
      }
      goto LAB_00425b07;
    case 5:
      if (uVar2 < uVar18) {
        cVar8 = cVar8 << 4;
        uVar4 = (ulong)uVar2;
        uVar3 = ~uVar4;
        if ((uVar18 - uVar2 & 7) != 0) {
          pcVar11 = (char *)(lVar13 + uVar4 * 0x14 + 0xf);
          lVar15 = 0;
          do {
            *pcVar11 = cVar8;
            lVar15 = lVar15 + -1;
            pcVar11 = pcVar11 + 0x14;
          } while (-lVar15 != ((ulong)(uVar18 - uVar2) & 7));
          uVar4 = uVar4 - lVar15;
        }
        if (6 < uVar3 + uVar18) {
          lVar15 = uVar18 - uVar4;
          pcVar11 = (char *)(lVar13 + uVar4 * 0x14 + 0x9b);
          do {
            pcVar11[-0x8c] = cVar8;
            pcVar11[-0x78] = cVar8;
            pcVar11[-100] = cVar8;
            pcVar11[-0x50] = cVar8;
            pcVar11[-0x3c] = cVar8;
            pcVar11[-0x28] = cVar8;
            pcVar11[-0x14] = cVar8;
            *pcVar11 = cVar8;
            pcVar11 = pcVar11 + 0xa0;
            lVar15 = lVar15 + -8;
          } while (lVar15 != 0);
        }
      }
      goto LAB_00425d36;
    case 6:
      uVar6 = uVar18 + 1;
      if (uVar2 < uVar6) {
        cVar8 = cVar8 << 4;
        uVar3 = (ulong)uVar2;
        uVar4 = ~uVar3;
        if ((uVar6 - uVar2 & 7) != 0) {
          pcVar11 = (char *)(lVar13 + uVar3 * 0x14 + 0xf);
          lVar15 = 0;
          do {
            *pcVar11 = cVar8;
            lVar15 = lVar15 + -1;
            pcVar11 = pcVar11 + 0x14;
          } while (-lVar15 != ((ulong)(uVar6 - uVar2) & 7));
          uVar3 = uVar3 - lVar15;
        }
        if (6 < uVar4 + uVar6) {
          lVar15 = uVar6 - uVar3;
          pcVar11 = (char *)(lVar13 + uVar3 * 0x14 + 0x9b);
          do {
            pcVar11[-0x8c] = cVar8;
            pcVar11[-0x78] = cVar8;
            pcVar11[-100] = cVar8;
            pcVar11[-0x50] = cVar8;
            pcVar11[-0x3c] = cVar8;
            pcVar11[-0x28] = cVar8;
            pcVar11[-0x14] = cVar8;
            *pcVar11 = cVar8;
            pcVar11 = pcVar11 + 0xa0;
            lVar15 = lVar15 + -8;
          } while (lVar15 != 0);
        }
      }
LAB_00425b07:
      iVar20 = iVar20 + 1;
      if (iVar20 == 0x10) {
        iVar20 = 1;
      }
      break;
    case 7:
      if (uVar2 < uVar18) {
        bVar9 = cVar8 << 4 | 1;
        uVar4 = (ulong)uVar2;
        uVar3 = ~uVar4;
        if ((uVar18 - uVar2 & 7) != 0) {
          pbVar12 = (byte *)(lVar13 + uVar4 * 0x14 + 0xf);
          lVar15 = 0;
          do {
            *pbVar12 = bVar9;
            lVar15 = lVar15 + -1;
            pbVar12 = pbVar12 + 0x14;
          } while (-lVar15 != ((ulong)(uVar18 - uVar2) & 7));
          uVar4 = uVar4 - lVar15;
        }
        if (6 < uVar3 + uVar18) {
          lVar15 = uVar18 - uVar4;
          pbVar12 = (byte *)(lVar13 + uVar4 * 0x14 + 0x9b);
          do {
            pbVar12[-0x8c] = bVar9;
            pbVar12[-0x78] = bVar9;
            pbVar12[-100] = bVar9;
            pbVar12[-0x50] = bVar9;
            pbVar12[-0x3c] = bVar9;
            pbVar12[-0x28] = bVar9;
            pbVar12[-0x14] = bVar9;
            *pbVar12 = bVar9;
            pbVar12 = pbVar12 + 0xa0;
            lVar15 = lVar15 + -8;
          } while (lVar15 != 0);
        }
      }
      iVar20 = iVar20 + 1;
      if (iVar20 == 0x10) {
        iVar20 = 1;
      }
      param_3[0xc0] = (hb_buffer_t)((byte)param_3[0xc0] | 0x40);
      goto LAB_00425d47;
    case 8:
      uVar6 = uVar18 + 1;
      if (uVar2 < uVar6) {
        bVar9 = cVar8 << 4 | 1;
        uVar3 = (ulong)uVar2;
        uVar4 = ~uVar3;
        if ((uVar6 - uVar2 & 7) != 0) {
          pbVar12 = (byte *)(lVar13 + uVar3 * 0x14 + 0xf);
          lVar15 = 0;
          do {
            *pbVar12 = bVar9;
            lVar15 = lVar15 + -1;
            pbVar12 = pbVar12 + 0x14;
          } while (-lVar15 != ((ulong)(uVar6 - uVar2) & 7));
          uVar3 = uVar3 - lVar15;
        }
        if (6 < uVar4 + uVar6) {
          lVar15 = uVar6 - uVar3;
          pbVar12 = (byte *)(lVar13 + uVar3 * 0x14 + 0x9b);
          do {
            pbVar12[-0x8c] = bVar9;
            pbVar12[-0x78] = bVar9;
            pbVar12[-100] = bVar9;
            pbVar12[-0x50] = bVar9;
            pbVar12[-0x3c] = bVar9;
            pbVar12[-0x28] = bVar9;
            pbVar12[-0x14] = bVar9;
            *pbVar12 = bVar9;
            pbVar12 = pbVar12 + 0xa0;
            lVar15 = lVar15 + -8;
          } while (lVar15 != 0);
        }
      }
      iVar20 = iVar20 + 1;
      if (iVar20 == 0x10) {
        iVar20 = 1;
      }
      param_3[0xc0] = (hb_buffer_t)((byte)param_3[0xc0] | 0x40);
      break;
    case 9:
      if (uVar2 < uVar18) {
        bVar9 = cVar8 << 4 | 2;
        uVar4 = (ulong)uVar2;
        uVar3 = ~uVar4;
        if ((uVar18 - uVar2 & 7) != 0) {
          pbVar12 = (byte *)(lVar13 + uVar4 * 0x14 + 0xf);
          lVar15 = 0;
          do {
            *pbVar12 = bVar9;
            lVar15 = lVar15 + -1;
            pbVar12 = pbVar12 + 0x14;
          } while (-lVar15 != ((ulong)(uVar18 - uVar2) & 7));
          uVar4 = uVar4 - lVar15;
        }
        if (6 < uVar3 + uVar18) {
          lVar15 = uVar18 - uVar4;
          pbVar12 = (byte *)(lVar13 + uVar4 * 0x14 + 0x9b);
          do {
            pbVar12[-0x8c] = bVar9;
            pbVar12[-0x78] = bVar9;
            pbVar12[-100] = bVar9;
            pbVar12[-0x50] = bVar9;
            pbVar12[-0x3c] = bVar9;
            pbVar12[-0x28] = bVar9;
            pbVar12[-0x14] = bVar9;
            *pbVar12 = bVar9;
            pbVar12 = pbVar12 + 0xa0;
            lVar15 = lVar15 + -8;
          } while (lVar15 != 0);
        }
      }
LAB_00425d36:
      iVar20 = iVar20 + 1;
      if (iVar20 == 0x10) {
        iVar20 = 1;
      }
LAB_00425d47:
      uVar18 = uVar18 - 1;
    }
switchD_00425883_default:
    if (_myanmar_syllable_machine_to_state_actions[iVar14] == '\x01') {
      uVar2 = 0;
    }
    uVar18 = uVar18 + 1;
    if (uVar18 != uVar1) goto LAB_004257da;
LAB_00425d6b:
    if (iVar14 == 0) {
      uVar1 = *(uint *)(param_3 + 0x60);
      if (uVar1 == 0) {
        return 0;
      }
      lVar13 = *(long *)(param_3 + 0x70);
      uVar3 = 0;
      break;
    }
    uVar3 = (long)(short)(&_myanmar_syllable_machine_eof_trans)[iVar14] - 1;
    uVar18 = uVar1;
  } while( true );
  while (uVar3 = uVar4,
        *(char *)(lVar13 + 0xf) == *(char *)(lVar13 + 0xf + (uVar4 & 0xffffffff) * 0x14)) {
    uVar4 = uVar3 + 1;
    if (uVar1 - 1 == uVar3) {
      uVar4 = (ulong)uVar1;
      break;
    }
  }
  uVar17 = (ulong)uVar1;
  uVar3 = 0;
  do {
    uVar18 = (uint)uVar4;
    uVar19 = uVar4 & 0xffffffff;
    uVar5 = uVar4 & 0xffffffff;
    if ((uint)uVar17 < uVar18) {
      uVar5 = uVar17;
    }
    uVar2 = (uint)uVar5;
    uVar6 = (uint)uVar3;
    if (1 < uVar2 - uVar6) {
      param_3[0xc0] = (hb_buffer_t)((byte)param_3[0xc0] | 0x20);
      uVar24 = 0xffffffff;
      if (uVar2 != uVar6) {
        if (*(int *)(param_3 + 0x1c) == 2) {
          if (uVar6 < uVar2) {
            uVar17 = uVar5 - uVar3;
            uVar24 = 0xffffffff;
            if (8 < uVar17) {
              uVar16 = (ulong)((uint)uVar17 & 7);
              if (uVar16 == 0) {
                uVar16 = 8;
              }
              lVar15 = (uVar16 + uVar3) - uVar5;
              puVar10 = (uint *)(lVar13 + uVar3 * 0x14 + 0x94);
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
                                (int)(puVar10[-0x23] ^ _DAT_006524b0));
                uVar29 = -(uint)((int)(uVar25 ^ _UNK_006524b4) <
                                (int)(puVar10[-0x1e] ^ _UNK_006524b4));
                uVar31 = -(uint)((int)(uVar28 ^ _UNK_006524b8) <
                                (int)(puVar10[-0x19] ^ _UNK_006524b8));
                uVar32 = -(uint)((int)(uVar21 ^ _UNK_006524bc) <
                                (int)(puVar10[-0x14] ^ _UNK_006524bc));
                uVar24 = ~uVar26 & puVar10[-0x23] | uVar24 & uVar26;
                uVar25 = ~uVar29 & puVar10[-0x1e] | uVar25 & uVar29;
                uVar28 = ~uVar31 & puVar10[-0x19] | uVar28 & uVar31;
                uVar21 = ~uVar32 & puVar10[-0x14] | uVar21 & uVar32;
                uVar26 = -(uint)((int)(uVar27 ^ _DAT_006524b0) <
                                (int)(puVar10[-0xf] ^ _DAT_006524b0));
                uVar29 = -(uint)((int)(uVar30 ^ _UNK_006524b4) < (int)(puVar10[-10] ^ _UNK_006524b4)
                                );
                uVar31 = -(uint)((int)(uVar22 ^ _UNK_006524b8) < (int)(puVar10[-5] ^ _UNK_006524b8))
                ;
                uVar32 = -(uint)((int)(uVar23 ^ _UNK_006524bc) < (int)(*puVar10 ^ _UNK_006524bc));
                uVar27 = ~uVar26 & puVar10[-0xf] | uVar27 & uVar26;
                uVar30 = ~uVar29 & puVar10[-10] | uVar30 & uVar29;
                uVar22 = ~uVar31 & puVar10[-5] | uVar22 & uVar31;
                uVar23 = ~uVar32 & *puVar10 | uVar23 & uVar32;
                puVar10 = puVar10 + 0x28;
                lVar15 = lVar15 + 8;
              } while (lVar15 != 0);
              uVar3 = uVar3 + (uVar17 - uVar16);
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
            lVar15 = uVar5 - uVar3;
            puVar10 = (uint *)(lVar13 + uVar3 * 0x14 + 8);
            do {
              if (*puVar10 < uVar24) {
                uVar24 = *puVar10;
              }
              puVar10 = puVar10 + 5;
              lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
          }
        }
        else {
          uVar24 = *(uint *)(lVar13 + 8 + uVar3 * 0x14);
          uVar25 = *(uint *)(lVar13 + 8 + (ulong)(uVar2 - 1) * 0x14);
          if (uVar25 < uVar24) {
            uVar24 = uVar25;
          }
        }
      }
      hb_buffer_t::_infos_set_glyph_flags(param_3,lVar13,uVar6,uVar2,uVar24,3);
      uVar17 = (ulong)*(uint *)(param_3 + 0x60);
      lVar13 = *(long *)(param_3 + 0x70);
    }
    uVar5 = uVar4 & 0xffffffff;
    uVar3 = (ulong)(uVar18 + 1);
    if (uVar18 + 1 < (uint)uVar17) {
      uVar3 = uVar17;
    }
    uVar4 = uVar4 & 0xffffffff;
    do {
      uVar2 = (int)uVar4 + 1;
      uVar4 = (ulong)uVar2;
      if ((uint)uVar17 <= uVar2) {
        uVar4 = uVar3;
        break;
      }
    } while (*(char *)(lVar13 + 0xf + uVar5 * 0x14) == *(char *)(lVar13 + 0xf + (ulong)uVar2 * 0x14)
            );
    uVar3 = uVar19;
    if (uVar1 <= uVar18) {
      return 0;
    }
  } while( true );
}


