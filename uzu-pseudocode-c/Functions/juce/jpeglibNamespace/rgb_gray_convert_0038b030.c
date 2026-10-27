// Function : rgb_gray_convert
// Namespace: juce:jpeglibNamespace
// Entry    : 0038b030
// Prototype: undefined rgb_gray_convert(long param_1, long * param_2, uint param_3, long * param_4, int param_5)
// Body     : 0038b030 - 0038b160


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::rgb_gray_convert(juce::jpeglibNamespace::jpeg_decompress_struct*,
   unsigned char***, unsigned int, unsigned char**, int) */

void __cdecl
juce::jpeglibNamespace::rgb_gray_convert
          (long param_1,long *param_2,uint param_3,long *param_4,int param_5)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  ulong uVar10;
  
  if ((0 < param_5) && (uVar1 = *(uint *)(param_1 + 0x74), uVar1 != 0)) {
    lVar2 = *(long *)(param_1 + 0x268);
    lVar3 = *(long *)(lVar2 + 0x30);
    lVar4 = *(long *)(lVar2 + 0x38);
    lVar2 = *(long *)(lVar2 + 0x40);
    do {
      uVar10 = (ulong)param_3;
      lVar5 = *(long *)(*param_2 + uVar10 * 8);
      lVar6 = *(long *)(param_2[1] + uVar10 * 8);
      lVar7 = *(long *)(param_2[2] + uVar10 * 8);
      lVar8 = *param_4;
      uVar10 = 0;
      if (uVar1 != 1) {
        do {
          *(char *)(lVar8 + uVar10) =
               (char)((uint)(*(int *)(lVar4 + (ulong)*(byte *)(lVar6 + uVar10) * 8) +
                             *(int *)(lVar3 + (ulong)*(byte *)(lVar5 + uVar10) * 8) +
                            *(int *)(lVar2 + (ulong)*(byte *)(lVar7 + uVar10) * 8)) >> 0x10);
          *(char *)(lVar8 + 1 + uVar10) =
               (char)((uint)(*(int *)(lVar4 + (ulong)*(byte *)(lVar6 + 1 + uVar10) * 8) +
                             *(int *)(lVar3 + (ulong)*(byte *)(lVar5 + 1 + uVar10) * 8) +
                            *(int *)(lVar2 + (ulong)*(byte *)(lVar7 + 1 + uVar10) * 8)) >> 0x10);
          uVar10 = uVar10 + 2;
        } while ((uVar1 & 0xfffffffe) != uVar10);
      }
      if ((uVar1 & 1) != 0) {
        *(char *)(lVar8 + uVar10) =
             (char)((uint)(*(int *)(lVar4 + (ulong)*(byte *)(lVar6 + uVar10) * 8) +
                           *(int *)(lVar3 + (ulong)*(byte *)(lVar5 + uVar10) * 8) +
                          *(int *)(lVar2 + (ulong)*(byte *)(lVar7 + uVar10) * 8)) >> 0x10);
      }
      param_3 = param_3 + 1;
      param_4 = param_4 + 1;
      bVar9 = 1 < param_5;
      param_5 = param_5 + -1;
    } while (bVar9);
  }
  return;
}


