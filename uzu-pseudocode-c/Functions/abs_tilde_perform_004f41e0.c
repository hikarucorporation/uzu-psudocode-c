// Function : abs_tilde_perform
// Namespace: 
// Entry    : 004f41e0
// Prototype: long abs_tilde_perform(long param_1)
// Body     : 004f41e0 - 004f43a4


/* WARNING: Removing unreachable block (ram,0x004f43a3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long abs_tilde_perform(long param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  
  uVar11 = _UNK_005d91cc;
  uVar18 = _UNK_005d91c8;
  uVar13 = _UNK_005d91c4;
  uVar9 = _DAT_005d91c0;
  uVar17 = (uint)*(ulong *)(param_1 + 0x18);
  if (uVar17 == 0) goto LAB_004f4376;
  puVar7 = *(uint **)(param_1 + 8);
  puVar8 = *(uint **)(param_1 + 0x10);
  if ((uVar17 - 1 < 7) ||
     ((puVar8 < puVar7 + (ulong)(uVar17 - 1) + 1 && (puVar7 < puVar8 + (ulong)(uVar17 - 1) + 1)))) {
    uVar13 = uVar17 - 1;
    uVar9 = uVar17 & 3;
    if ((*(ulong *)(param_1 + 0x18) & 3) != 0) {
LAB_004f423a:
      uVar18 = _DAT_005d91c0;
      uVar11 = 0;
      do {
        uVar19 = *puVar7;
        puVar7 = puVar7 + 1;
        *puVar8 = uVar19 & uVar18;
        puVar8 = puVar8 + 1;
        uVar11 = uVar11 + 1;
      } while (uVar9 != uVar11);
      uVar17 = uVar17 - uVar11;
    }
  }
  else {
    uVar15 = (ulong)(uVar17 - 1) + 1;
    uVar14 = uVar15 & 0xfffffffffffffff8;
    uVar16 = (uVar14 - 8 >> 3) + 1;
    if (uVar14 - 8 == 0) {
      lVar12 = 0;
LAB_004f4352:
      puVar1 = puVar7 + lVar12;
      puVar2 = puVar7 + lVar12 + 4;
      uVar9 = puVar1[1] & _UNK_005d91c4;
      uVar13 = puVar1[2] & _UNK_005d91c8;
      uVar18 = puVar1[3] & _UNK_005d91cc;
      uVar11 = *puVar2 & _DAT_005d91c0;
      uVar19 = puVar2[1] & _UNK_005d91c4;
      uVar20 = puVar2[2] & _UNK_005d91c8;
      uVar21 = puVar2[3] & _UNK_005d91cc;
      puVar2 = puVar8 + lVar12;
      *puVar2 = *puVar1 & _DAT_005d91c0;
      puVar2[1] = uVar9;
      puVar2[2] = uVar13;
      puVar2[3] = uVar18;
      puVar1 = puVar8 + lVar12 + 4;
      *puVar1 = uVar11;
      puVar1[1] = uVar19;
      puVar1[2] = uVar20;
      puVar1[3] = uVar21;
    }
    else {
      uVar10 = uVar16 & 0xfffffffffffffffe;
      lVar12 = 0;
      do {
        puVar1 = puVar7 + lVar12;
        uVar19 = puVar1[1];
        uVar20 = puVar1[2];
        uVar21 = puVar1[3];
        puVar2 = puVar7 + lVar12 + 4;
        uVar3 = *puVar2;
        uVar4 = puVar2[1];
        uVar5 = puVar2[2];
        uVar6 = puVar2[3];
        puVar2 = puVar8 + lVar12;
        *puVar2 = *puVar1 & uVar9;
        puVar2[1] = uVar19 & uVar13;
        puVar2[2] = uVar20 & uVar18;
        puVar2[3] = uVar21 & uVar11;
        puVar1 = puVar8 + lVar12 + 4;
        *puVar1 = uVar3 & uVar9;
        puVar1[1] = uVar4 & uVar13;
        puVar1[2] = uVar5 & uVar18;
        puVar1[3] = uVar6 & uVar11;
        puVar1 = puVar7 + lVar12 + 8;
        uVar19 = puVar1[1];
        uVar20 = puVar1[2];
        uVar21 = puVar1[3];
        puVar2 = puVar7 + lVar12 + 0xc;
        uVar3 = *puVar2;
        uVar4 = puVar2[1];
        uVar5 = puVar2[2];
        uVar6 = puVar2[3];
        puVar2 = puVar8 + lVar12 + 8;
        *puVar2 = *puVar1 & uVar9;
        puVar2[1] = uVar19 & uVar13;
        puVar2[2] = uVar20 & uVar18;
        puVar2[3] = uVar21 & uVar11;
        puVar1 = puVar8 + lVar12 + 0xc;
        *puVar1 = uVar3 & uVar9;
        puVar1[1] = uVar4 & uVar13;
        puVar1[2] = uVar5 & uVar18;
        puVar1[3] = uVar6 & uVar11;
        lVar12 = lVar12 + 0x10;
        uVar10 = uVar10 - 2;
      } while (uVar10 != 0);
      if ((uVar16 & 1) != 0) goto LAB_004f4352;
    }
    if (uVar15 == uVar14) goto LAB_004f4376;
    puVar7 = puVar7 + uVar14;
    uVar17 = uVar17 - (int)uVar14;
    puVar8 = puVar8 + uVar14;
    uVar13 = uVar17 - 1;
    uVar9 = uVar17 & 3;
    if (uVar9 != 0) goto LAB_004f423a;
  }
  uVar9 = _DAT_005d91c0;
  if (2 < uVar13) {
    lVar12 = 0;
    do {
      puVar8[lVar12] = puVar7[lVar12] & uVar9;
      puVar8[lVar12 + 1] = puVar7[lVar12 + 1] & uVar9;
      puVar8[lVar12 + 2] = puVar7[lVar12 + 2] & uVar9;
      puVar8[lVar12 + 3] = puVar7[lVar12 + 3] & uVar9;
      lVar12 = lVar12 + 4;
    } while (uVar17 != (uint)lVar12);
  }
LAB_004f4376:
  return param_1 + 0x20;
}


