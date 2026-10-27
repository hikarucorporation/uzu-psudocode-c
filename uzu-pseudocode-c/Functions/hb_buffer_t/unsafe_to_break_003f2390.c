// Function : unsafe_to_break
// Namespace: hb_buffer_t
// Entry    : 003f2390
// Prototype: undefined unsafe_to_break(hb_buffer_t * this, uint param_1, uint param_2)
// Body     : 003f2390 - 003f2593


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_buffer_t::unsafe_to_break(unsigned int, unsigned int) */

void __thiscall hb_buffer_t::unsafe_to_break(hb_buffer_t *this,uint param_1,uint param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  uint *puVar4;
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
  
  if (*(uint *)(this + 0x60) < param_2) {
    param_2 = *(uint *)(this + 0x60);
  }
  if (param_2 - param_1 < 2) {
    return;
  }
  this[0xc0] = (hb_buffer_t)((byte)this[0xc0] | 0x20);
  lVar1 = *(long *)(this + 0x70);
  uVar11 = 0xffffffff;
  if (param_2 != param_1) {
    if (*(int *)(this + 0x1c) == 2) {
      if (param_1 < param_2) {
        uVar7 = (ulong)param_1;
        uVar2 = (ulong)param_2;
        uVar8 = uVar2 - uVar7;
        uVar11 = 0xffffffff;
        if (8 < uVar8) {
          uVar3 = (ulong)((uint)uVar8 & 7);
          uVar5 = 8;
          if (uVar3 != 0) {
            uVar5 = uVar3;
          }
          lVar6 = (uVar5 + uVar7) - uVar2;
          puVar4 = (uint *)(lVar1 + uVar7 * 0x14 + 0x94);
          uVar13 = 0xffffffff;
          uVar11 = 0xffffffff;
          uVar12 = 0xffffffff;
          uVar20 = 0xffffffff;
          uVar9 = 0xffffffff;
          uVar15 = 0xffffffff;
          uVar17 = 0xffffffff;
          uVar10 = 0xffffffff;
          do {
            uVar14 = -(uint)((int)(uVar11 ^ _DAT_006524b0) < (int)(puVar4[-0x23] ^ _DAT_006524b0));
            uVar16 = -(uint)((int)(uVar12 ^ _UNK_006524b4) < (int)(puVar4[-0x1e] ^ _UNK_006524b4));
            uVar18 = -(uint)((int)(uVar13 ^ _UNK_006524b8) < (int)(puVar4[-0x19] ^ _UNK_006524b8));
            uVar19 = -(uint)((int)(uVar20 ^ _UNK_006524bc) < (int)(puVar4[-0x14] ^ _UNK_006524bc));
            uVar11 = ~uVar14 & puVar4[-0x23] | uVar11 & uVar14;
            uVar12 = ~uVar16 & puVar4[-0x1e] | uVar12 & uVar16;
            uVar13 = ~uVar18 & puVar4[-0x19] | uVar13 & uVar18;
            uVar20 = ~uVar19 & puVar4[-0x14] | uVar20 & uVar19;
            uVar14 = -(uint)((int)(uVar15 ^ _DAT_006524b0) < (int)(puVar4[-0xf] ^ _DAT_006524b0));
            uVar16 = -(uint)((int)(uVar17 ^ _UNK_006524b4) < (int)(puVar4[-10] ^ _UNK_006524b4));
            uVar18 = -(uint)((int)(uVar9 ^ _UNK_006524b8) < (int)(puVar4[-5] ^ _UNK_006524b8));
            uVar19 = -(uint)((int)(uVar10 ^ _UNK_006524bc) < (int)(*puVar4 ^ _UNK_006524bc));
            uVar15 = ~uVar14 & puVar4[-0xf] | uVar15 & uVar14;
            uVar17 = ~uVar16 & puVar4[-10] | uVar17 & uVar16;
            uVar9 = ~uVar18 & puVar4[-5] | uVar9 & uVar18;
            uVar10 = ~uVar19 & *puVar4 | uVar10 & uVar19;
            puVar4 = puVar4 + 0x28;
            lVar6 = lVar6 + 8;
          } while (lVar6 != 0);
          uVar7 = uVar7 + (uVar8 - uVar5);
          uVar14 = -(uint)((int)(uVar11 ^ _DAT_006524b0) < (int)(uVar15 ^ _DAT_006524b0));
          uVar16 = -(uint)((int)(uVar12 ^ _UNK_006524b4) < (int)(uVar17 ^ _UNK_006524b4));
          uVar18 = -(uint)((int)(uVar13 ^ _UNK_006524b8) < (int)(uVar9 ^ _UNK_006524b8));
          uVar19 = -(uint)((int)(uVar20 ^ _UNK_006524bc) < (int)(uVar10 ^ _UNK_006524bc));
          uVar15 = ~uVar14 & uVar15 | uVar11 & uVar14;
          uVar17 = ~uVar16 & uVar17 | uVar12 & uVar16;
          uVar12 = ~uVar18 & uVar9 | uVar13 & uVar18;
          uVar20 = ~uVar19 & uVar10 | uVar20 & uVar19;
          uVar11 = -(uint)((int)(uVar15 ^ _DAT_006524b0) < (int)(uVar12 ^ _DAT_006524b0));
          uVar13 = -(uint)((int)(uVar17 ^ _UNK_006524b4) < (int)(uVar20 ^ _UNK_006524b4));
          uVar12 = ~uVar11 & uVar12 | uVar15 & uVar11;
          uVar13 = ~uVar13 & uVar20 | uVar17 & uVar13;
          uVar11 = -(uint)((int)(uVar12 ^ _DAT_006524b0) < (int)(_DAT_006524b0 ^ uVar13));
          uVar11 = ~uVar11 & uVar13 | uVar12 & uVar11;
        }
        lVar6 = uVar2 - uVar7;
        puVar4 = (uint *)(lVar1 + uVar7 * 0x14 + 8);
        do {
          if (*puVar4 < uVar11) {
            uVar11 = *puVar4;
          }
          puVar4 = puVar4 + 5;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
    }
    else {
      uVar11 = *(uint *)(lVar1 + 8 + (ulong)param_1 * 0x14);
      uVar12 = *(uint *)(lVar1 + 8 + (ulong)(param_2 - 1) * 0x14);
      if (uVar12 < uVar11) {
        uVar11 = uVar12;
      }
    }
  }
  _infos_set_glyph_flags(this,lVar1,param_1,param_2,uVar11,3);
  return;
}


