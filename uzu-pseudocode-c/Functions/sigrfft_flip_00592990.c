// Function : sigrfft_flip
// Namespace: 
// Entry    : 00592990
// Prototype: long sigrfft_flip(long param_1)
// Body     : 00592990 - 00592bbe


/* WARNING: Removing unreachable block (ram,0x00592bbd) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long sigrfft_flip(long param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  
  uVar8 = _UNK_006524bc;
  uVar18 = _UNK_006524b8;
  uVar12 = _UNK_006524b4;
  uVar10 = _DAT_006524b0;
  uVar17 = (uint)*(ulong *)(param_1 + 0x18);
  if (uVar17 == 0) goto LAB_00592b88;
  puVar6 = *(uint **)(param_1 + 8);
  puVar7 = *(uint **)(param_1 + 0x10);
  if ((uVar17 - 1 < 7) ||
     (((uint *)(((ulong)-uVar17 << 2 | 0xfffffffc00000000) + (long)puVar7) <
       puVar6 + (ulong)(uVar17 - 1) + 1 && (puVar6 < puVar7)))) {
    uVar12 = uVar17 - 1;
    uVar10 = uVar17 & 3;
    if ((*(ulong *)(param_1 + 0x18) & 3) != 0) {
LAB_005929fa:
      uVar18 = _DAT_006524b0;
      uVar8 = 0;
      do {
        uVar19 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7[-1] = uVar19 ^ uVar18;
        puVar7 = puVar7 + -1;
        uVar8 = uVar8 + 1;
      } while (uVar10 != uVar8);
      uVar17 = uVar17 - uVar8;
    }
  }
  else {
    uVar16 = (ulong)(uVar17 - 1) + 1;
    uVar14 = uVar16 & 0xfffffffffffffff8;
    uVar15 = (uVar14 - 8 >> 3) + 1;
    if (uVar14 - 8 == 0) {
      lVar13 = 0;
LAB_00592b46:
      puVar9 = puVar6 + lVar13;
      puVar1 = puVar6 + lVar13 + 4;
      uVar10 = *puVar9 ^ _DAT_006524b0;
      uVar12 = puVar9[1] ^ _UNK_006524b4;
      uVar18 = puVar9[2] ^ _UNK_006524b8;
      uVar8 = *puVar1 ^ _DAT_006524b0;
      uVar19 = puVar1[1] ^ _UNK_006524b4;
      uVar20 = puVar1[2] ^ _UNK_006524b8;
      uVar21 = puVar1[3] ^ _UNK_006524bc;
      puVar7[-4 - lVar13] = puVar9[3] ^ _UNK_006524bc;
      puVar7[-3 - lVar13] = uVar18;
      puVar7[-2 - lVar13] = uVar12;
      puVar7[-1 - lVar13] = uVar10;
      puVar7[-8 - lVar13] = uVar21;
      puVar7[-7 - lVar13] = uVar20;
      puVar7[-6 - lVar13] = uVar19;
      puVar7[-5 - lVar13] = uVar8;
    }
    else {
      uVar11 = uVar15 & 0xfffffffffffffffe;
      puVar9 = puVar6 + 0xc;
      lVar13 = 0;
      do {
        uVar3 = puVar9[-0xc];
        uVar4 = puVar9[-0xb];
        uVar5 = puVar9[-10];
        uVar19 = puVar9[-8];
        uVar20 = puVar9[-7];
        uVar21 = puVar9[-6];
        uVar2 = puVar9[-5];
        puVar1 = puVar7 + lVar13 + -4;
        *puVar1 = puVar9[-9] ^ uVar8;
        puVar1[1] = uVar5 ^ uVar18;
        puVar1[2] = uVar4 ^ uVar12;
        puVar1[3] = uVar3 ^ uVar10;
        puVar1 = puVar7 + lVar13 + -8;
        *puVar1 = uVar2 ^ uVar8;
        puVar1[1] = uVar21 ^ uVar18;
        puVar1[2] = uVar20 ^ uVar12;
        puVar1[3] = uVar19 ^ uVar10;
        uVar3 = puVar9[-4];
        uVar4 = puVar9[-3];
        uVar5 = puVar9[-2];
        uVar19 = *puVar9;
        uVar20 = puVar9[1];
        uVar21 = puVar9[2];
        uVar2 = puVar9[3];
        puVar1 = puVar7 + lVar13 + -0xc;
        *puVar1 = puVar9[-1] ^ uVar8;
        puVar1[1] = uVar5 ^ uVar18;
        puVar1[2] = uVar4 ^ uVar12;
        puVar1[3] = uVar3 ^ uVar10;
        puVar1 = puVar7 + lVar13 + -0x10;
        *puVar1 = uVar2 ^ uVar8;
        puVar1[1] = uVar21 ^ uVar18;
        puVar1[2] = uVar20 ^ uVar12;
        puVar1[3] = uVar19 ^ uVar10;
        puVar9 = puVar9 + 0x10;
        lVar13 = lVar13 + -0x10;
        uVar11 = uVar11 - 2;
      } while (uVar11 != 0);
      lVar13 = -lVar13;
      if ((uVar15 & 1) != 0) goto LAB_00592b46;
    }
    if (uVar16 == uVar14) goto LAB_00592b88;
    uVar17 = uVar17 - (int)uVar14;
    puVar7 = puVar7 + -uVar14;
    puVar6 = puVar6 + uVar14;
    uVar12 = uVar17 - 1;
    uVar10 = uVar17 & 3;
    if (uVar10 != 0) goto LAB_005929fa;
  }
  uVar10 = _DAT_006524b0;
  if (2 < uVar12) {
    puVar7 = puVar7 + -1;
    lVar13 = 0;
    do {
      *puVar7 = puVar6[lVar13] ^ uVar10;
      puVar7[-1] = puVar6[lVar13 + 1] ^ uVar10;
      puVar7[-2] = puVar6[lVar13 + 2] ^ uVar10;
      puVar7[-3] = puVar6[lVar13 + 3] ^ uVar10;
      lVar13 = lVar13 + 4;
      puVar7 = puVar7 + -4;
    } while (uVar17 != (uint)lVar13);
  }
LAB_00592b88:
  return param_1 + 0x20;
}


