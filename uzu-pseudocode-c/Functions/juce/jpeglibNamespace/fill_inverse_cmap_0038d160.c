// Function : fill_inverse_cmap
// Namespace: juce:jpeglibNamespace
// Entry    : 0038d160
// Prototype: undefined fill_inverse_cmap(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
// Body     : 0038d160 - 0038dfd6


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::fill_inverse_cmap(juce::jpeglibNamespace::jpeg_decompress_struct*, int,
   int, int) */

void __cdecl
juce::jpeglibNamespace::fill_inverse_cmap
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  long *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  int iVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  ulong uVar34;
  byte abStack_a28 [136];
  long *local_9a0;
  ulong local_998;
  long local_990;
  long local_988;
  ulong local_980;
  ulong local_978;
  long local_970;
  long local_958;
  undefined8 local_950;
  undefined8 local_948;
  undefined8 local_940;
  long local_938 [7];
  undefined8 uStack_900;
  long local_8f8;
  undefined8 uStack_8f0;
  long local_8e8;
  undefined8 uStack_8e0;
  long local_8d8;
  undefined8 uStack_8d0;
  long local_8c8;
  undefined8 uStack_8c0;
  long local_8b8;
  undefined8 uStack_8b0;
  long local_8a8;
  undefined8 uStack_8a0;
  long local_898;
  undefined8 uStack_890;
  long local_888;
  undefined8 uStack_880;
  long local_878;
  undefined8 uStack_870;
  long local_868;
  undefined8 uStack_860;
  long local_858;
  undefined8 uStack_850;
  long local_848;
  undefined8 uStack_840;
  long local_838;
  undefined8 uStack_830;
  long local_828;
  undefined8 uStack_820;
  long local_818;
  undefined8 uStack_810;
  long local_808;
  undefined8 uStack_800;
  long local_7f8;
  undefined8 uStack_7f0;
  long local_7e8;
  undefined8 uStack_7e0;
  long local_7d8;
  undefined8 uStack_7d0;
  long local_7c8;
  undefined8 uStack_7c0;
  long local_7b8;
  undefined8 uStack_7b0;
  long local_7a8;
  undefined8 uStack_7a0;
  long local_798;
  undefined8 uStack_790;
  long local_788;
  undefined8 uStack_780;
  long local_778;
  undefined8 uStack_770;
  long local_768;
  undefined8 uStack_760;
  long local_758;
  undefined8 uStack_750;
  long local_748;
  undefined8 uStack_740;
  long local_738;
  undefined8 uStack_730;
  long local_728;
  undefined8 uStack_720;
  long local_718;
  undefined8 uStack_710;
  long local_708;
  undefined8 uStack_700;
  long local_6f8;
  undefined8 uStack_6f0;
  long local_6e8;
  undefined8 uStack_6e0;
  long local_6d8;
  undefined8 uStack_6d0;
  long local_6c8;
  undefined8 uStack_6c0;
  long local_6b8;
  undefined8 uStack_6b0;
  long local_6a8;
  undefined8 uStack_6a0;
  long local_698;
  undefined8 uStack_690;
  long local_688;
  undefined8 uStack_680;
  long local_678;
  undefined8 uStack_670;
  long local_668;
  undefined8 uStack_660;
  long local_658;
  undefined8 uStack_650;
  long local_648;
  undefined8 uStack_640;
  long local_638;
  undefined8 uStack_630;
  long local_628;
  undefined8 uStack_620;
  long local_618;
  undefined8 uStack_610;
  long local_608;
  undefined8 uStack_600;
  long local_5f8;
  undefined8 uStack_5f0;
  long local_5e8;
  undefined8 uStack_5e0;
  long local_5d8;
  undefined8 uStack_5d0;
  long local_5c8;
  undefined8 uStack_5c0;
  long local_5b8;
  undefined8 uStack_5b0;
  long local_5a8;
  undefined8 uStack_5a0;
  long local_598;
  undefined8 uStack_590;
  long local_588;
  undefined8 uStack_580;
  long local_578;
  undefined8 uStack_570;
  long local_568;
  undefined8 uStack_560;
  long local_558;
  undefined8 uStack_550;
  long local_548;
  undefined8 uStack_540;
  byte abStack_138 [264];
  
  local_940._0_4_ = (uint)param_4;
  local_948._0_4_ = (uint)param_3;
  local_950._0_4_ = (uint)param_2;
  local_958 = *(long *)(*(long *)(param_1 + 0x270) + 0x30);
  uVar27 = (long)(int)((uint)local_950 * 8) & 0xffffffffffffffe0U | 4;
  uVar21 = (long)(int)((uint)local_948 * 4) & 0xffffffffffffffe0U | 2;
  uVar10 = (long)(int)((uint)local_940 * 8) & 0xffffffffffffffe0U | 4;
  uVar3 = *(uint *)(param_1 + 0x88);
  iVar26 = (int)uVar27;
  local_980 = (ulong)iVar26;
  iVar20 = (int)uVar21;
  local_988 = (long)iVar20;
  iVar8 = (int)uVar10;
  local_990 = (long)iVar8;
  if ((int)uVar3 < 1) {
    uVar9 = 0;
  }
  else {
    uVar29 = (long)(int)((uint)local_950 * 8) | 0x1c;
    iVar5 = (int)uVar29;
    iVar11 = iVar26 + iVar5 >> 1;
    local_9a0 = (long *)CONCAT44(local_9a0._4_4_,iVar11);
    uVar25 = (long)(int)((uint)local_948 * 4) | 0x1e;
    iVar6 = (int)uVar25;
    uVar34 = (long)(int)((uint)local_940 * 8) | 0x1c;
    iVar7 = (int)uVar34;
    plVar4 = *(long **)(param_1 + 0x90);
    lVar15 = *plVar4;
    lVar31 = plVar4[1];
    local_998 = plVar4[2];
    uVar12 = 0;
    lVar14 = 0x7fffffff;
    do {
      bVar2 = *(byte *)(lVar15 + uVar12);
      uVar17 = (ulong)bVar2;
      if ((int)(uint)bVar2 < iVar26) {
        lVar33 = (uVar17 - uVar27) * 2;
        lVar33 = lVar33 * lVar33;
        uVar16 = uVar29;
LAB_0038d2da:
        lVar28 = (uVar17 - uVar16) * 2;
        lVar28 = lVar28 * lVar28;
        bVar2 = *(byte *)(lVar31 + uVar12);
        uVar17 = (ulong)bVar2;
        if ((int)(uint)bVar2 < iVar20) goto LAB_0038d2ee;
LAB_0038d33b:
        if (iVar6 < (int)uVar17) {
          lVar23 = (uVar17 - (long)iVar6) * 3;
          lVar33 = lVar33 + lVar23 * lVar23;
LAB_0038d366:
          lVar23 = uVar17 - local_988;
        }
        else {
          if (iVar6 + iVar20 >> 1 < (int)uVar17) goto LAB_0038d366;
          lVar23 = uVar17 - (long)iVar6;
        }
      }
      else {
        if (iVar5 < (int)(uint)bVar2) {
          lVar33 = (uVar17 - (long)iVar5) * 2;
          lVar33 = lVar33 * lVar33;
          uVar16 = local_980;
          goto LAB_0038d2da;
        }
        if (iVar11 < (int)(uint)bVar2) {
          uVar16 = local_980;
        }
        else {
          uVar16 = (ulong)iVar5;
        }
        lVar28 = (uVar17 - uVar16) * 2;
        lVar28 = lVar28 * lVar28;
        lVar33 = 0;
        bVar2 = *(byte *)(lVar31 + uVar12);
        uVar17 = (ulong)bVar2;
        if (iVar20 <= (int)(uint)bVar2) goto LAB_0038d33b;
LAB_0038d2ee:
        lVar23 = (uVar17 - uVar21) * 3;
        lVar33 = lVar33 + lVar23 * lVar23;
        lVar23 = uVar17 - uVar25;
      }
      bVar2 = *(byte *)(local_998 + uVar12);
      uVar17 = (ulong)bVar2;
      if ((int)(uint)bVar2 < iVar8) {
        lVar18 = uVar17 - uVar10;
        lVar33 = lVar33 + lVar18 * lVar18;
        lVar18 = uVar17 - uVar34;
      }
      else {
        if (iVar7 < (int)(uint)bVar2) {
          lVar33 = lVar33 + (uVar17 - (long)iVar7) * (uVar17 - (long)iVar7);
        }
        else if ((int)(uint)bVar2 <= iVar8 + iVar7 >> 1) {
          lVar18 = uVar17 - (long)iVar7;
          goto LAB_0038d270;
        }
        lVar18 = uVar17 - (long)iVar8;
      }
LAB_0038d270:
      lVar28 = lVar23 * 3 * lVar23 * 3 + lVar28 + lVar18 * lVar18;
      local_938[uVar12] = lVar33;
      if (lVar14 <= lVar28) {
        lVar28 = lVar14;
      }
      uVar12 = uVar12 + 1;
      lVar14 = lVar28;
    } while (uVar3 != uVar12);
    if (uVar3 == 1) {
      uVar10 = 0;
      uVar9 = 0;
    }
    else {
      uVar10 = 0;
      uVar9 = 0;
      do {
        if (lVar28 < local_938[uVar10]) {
          lVar15 = local_938[uVar10 + 1];
        }
        else {
          lVar15 = (long)(int)uVar9;
          uVar9 = uVar9 + 1;
          abStack_138[lVar15] = (byte)uVar10;
          lVar15 = local_938[uVar10 + 1];
        }
        if (lVar15 <= lVar28) {
          lVar15 = (long)(int)uVar9;
          uVar9 = uVar9 + 1;
          abStack_138[lVar15] = (byte)uVar10 + 1;
        }
        uVar10 = uVar10 + 2;
      } while ((uVar3 & 0xfffffffe) != uVar10);
    }
    if (((uVar3 & 1) != 0) && (local_938[uVar10] <= lVar28)) {
      lVar15 = (long)(int)uVar9;
      uVar9 = uVar9 + 1;
      abStack_138[lVar15] = (byte)uVar10;
    }
  }
  local_938[0] = _DAT_005ddb10;
  local_938[1] = _UNK_005ddb18;
  local_938[2] = _DAT_005ddb10;
  local_938[3] = _UNK_005ddb18;
  local_938[4] = _DAT_005ddb10;
  local_938[5] = _UNK_005ddb18;
  local_938[6] = _DAT_005ddb10;
  uStack_900 = _UNK_005ddb18;
  local_8f8 = _DAT_005ddb10;
  uStack_8f0 = _UNK_005ddb18;
  local_8e8 = _DAT_005ddb10;
  uStack_8e0 = _UNK_005ddb18;
  local_8d8 = _DAT_005ddb10;
  uStack_8d0 = _UNK_005ddb18;
  local_8c8 = _DAT_005ddb10;
  uStack_8c0 = _UNK_005ddb18;
  local_8b8 = _DAT_005ddb10;
  uStack_8b0 = _UNK_005ddb18;
  local_8a8 = _DAT_005ddb10;
  uStack_8a0 = _UNK_005ddb18;
  local_898 = _DAT_005ddb10;
  uStack_890 = _UNK_005ddb18;
  local_888 = _DAT_005ddb10;
  uStack_880 = _UNK_005ddb18;
  local_878 = _DAT_005ddb10;
  uStack_870 = _UNK_005ddb18;
  local_868 = _DAT_005ddb10;
  uStack_860 = _UNK_005ddb18;
  local_858 = _DAT_005ddb10;
  uStack_850 = _UNK_005ddb18;
  local_848 = _DAT_005ddb10;
  uStack_840 = _UNK_005ddb18;
  local_838 = _DAT_005ddb10;
  uStack_830 = _UNK_005ddb18;
  local_828 = _DAT_005ddb10;
  uStack_820 = _UNK_005ddb18;
  local_818 = _DAT_005ddb10;
  uStack_810 = _UNK_005ddb18;
  local_808 = _DAT_005ddb10;
  uStack_800 = _UNK_005ddb18;
  local_7f8 = _DAT_005ddb10;
  uStack_7f0 = _UNK_005ddb18;
  local_7e8 = _DAT_005ddb10;
  uStack_7e0 = _UNK_005ddb18;
  local_7d8 = _DAT_005ddb10;
  uStack_7d0 = _UNK_005ddb18;
  local_7c8 = _DAT_005ddb10;
  uStack_7c0 = _UNK_005ddb18;
  local_7b8 = _DAT_005ddb10;
  uStack_7b0 = _UNK_005ddb18;
  local_7a8 = _DAT_005ddb10;
  uStack_7a0 = _UNK_005ddb18;
  local_798 = _DAT_005ddb10;
  uStack_790 = _UNK_005ddb18;
  local_788 = _DAT_005ddb10;
  uStack_780 = _UNK_005ddb18;
  local_778 = _DAT_005ddb10;
  uStack_770 = _UNK_005ddb18;
  local_768 = _DAT_005ddb10;
  uStack_760 = _UNK_005ddb18;
  local_758 = _DAT_005ddb10;
  uStack_750 = _UNK_005ddb18;
  local_748 = _DAT_005ddb10;
  uStack_740 = _UNK_005ddb18;
  local_738 = _DAT_005ddb10;
  uStack_730 = _UNK_005ddb18;
  local_728 = _DAT_005ddb10;
  uStack_720 = _UNK_005ddb18;
  local_718 = _DAT_005ddb10;
  uStack_710 = _UNK_005ddb18;
  local_708 = _DAT_005ddb10;
  uStack_700 = _UNK_005ddb18;
  local_6f8 = _DAT_005ddb10;
  uStack_6f0 = _UNK_005ddb18;
  local_6e8 = _DAT_005ddb10;
  uStack_6e0 = _UNK_005ddb18;
  local_6d8 = _DAT_005ddb10;
  uStack_6d0 = _UNK_005ddb18;
  local_6c8 = _DAT_005ddb10;
  uStack_6c0 = _UNK_005ddb18;
  local_6b8 = _DAT_005ddb10;
  uStack_6b0 = _UNK_005ddb18;
  local_6a8 = _DAT_005ddb10;
  uStack_6a0 = _UNK_005ddb18;
  local_698 = _DAT_005ddb10;
  uStack_690 = _UNK_005ddb18;
  local_688 = _DAT_005ddb10;
  uStack_680 = _UNK_005ddb18;
  local_678 = _DAT_005ddb10;
  uStack_670 = _UNK_005ddb18;
  local_668 = _DAT_005ddb10;
  uStack_660 = _UNK_005ddb18;
  local_658 = _DAT_005ddb10;
  uStack_650 = _UNK_005ddb18;
  local_648 = _DAT_005ddb10;
  uStack_640 = _UNK_005ddb18;
  local_638 = _DAT_005ddb10;
  uStack_630 = _UNK_005ddb18;
  local_628 = _DAT_005ddb10;
  uStack_620 = _UNK_005ddb18;
  local_618 = _DAT_005ddb10;
  uStack_610 = _UNK_005ddb18;
  local_608 = _DAT_005ddb10;
  uStack_600 = _UNK_005ddb18;
  local_5f8 = _DAT_005ddb10;
  uStack_5f0 = _UNK_005ddb18;
  local_5e8 = _DAT_005ddb10;
  uStack_5e0 = _UNK_005ddb18;
  local_5d8 = _DAT_005ddb10;
  uStack_5d0 = _UNK_005ddb18;
  local_5c8 = _DAT_005ddb10;
  uStack_5c0 = _UNK_005ddb18;
  local_5b8 = _DAT_005ddb10;
  uStack_5b0 = _UNK_005ddb18;
  local_5a8 = _DAT_005ddb10;
  uStack_5a0 = _UNK_005ddb18;
  local_598 = _DAT_005ddb10;
  uStack_590 = _UNK_005ddb18;
  local_588 = _DAT_005ddb10;
  uStack_580 = _UNK_005ddb18;
  local_578 = _DAT_005ddb10;
  uStack_570 = _UNK_005ddb18;
  local_568 = _DAT_005ddb10;
  uStack_560 = _UNK_005ddb18;
  local_558 = _DAT_005ddb10;
  uStack_550 = _UNK_005ddb18;
  local_548 = _DAT_005ddb10;
  uStack_540 = _UNK_005ddb18;
  if (0 < (int)uVar9) {
    local_998 = (ulong)uVar9;
    local_9a0 = *(long **)(param_1 + 0x90);
    local_978 = 0;
    local_950 = param_2;
    local_948 = param_3;
    local_940 = param_4;
    do {
      bVar2 = abStack_138[local_978];
      uVar10 = (ulong)bVar2;
      lVar31 = local_980 - *(byte *)(*local_9a0 + uVar10);
      lVar15 = lVar31 * 2;
      lVar23 = local_988 - (ulong)*(byte *)(local_9a0[1] + uVar10);
      lVar24 = local_990 - (ulong)*(byte *)(local_9a0[2] + uVar10);
      lVar19 = lVar24 * lVar24 + lVar23 * 3 * lVar23 * 3 + lVar15 * lVar15;
      lVar32 = lVar31 * 0x40 + 0x100;
      local_970 = lVar23 * 0x48 + 0x90;
      lVar24 = lVar24 * 0x10;
      lVar15 = lVar24 + 0x40;
      lVar31 = lVar24 + 0xc0;
      lVar24 = lVar24 + 0x140;
      lVar14 = lVar23 * 0x48 + 0x1b0;
      lVar18 = lVar23 * 0x48 + 0x2d0;
      lVar1 = lVar23 * 0x48 + 0x3f0;
      lVar33 = lVar23 * 0x48 + 0x510;
      lVar28 = lVar23 * 0x48 + 0x630;
      lVar23 = lVar23 * 0x48 + 0x750;
      lVar30 = 0;
      do {
        if (lVar19 < local_938[lVar30]) {
          local_938[lVar30] = lVar19;
          abStack_a28[lVar30] = bVar2;
          if (lVar19 + lVar15 < local_938[lVar30 + 1]) goto LAB_0038d999;
LAB_0038d765:
          lVar22 = lVar19 + lVar15 + lVar31;
          if (local_938[lVar30 + 2] <= lVar22) goto LAB_0038d776;
LAB_0038d9b4:
          local_938[lVar30 + 2] = lVar22;
          abStack_a28[lVar30 + 2] = bVar2;
          lVar22 = lVar22 + lVar24;
          if (lVar22 < local_938[lVar30 + 3]) goto LAB_0038d9d2;
LAB_0038d787:
          lVar22 = local_970 + lVar19;
          if (local_938[lVar30 + 4] <= lVar22) goto LAB_0038d79e;
LAB_0038d9f6:
          local_938[lVar30 + 4] = lVar22;
          abStack_a28[lVar30 + 4] = bVar2;
          lVar13 = lVar15 + lVar22;
          if (lVar13 < local_938[lVar30 + 5]) goto LAB_0038da15;
LAB_0038d7b0:
          lVar13 = lVar13 + lVar31;
          if (local_938[lVar30 + 6] <= lVar13) goto LAB_0038d7c1;
LAB_0038da33:
          local_938[lVar30 + 6] = lVar13;
          abStack_a28[lVar30 + 6] = bVar2;
          lVar13 = lVar13 + lVar24;
          if (lVar13 < local_938[lVar30 + 7]) goto LAB_0038da51;
LAB_0038d7d2:
          lVar22 = lVar22 + lVar14;
          if (local_938[lVar30 + 8] <= lVar22) goto LAB_0038d7e3;
LAB_0038da6f:
          local_938[lVar30 + 8] = lVar22;
          abStack_a28[lVar30 + 8] = bVar2;
          lVar13 = lVar15 + lVar22;
          if (lVar13 < local_938[lVar30 + 9]) goto LAB_0038da8e;
LAB_0038d7f5:
          lVar13 = lVar13 + lVar31;
          if (local_938[lVar30 + 10] <= lVar13) goto LAB_0038d806;
LAB_0038daac:
          local_938[lVar30 + 10] = lVar13;
          abStack_a28[lVar30 + 10] = bVar2;
          lVar13 = lVar13 + lVar24;
          if (lVar13 < local_938[lVar30 + 0xb]) goto LAB_0038daca;
LAB_0038d817:
          lVar22 = lVar22 + lVar18;
          if (local_938[lVar30 + 0xc] <= lVar22) goto LAB_0038d828;
LAB_0038dae8:
          local_938[lVar30 + 0xc] = lVar22;
          abStack_a28[lVar30 + 0xc] = bVar2;
          lVar13 = lVar15 + lVar22;
          if (lVar13 < local_938[lVar30 + 0xd]) goto LAB_0038db07;
LAB_0038d83a:
          lVar13 = lVar13 + lVar31;
          if (local_938[lVar30 + 0xe] <= lVar13) goto LAB_0038d84b;
LAB_0038db25:
          local_938[lVar30 + 0xe] = lVar13;
          abStack_a28[lVar30 + 0xe] = bVar2;
          lVar13 = lVar13 + lVar24;
          if (lVar13 < local_938[lVar30 + 0xf]) goto LAB_0038db43;
LAB_0038d85c:
          lVar22 = lVar22 + lVar1;
          if (local_938[lVar30 + 0x10] <= lVar22) goto LAB_0038d86d;
LAB_0038db61:
          local_938[lVar30 + 0x10] = lVar22;
          abStack_a28[lVar30 + 0x10] = bVar2;
          lVar13 = lVar15 + lVar22;
          if (lVar13 < local_938[lVar30 + 0x11]) goto LAB_0038db80;
LAB_0038d87f:
          lVar13 = lVar13 + lVar31;
          if (local_938[lVar30 + 0x12] <= lVar13) goto LAB_0038d890;
LAB_0038db9e:
          local_938[lVar30 + 0x12] = lVar13;
          abStack_a28[lVar30 + 0x12] = bVar2;
          lVar13 = lVar13 + lVar24;
          if (lVar13 < local_938[lVar30 + 0x13]) goto LAB_0038dbbc;
LAB_0038d8a1:
          lVar22 = lVar22 + lVar33;
          if (local_938[lVar30 + 0x14] <= lVar22) goto LAB_0038d8b2;
LAB_0038dbda:
          local_938[lVar30 + 0x14] = lVar22;
          abStack_a28[lVar30 + 0x14] = bVar2;
          lVar13 = lVar15 + lVar22;
          if (lVar13 < local_938[lVar30 + 0x15]) goto LAB_0038dbf9;
LAB_0038d8c4:
          lVar13 = lVar13 + lVar31;
          if (local_938[lVar30 + 0x16] <= lVar13) goto LAB_0038d8d5;
LAB_0038dc17:
          local_938[lVar30 + 0x16] = lVar13;
          abStack_a28[lVar30 + 0x16] = bVar2;
          lVar13 = lVar13 + lVar24;
          if (lVar13 < local_938[lVar30 + 0x17]) goto LAB_0038dc35;
LAB_0038d8e6:
          lVar22 = lVar22 + lVar28;
          if (local_938[lVar30 + 0x18] <= lVar22) goto LAB_0038d8f7;
LAB_0038dc53:
          local_938[lVar30 + 0x18] = lVar22;
          abStack_a28[lVar30 + 0x18] = bVar2;
          lVar13 = lVar15 + lVar22;
          if (lVar13 < local_938[lVar30 + 0x19]) goto LAB_0038dc72;
LAB_0038d909:
          lVar13 = lVar13 + lVar31;
          if (local_938[lVar30 + 0x1a] <= lVar13) goto LAB_0038d91a;
LAB_0038dc90:
          local_938[lVar30 + 0x1a] = lVar13;
          abStack_a28[lVar30 + 0x1a] = bVar2;
          lVar13 = lVar13 + lVar24;
          if (lVar13 < local_938[lVar30 + 0x1b]) goto LAB_0038dcae;
LAB_0038d92b:
          lVar22 = lVar22 + lVar23;
          if (local_938[lVar30 + 0x1c] <= lVar22) goto LAB_0038d93c;
LAB_0038dccc:
          local_938[lVar30 + 0x1c] = lVar22;
          abStack_a28[lVar30 + 0x1c] = bVar2;
          lVar22 = lVar22 + lVar15;
          if (lVar22 < local_938[lVar30 + 0x1d]) goto LAB_0038dcea;
LAB_0038d94d:
          lVar22 = lVar22 + lVar31;
          if (local_938[lVar30 + 0x1e] <= lVar22) goto LAB_0038d95e;
LAB_0038dd08:
          local_938[lVar30 + 0x1e] = lVar22;
          abStack_a28[lVar30 + 0x1e] = bVar2;
          lVar22 = lVar22 + lVar24;
          if (lVar22 < local_938[lVar30 + 0x1f]) goto LAB_0038dd26;
        }
        else {
          if (local_938[lVar30 + 1] <= lVar19 + lVar15) goto LAB_0038d765;
LAB_0038d999:
          local_938[lVar30 + 1] = lVar19 + lVar15;
          abStack_a28[lVar30 + 1] = bVar2;
          lVar22 = lVar19 + lVar15 + lVar31;
          if (lVar22 < local_938[lVar30 + 2]) goto LAB_0038d9b4;
LAB_0038d776:
          lVar22 = lVar22 + lVar24;
          if (local_938[lVar30 + 3] <= lVar22) goto LAB_0038d787;
LAB_0038d9d2:
          local_938[lVar30 + 3] = lVar22;
          abStack_a28[lVar30 + 3] = bVar2;
          lVar22 = local_970 + lVar19;
          if (lVar22 < local_938[lVar30 + 4]) goto LAB_0038d9f6;
LAB_0038d79e:
          lVar13 = lVar15 + lVar22;
          if (local_938[lVar30 + 5] <= lVar13) goto LAB_0038d7b0;
LAB_0038da15:
          local_938[lVar30 + 5] = lVar13;
          abStack_a28[lVar30 + 5] = bVar2;
          lVar13 = lVar13 + lVar31;
          if (lVar13 < local_938[lVar30 + 6]) goto LAB_0038da33;
LAB_0038d7c1:
          lVar13 = lVar13 + lVar24;
          if (local_938[lVar30 + 7] <= lVar13) goto LAB_0038d7d2;
LAB_0038da51:
          local_938[lVar30 + 7] = lVar13;
          abStack_a28[lVar30 + 7] = bVar2;
          lVar22 = lVar22 + lVar14;
          if (lVar22 < local_938[lVar30 + 8]) goto LAB_0038da6f;
LAB_0038d7e3:
          lVar13 = lVar15 + lVar22;
          if (local_938[lVar30 + 9] <= lVar13) goto LAB_0038d7f5;
LAB_0038da8e:
          local_938[lVar30 + 9] = lVar13;
          abStack_a28[lVar30 + 9] = bVar2;
          lVar13 = lVar13 + lVar31;
          if (lVar13 < local_938[lVar30 + 10]) goto LAB_0038daac;
LAB_0038d806:
          lVar13 = lVar13 + lVar24;
          if (local_938[lVar30 + 0xb] <= lVar13) goto LAB_0038d817;
LAB_0038daca:
          local_938[lVar30 + 0xb] = lVar13;
          abStack_a28[lVar30 + 0xb] = bVar2;
          lVar22 = lVar22 + lVar18;
          if (lVar22 < local_938[lVar30 + 0xc]) goto LAB_0038dae8;
LAB_0038d828:
          lVar13 = lVar15 + lVar22;
          if (local_938[lVar30 + 0xd] <= lVar13) goto LAB_0038d83a;
LAB_0038db07:
          local_938[lVar30 + 0xd] = lVar13;
          abStack_a28[lVar30 + 0xd] = bVar2;
          lVar13 = lVar13 + lVar31;
          if (lVar13 < local_938[lVar30 + 0xe]) goto LAB_0038db25;
LAB_0038d84b:
          lVar13 = lVar13 + lVar24;
          if (local_938[lVar30 + 0xf] <= lVar13) goto LAB_0038d85c;
LAB_0038db43:
          local_938[lVar30 + 0xf] = lVar13;
          abStack_a28[lVar30 + 0xf] = bVar2;
          lVar22 = lVar22 + lVar1;
          if (lVar22 < local_938[lVar30 + 0x10]) goto LAB_0038db61;
LAB_0038d86d:
          lVar13 = lVar15 + lVar22;
          if (local_938[lVar30 + 0x11] <= lVar13) goto LAB_0038d87f;
LAB_0038db80:
          local_938[lVar30 + 0x11] = lVar13;
          abStack_a28[lVar30 + 0x11] = bVar2;
          lVar13 = lVar13 + lVar31;
          if (lVar13 < local_938[lVar30 + 0x12]) goto LAB_0038db9e;
LAB_0038d890:
          lVar13 = lVar13 + lVar24;
          if (local_938[lVar30 + 0x13] <= lVar13) goto LAB_0038d8a1;
LAB_0038dbbc:
          local_938[lVar30 + 0x13] = lVar13;
          abStack_a28[lVar30 + 0x13] = bVar2;
          lVar22 = lVar22 + lVar33;
          if (lVar22 < local_938[lVar30 + 0x14]) goto LAB_0038dbda;
LAB_0038d8b2:
          lVar13 = lVar15 + lVar22;
          if (local_938[lVar30 + 0x15] <= lVar13) goto LAB_0038d8c4;
LAB_0038dbf9:
          local_938[lVar30 + 0x15] = lVar13;
          abStack_a28[lVar30 + 0x15] = bVar2;
          lVar13 = lVar13 + lVar31;
          if (lVar13 < local_938[lVar30 + 0x16]) goto LAB_0038dc17;
LAB_0038d8d5:
          lVar13 = lVar13 + lVar24;
          if (local_938[lVar30 + 0x17] <= lVar13) goto LAB_0038d8e6;
LAB_0038dc35:
          local_938[lVar30 + 0x17] = lVar13;
          abStack_a28[lVar30 + 0x17] = bVar2;
          lVar22 = lVar22 + lVar28;
          if (lVar22 < local_938[lVar30 + 0x18]) goto LAB_0038dc53;
LAB_0038d8f7:
          lVar13 = lVar15 + lVar22;
          if (local_938[lVar30 + 0x19] <= lVar13) goto LAB_0038d909;
LAB_0038dc72:
          local_938[lVar30 + 0x19] = lVar13;
          abStack_a28[lVar30 + 0x19] = bVar2;
          lVar13 = lVar13 + lVar31;
          if (lVar13 < local_938[lVar30 + 0x1a]) goto LAB_0038dc90;
LAB_0038d91a:
          lVar13 = lVar13 + lVar24;
          if (local_938[lVar30 + 0x1b] <= lVar13) goto LAB_0038d92b;
LAB_0038dcae:
          local_938[lVar30 + 0x1b] = lVar13;
          abStack_a28[lVar30 + 0x1b] = bVar2;
          lVar22 = lVar22 + lVar23;
          if (lVar22 < local_938[lVar30 + 0x1c]) goto LAB_0038dccc;
LAB_0038d93c:
          lVar22 = lVar22 + lVar15;
          if (local_938[lVar30 + 0x1d] <= lVar22) goto LAB_0038d94d;
LAB_0038dcea:
          local_938[lVar30 + 0x1d] = lVar22;
          abStack_a28[lVar30 + 0x1d] = bVar2;
          lVar22 = lVar22 + lVar31;
          if (lVar22 < local_938[lVar30 + 0x1e]) goto LAB_0038dd08;
LAB_0038d95e:
          lVar22 = lVar22 + lVar24;
          if (lVar22 < local_938[lVar30 + 0x1f]) {
LAB_0038dd26:
            local_938[lVar30 + 0x1f] = lVar22;
            abStack_a28[lVar30 + 0x1f] = bVar2;
          }
        }
        lVar19 = lVar19 + lVar32;
        lVar32 = lVar32 + 0x200;
        lVar30 = lVar30 + 0x20;
      } while ((int)lVar30 != 0x80);
      local_978 = local_978 + 1;
    } while (local_978 != local_998);
  }
  uVar10 = (ulong)((uint)local_948 & 0xfffffff8);
  uVar21 = (ulong)((uint)local_940 & 0xfffffffc);
  lVar15 = 0;
  do {
    lVar14 = *(long *)(local_958 + (ulong)((uint)local_950 & 0xfffffffc) * 8 + lVar15);
    lVar31 = lVar14 + uVar10 * 0x40;
    *(ushort *)(lVar31 + uVar21 * 2) = abStack_a28[lVar15 * 4] + 1;
    *(ushort *)(lVar31 + 2 + uVar21 * 2) = abStack_a28[lVar15 * 4 + 1] + 1;
    *(ushort *)(lVar31 + 4 + uVar21 * 2) = abStack_a28[lVar15 * 4 + 2] + 1;
    *(ushort *)(lVar31 + 6 + uVar21 * 2) = abStack_a28[lVar15 * 4 + 3] + 1;
    lVar31 = lVar14 + (uVar10 + 1) * 0x40;
    *(ushort *)(lVar31 + uVar21 * 2) = abStack_a28[lVar15 * 4 + 4] + 1;
    *(ushort *)(lVar31 + 2 + uVar21 * 2) = abStack_a28[lVar15 * 4 + 5] + 1;
    *(ushort *)(lVar31 + 4 + uVar21 * 2) = abStack_a28[lVar15 * 4 + 6] + 1;
    *(ushort *)(lVar31 + 6 + uVar21 * 2) = abStack_a28[lVar15 * 4 + 7] + 1;
    lVar31 = lVar14 + (uVar10 + 2) * 0x40;
    *(ushort *)(lVar31 + uVar21 * 2) = abStack_a28[lVar15 * 4 + 8] + 1;
    *(ushort *)(lVar31 + 2 + uVar21 * 2) = abStack_a28[lVar15 * 4 + 9] + 1;
    *(ushort *)(lVar31 + 4 + uVar21 * 2) = abStack_a28[lVar15 * 4 + 10] + 1;
    *(ushort *)(lVar31 + 6 + uVar21 * 2) = abStack_a28[lVar15 * 4 + 0xb] + 1;
    lVar31 = lVar14 + (uVar10 + 3) * 0x40;
    *(ushort *)(lVar31 + uVar21 * 2) = abStack_a28[lVar15 * 4 + 0xc] + 1;
    *(ushort *)(lVar31 + 2 + uVar21 * 2) = abStack_a28[lVar15 * 4 + 0xd] + 1;
    *(ushort *)(lVar31 + 4 + uVar21 * 2) = abStack_a28[lVar15 * 4 + 0xe] + 1;
    *(ushort *)(lVar31 + 6 + uVar21 * 2) = abStack_a28[lVar15 * 4 + 0xf] + 1;
    lVar31 = lVar14 + (uVar10 + 4) * 0x40;
    *(ushort *)(lVar31 + uVar21 * 2) = abStack_a28[lVar15 * 4 + 0x10] + 1;
    *(ushort *)(lVar31 + 2 + uVar21 * 2) = abStack_a28[lVar15 * 4 + 0x11] + 1;
    *(ushort *)(lVar31 + 4 + uVar21 * 2) = abStack_a28[lVar15 * 4 + 0x12] + 1;
    *(ushort *)(lVar31 + 6 + uVar21 * 2) = abStack_a28[lVar15 * 4 + 0x13] + 1;
    lVar31 = lVar14 + (uVar10 + 5) * 0x40;
    *(ushort *)(lVar31 + uVar21 * 2) = abStack_a28[lVar15 * 4 + 0x14] + 1;
    *(ushort *)(lVar31 + 2 + uVar21 * 2) = abStack_a28[lVar15 * 4 + 0x15] + 1;
    *(ushort *)(lVar31 + 4 + uVar21 * 2) = abStack_a28[lVar15 * 4 + 0x16] + 1;
    *(ushort *)(lVar31 + 6 + uVar21 * 2) = abStack_a28[lVar15 * 4 + 0x17] + 1;
    lVar31 = lVar14 + (uVar10 + 6) * 0x40;
    *(ushort *)(lVar31 + uVar21 * 2) = abStack_a28[lVar15 * 4 + 0x18] + 1;
    *(ushort *)(lVar31 + 2 + uVar21 * 2) = abStack_a28[lVar15 * 4 + 0x19] + 1;
    *(ushort *)(lVar31 + 4 + uVar21 * 2) = abStack_a28[lVar15 * 4 + 0x1a] + 1;
    *(ushort *)(lVar31 + 6 + uVar21 * 2) = abStack_a28[lVar15 * 4 + 0x1b] + 1;
    lVar14 = lVar14 + (uVar10 + 7) * 0x40;
    *(ushort *)(lVar14 + uVar21 * 2) = abStack_a28[lVar15 * 4 + 0x1c] + 1;
    *(ushort *)(lVar14 + 2 + uVar21 * 2) = abStack_a28[lVar15 * 4 + 0x1d] + 1;
    *(ushort *)(lVar14 + 4 + uVar21 * 2) = abStack_a28[lVar15 * 4 + 0x1e] + 1;
    *(ushort *)(lVar14 + 6 + uVar21 * 2) = abStack_a28[lVar15 * 4 + 0x1f] + 1;
    lVar15 = lVar15 + 8;
  } while (lVar15 != 0x20);
  return;
}


