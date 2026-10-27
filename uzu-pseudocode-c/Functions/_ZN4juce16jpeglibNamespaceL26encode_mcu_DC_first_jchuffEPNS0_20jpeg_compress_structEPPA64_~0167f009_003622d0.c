// Function : _ZN4juce16jpeglibNamespaceL26encode_mcu_DC_first_jchuffEPNS0_20jpeg_compress_structEPPA64_s
// Namespace: 
// Entry    : 003622d0
// Prototype: undefined8 _ZN4juce16jpeglibNamespaceL26encode_mcu_DC_first_jchuffEPNS0_20jpeg_compress_structEPPA64_s(long * param_1, long param_2)
// Body     : 003622d0 - 003624d3


undefined8
_ZN4juce16jpeglibNamespaceL26encode_mcu_DC_first_jchuffEPNS0_20jpeg_compress_structEPPA64_s
          (long *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  uint *puVar4;
  bool bVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  
  puVar2 = (undefined8 *)param_1[5];
  lVar3 = param_1[0x44];
  *(undefined8 *)(lVar3 + 200) = *puVar2;
  *(undefined8 *)(lVar3 + 0xd0) = puVar2[1];
  if (((int)param_1[0x26] == 0) || (*(int *)(lVar3 + 0x38) != 0)) {
    iVar11 = (int)param_1[0x32];
  }
  else {
    juce::jpeglibNamespace::emit_restart_e(lVar3,(char)*(undefined4 *)(lVar3 + 0x3c));
    iVar11 = (int)param_1[0x32];
  }
  if (0 < iVar11) {
    lVar6 = param_1[0xb];
    lVar15 = 0;
    do {
      while( true ) {
        lVar8 = (long)*(int *)((long)param_1 + lVar15 * 4 + 0x194);
        iVar11 = (int)**(short **)(param_2 + lVar15 * 8) >> (*(byte *)(param_1 + 0x39) & 0x1f);
        lVar14 = (long)*(int *)(param_1[lVar8 + 0x2d] + 0x14);
        uVar13 = iVar11 - *(int *)(lVar3 + 0x24 + lVar8 * 4);
        if (uVar13 == 0) break;
        *(int *)(lVar3 + 0x24 + lVar8 * 4) = iVar11;
        uVar7 = -uVar13;
        if ((int)-uVar13 < 0) {
          uVar7 = uVar13;
        }
        uVar10 = (ulong)uVar7;
        lVar8 = 0;
        do {
          lVar12 = lVar8;
          uVar10 = uVar10 >> 1;
          lVar8 = lVar12 + 1;
          bVar5 = 1 < uVar7;
          uVar7 = (uint)uVar10;
        } while (bVar5);
        if ((int)lVar6 + 3 <= (int)lVar12) {
          puVar2 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar2 + 5) = 6;
          (*(code *)*puVar2)(param_1);
        }
        uVar13 = ((int)uVar13 >> 0x1f) + uVar13;
        if (*(char *)(lVar3 + 0xc0) == '\0') {
          lVar14 = *(long *)(lVar3 + 0x40 + lVar14 * 8);
          juce::jpeglibNamespace::emit_bits_e
                    (lVar3,*(uint *)(lVar14 + lVar8 * 4),(int)*(char *)(lVar14 + 0x400 + lVar8));
        }
        else {
          plVar1 = (long *)(*(long *)(lVar3 + 0x80 + lVar14 * 8) + lVar8 * 8);
          *plVar1 = *plVar1 + 1;
        }
        iVar11 = (int)lVar8;
LAB_00362360:
        juce::jpeglibNamespace::emit_bits_e(lVar3,uVar13,iVar11);
        lVar15 = lVar15 + 1;
        if ((int)param_1[0x32] <= lVar15) goto LAB_0036247e;
      }
      if (*(char *)(lVar3 + 0xc0) == '\0') {
        puVar4 = *(uint **)(lVar3 + 0x40 + lVar14 * 8);
        uVar13 = *puVar4;
        iVar11 = (int)(char)puVar4[0x100];
        goto LAB_00362360;
      }
      plVar1 = *(long **)(lVar3 + 0x80 + lVar14 * 8);
      *plVar1 = *plVar1 + 1;
      lVar15 = lVar15 + 1;
    } while (lVar15 < (int)param_1[0x32]);
  }
LAB_0036247e:
  puVar2 = (undefined8 *)param_1[5];
  *puVar2 = *(undefined8 *)(lVar3 + 200);
  puVar2[1] = *(undefined8 *)(lVar3 + 0xd0);
  lVar6 = param_1[0x26];
  iVar11 = (int)lVar6;
  if (iVar11 != 0) {
    iVar9 = *(int *)(lVar3 + 0x38);
    if (*(int *)(lVar3 + 0x38) == 0) {
      *(uint *)(lVar3 + 0x3c) = *(int *)(lVar3 + 0x3c) + 1U & 7;
      iVar9 = iVar11;
    }
    *(int *)(lVar3 + 0x38) = iVar9 + -1;
  }
  return CONCAT71((uint7)(uint3)((ulong)lVar6 >> 8),1);
}


