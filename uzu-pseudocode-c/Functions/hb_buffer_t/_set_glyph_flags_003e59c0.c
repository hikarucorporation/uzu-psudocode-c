// Function : _set_glyph_flags
// Namespace: hb_buffer_t
// Entry    : 003e59c0
// Prototype: undefined _set_glyph_flags(hb_buffer_t * param_1, uint param_2, uint param_3, uint param_4, char param_5)
// Body     : 003e59c0 - 003e6136


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_buffer_t::_set_glyph_flags(unsigned int, unsigned int, unsigned int, bool, bool) */

void __cdecl
hb_buffer_t::_set_glyph_flags
          (hb_buffer_t *param_1,uint param_2,uint param_3,uint param_4,char param_5)

{
  ulong uVar1;
  ulong uVar2;
  uint *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  
  if (*(uint *)(param_1 + 0x60) < param_4) {
    param_4 = *(uint *)(param_1 + 0x60);
  }
  param_1[0xc0] = (hb_buffer_t)((byte)param_1[0xc0] | 0x20);
  if (param_1[0x5a] == (hb_buffer_t)0x0) {
    if (param_5 == '\0') {
      uVar11 = param_4 - param_3;
      if (param_4 < param_3 || uVar11 == 0) {
        return;
      }
      lVar6 = *(long *)(param_1 + 0x70);
      uVar5 = (ulong)param_3;
      uVar8 = ~uVar5;
      if ((uVar11 & 3) != 0) {
        puVar3 = (uint *)(lVar6 + uVar5 * 0x14 + 4);
        lVar4 = 0;
        do {
          *puVar3 = *puVar3 | param_2;
          lVar4 = lVar4 + -1;
          puVar3 = puVar3 + 5;
        } while (-lVar4 != ((ulong)uVar11 & 3));
        uVar5 = uVar5 - lVar4;
      }
      if (uVar8 + param_4 < 3) {
        return;
      }
      lVar4 = param_4 - uVar5;
      puVar3 = (uint *)(lVar6 + uVar5 * 0x14 + 0x40);
      do {
        puVar3[-0xf] = puVar3[-0xf] | param_2;
        puVar3[-10] = puVar3[-10] | param_2;
        puVar3[-5] = puVar3[-5] | param_2;
        *puVar3 = *puVar3 | param_2;
        puVar3 = puVar3 + 0x14;
        lVar4 = lVar4 + -4;
      } while (lVar4 != 0);
      return;
    }
    lVar6 = *(long *)(param_1 + 0x70);
    uVar11 = 0xffffffff;
    if (param_4 != param_3) {
      if (*(int *)(param_1 + 0x1c) == 2) {
        if (param_3 < param_4) {
          uVar5 = (ulong)param_3;
          uVar8 = (ulong)param_4;
          uVar7 = uVar8 - uVar5;
          uVar11 = 0xffffffff;
          if (8 < uVar7) {
            uVar2 = (ulong)((uint)uVar7 & 7);
            uVar1 = 8;
            if (uVar2 != 0) {
              uVar1 = uVar2;
            }
            lVar4 = (uVar1 + uVar5) - uVar8;
            puVar3 = (uint *)(lVar6 + uVar5 * 0x14 + 0x94);
            uVar13 = 0xffffffff;
            uVar11 = 0xffffffff;
            uVar12 = 0xffffffff;
            uVar14 = 0xffffffff;
            uVar9 = 0xffffffff;
            uVar16 = 0xffffffff;
            uVar18 = 0xffffffff;
            uVar10 = 0xffffffff;
            do {
              uVar15 = -(uint)((int)(uVar11 ^ _DAT_006524b0) < (int)(puVar3[-0x23] ^ _DAT_006524b0))
              ;
              uVar17 = -(uint)((int)(uVar12 ^ _UNK_006524b4) < (int)(puVar3[-0x1e] ^ _UNK_006524b4))
              ;
              uVar19 = -(uint)((int)(uVar13 ^ _UNK_006524b8) < (int)(puVar3[-0x19] ^ _UNK_006524b8))
              ;
              uVar20 = -(uint)((int)(uVar14 ^ _UNK_006524bc) < (int)(puVar3[-0x14] ^ _UNK_006524bc))
              ;
              uVar11 = ~uVar15 & puVar3[-0x23] | uVar11 & uVar15;
              uVar12 = ~uVar17 & puVar3[-0x1e] | uVar12 & uVar17;
              uVar13 = ~uVar19 & puVar3[-0x19] | uVar13 & uVar19;
              uVar14 = ~uVar20 & puVar3[-0x14] | uVar14 & uVar20;
              uVar15 = -(uint)((int)(uVar16 ^ _DAT_006524b0) < (int)(puVar3[-0xf] ^ _DAT_006524b0));
              uVar17 = -(uint)((int)(uVar18 ^ _UNK_006524b4) < (int)(puVar3[-10] ^ _UNK_006524b4));
              uVar19 = -(uint)((int)(uVar9 ^ _UNK_006524b8) < (int)(puVar3[-5] ^ _UNK_006524b8));
              uVar20 = -(uint)((int)(uVar10 ^ _UNK_006524bc) < (int)(*puVar3 ^ _UNK_006524bc));
              uVar16 = ~uVar15 & puVar3[-0xf] | uVar16 & uVar15;
              uVar18 = ~uVar17 & puVar3[-10] | uVar18 & uVar17;
              uVar9 = ~uVar19 & puVar3[-5] | uVar9 & uVar19;
              uVar10 = ~uVar20 & *puVar3 | uVar10 & uVar20;
              puVar3 = puVar3 + 0x28;
              lVar4 = lVar4 + 8;
            } while (lVar4 != 0);
            uVar5 = uVar5 + (uVar7 - uVar1);
            uVar15 = -(uint)((int)(uVar11 ^ _DAT_006524b0) < (int)(uVar16 ^ _DAT_006524b0));
            uVar17 = -(uint)((int)(uVar12 ^ _UNK_006524b4) < (int)(uVar18 ^ _UNK_006524b4));
            uVar19 = -(uint)((int)(uVar13 ^ _UNK_006524b8) < (int)(uVar9 ^ _UNK_006524b8));
            uVar20 = -(uint)((int)(uVar14 ^ _UNK_006524bc) < (int)(uVar10 ^ _UNK_006524bc));
            uVar16 = ~uVar15 & uVar16 | uVar11 & uVar15;
            uVar18 = ~uVar17 & uVar18 | uVar12 & uVar17;
            uVar12 = ~uVar19 & uVar9 | uVar13 & uVar19;
            uVar14 = ~uVar20 & uVar10 | uVar14 & uVar20;
            uVar11 = -(uint)((int)(uVar16 ^ _DAT_006524b0) < (int)(uVar12 ^ _DAT_006524b0));
            uVar13 = -(uint)((int)(uVar18 ^ _UNK_006524b4) < (int)(uVar14 ^ _UNK_006524b4));
            uVar12 = ~uVar11 & uVar12 | uVar16 & uVar11;
            uVar13 = ~uVar13 & uVar14 | uVar18 & uVar13;
            uVar11 = -(uint)((int)(uVar12 ^ _DAT_006524b0) < (int)(_DAT_006524b0 ^ uVar13));
            uVar11 = ~uVar11 & uVar13 | uVar12 & uVar11;
          }
          lVar4 = uVar8 - uVar5;
          puVar3 = (uint *)(lVar6 + uVar5 * 0x14 + 8);
          do {
            if (*puVar3 < uVar11) {
              uVar11 = *puVar3;
            }
            puVar3 = puVar3 + 5;
            lVar4 = lVar4 + -1;
          } while (lVar4 != 0);
        }
      }
      else {
        uVar11 = *(uint *)(lVar6 + 8 + (ulong)param_3 * 0x14);
        uVar12 = *(uint *)(lVar6 + 8 + (ulong)(param_4 - 1) * 0x14);
        if (uVar12 < uVar11) {
          uVar11 = uVar12;
        }
      }
    }
  }
  else {
    if (param_5 == '\0') {
      uVar11 = *(uint *)(param_1 + 100);
      if (param_3 < uVar11) {
        lVar6 = *(long *)(param_1 + 0x78);
        uVar5 = (ulong)param_3;
        uVar8 = ~uVar5;
        if ((uVar11 - param_3 & 3) != 0) {
          puVar3 = (uint *)(lVar6 + uVar5 * 0x14 + 4);
          lVar4 = 0;
          do {
            *puVar3 = *puVar3 | param_2;
            lVar4 = lVar4 + -1;
            puVar3 = puVar3 + 5;
          } while (-lVar4 != ((ulong)(uVar11 - param_3) & 3));
          uVar5 = uVar5 - lVar4;
        }
        if (2 < uVar8 + uVar11) {
          lVar4 = uVar11 - uVar5;
          puVar3 = (uint *)(lVar6 + uVar5 * 0x14 + 0x40);
          do {
            puVar3[-0xf] = puVar3[-0xf] | param_2;
            puVar3[-10] = puVar3[-10] | param_2;
            puVar3[-5] = puVar3[-5] | param_2;
            *puVar3 = *puVar3 | param_2;
            puVar3 = puVar3 + 0x14;
            lVar4 = lVar4 + -4;
          } while (lVar4 != 0);
        }
      }
      uVar11 = *(uint *)(param_1 + 0x5c);
      uVar5 = (ulong)uVar11;
      if (uVar11 < param_4) {
        lVar6 = *(long *)(param_1 + 0x70);
        uVar8 = ~uVar5;
        if ((param_4 - uVar11 & 3) != 0) {
          puVar3 = (uint *)(lVar6 + uVar5 * 0x14 + 4);
          lVar4 = 0;
          do {
            *puVar3 = *puVar3 | param_2;
            lVar4 = lVar4 + -1;
            puVar3 = puVar3 + 5;
          } while (-lVar4 != ((ulong)(param_4 - uVar11) & 3));
          uVar5 = uVar5 - lVar4;
        }
        if (2 < uVar8 + param_4) {
          lVar4 = param_4 - uVar5;
          puVar3 = (uint *)(lVar6 + uVar5 * 0x14 + 0x40);
          do {
            puVar3[-0xf] = puVar3[-0xf] | param_2;
            puVar3[-10] = puVar3[-10] | param_2;
            puVar3[-5] = puVar3[-5] | param_2;
            *puVar3 = *puVar3 | param_2;
            puVar3 = puVar3 + 0x14;
            lVar4 = lVar4 + -4;
          } while (lVar4 != 0);
        }
      }
      return;
    }
    uVar12 = *(uint *)(param_1 + 0x5c);
    uVar5 = (ulong)uVar12;
    uVar11 = 0xffffffff;
    if (uVar12 != param_4) {
      lVar6 = *(long *)(param_1 + 0x70);
      if (*(int *)(param_1 + 0x1c) == 2) {
        if (uVar12 < param_4) {
          uVar8 = (ulong)param_4;
          uVar7 = uVar8 - uVar5;
          uVar11 = 0xffffffff;
          if (8 < uVar7) {
            uVar2 = (ulong)((uint)uVar7 & 7);
            uVar1 = 8;
            if (uVar2 != 0) {
              uVar1 = uVar2;
            }
            lVar4 = (uVar1 + uVar5) - uVar8;
            puVar3 = (uint *)(lVar6 + uVar5 * 0x14 + 0x94);
            uVar13 = 0xffffffff;
            uVar11 = 0xffffffff;
            uVar12 = 0xffffffff;
            uVar14 = 0xffffffff;
            uVar9 = 0xffffffff;
            uVar16 = 0xffffffff;
            uVar18 = 0xffffffff;
            uVar10 = 0xffffffff;
            do {
              uVar15 = -(uint)((int)(uVar11 ^ _DAT_006524b0) < (int)(puVar3[-0x23] ^ _DAT_006524b0))
              ;
              uVar17 = -(uint)((int)(uVar12 ^ _UNK_006524b4) < (int)(puVar3[-0x1e] ^ _UNK_006524b4))
              ;
              uVar19 = -(uint)((int)(uVar13 ^ _UNK_006524b8) < (int)(puVar3[-0x19] ^ _UNK_006524b8))
              ;
              uVar20 = -(uint)((int)(uVar14 ^ _UNK_006524bc) < (int)(puVar3[-0x14] ^ _UNK_006524bc))
              ;
              uVar11 = ~uVar15 & puVar3[-0x23] | uVar11 & uVar15;
              uVar12 = ~uVar17 & puVar3[-0x1e] | uVar12 & uVar17;
              uVar13 = ~uVar19 & puVar3[-0x19] | uVar13 & uVar19;
              uVar14 = ~uVar20 & puVar3[-0x14] | uVar14 & uVar20;
              uVar15 = -(uint)((int)(uVar16 ^ _DAT_006524b0) < (int)(puVar3[-0xf] ^ _DAT_006524b0));
              uVar17 = -(uint)((int)(uVar18 ^ _UNK_006524b4) < (int)(puVar3[-10] ^ _UNK_006524b4));
              uVar19 = -(uint)((int)(uVar9 ^ _UNK_006524b8) < (int)(puVar3[-5] ^ _UNK_006524b8));
              uVar20 = -(uint)((int)(uVar10 ^ _UNK_006524bc) < (int)(*puVar3 ^ _UNK_006524bc));
              uVar16 = ~uVar15 & puVar3[-0xf] | uVar16 & uVar15;
              uVar18 = ~uVar17 & puVar3[-10] | uVar18 & uVar17;
              uVar9 = ~uVar19 & puVar3[-5] | uVar9 & uVar19;
              uVar10 = ~uVar20 & *puVar3 | uVar10 & uVar20;
              puVar3 = puVar3 + 0x28;
              lVar4 = lVar4 + 8;
            } while (lVar4 != 0);
            uVar5 = uVar5 + (uVar7 - uVar1);
            uVar15 = -(uint)((int)(uVar11 ^ _DAT_006524b0) < (int)(uVar16 ^ _DAT_006524b0));
            uVar17 = -(uint)((int)(uVar12 ^ _UNK_006524b4) < (int)(uVar18 ^ _UNK_006524b4));
            uVar19 = -(uint)((int)(uVar13 ^ _UNK_006524b8) < (int)(uVar9 ^ _UNK_006524b8));
            uVar20 = -(uint)((int)(uVar14 ^ _UNK_006524bc) < (int)(uVar10 ^ _UNK_006524bc));
            uVar16 = ~uVar15 & uVar16 | uVar11 & uVar15;
            uVar18 = ~uVar17 & uVar18 | uVar12 & uVar17;
            uVar12 = ~uVar19 & uVar9 | uVar13 & uVar19;
            uVar14 = ~uVar20 & uVar10 | uVar14 & uVar20;
            uVar11 = -(uint)((int)(uVar16 ^ _DAT_006524b0) < (int)(uVar12 ^ _DAT_006524b0));
            uVar13 = -(uint)((int)(uVar18 ^ _UNK_006524b4) < (int)(uVar14 ^ _UNK_006524b4));
            uVar12 = ~uVar11 & uVar12 | uVar16 & uVar11;
            uVar13 = ~uVar13 & uVar14 | uVar18 & uVar13;
            uVar11 = -(uint)((int)(uVar12 ^ _DAT_006524b0) < (int)(_DAT_006524b0 ^ uVar13));
            uVar11 = ~uVar11 & uVar13 | uVar12 & uVar11;
          }
          lVar4 = uVar8 - uVar5;
          puVar3 = (uint *)(lVar6 + uVar5 * 0x14 + 8);
          do {
            if (*puVar3 < uVar11) {
              uVar11 = *puVar3;
            }
            puVar3 = puVar3 + 5;
            lVar4 = lVar4 + -1;
          } while (lVar4 != 0);
        }
      }
      else {
        uVar11 = *(uint *)(lVar6 + 8 + uVar5 * 0x14);
        uVar12 = *(uint *)(lVar6 + 8 + (ulong)(param_4 - 1) * 0x14);
        if (uVar12 < uVar11) {
          uVar11 = uVar12;
        }
      }
    }
    lVar6 = *(long *)(param_1 + 0x78);
    uVar12 = *(uint *)(param_1 + 100);
    uVar5 = (ulong)uVar12;
    if (uVar12 != param_3) {
      if (*(int *)(param_1 + 0x1c) == 2) {
        if (param_3 < uVar12) {
          uVar8 = (ulong)param_3;
          uVar7 = uVar5 - uVar8;
          if (8 < uVar7) {
            uVar2 = (ulong)((uint)uVar7 & 7);
            uVar1 = 8;
            if (uVar2 != 0) {
              uVar1 = uVar2;
            }
            lVar4 = (uVar1 + uVar8) - uVar5;
            puVar3 = (uint *)(lVar6 + uVar8 * 0x14 + 0x94);
            uVar13 = uVar11;
            uVar14 = uVar11;
            uVar16 = uVar11;
            uVar18 = uVar11;
            uVar9 = uVar11;
            uVar10 = uVar11;
            uVar15 = uVar11;
            do {
              uVar17 = -(uint)((int)(uVar11 ^ _DAT_006524b0) < (int)(puVar3[-0x23] ^ _DAT_006524b0))
              ;
              uVar19 = -(uint)((int)(uVar13 ^ _UNK_006524b4) < (int)(puVar3[-0x1e] ^ _UNK_006524b4))
              ;
              uVar20 = -(uint)((int)(uVar14 ^ _UNK_006524b8) < (int)(puVar3[-0x19] ^ _UNK_006524b8))
              ;
              uVar21 = -(uint)((int)(uVar16 ^ _UNK_006524bc) < (int)(puVar3[-0x14] ^ _UNK_006524bc))
              ;
              uVar11 = ~uVar17 & puVar3[-0x23] | uVar11 & uVar17;
              uVar13 = ~uVar19 & puVar3[-0x1e] | uVar13 & uVar19;
              uVar14 = ~uVar20 & puVar3[-0x19] | uVar14 & uVar20;
              uVar16 = ~uVar21 & puVar3[-0x14] | uVar16 & uVar21;
              uVar17 = -(uint)((int)(uVar18 ^ _DAT_006524b0) < (int)(puVar3[-0xf] ^ _DAT_006524b0));
              uVar19 = -(uint)((int)(uVar9 ^ _UNK_006524b4) < (int)(puVar3[-10] ^ _UNK_006524b4));
              uVar20 = -(uint)((int)(uVar10 ^ _UNK_006524b8) < (int)(puVar3[-5] ^ _UNK_006524b8));
              uVar21 = -(uint)((int)(uVar15 ^ _UNK_006524bc) < (int)(*puVar3 ^ _UNK_006524bc));
              uVar18 = ~uVar17 & puVar3[-0xf] | uVar18 & uVar17;
              uVar9 = ~uVar19 & puVar3[-10] | uVar9 & uVar19;
              uVar10 = ~uVar20 & puVar3[-5] | uVar10 & uVar20;
              uVar15 = ~uVar21 & *puVar3 | uVar15 & uVar21;
              puVar3 = puVar3 + 0x28;
              lVar4 = lVar4 + 8;
            } while (lVar4 != 0);
            uVar8 = uVar8 + (uVar7 - uVar1);
            uVar17 = -(uint)((int)(uVar11 ^ _DAT_006524b0) < (int)(uVar18 ^ _DAT_006524b0));
            uVar19 = -(uint)((int)(uVar13 ^ _UNK_006524b4) < (int)(uVar9 ^ _UNK_006524b4));
            uVar20 = -(uint)((int)(uVar14 ^ _UNK_006524b8) < (int)(uVar10 ^ _UNK_006524b8));
            uVar21 = -(uint)((int)(uVar16 ^ _UNK_006524bc) < (int)(uVar15 ^ _UNK_006524bc));
            uVar18 = ~uVar17 & uVar18 | uVar11 & uVar17;
            uVar9 = ~uVar19 & uVar9 | uVar13 & uVar19;
            uVar13 = ~uVar20 & uVar10 | uVar14 & uVar20;
            uVar16 = ~uVar21 & uVar15 | uVar16 & uVar21;
            uVar11 = -(uint)((int)(uVar18 ^ _DAT_006524b0) < (int)(uVar13 ^ _DAT_006524b0));
            uVar14 = -(uint)((int)(uVar9 ^ _UNK_006524b4) < (int)(uVar16 ^ _UNK_006524b4));
            uVar13 = ~uVar11 & uVar13 | uVar18 & uVar11;
            uVar14 = ~uVar14 & uVar16 | uVar9 & uVar14;
            uVar11 = -(uint)((int)(uVar13 ^ _DAT_006524b0) < (int)(_DAT_006524b0 ^ uVar14));
            uVar11 = ~uVar11 & uVar14 | uVar13 & uVar11;
          }
          lVar4 = uVar5 - uVar8;
          puVar3 = (uint *)(lVar6 + uVar8 * 0x14 + 8);
          do {
            if (*puVar3 < uVar11) {
              uVar11 = *puVar3;
            }
            puVar3 = puVar3 + 5;
            lVar4 = lVar4 + -1;
          } while (lVar4 != 0);
        }
      }
      else {
        uVar13 = *(uint *)(lVar6 + 8 + (ulong)param_3 * 0x14);
        uVar14 = *(uint *)(lVar6 + 8 + (ulong)(uVar12 - 1) * 0x14);
        if (uVar14 < uVar13) {
          uVar13 = uVar14;
        }
        if (uVar13 < uVar11) {
          uVar11 = uVar13;
        }
      }
    }
    _infos_set_glyph_flags(param_1,lVar6,param_3,uVar12,uVar11,param_2);
    lVar6 = *(long *)(param_1 + 0x70);
    param_3 = *(uint *)(param_1 + 0x5c);
  }
  _infos_set_glyph_flags(param_1,lVar6,param_3,param_4,uVar11,param_2);
  return;
}


