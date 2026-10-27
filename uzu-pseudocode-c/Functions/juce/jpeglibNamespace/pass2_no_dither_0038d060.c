// Function : pass2_no_dither
// Namespace: juce:jpeglibNamespace
// Entry    : 0038d060
// Prototype: undefined pass2_no_dither(long param_1, long param_2, long param_3, uint param_4)
// Body     : 0038d060 - 0038d14f


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::pass2_no_dither(juce::jpeglibNamespace::jpeg_decompress_struct*, unsigned
   char**, unsigned char**, int) */

void __cdecl
juce::jpeglibNamespace::pass2_no_dither(long param_1,long param_2,long param_3,uint param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  short sVar7;
  long lVar8;
  byte *pbVar9;
  
  if ((0 < (int)param_4) && (iVar1 = *(int *)(param_1 + 0x74), iVar1 != 0)) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x270) + 0x30);
    uVar5 = 0;
    do {
      pbVar9 = *(byte **)(param_2 + uVar5 * 8);
      lVar3 = *(long *)(param_3 + uVar5 * 8);
      lVar8 = 0;
      do {
        bVar4 = pbVar9[2] >> 3;
        lVar6 = (ulong)(pbVar9[1] >> 2) * 0x40 + *(long *)(lVar2 + (ulong)(*pbVar9 >> 3) * 8);
        sVar7 = *(short *)(lVar6 + (ulong)bVar4 * 2);
        if (sVar7 == 0) {
          fill_inverse_cmap(param_1,(ulong)(*pbVar9 >> 3),(ulong)(pbVar9[1] >> 2),(ulong)bVar4);
          sVar7 = *(short *)(lVar6 + (ulong)bVar4 * 2);
        }
        *(char *)(lVar3 + lVar8) = (char)sVar7 + -1;
        lVar8 = lVar8 + 1;
        pbVar9 = pbVar9 + 3;
      } while (iVar1 != (int)lVar8);
      uVar5 = uVar5 + 1;
    } while (uVar5 != param_4);
  }
  return;
}


