// Function : _ZN4juce16jpeglibNamespaceL20decode_mcu_DC_refineEPNS0_22jpeg_decompress_structEPPA64_s
// Namespace: 
// Entry    : 0037c900
// Prototype: undefined8 _ZN4juce16jpeglibNamespaceL20decode_mcu_DC_refineEPNS0_22jpeg_decompress_structEPPA64_s(long param_1, long param_2)
// Body     : 0037c900 - 0037ca9f


undefined8
_ZN4juce16jpeglibNamespaceL20decode_mcu_DC_refineEPNS0_22jpeg_decompress_structEPPA64_s
          (long param_1,long param_2)

{
  int *piVar1;
  byte bVar2;
  long lVar3;
  ushort *puVar4;
  ulong uVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 local_58;
  undefined8 local_50;
  ulong local_48;
  int local_40;
  long local_38;
  
  lVar3 = *(long *)(param_1 + 0x250);
  iVar11 = *(int *)(param_1 + 0x15c);
  if (iVar11 == 0) {
    iVar11 = 0;
  }
  else if (*(int *)(lVar3 + 0x40) == 0) {
    iVar11 = *(int *)(lVar3 + 0x20);
    iVar10 = iVar11 + 7;
    if (-1 < iVar11) {
      iVar10 = iVar11;
    }
    lVar7 = *(long *)(param_1 + 0x248);
    piVar1 = (int *)(lVar7 + 0x20);
    *piVar1 = *piVar1 + (iVar10 >> 3);
    *(undefined4 *)(lVar3 + 0x20) = 0;
    cVar6 = (**(code **)(lVar7 + 0x10))(param_1);
    if (cVar6 == '\0') {
      return 0;
    }
    if (0 < *(int *)(param_1 + 0x1a0)) {
      lVar7 = 0;
      do {
        *(undefined4 *)(lVar3 + 0x2c + lVar7 * 4) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(param_1 + 0x1a0));
    }
    *(undefined4 *)(lVar3 + 0x28) = 0;
    iVar11 = *(int *)(param_1 + 0x15c);
    *(int *)(lVar3 + 0x40) = iVar11;
    if (*(int *)(param_1 + 0x21c) == 0) {
      *(undefined1 *)(lVar3 + 0x3c) = 0;
    }
  }
  puVar9 = *(undefined8 **)(param_1 + 0x28);
  local_58 = *puVar9;
  local_50 = puVar9[1];
  uVar14 = *(ulong *)(lVar3 + 0x18);
  uVar12 = *(uint *)(lVar3 + 0x20);
  uVar13 = (ulong)uVar12;
  if (0 < *(int *)(param_1 + 0x1d0)) {
    bVar2 = *(byte *)(param_1 + 0x208);
    lVar7 = 0;
    local_38 = param_1;
    do {
      uVar12 = (uint)uVar13;
      if ((int)uVar12 < 1) {
        uVar8 = juce::jpeglibNamespace::jpeg_fill_bit_buffer(&local_58,uVar14,uVar12,1);
        if ((char)uVar8 == '\0') {
          return 0;
        }
        uVar13 = (ulong)(local_40 - 1);
        uVar5 = local_48 >> (uVar13 & 0x3f);
        uVar14 = local_48;
      }
      else {
        uVar13 = (ulong)(uVar12 - 1);
        uVar5 = uVar14 >> (uVar13 & 0x3f);
      }
      if ((uVar5 & 1) != 0) {
        puVar4 = *(ushort **)(param_2 + lVar7 * 8);
        *puVar4 = *puVar4 | (ushort)((uint)(0x10000 << (bVar2 & 0x1f)) >> 0x10);
      }
      uVar12 = (uint)uVar13;
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(param_1 + 0x1d0));
    puVar9 = *(undefined8 **)(param_1 + 0x28);
    iVar11 = *(int *)(param_1 + 0x15c);
  }
  *puVar9 = local_58;
  puVar9[1] = local_50;
  *(ulong *)(lVar3 + 0x18) = uVar14;
  *(uint *)(lVar3 + 0x20) = uVar12;
  if (iVar11 != 0) {
    *(int *)(lVar3 + 0x40) = *(int *)(lVar3 + 0x40) + -1;
  }
  return CONCAT71((int7)((ulong)puVar9 >> 8),1);
}


