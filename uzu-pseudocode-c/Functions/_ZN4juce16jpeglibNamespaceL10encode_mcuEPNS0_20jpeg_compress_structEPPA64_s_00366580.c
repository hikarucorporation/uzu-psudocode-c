// Function : _ZN4juce16jpeglibNamespaceL10encode_mcuEPNS0_20jpeg_compress_structEPPA64_s
// Namespace: 
// Entry    : 00366580
// Prototype: undefined8 _ZN4juce16jpeglibNamespaceL10encode_mcuEPNS0_20jpeg_compress_structEPPA64_s(long * param_1, long param_2)
// Body     : 00366580 - 00366ad3


undefined8
_ZN4juce16jpeglibNamespaceL10encode_mcuEPNS0_20jpeg_compress_structEPPA64_s
          (long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  short *psVar3;
  short sVar4;
  ulong in_RAX;
  long lVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined4 uVar11;
  uint uVar12;
  long lVar13;
  int *piVar14;
  long lVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  bool bVar21;
  
  lVar1 = param_1[0x44];
  if ((int)param_1[0x26] != 0) {
    iVar18 = *(int *)(lVar1 + 0x60);
    if (iVar18 == 0) {
      juce::jpeglibNamespace::emit_restart(param_1,(char)*(undefined4 *)(lVar1 + 100));
      iVar18 = (int)param_1[0x26];
      *(uint *)(lVar1 + 100) = *(int *)(lVar1 + 100) + 1U & 7;
    }
    in_RAX = (ulong)(iVar18 - 1U);
    *(uint *)(lVar1 + 0x60) = iVar18 - 1U;
  }
  if ((int)param_1[0x32] < 1) {
LAB_00366ac3:
    return CONCAT71((int7)(in_RAX >> 8),1);
  }
  lVar2 = param_1[0x3a];
  lVar5 = 0;
LAB_00366639:
  lVar13 = (long)*(int *)((long)param_1 + lVar5 * 4 + 0x194);
  lVar6 = param_1[lVar13 + 0x2d];
  lVar8 = (long)*(int *)(lVar6 + 0x14);
  pbVar9 = (byte *)((long)*(int *)(lVar1 + 0x50 + lVar13 * 4) + *(long *)(lVar1 + 0x68 + lVar8 * 8))
  ;
  psVar3 = *(short **)(param_2 + lVar5 * 8);
  iVar18 = (int)*psVar3 - *(int *)(lVar1 + 0x40 + lVar13 * 4);
  if (iVar18 == 0) {
    juce::jpeglibNamespace::arith_encode(param_1,pbVar9,0);
    *(undefined4 *)(lVar1 + 0x50 + lVar13 * 4) = 0;
  }
  else {
    *(int *)(lVar1 + 0x40 + lVar13 * 4) = (int)*psVar3;
    juce::jpeglibNamespace::arith_encode(param_1,pbVar9,1);
    uVar17 = 0;
    bVar21 = iVar18 < 1;
    if (bVar21) {
      iVar18 = -iVar18;
      uVar11 = 8;
      lVar15 = 3;
    }
    else {
      uVar11 = 4;
      lVar15 = 2;
    }
    juce::jpeglibNamespace::arith_encode(param_1,pbVar9 + 1,(uint)bVar21);
    pbVar9 = pbVar9 + lVar15;
    *(undefined4 *)(lVar1 + 0x50 + lVar13 * 4) = uVar11;
    uVar19 = iVar18 - 1;
    if (uVar19 != 0) {
      uVar17 = 1;
      juce::jpeglibNamespace::arith_encode(param_1,pbVar9,1);
      pbVar9 = (byte *)(*(long *)(lVar1 + 0x68 + lVar8 * 8) + 0x14);
      if (uVar19 != 1) {
        uVar17 = 1;
        uVar12 = uVar19;
        do {
          juce::jpeglibNamespace::arith_encode(param_1,pbVar9,1);
          uVar17 = uVar17 * 2;
          pbVar9 = pbVar9 + 1;
          bVar21 = 3 < uVar12;
          uVar12 = (int)uVar12 >> 1;
        } while (bVar21);
      }
    }
    iVar18 = 0;
    juce::jpeglibNamespace::arith_encode(param_1,pbVar9,0);
    if ((int)uVar17 < (int)((ulong)(1L << (*(byte *)((long)param_1 + lVar8 + 0xe0) & 0x3f)) >> 1)) {
LAB_003667d9:
      *(int *)(lVar1 + 0x50 + lVar13 * 4) = iVar18;
    }
    else if ((int)((ulong)(1L << (*(byte *)((long)param_1 + lVar8 + 0xf0) & 0x3f)) >> 1) <
             (int)uVar17) {
      iVar18 = *(int *)(lVar1 + 0x50 + lVar13 * 4) + 8;
      goto LAB_003667d9;
    }
    if (1 < uVar17) {
      do {
        juce::jpeglibNamespace::arith_encode
                  (param_1,pbVar9 + 0xe,(uint)(((int)uVar17 >> 1 & uVar19) != 0));
        bVar21 = 3 < uVar17;
        uVar17 = (int)uVar17 >> 1;
      } while (bVar21);
    }
  }
  iVar18 = (int)param_1[0x3b];
  if (iVar18 != 0) {
    lVar8 = (long)*(int *)(lVar6 + 0x18);
    lVar6 = 0;
    do {
      if (psVar3[*(int *)(lVar2 + (long)iVar18 * 4 + lVar6 * 4)] != 0) {
        iVar7 = iVar18 + (int)lVar6;
        if (0 < iVar7) {
          iVar20 = 0;
          goto LAB_003668b2;
        }
        break;
      }
      lVar6 = lVar6 + -1;
    } while ((int)lVar6 + iVar18 != 0);
    iVar20 = 0;
    if (iVar18 < 1) goto LAB_00366620;
    goto LAB_00366a9e;
  }
  goto LAB_00366620;
LAB_003668b2:
  do {
    pbVar9 = (byte *)((long)(iVar20 * 3) + *(long *)(lVar1 + 0xe8 + lVar8 * 8));
    juce::jpeglibNamespace::arith_encode(param_1,pbVar9,0);
    sVar4 = psVar3[*(int *)(lVar2 + 4 + (long)iVar20 * 4)];
    iVar18 = iVar20;
    if (sVar4 == 0) {
      piVar14 = (int *)(lVar2 + 4 + ((long)iVar20 + 1) * 4);
      do {
        juce::jpeglibNamespace::arith_encode(param_1,pbVar9 + 1,0);
        pbVar9 = pbVar9 + 3;
        sVar4 = psVar3[*piVar14];
        iVar18 = iVar18 + 1;
        piVar14 = piVar14 + 1;
      } while (sVar4 == 0);
    }
    iVar20 = iVar18 + 1;
    juce::jpeglibNamespace::arith_encode(param_1,pbVar9 + 1,1);
    iVar16 = -(int)sVar4;
    if (iVar16 < 0) {
      iVar16 = (int)sVar4;
    }
    juce::jpeglibNamespace::arith_encode(param_1,(byte *)(lVar1 + 0x168),(uint)(sVar4 < 1));
    pbVar9 = pbVar9 + 2;
    uVar17 = iVar16 - 1;
    if ((uVar17 == 0) || (juce::jpeglibNamespace::arith_encode(param_1,pbVar9,1), uVar17 == 1)) {
      juce::jpeglibNamespace::arith_encode(param_1,pbVar9,0);
    }
    else {
      juce::jpeglibNamespace::arith_encode(param_1,pbVar9,1);
      lVar6 = *(long *)(lVar1 + 0xe8 + lVar8 * 8);
      pbVar9 = (byte *)(lVar6 + 0xbd);
      if ((int)(uint)*(byte *)((long)param_1 + lVar8 + 0x100) <= iVar18) {
        pbVar9 = (byte *)(lVar6 + 0xd9);
      }
      if (uVar17 < 4) {
        juce::jpeglibNamespace::arith_encode(param_1,pbVar9,0);
        pbVar9 = pbVar9 + 0xe;
        uVar19 = 2;
      }
      else {
        uVar19 = 2;
        uVar12 = uVar17;
        do {
          pbVar10 = pbVar9;
          juce::jpeglibNamespace::arith_encode(param_1,pbVar10,1);
          uVar19 = uVar19 * 2;
          bVar21 = 7 < uVar12;
          pbVar9 = pbVar10 + 1;
          uVar12 = (int)uVar12 >> 1;
        } while (bVar21);
        juce::jpeglibNamespace::arith_encode(param_1,pbVar10 + 1,0);
        if (uVar19 == 0) goto LAB_0036689d;
        pbVar9 = pbVar10 + 0xf;
      }
      do {
        juce::jpeglibNamespace::arith_encode
                  (param_1,pbVar9,(uint)(((int)uVar19 >> 1 & uVar17) != 0));
        bVar21 = 3 < uVar19;
        uVar19 = (int)uVar19 >> 1;
      } while (bVar21);
    }
LAB_0036689d:
  } while (iVar20 < iVar7);
  if (iVar20 < (int)param_1[0x3b]) {
LAB_00366a9e:
    juce::jpeglibNamespace::arith_encode
              (param_1,(byte *)((long)(iVar20 * 3) + *(long *)(lVar1 + 0xe8 + lVar8 * 8)),1);
  }
LAB_00366620:
  lVar5 = lVar5 + 1;
  in_RAX = (ulong)(int)param_1[0x32];
  if ((long)in_RAX <= lVar5) goto LAB_00366ac3;
  goto LAB_00366639;
}


