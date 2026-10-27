// Function : sigframp_perform
// Namespace: 
// Entry    : 00592f60
// Prototype: long sigframp_perform(long param_1)
// Body     : 00592f60 - 005932d4


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long sigframp_perform(long param_1)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  uint uVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  
  pfVar4 = *(float **)(param_1 + 8);
  pfVar5 = *(float **)(param_1 + 0x10);
  puVar13 = *(undefined4 **)(param_1 + 0x18);
  puVar14 = *(undefined4 **)(param_1 + 0x20);
  fVar29 = *pfVar4;
  fVar32 = pfVar4[1];
  fVar28 = *pfVar5;
  fVar31 = pfVar5[1];
  uVar22 = *(ulong *)(param_1 + 0x28);
  uVar6 = (uint)uVar22;
  uVar20 = uVar6 + 1;
  *puVar13 = 0;
  *puVar14 = 0;
  dVar12 = _DAT_0065d710;
  fVar11 = _UNK_0065d704;
  fVar10 = _DAT_0065d700;
  fVar9 = DAT_005d98cc;
  fVar8 = DAT_005d9078;
  fVar7 = DAT_005d9038;
  puVar14 = puVar14 + 1;
  puVar13 = puVar13 + 1;
  if (uVar6 != 2) {
    fVar34 = DAT_005d9038 / ((float)(int)uVar6 * (float)(int)uVar6);
    iVar17 = uVar6 - 2;
    lVar16 = 0;
    fVar33 = DAT_005d9038;
    do {
      fVar2 = *(float *)((long)pfVar4 + lVar16 + 8);
      fVar3 = *(float *)((long)pfVar5 + lVar16 + 8);
      fVar24 = (fVar3 + fVar28) * fVar10 + fVar31;
      fVar25 = (fVar2 + fVar29) * fVar11 + fVar32;
      fVar27 = fVar25 * fVar25 + fVar24 * fVar24;
      fVar30 = 0.0;
      fVar26 = 0.0;
      if (dVar12 < (double)fVar27) {
        fVar29 = (fVar25 * (fVar29 - fVar2) + fVar24 * (fVar28 - fVar3)) / (fVar27 + fVar27);
        fVar30 = 0.0;
        fVar26 = 0.0;
        if (fVar9 <= fVar29 && fVar29 <= fVar8) {
          fVar30 = fVar29 + fVar33;
          fVar26 = fVar27;
        }
      }
      *(float *)((long)puVar13 + lVar16) = fVar30;
      *(float *)((long)puVar14 + lVar16) = fVar26 * fVar34;
      fVar33 = fVar33 + fVar7;
      lVar16 = lVar16 + 4;
      iVar17 = iVar17 + -1;
      fVar28 = fVar31;
      fVar29 = fVar32;
      fVar31 = fVar3;
      fVar32 = fVar2;
    } while (iVar17 != 0);
    if (uVar20 == 0) goto LAB_005932b0;
    puVar13 = (undefined4 *)((long)puVar13 + lVar16);
    puVar14 = (undefined4 *)((long)puVar14 + lVar16);
  }
  uVar22 = uVar22 & 0xffffffff;
  if ((6 < uVar22) && ((puVar14 + uVar22 + 1 <= puVar13 || (puVar13 + uVar22 + 1 <= puVar14)))) {
    uVar21 = uVar22 + 1 & 0xfffffffffffffff8;
    uVar19 = (uVar21 - 8 >> 3) + 1;
    uVar23 = (ulong)((uint)uVar19 & 3);
    if (uVar21 - 8 < 0x18) {
      lVar16 = 0;
    }
    else {
      uVar19 = uVar19 & 0xfffffffffffffffc;
      lVar16 = 0;
      do {
        *(undefined8 *)(puVar13 + lVar16) = 0;
        *(undefined8 *)((long)(puVar13 + lVar16) + 8) = 0;
        *(undefined8 *)(puVar13 + lVar16 + 4) = 0;
        *(undefined8 *)((long)(puVar13 + lVar16 + 4) + 8) = 0;
        *(undefined8 *)(puVar14 + lVar16) = 0;
        *(undefined8 *)((long)(puVar14 + lVar16) + 8) = 0;
        *(undefined8 *)(puVar14 + lVar16 + 4) = 0;
        *(undefined8 *)((long)(puVar14 + lVar16 + 4) + 8) = 0;
        *(undefined8 *)(puVar13 + lVar16 + 8) = 0;
        *(undefined8 *)((long)(puVar13 + lVar16 + 8) + 8) = 0;
        *(undefined8 *)(puVar13 + lVar16 + 0xc) = 0;
        *(undefined8 *)((long)(puVar13 + lVar16 + 0xc) + 8) = 0;
        *(undefined8 *)(puVar14 + lVar16 + 8) = 0;
        *(undefined8 *)((long)(puVar14 + lVar16 + 8) + 8) = 0;
        *(undefined8 *)(puVar14 + lVar16 + 0xc) = 0;
        *(undefined8 *)((long)(puVar14 + lVar16 + 0xc) + 8) = 0;
        *(undefined8 *)(puVar13 + lVar16 + 0x10) = 0;
        *(undefined8 *)((long)(puVar13 + lVar16 + 0x10) + 8) = 0;
        *(undefined8 *)(puVar13 + lVar16 + 0x14) = 0;
        *(undefined8 *)((long)(puVar13 + lVar16 + 0x14) + 8) = 0;
        *(undefined8 *)(puVar14 + lVar16 + 0x10) = 0;
        *(undefined8 *)((long)(puVar14 + lVar16 + 0x10) + 8) = 0;
        *(undefined8 *)(puVar14 + lVar16 + 0x14) = 0;
        *(undefined8 *)((long)(puVar14 + lVar16 + 0x14) + 8) = 0;
        *(undefined8 *)(puVar13 + lVar16 + 0x18) = 0;
        *(undefined8 *)((long)(puVar13 + lVar16 + 0x18) + 8) = 0;
        *(undefined8 *)(puVar13 + lVar16 + 0x1c) = 0;
        *(undefined8 *)((long)(puVar13 + lVar16 + 0x1c) + 8) = 0;
        *(undefined8 *)(puVar14 + lVar16 + 0x18) = 0;
        *(undefined8 *)((long)(puVar14 + lVar16 + 0x18) + 8) = 0;
        *(undefined8 *)(puVar14 + lVar16 + 0x1c) = 0;
        *(undefined8 *)((long)(puVar14 + lVar16 + 0x1c) + 8) = 0;
        lVar16 = lVar16 + 0x20;
        uVar19 = uVar19 - 4;
      } while (uVar19 != 0);
    }
    if (uVar23 != 0) {
      lVar15 = 0;
      do {
        puVar1 = (undefined8 *)((long)puVar13 + lVar15 + lVar16 * 4);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((long)puVar13 + lVar15 + lVar16 * 4 + 0x10);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((long)puVar14 + lVar15 + lVar16 * 4);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((long)puVar14 + lVar15 + lVar16 * 4 + 0x10);
        *puVar1 = 0;
        puVar1[1] = 0;
        lVar15 = lVar15 + 0x20;
      } while (uVar23 * 0x20 != lVar15);
    }
    if (uVar22 + 1 == uVar21) goto LAB_005932b0;
    puVar13 = puVar13 + uVar21;
    puVar14 = puVar14 + uVar21;
    uVar20 = uVar20 - (int)uVar21;
    uVar6 = uVar20 - 1;
  }
  if ((uVar20 & 7) != 0) {
    uVar18 = 0;
    do {
      *puVar13 = 0;
      puVar13 = puVar13 + 1;
      *puVar14 = 0;
      puVar14 = puVar14 + 1;
      uVar18 = uVar18 + 1;
    } while ((uVar20 & 7) != uVar18);
    uVar20 = uVar20 - uVar18;
  }
  if (6 < uVar6) {
    lVar16 = 0;
    do {
      puVar13[lVar16] = 0;
      puVar14[lVar16] = 0;
      puVar13[lVar16 + 1] = 0;
      puVar14[lVar16 + 1] = 0;
      puVar13[lVar16 + 2] = 0;
      puVar14[lVar16 + 2] = 0;
      puVar13[lVar16 + 3] = 0;
      puVar14[lVar16 + 3] = 0;
      puVar13[lVar16 + 4] = 0;
      puVar14[lVar16 + 4] = 0;
      puVar13[lVar16 + 5] = 0;
      puVar14[lVar16 + 5] = 0;
      puVar13[lVar16 + 6] = 0;
      puVar14[lVar16 + 6] = 0;
      puVar13[lVar16 + 7] = 0;
      puVar14[lVar16 + 7] = 0;
      lVar16 = lVar16 + 8;
    } while (uVar20 != (uint)lVar16);
  }
LAB_005932b0:
  return param_1 + 0x30;
}


