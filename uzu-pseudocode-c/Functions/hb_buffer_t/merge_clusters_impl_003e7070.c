// Function : merge_clusters_impl
// Namespace: hb_buffer_t
// Entry    : 003e7070
// Prototype: undefined merge_clusters_impl(hb_buffer_t * this, uint param_1, uint param_2)
// Body     : 003e7070 - 003e7590


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_buffer_t::merge_clusters_impl(unsigned int, unsigned int) */

void __thiscall hb_buffer_t::merge_clusters_impl(hb_buffer_t *this,uint param_1,uint param_2)

{
  byte *pbVar1;
  long lVar2;
  ulong uVar3;
  uint *puVar4;
  int *piVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
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
  uint uVar22;
  uint uVar23;
  uint uVar24;
  
  if (*(int *)(this + 0x1c) == 2) {
    if (*(uint *)(this + 0x60) < param_2) {
      param_2 = *(uint *)(this + 0x60);
    }
    if (1 < param_2 - param_1) {
      this[0xc0] = (hb_buffer_t)((byte)this[0xc0] | 0x20);
      lVar2 = *(long *)(this + 0x70);
      uVar14 = 0xffffffff;
      if (param_1 < param_2) {
        uVar9 = (ulong)param_1;
        uVar11 = (ulong)param_2;
        uVar10 = uVar11 - uVar9;
        uVar14 = 0xffffffff;
        if (8 < uVar10) {
          uVar3 = (ulong)((uint)uVar10 & 7);
          uVar6 = 8;
          if (uVar3 != 0) {
            uVar6 = uVar3;
          }
          lVar7 = (uVar6 + uVar9) - uVar11;
          puVar4 = (uint *)(lVar2 + uVar9 * 0x14 + 0x94);
          uVar16 = 0xffffffff;
          uVar14 = 0xffffffff;
          uVar15 = 0xffffffff;
          uVar17 = 0xffffffff;
          uVar12 = 0xffffffff;
          uVar19 = 0xffffffff;
          uVar21 = 0xffffffff;
          uVar13 = 0xffffffff;
          do {
            uVar18 = -(uint)((int)(uVar14 ^ _DAT_006524b0) < (int)(puVar4[-0x23] ^ _DAT_006524b0));
            uVar20 = -(uint)((int)(uVar15 ^ _UNK_006524b4) < (int)(puVar4[-0x1e] ^ _UNK_006524b4));
            uVar22 = -(uint)((int)(uVar16 ^ _UNK_006524b8) < (int)(puVar4[-0x19] ^ _UNK_006524b8));
            uVar23 = -(uint)((int)(uVar17 ^ _UNK_006524bc) < (int)(puVar4[-0x14] ^ _UNK_006524bc));
            uVar14 = ~uVar18 & puVar4[-0x23] | uVar14 & uVar18;
            uVar15 = ~uVar20 & puVar4[-0x1e] | uVar15 & uVar20;
            uVar16 = ~uVar22 & puVar4[-0x19] | uVar16 & uVar22;
            uVar17 = ~uVar23 & puVar4[-0x14] | uVar17 & uVar23;
            uVar18 = -(uint)((int)(uVar19 ^ _DAT_006524b0) < (int)(puVar4[-0xf] ^ _DAT_006524b0));
            uVar20 = -(uint)((int)(uVar21 ^ _UNK_006524b4) < (int)(puVar4[-10] ^ _UNK_006524b4));
            uVar22 = -(uint)((int)(uVar12 ^ _UNK_006524b8) < (int)(puVar4[-5] ^ _UNK_006524b8));
            uVar23 = -(uint)((int)(uVar13 ^ _UNK_006524bc) < (int)(*puVar4 ^ _UNK_006524bc));
            uVar19 = ~uVar18 & puVar4[-0xf] | uVar19 & uVar18;
            uVar21 = ~uVar20 & puVar4[-10] | uVar21 & uVar20;
            uVar12 = ~uVar22 & puVar4[-5] | uVar12 & uVar22;
            uVar13 = ~uVar23 & *puVar4 | uVar13 & uVar23;
            puVar4 = puVar4 + 0x28;
            lVar7 = lVar7 + 8;
          } while (lVar7 != 0);
          uVar9 = uVar9 + (uVar10 - uVar6);
          uVar18 = -(uint)((int)(uVar14 ^ _DAT_006524b0) < (int)(uVar19 ^ _DAT_006524b0));
          uVar20 = -(uint)((int)(uVar15 ^ _UNK_006524b4) < (int)(uVar21 ^ _UNK_006524b4));
          uVar22 = -(uint)((int)(uVar16 ^ _UNK_006524b8) < (int)(uVar12 ^ _UNK_006524b8));
          uVar23 = -(uint)((int)(uVar17 ^ _UNK_006524bc) < (int)(uVar13 ^ _UNK_006524bc));
          uVar19 = ~uVar18 & uVar19 | uVar14 & uVar18;
          uVar21 = ~uVar20 & uVar21 | uVar15 & uVar20;
          uVar15 = ~uVar22 & uVar12 | uVar16 & uVar22;
          uVar17 = ~uVar23 & uVar13 | uVar17 & uVar23;
          uVar14 = -(uint)((int)(uVar19 ^ _DAT_006524b0) < (int)(uVar15 ^ _DAT_006524b0));
          uVar16 = -(uint)((int)(uVar21 ^ _UNK_006524b4) < (int)(uVar17 ^ _UNK_006524b4));
          uVar15 = ~uVar14 & uVar15 | uVar19 & uVar14;
          uVar16 = ~uVar16 & uVar17 | uVar21 & uVar16;
          uVar14 = -(uint)((int)(uVar15 ^ _DAT_006524b0) < (int)(_DAT_006524b0 ^ uVar16));
          uVar14 = ~uVar14 & uVar16 | uVar15 & uVar14;
        }
        lVar7 = uVar11 - uVar9;
        puVar4 = (uint *)(lVar2 + uVar9 * 0x14 + 8);
        do {
          if (*puVar4 < uVar14) {
            uVar14 = *puVar4;
          }
          puVar4 = puVar4 + 5;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      _infos_set_glyph_flags(this,lVar2,param_1,param_2,uVar14,3);
      return;
    }
  }
  else {
    lVar2 = *(long *)(this + 0x70);
    uVar14 = *(uint *)(lVar2 + 8 + (ulong)param_1 * 0x14);
    uVar15 = uVar14;
    if (param_1 + 1 < param_2) {
      uVar11 = (ulong)(param_1 + 1);
      uVar16 = (param_2 - param_1) - 2;
      if (7 < uVar16) {
        lVar7 = (ulong)uVar16 + 1;
        uVar10 = (ulong)((uint)lVar7 & 7);
        uVar9 = 8;
        if (uVar10 != 0) {
          uVar9 = uVar10;
        }
        lVar7 = lVar7 - uVar9;
        puVar4 = (uint *)(lVar2 + uVar11 * 0x14 + 0x94);
        lVar8 = lVar7;
        uVar16 = uVar14;
        uVar17 = uVar14;
        uVar19 = uVar14;
        uVar21 = uVar14;
        uVar12 = uVar14;
        uVar13 = uVar14;
        uVar18 = uVar14;
        do {
          uVar20 = -(uint)((int)(uVar15 ^ _DAT_006524b0) < (int)(puVar4[-0x23] ^ _DAT_006524b0));
          uVar22 = -(uint)((int)(uVar16 ^ _UNK_006524b4) < (int)(puVar4[-0x1e] ^ _UNK_006524b4));
          uVar23 = -(uint)((int)(uVar17 ^ _UNK_006524b8) < (int)(puVar4[-0x19] ^ _UNK_006524b8));
          uVar24 = -(uint)((int)(uVar19 ^ _UNK_006524bc) < (int)(puVar4[-0x14] ^ _UNK_006524bc));
          uVar15 = ~uVar20 & puVar4[-0x23] | uVar15 & uVar20;
          uVar16 = ~uVar22 & puVar4[-0x1e] | uVar16 & uVar22;
          uVar17 = ~uVar23 & puVar4[-0x19] | uVar17 & uVar23;
          uVar19 = ~uVar24 & puVar4[-0x14] | uVar19 & uVar24;
          uVar20 = -(uint)((int)(uVar21 ^ _DAT_006524b0) < (int)(puVar4[-0xf] ^ _DAT_006524b0));
          uVar22 = -(uint)((int)(uVar12 ^ _UNK_006524b4) < (int)(puVar4[-10] ^ _UNK_006524b4));
          uVar23 = -(uint)((int)(uVar13 ^ _UNK_006524b8) < (int)(puVar4[-5] ^ _UNK_006524b8));
          uVar24 = -(uint)((int)(uVar18 ^ _UNK_006524bc) < (int)(*puVar4 ^ _UNK_006524bc));
          uVar21 = ~uVar20 & puVar4[-0xf] | uVar21 & uVar20;
          uVar12 = ~uVar22 & puVar4[-10] | uVar12 & uVar22;
          uVar13 = ~uVar23 & puVar4[-5] | uVar13 & uVar23;
          uVar18 = ~uVar24 & *puVar4 | uVar18 & uVar24;
          puVar4 = puVar4 + 0x28;
          lVar8 = lVar8 + -8;
        } while (lVar8 != 0);
        uVar11 = uVar11 + lVar7;
        uVar20 = -(uint)((int)(uVar15 ^ _DAT_006524b0) < (int)(uVar21 ^ _DAT_006524b0));
        uVar22 = -(uint)((int)(uVar16 ^ _UNK_006524b4) < (int)(uVar12 ^ _UNK_006524b4));
        uVar23 = -(uint)((int)(uVar17 ^ _UNK_006524b8) < (int)(uVar13 ^ _UNK_006524b8));
        uVar24 = -(uint)((int)(uVar19 ^ _UNK_006524bc) < (int)(uVar18 ^ _UNK_006524bc));
        uVar21 = ~uVar20 & uVar21 | uVar15 & uVar20;
        uVar12 = ~uVar22 & uVar12 | uVar16 & uVar22;
        uVar16 = ~uVar23 & uVar13 | uVar17 & uVar23;
        uVar19 = ~uVar24 & uVar18 | uVar19 & uVar24;
        uVar15 = -(uint)((int)(uVar21 ^ _DAT_006524b0) < (int)(uVar16 ^ _DAT_006524b0));
        uVar17 = -(uint)((int)(uVar12 ^ _UNK_006524b4) < (int)(uVar19 ^ _UNK_006524b4));
        uVar16 = ~uVar15 & uVar16 | uVar21 & uVar15;
        uVar17 = ~uVar17 & uVar19 | uVar12 & uVar17;
        uVar15 = -(uint)((int)(uVar16 ^ _DAT_006524b0) < (int)(_DAT_006524b0 ^ uVar17));
        uVar15 = ~uVar15 & uVar17 | uVar16 & uVar15;
      }
      puVar4 = (uint *)(lVar2 + uVar11 * 0x14 + 8);
      do {
        if (*puVar4 < uVar15) {
          uVar15 = *puVar4;
        }
        uVar16 = (int)uVar11 + 1;
        uVar11 = (ulong)uVar16;
        puVar4 = puVar4 + 5;
      } while (uVar16 < param_2);
    }
    if (uVar15 != *(uint *)(lVar2 + 8 + (ulong)(param_2 - 1) * 0x14)) {
      uVar16 = *(uint *)(this + 0x60);
      if (param_2 < uVar16) {
        uVar11 = (ulong)param_2;
        piVar5 = (int *)(lVar2 + uVar11 * 0x14 + 8);
        do {
          param_2 = (uint)uVar11;
          if (*(int *)(lVar2 + 8 + (ulong)((uint)uVar11 - 1) * 0x14) != *piVar5) goto LAB_003e7451;
          uVar11 = uVar11 + 1;
          piVar5 = piVar5 + 5;
        } while (uVar16 != (uint)uVar11);
        param_2 = uVar16;
      }
    }
LAB_003e7451:
    uVar16 = *(uint *)(this + 0x5c);
    if (uVar15 != uVar14) {
      uVar14 = param_1;
      uVar17 = param_1;
      if (uVar16 < param_1) {
        uVar17 = uVar16;
      }
      do {
        uVar19 = uVar14;
        param_1 = uVar17;
        if (uVar19 <= uVar16) break;
        uVar14 = uVar19 - 1;
        param_1 = uVar19;
      } while (*(int *)(lVar2 + 8 + (ulong)(uVar19 - 1) * 0x14) ==
               *(int *)(lVar2 + 8 + (ulong)uVar19 * 0x14));
    }
    if ((((uVar16 == param_1) &&
         (uVar14 = *(uint *)(lVar2 + 8 + (ulong)uVar16 * 0x14), uVar14 != uVar15)) &&
        (uVar11 = (ulong)*(uint *)(this + 100), uVar11 != 0)) &&
       (lVar7 = *(long *)(this + 0x78), *(uint *)(lVar7 + -0xc + uVar11 * 0x14) == uVar14)) {
      lVar8 = uVar11 * 0x14;
      do {
        if (uVar14 != uVar15) {
          pbVar1 = (byte *)(lVar7 + -0x10 + lVar8);
          *pbVar1 = *pbVar1 & 0xf8;
        }
        *(uint *)(lVar7 + -0xc + lVar8) = uVar15;
        if (lVar8 + -0x14 == 0) break;
        uVar14 = *(uint *)(lVar2 + (ulong)uVar16 * 0x14 + 8);
        puVar4 = (uint *)(lVar7 + -0x20 + lVar8);
        lVar8 = lVar8 + -0x14;
      } while (*puVar4 == uVar14);
    }
    if (param_1 < param_2) {
      uVar11 = (ulong)param_1;
      uVar9 = ~uVar11;
      if ((param_2 - param_1 & 1) != 0) {
        if (*(uint *)(lVar2 + 8 + uVar11 * 0x14) != uVar15) {
          pbVar1 = (byte *)(lVar2 + 4 + uVar11 * 0x14);
          *pbVar1 = *pbVar1 & 0xf8;
        }
        *(uint *)(lVar2 + uVar11 * 0x14 + 8) = uVar15;
        uVar11 = uVar11 + 1;
      }
      if (uVar9 + param_2 != 0) {
        lVar7 = param_2 - uVar11;
        puVar4 = (uint *)(lVar2 + uVar11 * 0x14 + 0x1c);
        do {
          if (puVar4[-5] == uVar15) {
            puVar4[-5] = uVar15;
            uVar14 = *puVar4;
          }
          else {
            *(byte *)(puVar4 + -6) = (byte)puVar4[-6] & 0xf8;
            puVar4[-5] = uVar15;
            uVar14 = *puVar4;
          }
          if (uVar14 != uVar15) {
            *(byte *)(puVar4 + -1) = (byte)puVar4[-1] & 0xf8;
          }
          *puVar4 = uVar15;
          puVar4 = puVar4 + 10;
          lVar7 = lVar7 + -2;
        } while (lVar7 != 0);
      }
    }
  }
  return;
}


