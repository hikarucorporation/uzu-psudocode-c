// Function : _ZN4juce16jpeglibNamespaceL20encode_mcu_DC_refineEPNS0_20jpeg_compress_structEPPA64_s
// Namespace: 
// Entry    : 00366230
// Prototype: undefined8 _ZN4juce16jpeglibNamespaceL20encode_mcu_DC_refineEPNS0_20jpeg_compress_structEPPA64_s(long * param_1, long param_2)
// Body     : 00366230 - 003662d4


undefined8
_ZN4juce16jpeglibNamespaceL20encode_mcu_DC_refineEPNS0_20jpeg_compress_structEPPA64_s
          (long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong in_RAX;
  long lVar4;
  
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
    lVar2 = param_1[0x39];
    lVar4 = 0;
    do {
      juce::jpeglibNamespace::arith_encode
                (param_1,(byte *)(lVar1 + 0x168),
                 (uint)(int)**(short **)(param_2 + lVar4 * 8) >> ((byte)lVar2 & 0x1f) & 1);
      lVar4 = lVar4 + 1;
      in_RAX = (ulong)(int)param_1[0x32];
    } while (lVar4 < (long)in_RAX);
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}


