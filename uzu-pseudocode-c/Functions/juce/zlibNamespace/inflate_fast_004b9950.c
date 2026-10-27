// Function : inflate_fast
// Namespace: juce:zlibNamespace
// Entry    : 004b9950
// Prototype: undefined inflate_fast(long * param_1, uint param_2)
// Body     : 004b9950 - 004ba7d6


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::zlibNamespace::inflate_fast(juce::zlibNamespace::z_stream_s*, unsigned int) */

void __cdecl juce::zlibNamespace::inflate_fast(long *param_1,uint param_2)

{
  ulong uVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  byte bVar4;
  byte bVar5;
  undefined1 uVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  byte bVar17;
  uint uVar18;
  byte *pbVar19;
  ulong uVar20;
  ulong uVar21;
  char *pcVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  undefined4 uVar26;
  ulong uVar27;
  undefined1 *puVar28;
  ulong uVar29;
  ulong uVar30;
  long lVar31;
  int iVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  ulong uVar36;
  long lVar37;
  ulong uVar38;
  ulong uVar39;
  int iVar40;
  undefined1 *puVar41;
  byte *pbVar42;
  long lVar43;
  uint uVar44;
  undefined1 *puVar45;
  ulong uVar46;
  ulong uVar47;
  uint local_100;
  int local_50;
  
  lVar11 = param_1[7];
  pbVar42 = (byte *)*param_1;
  pbVar19 = pbVar42 + ((int)param_1[1] - 5);
  puVar41 = (undefined1 *)param_1[3];
  iVar9 = (int)param_1[4];
  uVar8 = *(uint *)(lVar11 + 0x44);
  iVar23 = (int)puVar41 + iVar9;
  local_50 = (int)puVar41 - (param_2 - iVar9);
  puVar45 = puVar41 + (iVar9 - 0x101);
  bVar4 = *(byte *)(lVar11 + 0x78);
  bVar5 = *(byte *)(lVar11 + 0x7c);
  iVar32 = ~param_2 + iVar23;
  uVar33 = uVar8 - 1;
  uVar1 = (ulong)uVar33 + 1;
  uVar21 = uVar1 & 0xffffffffffffffe0;
  uVar20 = (uVar21 - 0x20 >> 5) + 1;
  uVar24 = uVar8 - (int)uVar21;
  uVar27 = (ulong)((uint)uVar20 & 3);
  iVar9 = *(int *)(lVar11 + 0x3c);
  uVar10 = *(uint *)(lVar11 + 0x40);
  puVar12 = *(undefined1 **)(lVar11 + 0x48);
  uVar47 = *(ulong *)(lVar11 + 0x50);
  uVar18 = *(uint *)(lVar11 + 0x58);
  lVar43 = *(long *)(lVar11 + 0x68);
  lVar13 = *(long *)(lVar11 + 0x70);
LAB_004b9a8d:
  if (uVar18 < 0xf) {
    bVar17 = *pbVar42;
    pbVar2 = pbVar42 + 1;
    pbVar42 = pbVar42 + 2;
    uVar47 = ((ulong)*pbVar2 << ((byte)uVar18 + 8 & 0x3f)) +
             ((ulong)bVar17 << ((byte)uVar18 & 0x3f)) + uVar47;
    uVar18 = uVar18 + 0x10;
  }
  uVar36 = (ulong)((uint)uVar47 & ~(-1 << (bVar4 & 0x1f)));
  bVar17 = *(byte *)(lVar43 + 1 + uVar36 * 4);
  uVar47 = uVar47 >> (bVar17 & 0x3f);
  lVar37 = lVar43 + uVar36 * 4;
  uVar18 = uVar18 - bVar17;
  bVar17 = *(byte *)(lVar43 + uVar36 * 4);
  while (bVar17 != 0) {
    if ((bVar17 & 0x10) != 0) {
      uVar44 = (uint)*(ushort *)(lVar37 + 2);
      if ((bVar17 & 0xf) != 0) {
        uVar25 = bVar17 & 0xf;
        if (uVar18 < uVar25) {
          bVar17 = *pbVar42;
          pbVar42 = pbVar42 + 1;
          uVar47 = uVar47 + ((ulong)bVar17 << ((byte)uVar18 & 0x3f));
          uVar18 = uVar18 + 8;
        }
        uVar44 = (uint)*(ushort *)(lVar37 + 2) + (~(-1 << (sbyte)uVar25) & (uint)uVar47);
        uVar47 = uVar47 >> (sbyte)uVar25;
        uVar18 = uVar18 - uVar25;
      }
      if (uVar18 < 0xf) {
        bVar17 = *pbVar42;
        pbVar2 = pbVar42 + 1;
        pbVar42 = pbVar42 + 2;
        uVar47 = ((ulong)*pbVar2 << ((byte)uVar18 + 8 & 0x3f)) +
                 ((ulong)bVar17 << ((byte)uVar18 & 0x3f)) + uVar47;
        uVar18 = uVar18 + 0x10;
      }
      uVar36 = (ulong)((uint)uVar47 & ~(-1 << (bVar5 & 0x1f)));
      bVar17 = *(byte *)(lVar13 + 1 + uVar36 * 4);
      uVar47 = uVar47 >> (bVar17 & 0x3f);
      lVar37 = lVar13 + uVar36 * 4;
      uVar18 = uVar18 - bVar17;
      bVar17 = *(byte *)(lVar13 + uVar36 * 4);
      if ((bVar17 & 0x10) == 0) goto LAB_004b9be0;
      goto LAB_004b9c16;
    }
    if ((bVar17 & 0x40) != 0) {
      uVar26 = 0x3f3f;
      if ((bVar17 & 0x20) != 0) goto LAB_004ba76d;
      pcVar22 = "invalid literal/length code";
      goto LAB_004ba764;
    }
    lVar31 = lVar43 + (ulong)*(ushort *)(lVar37 + 2) * 4;
    uVar36 = (ulong)(~(-1 << (bVar17 & 0x1f)) & (uint)uVar47);
    bVar17 = *(byte *)(lVar31 + 1 + uVar36 * 4);
    uVar47 = uVar47 >> (bVar17 & 0x3f);
    lVar37 = lVar31 + uVar36 * 4;
    uVar18 = uVar18 - bVar17;
    bVar17 = *(byte *)(lVar31 + uVar36 * 4);
  }
  *puVar41 = *(undefined1 *)(lVar37 + 2);
  goto LAB_004b9b1e;
  while( true ) {
    lVar31 = lVar13 + (ulong)*(ushort *)(lVar37 + 2) * 4;
    uVar36 = (ulong)(~(-1 << (bVar17 & 0x1f)) & (uint)uVar47);
    lVar37 = lVar31 + uVar36 * 4;
    bVar17 = *(byte *)(lVar31 + 1 + uVar36 * 4);
    uVar47 = uVar47 >> (bVar17 & 0x3f);
    uVar18 = uVar18 - bVar17;
    bVar17 = *(byte *)(lVar31 + uVar36 * 4);
    if ((bVar17 & 0x10) != 0) break;
LAB_004b9be0:
    if ((bVar17 & 0x40) != 0) {
      pcVar22 = "invalid distance code";
      goto LAB_004ba764;
    }
  }
LAB_004b9c16:
  bVar17 = bVar17 & 0xf;
  if (uVar18 < bVar17) {
    uVar47 = ((ulong)*pbVar42 << ((byte)uVar18 & 0x3f)) + uVar47;
    uVar25 = uVar18 + 8;
    if (uVar25 < bVar17) {
      pbVar2 = pbVar42 + 1;
      pbVar42 = pbVar42 + 2;
      uVar47 = uVar47 + ((ulong)*pbVar2 << ((byte)uVar25 & 0x3f));
      uVar18 = uVar18 + 0x10;
    }
    else {
      pbVar42 = pbVar42 + 1;
      uVar18 = uVar25;
    }
  }
  uVar7 = *(ushort *)(lVar37 + 2);
  uVar25 = ~(-1 << bVar17) & (uint)uVar47;
  uVar47 = uVar47 >> bVar17;
  uVar36 = (ulong)uVar7 + (ulong)uVar25;
  uVar18 = uVar18 - bVar17;
  iVar40 = (int)puVar41;
  local_100 = (uint)uVar36 - (iVar40 - local_50);
  if ((uint)uVar36 < (uint)(iVar40 - local_50) || local_100 == 0) {
    uVar36 = uVar36 & 0xffffffff;
    lVar37 = 0;
    uVar25 = uVar44;
    do {
      lVar31 = lVar37;
      puVar41[lVar31] = puVar41[lVar31 - uVar36];
      puVar41[lVar31 + 1] = puVar41[lVar31 + (1 - uVar36)];
      puVar41[lVar31 + 2] = puVar41[lVar31 + (2 - uVar36)];
      uVar25 = uVar25 - 3;
      lVar37 = lVar31 + 3;
    } while (2 < uVar25);
    if ((uint)lVar37 == uVar44) {
      puVar41 = puVar41 + lVar37;
    }
    else {
      puVar41[lVar37] = puVar41[lVar37 + -uVar36];
      if ((uint)lVar37 - uVar44 == -1) {
        puVar41 = puVar41 + lVar31 + 4;
      }
      else {
        puVar41[lVar31 + 4] = puVar41[lVar31 + 4 + -uVar36];
        puVar41 = puVar41 + lVar31 + 5;
      }
    }
    goto LAB_004b9b22;
  }
  if ((uVar10 < local_100) && (*(int *)(lVar11 + 0x1be8) != 0)) {
    pcVar22 = "invalid distance too far back";
LAB_004ba764:
    param_1[6] = (long)pcVar22;
    uVar26 = 0x3f51;
LAB_004ba76d:
    *(undefined4 *)(lVar11 + 8) = uVar26;
LAB_004ba771:
    lVar43 = (long)pbVar42 - (ulong)(uVar18 >> 3);
    *param_1 = lVar43;
    param_1[3] = (long)puVar41;
    *(int *)(param_1 + 1) = ((int)pbVar19 - (int)lVar43) + 5;
    *(int *)(param_1 + 4) = ((int)puVar45 - (int)puVar41) + 0x101;
    *(ulong *)(lVar11 + 0x50) = (ulong)((uint)uVar47 & ~(-1 << (sbyte)(uVar18 & 7)));
    *(uint *)(lVar11 + 0x58) = uVar18 & 7;
    return;
  }
  if (uVar8 == 0) {
    uVar29 = (ulong)(iVar9 - local_100);
    puVar28 = puVar12 + uVar29;
    uVar34 = uVar44 - local_100;
    if (uVar44 < local_100 || uVar34 == 0) goto joined_r0x004ba3fb;
    uVar44 = (uVar25 + iVar32 + (uint)uVar7) - iVar40;
    uVar46 = (ulong)uVar44;
    if ((uVar44 < 0x1f) ||
       ((puVar41 < puVar12 + uVar29 + uVar46 + 1 && (puVar28 < puVar41 + uVar46 + 1)))) {
LAB_004ba09c:
      uVar25 = local_100 - 1;
      uVar44 = local_100 & 7;
      if ((local_100 & 7) != 0) {
        local_100 = local_100 & 0xfffffff8;
        do {
          uVar6 = *puVar28;
          puVar28 = puVar28 + 1;
          *puVar41 = uVar6;
          puVar41 = puVar41 + 1;
          uVar44 = uVar44 - 1;
        } while (uVar44 != 0);
      }
      if (6 < uVar25) {
        lVar37 = 0;
        do {
          puVar41[lVar37] = puVar28[lVar37];
          puVar41[lVar37 + 1] = puVar28[lVar37 + 1];
          puVar41[lVar37 + 2] = puVar28[lVar37 + 2];
          puVar41[lVar37 + 3] = puVar28[lVar37 + 3];
          puVar41[lVar37 + 4] = puVar28[lVar37 + 4];
          puVar41[lVar37 + 5] = puVar28[lVar37 + 5];
          puVar41[lVar37 + 6] = puVar28[lVar37 + 6];
          puVar41[lVar37 + 7] = puVar28[lVar37 + 7];
          lVar37 = lVar37 + 8;
        } while (local_100 != (uint)lVar37);
        puVar41 = puVar41 + lVar37;
      }
    }
    else {
      uVar30 = uVar46 + 1 & 0x1ffffffe0;
      uVar39 = (uVar30 - 0x20 >> 5) + 1;
      uVar38 = (ulong)((uint)uVar39 & 3);
      if (uVar30 - 0x20 < 0x60) {
        lVar37 = 0;
      }
      else {
        uVar39 = uVar39 & 0xffffffffffffffc;
        lVar37 = 0;
        do {
          uVar14 = *(undefined8 *)((long)(puVar12 + lVar37 + uVar29) + 8);
          uVar15 = *(undefined8 *)(puVar12 + lVar37 + uVar29 + 0x10);
          uVar16 = *(undefined8 *)((long)(puVar12 + lVar37 + uVar29 + 0x10) + 8);
          *(undefined8 *)(puVar41 + lVar37) = *(undefined8 *)(puVar12 + lVar37 + uVar29);
          *(undefined8 *)((long)(puVar41 + lVar37) + 8) = uVar14;
          *(undefined8 *)(puVar41 + lVar37 + 0x10) = uVar15;
          *(undefined8 *)((long)(puVar41 + lVar37 + 0x10) + 8) = uVar16;
          uVar14 = *(undefined8 *)((long)(puVar12 + lVar37 + uVar29 + 0x20) + 8);
          uVar15 = *(undefined8 *)(puVar12 + lVar37 + uVar29 + 0x30);
          uVar16 = *(undefined8 *)((long)(puVar12 + lVar37 + uVar29 + 0x30) + 8);
          *(undefined8 *)(puVar41 + lVar37 + 0x20) =
               *(undefined8 *)(puVar12 + lVar37 + uVar29 + 0x20);
          *(undefined8 *)((long)(puVar41 + lVar37 + 0x20) + 8) = uVar14;
          *(undefined8 *)(puVar41 + lVar37 + 0x30) = uVar15;
          *(undefined8 *)((long)(puVar41 + lVar37 + 0x30) + 8) = uVar16;
          uVar14 = *(undefined8 *)((long)(puVar12 + lVar37 + uVar29 + 0x40) + 8);
          uVar15 = *(undefined8 *)(puVar12 + lVar37 + uVar29 + 0x50);
          uVar16 = *(undefined8 *)((long)(puVar12 + lVar37 + uVar29 + 0x50) + 8);
          *(undefined8 *)(puVar41 + lVar37 + 0x40) =
               *(undefined8 *)(puVar12 + lVar37 + uVar29 + 0x40);
          *(undefined8 *)((long)(puVar41 + lVar37 + 0x40) + 8) = uVar14;
          *(undefined8 *)(puVar41 + lVar37 + 0x50) = uVar15;
          *(undefined8 *)((long)(puVar41 + lVar37 + 0x50) + 8) = uVar16;
          uVar14 = *(undefined8 *)((long)(puVar12 + lVar37 + uVar29 + 0x60) + 8);
          uVar15 = *(undefined8 *)(puVar12 + lVar37 + uVar29 + 0x70);
          uVar16 = *(undefined8 *)((long)(puVar12 + lVar37 + uVar29 + 0x70) + 8);
          *(undefined8 *)(puVar41 + lVar37 + 0x60) =
               *(undefined8 *)(puVar12 + lVar37 + uVar29 + 0x60);
          *(undefined8 *)((long)(puVar41 + lVar37 + 0x60) + 8) = uVar14;
          *(undefined8 *)(puVar41 + lVar37 + 0x70) = uVar15;
          *(undefined8 *)((long)(puVar41 + lVar37 + 0x70) + 8) = uVar16;
          lVar37 = lVar37 + 0x80;
          uVar39 = uVar39 - 4;
        } while (uVar39 != 0);
      }
      if (uVar38 != 0) {
        lVar31 = 0;
        do {
          uVar14 = *(undefined8 *)((long)(puVar12 + lVar31 + uVar29 + lVar37) + 8);
          uVar15 = *(undefined8 *)(puVar12 + lVar31 + uVar29 + lVar37 + 0x10);
          uVar16 = *(undefined8 *)((long)(puVar12 + lVar31 + uVar29 + lVar37 + 0x10) + 8);
          *(undefined8 *)(puVar41 + lVar31 + lVar37) =
               *(undefined8 *)(puVar12 + lVar31 + uVar29 + lVar37);
          *(undefined8 *)((long)(puVar41 + lVar31 + lVar37) + 8) = uVar14;
          *(undefined8 *)(puVar41 + lVar31 + lVar37 + 0x10) = uVar15;
          *(undefined8 *)((long)(puVar41 + lVar31 + lVar37 + 0x10) + 8) = uVar16;
          lVar31 = lVar31 + 0x20;
        } while (uVar38 * 0x20 != lVar31);
      }
      puVar41 = puVar41 + uVar30;
      if (uVar46 + 1 != uVar30) {
        local_100 = local_100 - (int)uVar30;
        puVar28 = puVar28 + uVar30;
        goto LAB_004ba09c;
      }
    }
    uVar44 = uVar34;
    puVar28 = puVar41 + -uVar36;
  }
  else {
    uVar29 = (ulong)(uVar8 - local_100);
    if (uVar8 < local_100) {
      uVar29 = (ulong)((uVar8 + iVar9) - local_100);
      puVar28 = puVar12 + uVar29;
      local_100 = local_100 - uVar8;
      uVar34 = uVar44 - local_100;
      if (!(local_100 <= uVar44 && uVar34 != 0)) goto joined_r0x004ba3fb;
      uVar44 = (uVar25 + ((~uVar8 + iVar23) - param_2) + (uint)uVar7) - iVar40;
      uVar46 = (ulong)uVar44;
      if ((uVar44 < 0x1f) ||
         ((puVar41 < puVar12 + uVar29 + uVar46 + 1 && (puVar28 < puVar41 + uVar46 + 1)))) {
LAB_004ba420:
        uVar44 = local_100 - 1;
        uVar25 = local_100 & 7;
        if ((local_100 & 7) != 0) {
          local_100 = local_100 & 0xfffffff8;
          do {
            uVar6 = *puVar28;
            puVar28 = puVar28 + 1;
            *puVar41 = uVar6;
            puVar41 = puVar41 + 1;
            uVar25 = uVar25 - 1;
          } while (uVar25 != 0);
        }
        if (6 < uVar44) {
          lVar37 = 0;
          do {
            puVar41[lVar37] = puVar28[lVar37];
            puVar41[lVar37 + 1] = puVar28[lVar37 + 1];
            puVar41[lVar37 + 2] = puVar28[lVar37 + 2];
            puVar41[lVar37 + 3] = puVar28[lVar37 + 3];
            puVar41[lVar37 + 4] = puVar28[lVar37 + 4];
            puVar41[lVar37 + 5] = puVar28[lVar37 + 5];
            puVar41[lVar37 + 6] = puVar28[lVar37 + 6];
            puVar41[lVar37 + 7] = puVar28[lVar37 + 7];
            lVar37 = lVar37 + 8;
          } while (local_100 != (uint)lVar37);
          puVar41 = puVar41 + lVar37;
        }
      }
      else {
        uVar39 = uVar46 + 1 & 0x1ffffffe0;
        uVar30 = (uVar39 - 0x20 >> 5) + 1;
        uVar38 = (ulong)((uint)uVar30 & 3);
        if (uVar39 - 0x20 < 0x60) {
          lVar37 = 0;
        }
        else {
          uVar30 = uVar30 & 0xffffffffffffffc;
          lVar37 = 0;
          do {
            uVar14 = *(undefined8 *)((long)(puVar12 + lVar37 + uVar29) + 8);
            uVar15 = *(undefined8 *)(puVar12 + lVar37 + uVar29 + 0x10);
            uVar16 = *(undefined8 *)((long)(puVar12 + lVar37 + uVar29 + 0x10) + 8);
            *(undefined8 *)(puVar41 + lVar37) = *(undefined8 *)(puVar12 + lVar37 + uVar29);
            *(undefined8 *)((long)(puVar41 + lVar37) + 8) = uVar14;
            *(undefined8 *)(puVar41 + lVar37 + 0x10) = uVar15;
            *(undefined8 *)((long)(puVar41 + lVar37 + 0x10) + 8) = uVar16;
            uVar14 = *(undefined8 *)((long)(puVar12 + lVar37 + uVar29 + 0x20) + 8);
            uVar15 = *(undefined8 *)(puVar12 + lVar37 + uVar29 + 0x30);
            uVar16 = *(undefined8 *)((long)(puVar12 + lVar37 + uVar29 + 0x30) + 8);
            *(undefined8 *)(puVar41 + lVar37 + 0x20) =
                 *(undefined8 *)(puVar12 + lVar37 + uVar29 + 0x20);
            *(undefined8 *)((long)(puVar41 + lVar37 + 0x20) + 8) = uVar14;
            *(undefined8 *)(puVar41 + lVar37 + 0x30) = uVar15;
            *(undefined8 *)((long)(puVar41 + lVar37 + 0x30) + 8) = uVar16;
            uVar14 = *(undefined8 *)((long)(puVar12 + lVar37 + uVar29 + 0x40) + 8);
            uVar15 = *(undefined8 *)(puVar12 + lVar37 + uVar29 + 0x50);
            uVar16 = *(undefined8 *)((long)(puVar12 + lVar37 + uVar29 + 0x50) + 8);
            *(undefined8 *)(puVar41 + lVar37 + 0x40) =
                 *(undefined8 *)(puVar12 + lVar37 + uVar29 + 0x40);
            *(undefined8 *)((long)(puVar41 + lVar37 + 0x40) + 8) = uVar14;
            *(undefined8 *)(puVar41 + lVar37 + 0x50) = uVar15;
            *(undefined8 *)((long)(puVar41 + lVar37 + 0x50) + 8) = uVar16;
            uVar14 = *(undefined8 *)((long)(puVar12 + lVar37 + uVar29 + 0x60) + 8);
            uVar15 = *(undefined8 *)(puVar12 + lVar37 + uVar29 + 0x70);
            uVar16 = *(undefined8 *)((long)(puVar12 + lVar37 + uVar29 + 0x70) + 8);
            *(undefined8 *)(puVar41 + lVar37 + 0x60) =
                 *(undefined8 *)(puVar12 + lVar37 + uVar29 + 0x60);
            *(undefined8 *)((long)(puVar41 + lVar37 + 0x60) + 8) = uVar14;
            *(undefined8 *)(puVar41 + lVar37 + 0x70) = uVar15;
            *(undefined8 *)((long)(puVar41 + lVar37 + 0x70) + 8) = uVar16;
            lVar37 = lVar37 + 0x80;
            uVar30 = uVar30 - 4;
          } while (uVar30 != 0);
        }
        if (uVar38 != 0) {
          lVar31 = 0;
          do {
            uVar14 = *(undefined8 *)((long)(puVar12 + lVar31 + uVar29 + lVar37) + 8);
            uVar15 = *(undefined8 *)(puVar12 + lVar31 + uVar29 + lVar37 + 0x10);
            uVar16 = *(undefined8 *)((long)(puVar12 + lVar31 + uVar29 + lVar37 + 0x10) + 8);
            *(undefined8 *)(puVar41 + lVar31 + lVar37) =
                 *(undefined8 *)(puVar12 + lVar31 + uVar29 + lVar37);
            *(undefined8 *)((long)(puVar41 + lVar31 + lVar37) + 8) = uVar14;
            *(undefined8 *)(puVar41 + lVar31 + lVar37 + 0x10) = uVar15;
            *(undefined8 *)((long)(puVar41 + lVar31 + lVar37 + 0x10) + 8) = uVar16;
            lVar31 = lVar31 + 0x20;
          } while (uVar38 * 0x20 != lVar31);
        }
        puVar41 = puVar41 + uVar39;
        if (uVar46 + 1 != uVar39) {
          local_100 = local_100 - (int)uVar39;
          puVar28 = puVar28 + uVar39;
          goto LAB_004ba420;
        }
      }
      uVar44 = uVar34;
      puVar28 = puVar12;
      if (!(uVar8 <= uVar34 && uVar34 - uVar8 != 0)) goto joined_r0x004ba3fb;
      uVar44 = uVar8;
      uVar25 = uVar33;
      if ((uVar33 < 0x1f) ||
         ((puVar41 < puVar12 + (ulong)uVar33 + 1 && (puVar12 < puVar41 + uVar1)))) {
joined_r0x004ba4fb:
        uVar35 = uVar44 & 7;
        if (uVar35 != 0) {
          uVar44 = uVar44 & 0xfffffff8;
          do {
            uVar6 = *puVar28;
            puVar28 = puVar28 + 1;
            *puVar41 = uVar6;
            puVar41 = puVar41 + 1;
            uVar35 = uVar35 - 1;
          } while (uVar35 != 0);
        }
        if (6 < uVar25) {
          lVar37 = 0;
          do {
            puVar41[lVar37] = puVar28[lVar37];
            puVar41[lVar37 + 1] = puVar28[lVar37 + 1];
            puVar41[lVar37 + 2] = puVar28[lVar37 + 2];
            puVar41[lVar37 + 3] = puVar28[lVar37 + 3];
            puVar41[lVar37 + 4] = puVar28[lVar37 + 4];
            puVar41[lVar37 + 5] = puVar28[lVar37 + 5];
            puVar41[lVar37 + 6] = puVar28[lVar37 + 6];
            puVar41[lVar37 + 7] = puVar28[lVar37 + 7];
            lVar37 = lVar37 + 8;
          } while (uVar44 != (uint)lVar37);
          puVar41 = puVar41 + lVar37;
        }
      }
      else {
        if (uVar21 - 0x20 < 0x60) {
          lVar37 = 0;
        }
        else {
          lVar37 = 0;
          uVar29 = uVar20 & 0xfffffffffffffffc;
          do {
            uVar14 = *(undefined8 *)((long)(puVar12 + lVar37) + 8);
            uVar15 = *(undefined8 *)(puVar12 + lVar37 + 0x10);
            uVar16 = *(undefined8 *)((long)(puVar12 + lVar37 + 0x10) + 8);
            *(undefined8 *)(puVar41 + lVar37) = *(undefined8 *)(puVar12 + lVar37);
            *(undefined8 *)((long)(puVar41 + lVar37) + 8) = uVar14;
            *(undefined8 *)(puVar41 + lVar37 + 0x10) = uVar15;
            *(undefined8 *)((long)(puVar41 + lVar37 + 0x10) + 8) = uVar16;
            uVar14 = *(undefined8 *)((long)(puVar12 + lVar37 + 0x20) + 8);
            uVar15 = *(undefined8 *)(puVar12 + lVar37 + 0x30);
            uVar16 = *(undefined8 *)((long)(puVar12 + lVar37 + 0x30) + 8);
            *(undefined8 *)(puVar41 + lVar37 + 0x20) = *(undefined8 *)(puVar12 + lVar37 + 0x20);
            *(undefined8 *)((long)(puVar41 + lVar37 + 0x20) + 8) = uVar14;
            *(undefined8 *)(puVar41 + lVar37 + 0x30) = uVar15;
            *(undefined8 *)((long)(puVar41 + lVar37 + 0x30) + 8) = uVar16;
            uVar14 = *(undefined8 *)((long)(puVar12 + lVar37 + 0x40) + 8);
            uVar15 = *(undefined8 *)(puVar12 + lVar37 + 0x50);
            uVar16 = *(undefined8 *)((long)(puVar12 + lVar37 + 0x50) + 8);
            *(undefined8 *)(puVar41 + lVar37 + 0x40) = *(undefined8 *)(puVar12 + lVar37 + 0x40);
            *(undefined8 *)((long)(puVar41 + lVar37 + 0x40) + 8) = uVar14;
            *(undefined8 *)(puVar41 + lVar37 + 0x50) = uVar15;
            *(undefined8 *)((long)(puVar41 + lVar37 + 0x50) + 8) = uVar16;
            uVar14 = *(undefined8 *)((long)(puVar12 + lVar37 + 0x60) + 8);
            uVar15 = *(undefined8 *)(puVar12 + lVar37 + 0x70);
            uVar16 = *(undefined8 *)((long)(puVar12 + lVar37 + 0x70) + 8);
            *(undefined8 *)(puVar41 + lVar37 + 0x60) = *(undefined8 *)(puVar12 + lVar37 + 0x60);
            *(undefined8 *)((long)(puVar41 + lVar37 + 0x60) + 8) = uVar14;
            *(undefined8 *)(puVar41 + lVar37 + 0x70) = uVar15;
            *(undefined8 *)((long)(puVar41 + lVar37 + 0x70) + 8) = uVar16;
            lVar37 = lVar37 + 0x80;
            uVar29 = uVar29 - 4;
          } while (uVar29 != 0);
        }
        if (uVar27 != 0) {
          lVar31 = 0;
          do {
            uVar14 = *(undefined8 *)((long)(puVar12 + lVar31 + lVar37) + 8);
            uVar15 = *(undefined8 *)(puVar12 + lVar31 + lVar37 + 0x10);
            uVar16 = *(undefined8 *)((long)(puVar12 + lVar31 + lVar37 + 0x10) + 8);
            *(undefined8 *)(puVar41 + lVar31 + lVar37) = *(undefined8 *)(puVar12 + lVar31 + lVar37);
            *(undefined8 *)((long)(puVar41 + lVar31 + lVar37) + 8) = uVar14;
            *(undefined8 *)(puVar41 + lVar31 + lVar37 + 0x10) = uVar15;
            *(undefined8 *)((long)(puVar41 + lVar31 + lVar37 + 0x10) + 8) = uVar16;
            lVar31 = lVar31 + 0x20;
          } while (uVar27 << 5 != lVar31);
        }
        puVar41 = puVar41 + uVar21;
        if (uVar1 != uVar21) {
          uVar44 = uVar24;
          uVar25 = uVar24 - 1;
          puVar28 = puVar12 + uVar21;
          goto joined_r0x004ba4fb;
        }
      }
      puVar28 = puVar41 + -(uVar36 & 0xffffffff);
      uVar44 = uVar34 - uVar8;
    }
    else {
      puVar28 = puVar12 + uVar29;
      uVar34 = uVar44 - local_100;
      if (!(uVar44 < local_100 || uVar34 == 0)) {
        uVar44 = (uVar25 + iVar32 + (uint)uVar7) - iVar40;
        uVar46 = (ulong)uVar44;
        if ((uVar44 < 0x1f) ||
           ((puVar41 < puVar12 + uVar29 + uVar46 + 1 && (puVar28 < puVar41 + uVar46 + 1)))) {
LAB_004ba33a:
          uVar25 = local_100 - 1;
          uVar44 = local_100 & 7;
          if ((local_100 & 7) != 0) {
            local_100 = local_100 & 0xfffffff8;
            do {
              uVar6 = *puVar28;
              puVar28 = puVar28 + 1;
              *puVar41 = uVar6;
              puVar41 = puVar41 + 1;
              uVar44 = uVar44 - 1;
            } while (uVar44 != 0);
          }
          if (6 < uVar25) {
            lVar37 = 0;
            do {
              puVar41[lVar37] = puVar28[lVar37];
              puVar41[lVar37 + 1] = puVar28[lVar37 + 1];
              puVar41[lVar37 + 2] = puVar28[lVar37 + 2];
              puVar41[lVar37 + 3] = puVar28[lVar37 + 3];
              puVar41[lVar37 + 4] = puVar28[lVar37 + 4];
              puVar41[lVar37 + 5] = puVar28[lVar37 + 5];
              puVar41[lVar37 + 6] = puVar28[lVar37 + 6];
              puVar41[lVar37 + 7] = puVar28[lVar37 + 7];
              lVar37 = lVar37 + 8;
            } while (local_100 != (uint)lVar37);
            puVar41 = puVar41 + lVar37;
          }
        }
        else {
          uVar39 = uVar46 + 1 & 0x1ffffffe0;
          uVar38 = (uVar39 - 0x20 >> 5) + 1;
          uVar30 = (ulong)((uint)uVar38 & 3);
          if (uVar39 - 0x20 < 0x60) {
            lVar37 = 0;
          }
          else {
            uVar38 = uVar38 & 0xffffffffffffffc;
            lVar37 = 0;
            do {
              uVar14 = *(undefined8 *)((long)(puVar12 + lVar37 + uVar29) + 8);
              uVar15 = *(undefined8 *)(puVar12 + lVar37 + uVar29 + 0x10);
              uVar16 = *(undefined8 *)((long)(puVar12 + lVar37 + uVar29 + 0x10) + 8);
              *(undefined8 *)(puVar41 + lVar37) = *(undefined8 *)(puVar12 + lVar37 + uVar29);
              *(undefined8 *)((long)(puVar41 + lVar37) + 8) = uVar14;
              *(undefined8 *)(puVar41 + lVar37 + 0x10) = uVar15;
              *(undefined8 *)((long)(puVar41 + lVar37 + 0x10) + 8) = uVar16;
              uVar14 = *(undefined8 *)((long)(puVar12 + lVar37 + uVar29 + 0x20) + 8);
              uVar15 = *(undefined8 *)(puVar12 + lVar37 + uVar29 + 0x30);
              uVar16 = *(undefined8 *)((long)(puVar12 + lVar37 + uVar29 + 0x30) + 8);
              *(undefined8 *)(puVar41 + lVar37 + 0x20) =
                   *(undefined8 *)(puVar12 + lVar37 + uVar29 + 0x20);
              *(undefined8 *)((long)(puVar41 + lVar37 + 0x20) + 8) = uVar14;
              *(undefined8 *)(puVar41 + lVar37 + 0x30) = uVar15;
              *(undefined8 *)((long)(puVar41 + lVar37 + 0x30) + 8) = uVar16;
              uVar14 = *(undefined8 *)((long)(puVar12 + lVar37 + uVar29 + 0x40) + 8);
              uVar15 = *(undefined8 *)(puVar12 + lVar37 + uVar29 + 0x50);
              uVar16 = *(undefined8 *)((long)(puVar12 + lVar37 + uVar29 + 0x50) + 8);
              *(undefined8 *)(puVar41 + lVar37 + 0x40) =
                   *(undefined8 *)(puVar12 + lVar37 + uVar29 + 0x40);
              *(undefined8 *)((long)(puVar41 + lVar37 + 0x40) + 8) = uVar14;
              *(undefined8 *)(puVar41 + lVar37 + 0x50) = uVar15;
              *(undefined8 *)((long)(puVar41 + lVar37 + 0x50) + 8) = uVar16;
              uVar14 = *(undefined8 *)((long)(puVar12 + lVar37 + uVar29 + 0x60) + 8);
              uVar15 = *(undefined8 *)(puVar12 + lVar37 + uVar29 + 0x70);
              uVar16 = *(undefined8 *)((long)(puVar12 + lVar37 + uVar29 + 0x70) + 8);
              *(undefined8 *)(puVar41 + lVar37 + 0x60) =
                   *(undefined8 *)(puVar12 + lVar37 + uVar29 + 0x60);
              *(undefined8 *)((long)(puVar41 + lVar37 + 0x60) + 8) = uVar14;
              *(undefined8 *)(puVar41 + lVar37 + 0x70) = uVar15;
              *(undefined8 *)((long)(puVar41 + lVar37 + 0x70) + 8) = uVar16;
              lVar37 = lVar37 + 0x80;
              uVar38 = uVar38 - 4;
            } while (uVar38 != 0);
          }
          if (uVar30 != 0) {
            lVar31 = 0;
            do {
              uVar14 = *(undefined8 *)((long)(puVar12 + lVar31 + uVar29 + lVar37) + 8);
              uVar15 = *(undefined8 *)(puVar12 + lVar31 + uVar29 + lVar37 + 0x10);
              uVar16 = *(undefined8 *)((long)(puVar12 + lVar31 + uVar29 + lVar37 + 0x10) + 8);
              *(undefined8 *)(puVar41 + lVar31 + lVar37) =
                   *(undefined8 *)(puVar12 + lVar31 + uVar29 + lVar37);
              *(undefined8 *)((long)(puVar41 + lVar31 + lVar37) + 8) = uVar14;
              *(undefined8 *)(puVar41 + lVar31 + lVar37 + 0x10) = uVar15;
              *(undefined8 *)((long)(puVar41 + lVar31 + lVar37 + 0x10) + 8) = uVar16;
              lVar31 = lVar31 + 0x20;
            } while (uVar30 * 0x20 != lVar31);
          }
          puVar41 = puVar41 + uVar39;
          if (uVar46 + 1 != uVar39) {
            local_100 = local_100 - (int)uVar39;
            puVar28 = puVar28 + uVar39;
            goto LAB_004ba33a;
          }
        }
        uVar44 = uVar34;
        puVar28 = puVar41 + -(uVar36 & 0xffffffff);
      }
    }
  }
joined_r0x004ba3fb:
  if (2 < uVar44) {
    uVar25 = uVar44 - 3;
    if (((ulong)uVar25 / 3 & 1) == 0) {
      *puVar41 = *puVar28;
      puVar41[1] = puVar28[1];
      puVar3 = puVar28 + 2;
      puVar28 = puVar28 + 3;
      puVar41[2] = *puVar3;
      puVar41 = puVar41 + 3;
      uVar44 = uVar25;
    }
    if (uVar25 < 3) {
      uVar44 = uVar25;
    }
    else {
      do {
        *puVar41 = *puVar28;
        puVar41[1] = puVar28[1];
        puVar41[2] = puVar28[2];
        puVar41[3] = puVar28[3];
        puVar41[4] = puVar28[4];
        puVar3 = puVar28 + 5;
        puVar28 = puVar28 + 6;
        puVar41[5] = *puVar3;
        puVar41 = puVar41 + 6;
        uVar44 = uVar44 - 6;
      } while (2 < uVar44);
    }
  }
  if (uVar44 != 0) {
    *puVar41 = *puVar28;
    if (uVar44 == 1) {
LAB_004b9b1e:
      puVar41 = puVar41 + 1;
    }
    else {
      puVar41[1] = puVar28[1];
      puVar41 = puVar41 + 2;
    }
  }
LAB_004b9b22:
  if ((pbVar19 <= pbVar42) || (puVar45 <= puVar41)) goto LAB_004ba771;
  goto LAB_004b9a8d;
}


