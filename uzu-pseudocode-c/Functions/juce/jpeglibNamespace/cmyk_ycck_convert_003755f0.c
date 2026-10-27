// Function : cmyk_ycck_convert
// Namespace: juce:jpeglibNamespace
// Entry    : 003755f0
// Prototype: undefined cmyk_ycck_convert(long param_1, long * param_2, long * param_3, uint param_4, int param_5)
// Body     : 003755f0 - 0037574b


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::cmyk_ycck_convert(juce::jpeglibNamespace::jpeg_compress_struct*, unsigned
   char**, unsigned char***, unsigned int, int) */

void __cdecl
juce::jpeglibNamespace::cmyk_ycck_convert
          (long param_1,long *param_2,long *param_3,uint param_4,int param_5)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  
  if ((0 < param_5) && (uVar2 = *(uint *)(param_1 + 0x30), (ulong)uVar2 != 0)) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x208) + 0x10);
    do {
      lVar4 = *param_2;
      uVar12 = (ulong)param_4;
      lVar5 = *(long *)(*param_3 + uVar12 * 8);
      lVar6 = *(long *)(param_3[1] + uVar12 * 8);
      lVar7 = *(long *)(param_3[2] + uVar12 * 8);
      lVar8 = *(long *)(param_3[3] + uVar12 * 8);
      uVar12 = 0;
      do {
        uVar14 = (ulong)*(byte *)(lVar4 + uVar12 * 4) ^ 0xff;
        uVar13 = *(byte *)(lVar4 + 1 + uVar12 * 4) ^ 0xff;
        bVar1 = *(byte *)(lVar4 + 2 + uVar12 * 4);
        *(undefined1 *)(lVar8 + uVar12) = *(undefined1 *)(lVar4 + 3 + uVar12 * 4);
        uVar11 = bVar1 ^ 0xff;
        *(char *)(lVar5 + uVar12) =
             (char)((uint)(*(int *)(lVar3 + (ulong)(uVar13 + 0x100) * 8) +
                           *(int *)(lVar3 + uVar14 * 8) +
                          *(int *)(lVar3 + (ulong)(uVar11 + 0x200) * 8)) >> 0x10);
        iVar10 = (int)uVar14;
        *(char *)(lVar6 + uVar12) =
             (char)((uint)(*(int *)(lVar3 + (ulong)(uVar13 + 0x400) * 8) +
                           *(int *)(lVar3 + (ulong)(iVar10 + 0x300) * 8) +
                          *(int *)(lVar3 + (ulong)(uVar11 + 0x500) * 8)) >> 0x10);
        *(char *)(lVar7 + uVar12) =
             (char)((uint)(*(int *)(lVar3 + (ulong)(uVar13 | 0x600) * 8) +
                           *(int *)(lVar3 + (ulong)(iVar10 + 0x500) * 8) +
                          *(int *)(lVar3 + (ulong)(uVar11 | 0x700) * 8)) >> 0x10);
        uVar12 = uVar12 + 1;
      } while (uVar2 != uVar12);
      param_2 = param_2 + 1;
      param_4 = param_4 + 1;
      bVar9 = 1 < param_5;
      param_5 = param_5 + -1;
    } while (bVar9);
  }
  return;
}


