// Function : _ZN4juce16jpeglibNamespaceL20encode_mcu_AC_refineEPNS0_20jpeg_compress_structEPPA64_s
// Namespace: 
// Entry    : 003662e0
// Prototype: undefined8 _ZN4juce16jpeglibNamespaceL20encode_mcu_AC_refineEPNS0_20jpeg_compress_structEPPA64_s(long * param_1, long * param_2)
// Body     : 003662e0 - 00366575


undefined8
_ZN4juce16jpeglibNamespaceL20encode_mcu_AC_refineEPNS0_20jpeg_compress_structEPPA64_s
          (long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  int *piVar12;
  int local_5c;
  
  lVar1 = param_1[0x44];
  if ((int)param_1[0x26] != 0) {
    iVar4 = *(int *)(lVar1 + 0x60);
    if (iVar4 == 0) {
      juce::jpeglibNamespace::emit_restart(param_1,(char)*(undefined4 *)(lVar1 + 100));
      iVar4 = (int)param_1[0x26];
      *(uint *)(lVar1 + 100) = *(int *)(lVar1 + 100) + 1U & 7;
    }
    *(int *)(lVar1 + 0x60) = iVar4 + -1;
  }
  lVar2 = param_1[0x3a];
  lVar3 = *param_2;
  iVar4 = *(int *)(param_1[0x2d] + 0x18);
  uVar7 = *(uint *)(param_1 + 0x38);
  uVar5 = (ulong)uVar7;
  lVar11 = 0;
  do {
    iVar10 = (int)*(short *)(lVar3 + (long)*(int *)(lVar2 + (long)(int)uVar7 * 4 + lVar11 * 4) * 2);
    if (iVar10 < 0) {
      iVar10 = -iVar10;
    }
    if (iVar10 >> (*(byte *)(param_1 + 0x39) & 0x1f) != 0) {
      iVar10 = (int)(lVar11 + uVar5);
      local_5c = iVar10;
      if (iVar10 < 1) {
        iVar9 = *(int *)((long)param_1 + 0x1bc) + -1;
        if (iVar10 < *(int *)((long)param_1 + 0x1bc)) goto LAB_00366526;
        goto LAB_003663fc;
      }
      lVar11 = (lVar11 + uVar5 & 0xffffffff) + 1;
      goto LAB_003663b0;
    }
    lVar11 = lVar11 + -1;
  } while ((int)lVar11 + uVar7 != 0);
  iVar10 = 0;
  goto LAB_003663e2;
code_r0x003664c4:
  if (uVar7 == 1) {
    juce::jpeglibNamespace::arith_encode(param_1,pbVar8 + -1,1);
    uVar7 = 0;
    pbVar8 = (byte *)(lVar1 + 0x168);
  }
  else {
LAB_00366420:
    uVar7 = uVar7 & 1;
  }
LAB_00366429:
  juce::jpeglibNamespace::arith_encode(param_1,pbVar8,uVar7);
  if (iVar10 <= iVar9) goto LAB_0036651f;
  goto LAB_00366440;
LAB_0036651f:
  uVar5 = (ulong)*(uint *)(param_1 + 0x38);
  goto LAB_00366526;
  while( true ) {
    local_5c = local_5c + -1;
    lVar11 = lVar11 + -1;
    if (lVar11 < 2) break;
LAB_003663b0:
    iVar9 = (int)*(short *)(lVar3 + (long)*(int *)(lVar2 + -4 + lVar11 * 4) * 2);
    if (iVar9 < 0) {
      iVar9 = -iVar9;
    }
    if (iVar9 >> (*(byte *)((long)param_1 + 0x1c4) & 0x1f) != 0) goto LAB_003663ea;
  }
LAB_003663e2:
  local_5c = 0;
LAB_003663ea:
  iVar9 = *(int *)((long)param_1 + 0x1bc) + -1;
  if (*(int *)((long)param_1 + 0x1bc) <= iVar10) {
LAB_003663fc:
LAB_00366440:
    lVar11 = *(long *)(lVar1 + 0xe8 + (long)iVar4 * 8);
    if (local_5c <= iVar9) {
      juce::jpeglibNamespace::arith_encode(param_1,(byte *)(lVar11 + iVar9 * 3),0);
    }
    piVar12 = (int *)(lVar2 + 4 + (long)iVar9 * 4);
    pbVar8 = (byte *)(lVar11 + iVar9 * 3 + 2);
    do {
      iVar9 = iVar9 + 1;
      iVar6 = (int)*(short *)(lVar3 + (long)*piVar12 * 2);
      if (iVar6 < 0) {
        uVar7 = -iVar6 >> (*(byte *)(param_1 + 0x39) & 0x1f);
        if (uVar7 != 0) {
          if (uVar7 != 1) goto LAB_00366420;
          juce::jpeglibNamespace::arith_encode(param_1,pbVar8 + -1,1);
          uVar7 = 1;
          pbVar8 = (byte *)(lVar1 + 0x168);
          goto LAB_00366429;
        }
      }
      else {
        uVar7 = iVar6 >> (*(byte *)(param_1 + 0x39) & 0x1f);
        if (uVar7 != 0) goto code_r0x003664c4;
      }
      juce::jpeglibNamespace::arith_encode(param_1,pbVar8 + -1,0);
      piVar12 = piVar12 + 1;
      pbVar8 = pbVar8 + 3;
    } while( true );
  }
LAB_00366526:
  if (iVar9 < (int)uVar5) {
    uVar5 = juce::jpeglibNamespace::arith_encode
                      (param_1,(byte *)((long)(iVar9 * 3) +
                                       *(long *)(lVar1 + 0xe8 + (long)iVar4 * 8)),1);
  }
  return CONCAT71((int7)(uVar5 >> 8),1);
}


