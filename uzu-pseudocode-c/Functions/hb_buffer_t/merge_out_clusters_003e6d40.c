// Function : merge_out_clusters
// Namespace: hb_buffer_t
// Entry    : 003e6d40
// Prototype: undefined merge_out_clusters(hb_buffer_t * this, uint param_1, uint param_2)
// Body     : 003e6d40 - 003e7060


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_buffer_t::merge_out_clusters(unsigned int, unsigned int) */

void __thiscall hb_buffer_t::merge_out_clusters(hb_buffer_t *this,uint param_1,uint param_2)

{
  byte *pbVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  uint *puVar7;
  int *piVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
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
  
  if (param_2 - param_1 < 2) {
    return;
  }
  if (*(int *)(this + 0x1c) == 2) {
    return;
  }
  lVar3 = *(long *)(this + 0x78);
  uVar2 = *(uint *)(lVar3 + 8 + (ulong)param_1 * 0x14);
  uVar15 = uVar2;
  if (param_1 + 1 < param_2) {
    uVar12 = (ulong)(param_1 + 1);
    uVar11 = (param_2 - param_1) - 2;
    if (7 < uVar11) {
      lVar9 = (ulong)uVar11 + 1;
      uVar4 = (ulong)((uint)lVar9 & 7);
      uVar10 = 8;
      if (uVar4 != 0) {
        uVar10 = uVar4;
      }
      lVar9 = lVar9 - uVar10;
      puVar7 = (uint *)(lVar3 + uVar12 * 0x14 + 0x94);
      lVar6 = lVar9;
      uVar11 = uVar2;
      uVar16 = uVar2;
      uVar23 = uVar2;
      uVar18 = uVar2;
      uVar20 = uVar2;
      uVar13 = uVar2;
      uVar14 = uVar2;
      do {
        uVar17 = -(uint)((int)(uVar15 ^ _DAT_006524b0) < (int)(puVar7[-0x23] ^ _DAT_006524b0));
        uVar19 = -(uint)((int)(uVar11 ^ _UNK_006524b4) < (int)(puVar7[-0x1e] ^ _UNK_006524b4));
        uVar21 = -(uint)((int)(uVar16 ^ _UNK_006524b8) < (int)(puVar7[-0x19] ^ _UNK_006524b8));
        uVar22 = -(uint)((int)(uVar23 ^ _UNK_006524bc) < (int)(puVar7[-0x14] ^ _UNK_006524bc));
        uVar15 = ~uVar17 & puVar7[-0x23] | uVar15 & uVar17;
        uVar11 = ~uVar19 & puVar7[-0x1e] | uVar11 & uVar19;
        uVar16 = ~uVar21 & puVar7[-0x19] | uVar16 & uVar21;
        uVar23 = ~uVar22 & puVar7[-0x14] | uVar23 & uVar22;
        uVar17 = -(uint)((int)(uVar18 ^ _DAT_006524b0) < (int)(puVar7[-0xf] ^ _DAT_006524b0));
        uVar19 = -(uint)((int)(uVar20 ^ _UNK_006524b4) < (int)(puVar7[-10] ^ _UNK_006524b4));
        uVar21 = -(uint)((int)(uVar13 ^ _UNK_006524b8) < (int)(puVar7[-5] ^ _UNK_006524b8));
        uVar22 = -(uint)((int)(uVar14 ^ _UNK_006524bc) < (int)(*puVar7 ^ _UNK_006524bc));
        uVar18 = ~uVar17 & puVar7[-0xf] | uVar18 & uVar17;
        uVar20 = ~uVar19 & puVar7[-10] | uVar20 & uVar19;
        uVar13 = ~uVar21 & puVar7[-5] | uVar13 & uVar21;
        uVar14 = ~uVar22 & *puVar7 | uVar14 & uVar22;
        puVar7 = puVar7 + 0x28;
        lVar6 = lVar6 + -8;
      } while (lVar6 != 0);
      uVar12 = uVar12 + lVar9;
      uVar17 = -(uint)((int)(uVar15 ^ _DAT_006524b0) < (int)(uVar18 ^ _DAT_006524b0));
      uVar19 = -(uint)((int)(uVar11 ^ _UNK_006524b4) < (int)(uVar20 ^ _UNK_006524b4));
      uVar21 = -(uint)((int)(uVar16 ^ _UNK_006524b8) < (int)(uVar13 ^ _UNK_006524b8));
      uVar22 = -(uint)((int)(uVar23 ^ _UNK_006524bc) < (int)(uVar14 ^ _UNK_006524bc));
      uVar18 = ~uVar17 & uVar18 | uVar15 & uVar17;
      uVar20 = ~uVar19 & uVar20 | uVar11 & uVar19;
      uVar11 = ~uVar21 & uVar13 | uVar16 & uVar21;
      uVar23 = ~uVar22 & uVar14 | uVar23 & uVar22;
      uVar15 = -(uint)((int)(uVar18 ^ _DAT_006524b0) < (int)(uVar11 ^ _DAT_006524b0));
      uVar16 = -(uint)((int)(uVar20 ^ _UNK_006524b4) < (int)(uVar23 ^ _UNK_006524b4));
      uVar11 = ~uVar15 & uVar11 | uVar18 & uVar15;
      uVar16 = ~uVar16 & uVar23 | uVar20 & uVar16;
      uVar15 = -(uint)((int)(uVar11 ^ _DAT_006524b0) < (int)(_DAT_006524b0 ^ uVar16));
      uVar15 = ~uVar15 & uVar16 | uVar11 & uVar15;
    }
    puVar7 = (uint *)(lVar3 + uVar12 * 0x14 + 8);
    do {
      if (*puVar7 < uVar15) {
        uVar15 = *puVar7;
      }
      uVar11 = (int)uVar12 + 1;
      uVar12 = (ulong)uVar11;
      puVar7 = puVar7 + 5;
    } while (uVar11 < param_2);
  }
  uVar12 = (ulong)param_1 - 1;
  do {
    if (uVar12 == 0xffffffffffffffff) {
      uVar11 = 0;
      uVar2 = *(uint *)(this + 100);
      goto joined_r0x003e6f41;
    }
    uVar10 = uVar12 & 0xffffffff;
    uVar12 = uVar12 - 1;
  } while (*(uint *)(lVar3 + 8 + uVar10 * 0x14) == uVar2);
  uVar11 = (int)uVar12 + 2;
  uVar2 = *(uint *)(this + 100);
joined_r0x003e6f41:
  if (param_2 < uVar2) {
    uVar12 = (ulong)param_2;
    piVar8 = (int *)(lVar3 + uVar12 * 0x14 + 8);
    do {
      param_2 = (uint)uVar12;
      if (*(int *)(lVar3 + 8 + (ulong)(param_2 - 1) * 0x14) != *piVar8) goto LAB_003e6f7f;
      uVar12 = uVar12 + 1;
      piVar8 = piVar8 + 5;
    } while (uVar2 != (uint)uVar12);
  }
  else {
LAB_003e6f7f:
    if (param_2 != uVar2) goto LAB_003e6fde;
  }
  uVar16 = *(uint *)(this + 0x5c);
  if (uVar16 < *(uint *)(this + 0x60)) {
    iVar5 = *(uint *)(this + 0x60) - uVar16;
    puVar7 = (uint *)(*(long *)(this + 0x70) + (ulong)uVar16 * 0x14 + 8);
    do {
      if (*puVar7 != *(uint *)(lVar3 + (ulong)(uVar2 - 1) * 0x14 + 8)) break;
      if (*puVar7 != uVar15) {
        *(byte *)(puVar7 + -1) = (byte)puVar7[-1] & 0xf8;
      }
      *puVar7 = uVar15;
      puVar7 = puVar7 + 5;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  param_2 = uVar2;
LAB_003e6fde:
  if (uVar11 < param_2) {
    uVar12 = (ulong)uVar11;
    uVar10 = ~uVar12;
    if ((param_2 - uVar11 & 1) != 0) {
      if (*(uint *)(lVar3 + 8 + uVar12 * 0x14) != uVar15) {
        pbVar1 = (byte *)(lVar3 + 4 + uVar12 * 0x14);
        *pbVar1 = *pbVar1 & 0xf8;
      }
      *(uint *)(lVar3 + uVar12 * 0x14 + 8) = uVar15;
      uVar12 = uVar12 + 1;
    }
    if (uVar10 + param_2 != 0) {
      lVar9 = param_2 - uVar12;
      puVar7 = (uint *)(lVar3 + uVar12 * 0x14 + 0x1c);
      do {
        if (puVar7[-5] == uVar15) {
          puVar7[-5] = uVar15;
          uVar2 = *puVar7;
        }
        else {
          *(byte *)(puVar7 + -6) = (byte)puVar7[-6] & 0xf8;
          puVar7[-5] = uVar15;
          uVar2 = *puVar7;
        }
        if (uVar2 != uVar15) {
          *(byte *)(puVar7 + -1) = (byte)puVar7[-1] & 0xf8;
        }
        *puVar7 = uVar15;
        puVar7 = puVar7 + 10;
        lVar9 = lVar9 + -2;
      } while (lVar9 != 0);
    }
  }
  return;
}


