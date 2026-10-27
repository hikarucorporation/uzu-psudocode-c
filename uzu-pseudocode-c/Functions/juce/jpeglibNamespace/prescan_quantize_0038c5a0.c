// Function : prescan_quantize
// Namespace: juce:jpeglibNamespace
// Entry    : 0038c5a0
// Prototype: undefined prescan_quantize(long param_1, long param_2, undefined8 param_3, uint param_4)
// Body     : 0038c5a0 - 0038c616


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::prescan_quantize(juce::jpeglibNamespace::jpeg_decompress_struct*,
   unsigned char**, unsigned char**, int) */

void __cdecl
juce::jpeglibNamespace::prescan_quantize(long param_1,long param_2,undefined8 param_3,uint param_4)

{
  short sVar1;
  int iVar2;
  long lVar3;
  byte *pbVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  short sVar8;
  ulong uVar9;
  
  if ((0 < (int)param_4) && (iVar2 = *(int *)(param_1 + 0x74), iVar2 != 0)) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x270) + 0x30);
    uVar9 = 0;
    do {
      pbVar4 = *(byte **)(param_2 + uVar9 * 8);
      iVar5 = iVar2;
      do {
        uVar7 = (ulong)(pbVar4[2] >> 2 & 0x3e);
        lVar6 = (ulong)((pbVar4[1] & 0xfc) << 4) + *(long *)(lVar3 + (ulong)(*pbVar4 & 0xfffffff8));
        sVar1 = *(short *)(uVar7 + lVar6);
        sVar8 = sVar1 + 1;
        if (sVar8 == 0) {
          sVar8 = sVar1;
        }
        *(short *)(uVar7 + lVar6) = sVar8;
        pbVar4 = pbVar4 + 3;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      uVar9 = uVar9 + 1;
    } while (uVar9 != param_4);
  }
  return;
}


