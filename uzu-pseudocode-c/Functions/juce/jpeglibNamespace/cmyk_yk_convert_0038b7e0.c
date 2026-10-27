// Function : cmyk_yk_convert
// Namespace: juce:jpeglibNamespace
// Entry    : 0038b7e0
// Prototype: undefined cmyk_yk_convert(long param_1, long * param_2, uint param_3, long * param_4, int param_5)
// Body     : 0038b7e0 - 0038b8d8


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::cmyk_yk_convert(juce::jpeglibNamespace::jpeg_decompress_struct*, unsigned
   char***, unsigned int, unsigned char**, int) */

void __cdecl
juce::jpeglibNamespace::cmyk_yk_convert
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
  long lVar9;
  bool bVar10;
  ulong uVar11;
  
  if ((0 < param_5) && (uVar1 = *(uint *)(param_1 + 0x74), (ulong)uVar1 != 0)) {
    lVar2 = *(long *)(param_1 + 0x268);
    lVar3 = *(long *)(lVar2 + 0x30);
    lVar4 = *(long *)(lVar2 + 0x38);
    lVar2 = *(long *)(lVar2 + 0x40);
    do {
      uVar11 = (ulong)param_3;
      lVar5 = *(long *)(*param_2 + uVar11 * 8);
      lVar6 = *(long *)(param_2[1] + uVar11 * 8);
      lVar7 = *(long *)(param_2[2] + uVar11 * 8);
      lVar8 = *(long *)(param_2[3] + uVar11 * 8);
      lVar9 = *param_4;
      uVar11 = 0;
      do {
        *(char *)(lVar9 + uVar11 * 2) =
             (char)((uint)(*(int *)(lVar4 + ((ulong)*(byte *)(lVar6 + uVar11) ^ 0xff) * 8) +
                           *(int *)(lVar3 + ((ulong)*(byte *)(lVar5 + uVar11) ^ 0xff) * 8) +
                          *(int *)(lVar2 + ((ulong)*(byte *)(lVar7 + uVar11) ^ 0xff) * 8)) >> 0x10);
        *(undefined1 *)(lVar9 + 1 + uVar11 * 2) = *(undefined1 *)(lVar8 + uVar11);
        uVar11 = uVar11 + 1;
      } while (uVar1 != uVar11);
      param_3 = param_3 + 1;
      param_4 = param_4 + 1;
      bVar10 = 1 < param_5;
      param_5 = param_5 + -1;
    } while (bVar10);
  }
  return;
}


