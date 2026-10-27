// Function : _ZN4juce16jpeglibNamespaceL19encode_mcu_DC_firstEPNS0_20jpeg_compress_structEPPA64_s
// Namespace: 
// Entry    : 00365c70
// Prototype: undefined8 _ZN4juce16jpeglibNamespaceL19encode_mcu_DC_firstEPNS0_20jpeg_compress_structEPPA64_s(long * param_1, long param_2)
// Body     : 00365c70 - 00365ec3


undefined8
_ZN4juce16jpeglibNamespaceL19encode_mcu_DC_firstEPNS0_20jpeg_compress_structEPPA64_s
          (long *param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  ulong in_RAX;
  byte *pbVar4;
  undefined4 uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  
  lVar1 = param_1[0x44];
  if ((int)param_1[0x26] != 0) {
    iVar3 = *(int *)(lVar1 + 0x60);
    if (iVar3 == 0) {
      juce::jpeglibNamespace::emit_restart(param_1,(char)*(undefined4 *)(lVar1 + 100));
      iVar3 = (int)param_1[0x26];
      *(uint *)(lVar1 + 100) = *(int *)(lVar1 + 100) + 1U & 7;
    }
    in_RAX = (ulong)(iVar3 - 1U);
    *(uint *)(lVar1 + 0x60) = iVar3 - 1U;
  }
  if (0 < (int)param_1[0x32]) {
    lVar7 = 0;
    do {
      lVar9 = (long)*(int *)((long)param_1 + lVar7 * 4 + 0x194);
      lVar8 = (long)*(int *)(param_1[lVar9 + 0x2d] + 0x14);
      iVar3 = (int)**(short **)(param_2 + lVar7 * 8) >> (*(byte *)(param_1 + 0x39) & 0x1f);
      pbVar4 = (byte *)((long)*(int *)(lVar1 + 0x50 + lVar9 * 4) +
                       *(long *)(lVar1 + 0x68 + lVar8 * 8));
      iVar12 = iVar3 - *(int *)(lVar1 + 0x40 + lVar9 * 4);
      if (iVar12 == 0) {
        juce::jpeglibNamespace::arith_encode(param_1,pbVar4,0);
        *(undefined4 *)(lVar1 + 0x50 + lVar9 * 4) = 0;
      }
      else {
        *(int *)(lVar1 + 0x40 + lVar9 * 4) = iVar3;
        juce::jpeglibNamespace::arith_encode(param_1,pbVar4,1);
        uVar11 = 0;
        bVar2 = iVar12 < 1;
        if (bVar2) {
          iVar12 = -iVar12;
          uVar5 = 8;
          lVar10 = 3;
        }
        else {
          uVar5 = 4;
          lVar10 = 2;
        }
        juce::jpeglibNamespace::arith_encode(param_1,pbVar4 + 1,(uint)bVar2);
        pbVar4 = pbVar4 + lVar10;
        *(undefined4 *)(lVar1 + 0x50 + lVar9 * 4) = uVar5;
        uVar13 = iVar12 - 1;
        if (uVar13 != 0) {
          uVar11 = 1;
          juce::jpeglibNamespace::arith_encode(param_1,pbVar4,1);
          pbVar4 = (byte *)(*(long *)(lVar1 + 0x68 + lVar8 * 8) + 0x14);
          if (uVar13 != 1) {
            uVar11 = 1;
            uVar6 = uVar13;
            do {
              juce::jpeglibNamespace::arith_encode(param_1,pbVar4,1);
              uVar11 = uVar11 * 2;
              pbVar4 = pbVar4 + 1;
              bVar2 = 3 < uVar6;
              uVar6 = (int)uVar6 >> 1;
            } while (bVar2);
          }
        }
        iVar3 = 0;
        juce::jpeglibNamespace::arith_encode(param_1,pbVar4,0);
        if ((int)uVar11 <
            (int)((ulong)(1L << (*(byte *)((long)param_1 + lVar8 + 0xe0) & 0x3f)) >> 1)) {
LAB_00365e74:
          *(int *)(lVar1 + 0x50 + lVar9 * 4) = iVar3;
        }
        else if ((int)((ulong)(1L << (*(byte *)((long)param_1 + lVar8 + 0xf0) & 0x3f)) >> 1) <
                 (int)uVar11) {
          iVar3 = *(int *)(lVar1 + 0x50 + lVar9 * 4) + 8;
          goto LAB_00365e74;
        }
        if (1 < uVar11) {
          do {
            juce::jpeglibNamespace::arith_encode
                      (param_1,pbVar4 + 0xe,(uint)(((int)uVar11 >> 1 & uVar13) != 0));
            bVar2 = 3 < uVar11;
            uVar11 = (int)uVar11 >> 1;
          } while (bVar2);
        }
      }
      lVar7 = lVar7 + 1;
      in_RAX = (ulong)(int)param_1[0x32];
    } while (lVar7 < (long)in_RAX);
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}


