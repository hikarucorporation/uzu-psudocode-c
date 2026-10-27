// Function : rgb1_gray_convert
// Namespace: juce:jpeglibNamespace
// Entry    : 0038b170
// Prototype: undefined rgb1_gray_convert(long param_1, long * param_2, uint param_3, long * param_4, int param_5)
// Body     : 0038b170 - 0038b265


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::rgb1_gray_convert(juce::jpeglibNamespace::jpeg_decompress_struct*,
   unsigned char***, unsigned int, unsigned char**, int) */

void __cdecl
juce::jpeglibNamespace::rgb1_gray_convert
          (long param_1,long *param_2,uint param_3,long *param_4,int param_5)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  ulong uVar11;
  
  if ((0 < param_5) && (uVar2 = *(uint *)(param_1 + 0x74), (ulong)uVar2 != 0)) {
    lVar3 = *(long *)(param_1 + 0x268);
    lVar4 = *(long *)(lVar3 + 0x30);
    lVar5 = *(long *)(lVar3 + 0x38);
    lVar3 = *(long *)(lVar3 + 0x40);
    do {
      uVar11 = (ulong)param_3;
      lVar6 = *(long *)(*param_2 + uVar11 * 8);
      lVar7 = *(long *)(param_2[1] + uVar11 * 8);
      lVar8 = *(long *)(param_2[2] + uVar11 * 8);
      lVar9 = *param_4;
      uVar11 = 0;
      do {
        bVar1 = *(byte *)(lVar7 + uVar11);
        *(char *)(lVar9 + uVar11) =
             (char)((uint)(*(int *)(lVar5 + (ulong)bVar1 * 8) +
                           *(int *)(lVar4 + (ulong)((uint)bVar1 + (uint)*(byte *)(lVar6 + uVar11) +
                                                    0x80 & 0xff) * 8) +
                          *(int *)(lVar3 + (ulong)((uint)bVar1 + (uint)*(byte *)(lVar8 + uVar11) +
                                                   0x80 & 0xff) * 8)) >> 0x10);
        uVar11 = uVar11 + 1;
      } while (uVar2 != uVar11);
      param_3 = param_3 + 1;
      param_4 = param_4 + 1;
      bVar10 = 1 < param_5;
      param_5 = param_5 + -1;
    } while (bVar10);
  }
  return;
}


