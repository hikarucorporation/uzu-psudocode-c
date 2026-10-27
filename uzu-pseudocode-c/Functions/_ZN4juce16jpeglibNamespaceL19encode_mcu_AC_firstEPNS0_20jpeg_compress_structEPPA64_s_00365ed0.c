// Function : _ZN4juce16jpeglibNamespaceL19encode_mcu_AC_firstEPNS0_20jpeg_compress_structEPPA64_s
// Namespace: 
// Entry    : 00365ed0
// Prototype: undefined8 _ZN4juce16jpeglibNamespaceL19encode_mcu_AC_firstEPNS0_20jpeg_compress_structEPPA64_s(long * param_1, long * param_2)
// Body     : 00365ed0 - 0036622b


undefined8
_ZN4juce16jpeglibNamespaceL19encode_mcu_AC_firstEPNS0_20jpeg_compress_structEPPA64_s
          (long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  
  lVar1 = param_1[0x44];
  if ((int)param_1[0x26] != 0) {
    iVar10 = *(int *)(lVar1 + 0x60);
    if (iVar10 == 0) {
      juce::jpeglibNamespace::emit_restart(param_1,(char)*(undefined4 *)(lVar1 + 100));
      iVar10 = (int)param_1[0x26];
      *(uint *)(lVar1 + 100) = *(int *)(lVar1 + 100) + 1U & 7;
    }
    *(int *)(lVar1 + 0x60) = iVar10 + -1;
  }
  lVar2 = param_1[0x3a];
  lVar3 = *param_2;
  lVar5 = (long)*(int *)(param_1[0x2d] + 0x18);
  uVar15 = *(uint *)(param_1 + 0x38);
  uVar6 = (ulong)uVar15;
  lVar12 = 0;
  do {
    iVar10 = (int)*(short *)(lVar3 + (long)*(int *)(lVar2 + (long)(int)uVar15 * 4 + lVar12 * 4) * 2)
    ;
    if (iVar10 < 0) {
      iVar10 = -iVar10;
    }
    if (iVar10 >> (*(byte *)(param_1 + 0x39) & 0x1f) != 0) {
      iVar11 = (int)lVar12 + uVar15;
      iVar10 = *(int *)((long)param_1 + 0x1bc) + -1;
      if (iVar11 < *(int *)((long)param_1 + 0x1bc)) goto LAB_003661f5;
      goto LAB_00365fa3;
    }
    lVar12 = lVar12 + -1;
  } while ((int)lVar12 + uVar15 != 0);
  iVar11 = 0;
  iVar10 = *(int *)((long)param_1 + 0x1bc) + -1;
  if (*(int *)((long)param_1 + 0x1bc) < 1) {
LAB_00365fa3:
LAB_00365ffa:
    lVar12 = *(long *)(lVar1 + 0xe8 + lVar5 * 8);
    juce::jpeglibNamespace::arith_encode(param_1,(byte *)(lVar12 + iVar10 * 3),0);
    piVar9 = (int *)(lVar2 + 4 + (long)iVar10 * 4);
    pbVar7 = (byte *)(iVar10 * 3 + lVar12 + 2);
    iVar4 = iVar10;
    do {
      iVar14 = (int)*(short *)(lVar3 + (long)*piVar9 * 2);
      if (iVar14 < 0) {
        iVar14 = -iVar14 >> (*(byte *)(param_1 + 0x39) & 0x1f);
        if (iVar14 != 0) {
          uVar15 = 1;
          goto LAB_003660a5;
        }
      }
      else {
        iVar14 = iVar14 >> (*(byte *)(param_1 + 0x39) & 0x1f);
        if (iVar14 != 0) goto code_r0x00366095;
      }
      juce::jpeglibNamespace::arith_encode(param_1,pbVar7 + -1,0);
      iVar4 = iVar4 + 1;
      piVar9 = piVar9 + 1;
      pbVar7 = pbVar7 + 3;
    } while( true );
  }
LAB_003661f5:
  if (iVar10 < (int)uVar6) {
    uVar6 = juce::jpeglibNamespace::arith_encode
                      (param_1,(byte *)((long)(iVar10 * 3) + *(long *)(lVar1 + 0xe8 + lVar5 * 8)),1)
    ;
  }
  return CONCAT71((int7)(uVar6 >> 8),1);
code_r0x00366095:
  uVar15 = 0;
LAB_003660a5:
  juce::jpeglibNamespace::arith_encode(param_1,pbVar7 + -1,1);
  juce::jpeglibNamespace::arith_encode(param_1,(byte *)(lVar1 + 0x168),uVar15);
  iVar10 = iVar4 + 1;
  uVar15 = iVar14 - 1;
  if ((uVar15 == 0) || (juce::jpeglibNamespace::arith_encode(param_1,pbVar7,1), uVar15 == 1)) {
    juce::jpeglibNamespace::arith_encode(param_1,pbVar7,0);
  }
  else {
    juce::jpeglibNamespace::arith_encode(param_1,pbVar7,1);
    lVar12 = *(long *)(lVar1 + 0xe8 + lVar5 * 8);
    pbVar7 = (byte *)(lVar12 + 0xbd);
    if ((int)(uint)*(byte *)((long)param_1 + lVar5 + 0x100) <= iVar4) {
      pbVar7 = (byte *)(lVar12 + 0xd9);
    }
    if (uVar15 < 4) {
      juce::jpeglibNamespace::arith_encode(param_1,pbVar7,0);
      pbVar7 = pbVar7 + 0xe;
      uVar13 = 2;
    }
    else {
      uVar13 = 2;
      uVar16 = uVar15;
      do {
        pbVar8 = pbVar7;
        juce::jpeglibNamespace::arith_encode(param_1,pbVar8,1);
        uVar13 = uVar13 * 2;
        bVar17 = 7 < uVar16;
        pbVar7 = pbVar8 + 1;
        uVar16 = (int)uVar16 >> 1;
      } while (bVar17);
      juce::jpeglibNamespace::arith_encode(param_1,pbVar8 + 1,0);
      if (uVar13 == 0) goto LAB_00365fdd;
      pbVar7 = pbVar8 + 0xf;
    }
    do {
      juce::jpeglibNamespace::arith_encode(param_1,pbVar7,(uint)(((int)uVar13 >> 1 & uVar15) != 0));
      bVar17 = 3 < uVar13;
      uVar13 = (int)uVar13 >> 1;
    } while (bVar17);
  }
LAB_00365fdd:
  if (iVar11 <= iVar10) goto LAB_003661e3;
  goto LAB_00365ffa;
LAB_003661e3:
  uVar6 = (ulong)*(uint *)(param_1 + 0x38);
  iVar10 = iVar4 + 1;
  goto LAB_003661f5;
}


