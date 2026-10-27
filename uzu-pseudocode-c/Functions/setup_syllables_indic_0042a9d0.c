// Function : setup_syllables_indic
// Namespace: 
// Entry    : 0042a9d0
// Prototype: undefined8 setup_syllables_indic(undefined8 param_1, undefined8 param_2, hb_buffer_t * param_3)
// Body     : 0042a9d0 - 0042b873


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* setup_syllables_indic(hb_ot_shape_plan_t const*, hb_font_t*, hb_buffer_t*) */

undefined8 __cdecl setup_syllables_indic(undefined8 param_1,undefined8 param_2,hb_buffer_t *param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  char cVar5;
  byte bVar6;
  ulong uVar7;
  char *pcVar8;
  byte *pbVar9;
  uint *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
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
  int local_3c;
  
  param_3[0xb8] = (hb_buffer_t)((byte)param_3[0xb8] | 8);
  lVar11 = *(long *)(param_3 + 0x70);
  uVar22 = *(uint *)(param_3 + 0x60);
  iVar17 = 1;
  local_3c = 0;
  uVar1 = 0x1f;
  uVar18 = 0;
  uVar2 = 0;
  uVar16 = 0;
  if (uVar22 == 0) goto LAB_0042b3fe;
LAB_0042aa20:
  uVar14 = (ulong)uVar1;
  if (_indic_syllable_machine_from_state_actions[uVar14] == '\n') {
    uVar2 = uVar16;
  }
  bVar6 = *(byte *)(lVar11 + 0x12 + (ulong)uVar16 * 0x14);
  lVar13 = (long)(char)_indic_syllable_machine_key_spans[uVar14];
  if (((byte)_indic_syllable_machine_trans_keys[uVar14 * 2] <= bVar6) &&
     (bVar6 <= (byte)_indic_syllable_machine_trans_keys[uVar14 * 2 + 1])) {
    lVar13 = (ulong)bVar6 - (ulong)(byte)_indic_syllable_machine_trans_keys[uVar14 * 2];
  }
  uVar23 = (uint)(byte)_indic_syllable_machine_indicies
                       [*(short *)(_indic_syllable_machine_index_offsets + uVar14 * 2) + lVar13];
  do {
    uVar1 = (uint)(byte)_indic_syllable_machine_trans_targs[uVar23];
    uVar26 = uVar16;
    if ((char)_indic_syllable_machine_trans_actions[uVar23] == 0) goto switchD_0042aabe_caseD_9;
    cVar5 = (char)iVar17;
    switch((int)(char)_indic_syllable_machine_trans_actions[uVar23]) {
    case 1:
      uVar26 = uVar18 - 1;
      if (uVar2 < uVar18) {
        cVar5 = cVar5 << 4;
        uVar14 = (ulong)uVar2;
        uVar3 = ~uVar14;
        if ((uVar18 - uVar2 & 7) != 0) {
          pcVar8 = (char *)(lVar11 + uVar14 * 0x14 + 0xf);
          lVar13 = 0;
          do {
            *pcVar8 = cVar5;
            lVar13 = lVar13 + -1;
            pcVar8 = pcVar8 + 0x14;
          } while (-lVar13 != ((ulong)(uVar18 - uVar2) & 7));
          uVar14 = uVar14 - lVar13;
        }
        if (6 < uVar3 + uVar18) {
          lVar13 = uVar18 - uVar14;
          pcVar8 = (char *)(lVar11 + uVar14 * 0x14 + 0x9b);
          do {
            pcVar8[-0x8c] = cVar5;
            pcVar8[-0x78] = cVar5;
            pcVar8[-100] = cVar5;
            pcVar8[-0x50] = cVar5;
            pcVar8[-0x3c] = cVar5;
            pcVar8[-0x28] = cVar5;
            pcVar8[-0x14] = cVar5;
            *pcVar8 = cVar5;
            pcVar8 = pcVar8 + 0xa0;
            lVar13 = lVar13 + -8;
          } while (lVar13 != 0);
        }
      }
      goto LAB_0042b257;
    case 2:
      uVar18 = uVar16 + 1;
      break;
    case 3:
      uVar26 = uVar18 - 1;
      if (uVar2 < uVar18) {
        bVar6 = cVar5 << 4 | 1;
        uVar14 = (ulong)uVar2;
        uVar3 = ~uVar14;
        if ((uVar18 - uVar2 & 7) != 0) {
          pbVar9 = (byte *)(lVar11 + uVar14 * 0x14 + 0xf);
          lVar13 = 0;
          do {
            *pbVar9 = bVar6;
            lVar13 = lVar13 + -1;
            pbVar9 = pbVar9 + 0x14;
          } while (-lVar13 != ((ulong)(uVar18 - uVar2) & 7));
          uVar14 = uVar14 - lVar13;
        }
        if (6 < uVar3 + uVar18) {
          lVar13 = uVar18 - uVar14;
          pbVar9 = (byte *)(lVar11 + uVar14 * 0x14 + 0x9b);
          do {
            pbVar9[-0x8c] = bVar6;
            pbVar9[-0x78] = bVar6;
            pbVar9[-100] = bVar6;
            pbVar9[-0x50] = bVar6;
            pbVar9[-0x3c] = bVar6;
            pbVar9[-0x28] = bVar6;
            pbVar9[-0x14] = bVar6;
            *pbVar9 = bVar6;
            pbVar9 = pbVar9 + 0xa0;
            lVar13 = lVar13 + -8;
          } while (lVar13 != 0);
        }
      }
      goto LAB_0042b257;
    case 4:
      if (uVar2 < uVar18) {
        bVar6 = cVar5 << 4 | 4;
        uVar14 = (ulong)uVar2;
        uVar3 = ~uVar14;
        if ((uVar18 - uVar2 & 7) != 0) {
          pbVar9 = (byte *)(lVar11 + uVar14 * 0x14 + 0xf);
          lVar13 = 0;
          do {
            *pbVar9 = bVar6;
            lVar13 = lVar13 + -1;
            pbVar9 = pbVar9 + 0x14;
          } while (-lVar13 != ((ulong)(uVar18 - uVar2) & 7));
          uVar14 = uVar14 - lVar13;
        }
        if (6 < uVar3 + uVar18) {
          lVar13 = uVar18 - uVar14;
          pbVar9 = (byte *)(lVar11 + uVar14 * 0x14 + 0x9b);
          do {
            pbVar9[-0x8c] = bVar6;
            pbVar9[-0x78] = bVar6;
            pbVar9[-100] = bVar6;
            pbVar9[-0x50] = bVar6;
            pbVar9[-0x3c] = bVar6;
            pbVar9[-0x28] = bVar6;
            pbVar9[-0x14] = bVar6;
            *pbVar9 = bVar6;
            pbVar9 = pbVar9 + 0xa0;
            lVar13 = lVar13 + -8;
          } while (lVar13 != 0);
        }
      }
      iVar17 = iVar17 + 1;
      if (iVar17 == 0x10) {
        iVar17 = 1;
      }
      param_3[0xc0] = (hb_buffer_t)((byte)param_3[0xc0] | 0x40);
      uVar26 = uVar18 - 1;
      break;
    case 5:
      uVar18 = uVar16 + 1;
      local_3c = 5;
      break;
    case 6:
      if (local_3c == 6) {
        if (uVar2 < uVar18) {
          bVar6 = cVar5 << 4 | 5;
          uVar14 = (ulong)uVar2;
          uVar3 = ~uVar14;
          if ((uVar18 - uVar2 & 7) != 0) {
            pbVar9 = (byte *)(lVar11 + uVar14 * 0x14 + 0xf);
            lVar13 = 0;
            do {
              *pbVar9 = bVar6;
              lVar13 = lVar13 + -1;
              pbVar9 = pbVar9 + 0x14;
            } while (-lVar13 != ((ulong)(uVar18 - uVar2) & 7));
            uVar14 = uVar14 - lVar13;
          }
          if (6 < uVar3 + uVar18) {
            lVar13 = uVar18 - uVar14;
            pbVar9 = (byte *)(lVar11 + uVar14 * 0x14 + 0x9b);
            do {
              pbVar9[-0x8c] = bVar6;
              pbVar9[-0x78] = bVar6;
              pbVar9[-100] = bVar6;
              pbVar9[-0x50] = bVar6;
              pbVar9[-0x3c] = bVar6;
              pbVar9[-0x28] = bVar6;
              pbVar9[-0x14] = bVar6;
              *pbVar9 = bVar6;
              pbVar9 = pbVar9 + 0xa0;
              lVar13 = lVar13 + -8;
            } while (lVar13 != 0);
          }
        }
        iVar17 = iVar17 + 1;
        if (iVar17 == 0x10) {
          iVar17 = 1;
        }
        local_3c = 6;
        uVar26 = uVar18 - 1;
      }
      else if (local_3c == 5) {
        if (uVar2 < uVar18) {
          bVar6 = cVar5 << 4 | 4;
          uVar14 = (ulong)uVar2;
          uVar3 = ~uVar14;
          if ((uVar18 - uVar2 & 7) != 0) {
            pbVar9 = (byte *)(lVar11 + uVar14 * 0x14 + 0xf);
            lVar13 = 0;
            do {
              *pbVar9 = bVar6;
              lVar13 = lVar13 + -1;
              pbVar9 = pbVar9 + 0x14;
            } while (-lVar13 != ((ulong)(uVar18 - uVar2) & 7));
            uVar14 = uVar14 - lVar13;
          }
          if (6 < uVar3 + uVar18) {
            lVar13 = uVar18 - uVar14;
            pbVar9 = (byte *)(lVar11 + uVar14 * 0x14 + 0x9b);
            do {
              pbVar9[-0x8c] = bVar6;
              pbVar9[-0x78] = bVar6;
              pbVar9[-100] = bVar6;
              pbVar9[-0x50] = bVar6;
              pbVar9[-0x3c] = bVar6;
              pbVar9[-0x28] = bVar6;
              pbVar9[-0x14] = bVar6;
              *pbVar9 = bVar6;
              pbVar9 = pbVar9 + 0xa0;
              lVar13 = lVar13 + -8;
            } while (lVar13 != 0);
          }
        }
        iVar17 = iVar17 + 1;
        if (iVar17 == 0x10) {
          iVar17 = 1;
        }
        param_3[0xc0] = (hb_buffer_t)((byte)param_3[0xc0] | 0x40);
        local_3c = 5;
        uVar26 = uVar18 - 1;
      }
      else if (local_3c == 1) {
        if (uVar2 < uVar18) {
          cVar5 = cVar5 << 4;
          uVar14 = (ulong)uVar2;
          uVar3 = ~uVar14;
          if ((uVar18 - uVar2 & 7) != 0) {
            pcVar8 = (char *)(lVar11 + uVar14 * 0x14 + 0xf);
            lVar13 = 0;
            do {
              *pcVar8 = cVar5;
              lVar13 = lVar13 + -1;
              pcVar8 = pcVar8 + 0x14;
            } while (-lVar13 != ((ulong)(uVar18 - uVar2) & 7));
            uVar14 = uVar14 - lVar13;
          }
          if (6 < uVar3 + uVar18) {
            lVar13 = uVar18 - uVar14;
            pcVar8 = (char *)(lVar11 + uVar14 * 0x14 + 0x9b);
            do {
              pcVar8[-0x8c] = cVar5;
              pcVar8[-0x78] = cVar5;
              pcVar8[-100] = cVar5;
              pcVar8[-0x50] = cVar5;
              pcVar8[-0x3c] = cVar5;
              pcVar8[-0x28] = cVar5;
              pcVar8[-0x14] = cVar5;
              *pcVar8 = cVar5;
              pcVar8 = pcVar8 + 0xa0;
              lVar13 = lVar13 + -8;
            } while (lVar13 != 0);
          }
        }
        iVar17 = iVar17 + 1;
        local_3c = 1;
        if (iVar17 == 0x10) {
          iVar17 = 1;
        }
        uVar26 = uVar18 - 1;
      }
      break;
    case 7:
      uVar26 = uVar18 - 1;
      if (uVar2 < uVar18) {
        bVar6 = cVar5 << 4 | 2;
        uVar14 = (ulong)uVar2;
        uVar3 = ~uVar14;
        if ((uVar18 - uVar2 & 7) != 0) {
          pbVar9 = (byte *)(lVar11 + uVar14 * 0x14 + 0xf);
          lVar13 = 0;
          do {
            *pbVar9 = bVar6;
            lVar13 = lVar13 + -1;
            pbVar9 = pbVar9 + 0x14;
          } while (-lVar13 != ((ulong)(uVar18 - uVar2) & 7));
          uVar14 = uVar14 - lVar13;
        }
        if (6 < uVar3 + uVar18) {
          lVar13 = uVar18 - uVar14;
          pbVar9 = (byte *)(lVar11 + uVar14 * 0x14 + 0x9b);
          do {
            pbVar9[-0x8c] = bVar6;
            pbVar9[-0x78] = bVar6;
            pbVar9[-100] = bVar6;
            pbVar9[-0x50] = bVar6;
            pbVar9[-0x3c] = bVar6;
            pbVar9[-0x28] = bVar6;
            pbVar9[-0x14] = bVar6;
            *pbVar9 = bVar6;
            pbVar9 = pbVar9 + 0xa0;
            lVar13 = lVar13 + -8;
          } while (lVar13 != 0);
        }
      }
      goto LAB_0042b257;
    case 8:
      uVar26 = uVar18 - 1;
      if (uVar2 < uVar18) {
        bVar6 = cVar5 << 4 | 3;
        uVar14 = (ulong)uVar2;
        uVar3 = ~uVar14;
        if ((uVar18 - uVar2 & 7) != 0) {
          pbVar9 = (byte *)(lVar11 + uVar14 * 0x14 + 0xf);
          lVar13 = 0;
          do {
            *pbVar9 = bVar6;
            lVar13 = lVar13 + -1;
            pbVar9 = pbVar9 + 0x14;
          } while (-lVar13 != ((ulong)(uVar18 - uVar2) & 7));
          uVar14 = uVar14 - lVar13;
        }
        if (6 < uVar3 + uVar18) {
          lVar13 = uVar18 - uVar14;
          pbVar9 = (byte *)(lVar11 + uVar14 * 0x14 + 0x9b);
          do {
            pbVar9[-0x8c] = bVar6;
            pbVar9[-0x78] = bVar6;
            pbVar9[-100] = bVar6;
            pbVar9[-0x50] = bVar6;
            pbVar9[-0x3c] = bVar6;
            pbVar9[-0x28] = bVar6;
            pbVar9[-0x14] = bVar6;
            *pbVar9 = bVar6;
            pbVar9 = pbVar9 + 0xa0;
            lVar13 = lVar13 + -8;
          } while (lVar13 != 0);
        }
      }
      goto LAB_0042b257;
    case 0xb:
      uVar18 = uVar16 + 1;
      if (uVar2 < uVar18) {
        bVar6 = cVar5 << 4 | 5;
        uVar14 = (ulong)uVar2;
        uVar3 = ~uVar14;
        if ((uVar18 - uVar2 & 7) != 0) {
          pbVar9 = (byte *)(lVar11 + uVar14 * 0x14 + 0xf);
          lVar13 = 0;
          do {
            *pbVar9 = bVar6;
            lVar13 = lVar13 + -1;
            pbVar9 = pbVar9 + 0x14;
          } while (-lVar13 != ((ulong)(uVar18 - uVar2) & 7));
          uVar14 = uVar14 - lVar13;
        }
        if (6 < uVar3 + uVar18) {
          lVar13 = uVar18 - uVar14;
          pbVar9 = (byte *)(lVar11 + uVar14 * 0x14 + 0x9b);
          do {
            pbVar9[-0x8c] = bVar6;
            pbVar9[-0x78] = bVar6;
            pbVar9[-100] = bVar6;
            pbVar9[-0x50] = bVar6;
            pbVar9[-0x3c] = bVar6;
            pbVar9[-0x28] = bVar6;
            pbVar9[-0x14] = bVar6;
            *pbVar9 = bVar6;
            pbVar9 = pbVar9 + 0xa0;
            lVar13 = lVar13 + -8;
          } while (lVar13 != 0);
        }
      }
LAB_0042b257:
      iVar17 = iVar17 + 1;
      if (iVar17 == 0x10) {
        iVar17 = 1;
      }
      break;
    case 0xc:
      uVar18 = uVar16 + 1;
      local_3c = 6;
      break;
    case 0xd:
      if (uVar2 < uVar16) {
        cVar5 = cVar5 << 4;
        uVar14 = (ulong)uVar2;
        uVar3 = ~uVar14;
        if ((uVar16 - uVar2 & 7) != 0) {
          pcVar8 = (char *)(lVar11 + uVar14 * 0x14 + 0xf);
          lVar13 = 0;
          do {
            *pcVar8 = cVar5;
            lVar13 = lVar13 + -1;
            pcVar8 = pcVar8 + 0x14;
          } while (-lVar13 != ((ulong)(uVar16 - uVar2) & 7));
          uVar14 = uVar14 - lVar13;
        }
        if (6 < uVar3 + uVar16) {
          lVar13 = uVar16 - uVar14;
          pcVar8 = (char *)(lVar11 + uVar14 * 0x14 + 0x9b);
          do {
            pcVar8[-0x8c] = cVar5;
            pcVar8[-0x78] = cVar5;
            pcVar8[-100] = cVar5;
            pcVar8[-0x50] = cVar5;
            pcVar8[-0x3c] = cVar5;
            pcVar8[-0x28] = cVar5;
            pcVar8[-0x14] = cVar5;
            *pcVar8 = cVar5;
            pcVar8 = pcVar8 + 0xa0;
            lVar13 = lVar13 + -8;
          } while (lVar13 != 0);
        }
      }
      goto LAB_0042b3c7;
    case 0xe:
      if (uVar2 < uVar16) {
        bVar6 = cVar5 << 4 | 1;
        uVar14 = (ulong)uVar2;
        uVar3 = ~uVar14;
        if ((uVar16 - uVar2 & 7) != 0) {
          pbVar9 = (byte *)(lVar11 + uVar14 * 0x14 + 0xf);
          lVar13 = 0;
          do {
            *pbVar9 = bVar6;
            lVar13 = lVar13 + -1;
            pbVar9 = pbVar9 + 0x14;
          } while (-lVar13 != ((ulong)(uVar16 - uVar2) & 7));
          uVar14 = uVar14 - lVar13;
        }
        if (6 < uVar3 + uVar16) {
          lVar13 = uVar16 - uVar14;
          pbVar9 = (byte *)(lVar11 + uVar14 * 0x14 + 0x9b);
          do {
            pbVar9[-0x8c] = bVar6;
            pbVar9[-0x78] = bVar6;
            pbVar9[-100] = bVar6;
            pbVar9[-0x50] = bVar6;
            pbVar9[-0x3c] = bVar6;
            pbVar9[-0x28] = bVar6;
            pbVar9[-0x14] = bVar6;
            *pbVar9 = bVar6;
            pbVar9 = pbVar9 + 0xa0;
            lVar13 = lVar13 + -8;
          } while (lVar13 != 0);
        }
      }
      goto LAB_0042b3c7;
    case 0xf:
      if (uVar2 < uVar16) {
        bVar6 = cVar5 << 4 | 4;
        uVar14 = (ulong)uVar2;
        uVar3 = ~uVar14;
        if ((uVar16 - uVar2 & 7) != 0) {
          pbVar9 = (byte *)(lVar11 + uVar14 * 0x14 + 0xf);
          lVar13 = 0;
          do {
            *pbVar9 = bVar6;
            lVar13 = lVar13 + -1;
            pbVar9 = pbVar9 + 0x14;
          } while (-lVar13 != ((ulong)(uVar16 - uVar2) & 7));
          uVar14 = uVar14 - lVar13;
        }
        if (6 < uVar3 + uVar16) {
          lVar13 = uVar16 - uVar14;
          pbVar9 = (byte *)(lVar11 + uVar14 * 0x14 + 0x9b);
          do {
            pbVar9[-0x8c] = bVar6;
            pbVar9[-0x78] = bVar6;
            pbVar9[-100] = bVar6;
            pbVar9[-0x50] = bVar6;
            pbVar9[-0x3c] = bVar6;
            pbVar9[-0x28] = bVar6;
            pbVar9[-0x14] = bVar6;
            *pbVar9 = bVar6;
            pbVar9 = pbVar9 + 0xa0;
            lVar13 = lVar13 + -8;
          } while (lVar13 != 0);
        }
      }
      iVar17 = iVar17 + 1;
      if (iVar17 == 0x10) {
        iVar17 = 1;
      }
      param_3[0xc0] = (hb_buffer_t)((byte)param_3[0xc0] | 0x40);
      goto LAB_0042b3d8;
    case 0x10:
      if (uVar2 < uVar16) {
        bVar6 = cVar5 << 4 | 5;
        uVar14 = (ulong)uVar2;
        uVar3 = ~uVar14;
        if ((uVar16 - uVar2 & 7) != 0) {
          pbVar9 = (byte *)(lVar11 + uVar14 * 0x14 + 0xf);
          lVar13 = 0;
          do {
            *pbVar9 = bVar6;
            lVar13 = lVar13 + -1;
            pbVar9 = pbVar9 + 0x14;
          } while (-lVar13 != ((ulong)(uVar16 - uVar2) & 7));
          uVar14 = uVar14 - lVar13;
        }
        if (6 < uVar3 + uVar16) {
          lVar13 = uVar16 - uVar14;
          pbVar9 = (byte *)(lVar11 + uVar14 * 0x14 + 0x9b);
          do {
            pbVar9[-0x8c] = bVar6;
            pbVar9[-0x78] = bVar6;
            pbVar9[-100] = bVar6;
            pbVar9[-0x50] = bVar6;
            pbVar9[-0x3c] = bVar6;
            pbVar9[-0x28] = bVar6;
            pbVar9[-0x14] = bVar6;
            *pbVar9 = bVar6;
            pbVar9 = pbVar9 + 0xa0;
            lVar13 = lVar13 + -8;
          } while (lVar13 != 0);
        }
      }
      goto LAB_0042b3c7;
    case 0x11:
      if (uVar2 < uVar16) {
        bVar6 = cVar5 << 4 | 2;
        uVar14 = (ulong)uVar2;
        uVar3 = ~uVar14;
        if ((uVar16 - uVar2 & 7) != 0) {
          pbVar9 = (byte *)(lVar11 + uVar14 * 0x14 + 0xf);
          lVar13 = 0;
          do {
            *pbVar9 = bVar6;
            lVar13 = lVar13 + -1;
            pbVar9 = pbVar9 + 0x14;
          } while (-lVar13 != ((ulong)(uVar16 - uVar2) & 7));
          uVar14 = uVar14 - lVar13;
        }
        if (6 < uVar3 + uVar16) {
          lVar13 = uVar16 - uVar14;
          pbVar9 = (byte *)(lVar11 + uVar14 * 0x14 + 0x9b);
          do {
            pbVar9[-0x8c] = bVar6;
            pbVar9[-0x78] = bVar6;
            pbVar9[-100] = bVar6;
            pbVar9[-0x50] = bVar6;
            pbVar9[-0x3c] = bVar6;
            pbVar9[-0x28] = bVar6;
            pbVar9[-0x14] = bVar6;
            *pbVar9 = bVar6;
            pbVar9 = pbVar9 + 0xa0;
            lVar13 = lVar13 + -8;
          } while (lVar13 != 0);
        }
      }
      goto LAB_0042b3c7;
    case 0x12:
      uVar18 = uVar16 + 1;
      local_3c = 1;
      break;
    case 0x13:
      if (uVar2 < uVar16) {
        bVar6 = cVar5 << 4 | 3;
        uVar14 = (ulong)uVar2;
        uVar3 = ~uVar14;
        if ((uVar16 - uVar2 & 7) != 0) {
          pbVar9 = (byte *)(lVar11 + uVar14 * 0x14 + 0xf);
          lVar13 = 0;
          do {
            *pbVar9 = bVar6;
            lVar13 = lVar13 + -1;
            pbVar9 = pbVar9 + 0x14;
          } while (-lVar13 != ((ulong)(uVar16 - uVar2) & 7));
          uVar14 = uVar14 - lVar13;
        }
        if (6 < uVar3 + uVar16) {
          lVar13 = uVar16 - uVar14;
          pbVar9 = (byte *)(lVar11 + uVar14 * 0x14 + 0x9b);
          do {
            pbVar9[-0x8c] = bVar6;
            pbVar9[-0x78] = bVar6;
            pbVar9[-100] = bVar6;
            pbVar9[-0x50] = bVar6;
            pbVar9[-0x3c] = bVar6;
            pbVar9[-0x28] = bVar6;
            pbVar9[-0x14] = bVar6;
            *pbVar9 = bVar6;
            pbVar9 = pbVar9 + 0xa0;
            lVar13 = lVar13 + -8;
          } while (lVar13 != 0);
        }
      }
LAB_0042b3c7:
      iVar17 = iVar17 + 1;
      if (iVar17 == 0x10) {
        iVar17 = 1;
      }
LAB_0042b3d8:
      uVar26 = uVar16 - 1;
      uVar18 = uVar16;
    }
switchD_0042aabe_caseD_9:
    if (_indic_syllable_machine_to_state_actions[uVar1] == '\t') {
      uVar2 = 0;
    }
    uVar16 = uVar26 + 1;
    if (uVar16 != uVar22) goto LAB_0042aa20;
LAB_0042b3fe:
    if (uVar1 == 0x1f) {
      uVar18 = *(uint *)(param_3 + 0x60);
      if (uVar18 == 0) {
        return 0;
      }
      lVar11 = *(long *)(param_3 + 0x70);
      uVar14 = 0;
      break;
    }
    uVar23 = (int)*(short *)(_indic_syllable_machine_eof_trans + (ulong)uVar1 * 2) - 1;
    uVar16 = uVar22;
  } while( true );
  while (uVar14 = uVar3,
        *(char *)(lVar11 + 0xf) == *(char *)(lVar11 + 0xf + (uVar3 & 0xffffffff) * 0x14)) {
    uVar3 = uVar14 + 1;
    if (uVar18 - 1 == uVar14) {
      uVar3 = (ulong)uVar18;
      break;
    }
  }
  uVar14 = 0;
  uVar22 = uVar18;
  do {
    uVar16 = (uint)uVar3;
    uVar7 = uVar3 & 0xffffffff;
    uVar4 = uVar3 & 0xffffffff;
    if (uVar22 < uVar16) {
      uVar4 = (ulong)uVar22;
    }
    uVar2 = (uint)uVar4;
    uVar1 = (uint)uVar14;
    if (1 < uVar2 - uVar1) {
      param_3[0xc0] = (hb_buffer_t)((byte)param_3[0xc0] | 0x20);
      uVar22 = 0xffffffff;
      if (uVar2 != uVar1) {
        if (*(int *)(param_3 + 0x1c) == 2) {
          if (uVar1 < uVar2) {
            uVar15 = uVar4 - uVar14;
            uVar22 = 0xffffffff;
            if (8 < uVar15) {
              uVar12 = (ulong)((uint)uVar15 & 7);
              if (uVar12 == 0) {
                uVar12 = 8;
              }
              lVar13 = (uVar12 + uVar14) - uVar4;
              puVar10 = (uint *)(lVar11 + uVar14 * 0x14 + 0x94);
              uVar26 = 0xffffffff;
              uVar22 = 0xffffffff;
              uVar23 = 0xffffffff;
              uVar19 = 0xffffffff;
              uVar20 = 0xffffffff;
              uVar25 = 0xffffffff;
              uVar28 = 0xffffffff;
              uVar21 = 0xffffffff;
              do {
                uVar24 = -(uint)((int)(uVar22 ^ _DAT_006524b0) <
                                (int)(puVar10[-0x23] ^ _DAT_006524b0));
                uVar27 = -(uint)((int)(uVar23 ^ _UNK_006524b4) <
                                (int)(puVar10[-0x1e] ^ _UNK_006524b4));
                uVar29 = -(uint)((int)(uVar26 ^ _UNK_006524b8) <
                                (int)(puVar10[-0x19] ^ _UNK_006524b8));
                uVar30 = -(uint)((int)(uVar19 ^ _UNK_006524bc) <
                                (int)(puVar10[-0x14] ^ _UNK_006524bc));
                uVar22 = ~uVar24 & puVar10[-0x23] | uVar22 & uVar24;
                uVar23 = ~uVar27 & puVar10[-0x1e] | uVar23 & uVar27;
                uVar26 = ~uVar29 & puVar10[-0x19] | uVar26 & uVar29;
                uVar19 = ~uVar30 & puVar10[-0x14] | uVar19 & uVar30;
                uVar24 = -(uint)((int)(uVar25 ^ _DAT_006524b0) <
                                (int)(puVar10[-0xf] ^ _DAT_006524b0));
                uVar27 = -(uint)((int)(uVar28 ^ _UNK_006524b4) < (int)(puVar10[-10] ^ _UNK_006524b4)
                                );
                uVar29 = -(uint)((int)(uVar20 ^ _UNK_006524b8) < (int)(puVar10[-5] ^ _UNK_006524b8))
                ;
                uVar30 = -(uint)((int)(uVar21 ^ _UNK_006524bc) < (int)(*puVar10 ^ _UNK_006524bc));
                uVar25 = ~uVar24 & puVar10[-0xf] | uVar25 & uVar24;
                uVar28 = ~uVar27 & puVar10[-10] | uVar28 & uVar27;
                uVar20 = ~uVar29 & puVar10[-5] | uVar20 & uVar29;
                uVar21 = ~uVar30 & *puVar10 | uVar21 & uVar30;
                puVar10 = puVar10 + 0x28;
                lVar13 = lVar13 + 8;
              } while (lVar13 != 0);
              uVar14 = uVar14 + (uVar15 - uVar12);
              uVar24 = -(uint)((int)(uVar22 ^ _DAT_006524b0) < (int)(uVar25 ^ _DAT_006524b0));
              uVar27 = -(uint)((int)(uVar23 ^ _UNK_006524b4) < (int)(uVar28 ^ _UNK_006524b4));
              uVar29 = -(uint)((int)(uVar26 ^ _UNK_006524b8) < (int)(uVar20 ^ _UNK_006524b8));
              uVar30 = -(uint)((int)(uVar19 ^ _UNK_006524bc) < (int)(uVar21 ^ _UNK_006524bc));
              uVar25 = ~uVar24 & uVar25 | uVar22 & uVar24;
              uVar28 = ~uVar27 & uVar28 | uVar23 & uVar27;
              uVar26 = ~uVar29 & uVar20 | uVar26 & uVar29;
              uVar19 = ~uVar30 & uVar21 | uVar19 & uVar30;
              uVar22 = -(uint)((int)(uVar25 ^ _DAT_006524b0) < (int)(uVar26 ^ _DAT_006524b0));
              uVar23 = -(uint)((int)(uVar28 ^ _UNK_006524b4) < (int)(uVar19 ^ _UNK_006524b4));
              uVar22 = ~uVar22 & uVar26 | uVar25 & uVar22;
              uVar23 = ~uVar23 & uVar19 | uVar28 & uVar23;
              uVar26 = -(uint)((int)(uVar22 ^ _DAT_006524b0) < (int)(uVar23 ^ _DAT_006524b0));
              uVar22 = ~uVar26 & uVar23 | uVar22 & uVar26;
            }
            lVar13 = uVar4 - uVar14;
            puVar10 = (uint *)(lVar11 + uVar14 * 0x14 + 8);
            do {
              if (*puVar10 < uVar22) {
                uVar22 = *puVar10;
              }
              puVar10 = puVar10 + 5;
              lVar13 = lVar13 + -1;
            } while (lVar13 != 0);
          }
        }
        else {
          uVar22 = *(uint *)(lVar11 + 8 + uVar14 * 0x14);
          uVar23 = *(uint *)(lVar11 + 8 + (ulong)(uVar2 - 1) * 0x14);
          if (uVar23 < uVar22) {
            uVar22 = uVar23;
          }
        }
      }
      hb_buffer_t::_infos_set_glyph_flags(param_3,lVar11,uVar1,uVar2,uVar22,3);
      uVar22 = *(uint *)(param_3 + 0x60);
      lVar11 = *(long *)(param_3 + 0x70);
    }
    uVar14 = uVar3 & 0xffffffff;
    uVar2 = uVar16 + 1;
    if (uVar16 + 1 < uVar22) {
      uVar2 = uVar22;
    }
    uVar3 = uVar3 & 0xffffffff;
    do {
      uVar1 = (int)uVar3 + 1;
      uVar3 = (ulong)uVar1;
      if (uVar22 <= uVar1) {
        uVar3 = (ulong)uVar2;
        break;
      }
    } while (*(char *)(lVar11 + 0xf + uVar14 * 0x14) ==
             *(char *)(lVar11 + 0xf + (ulong)uVar1 * 0x14));
    uVar14 = uVar7;
    if (uVar18 <= uVar16) {
      return 0;
    }
  } while( true );
}


