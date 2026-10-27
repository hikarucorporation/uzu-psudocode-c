// Function : ycck_cmyk_convert
// Namespace: juce:jpeglibNamespace
// Entry    : 0038b670
// Prototype: undefined ycck_cmyk_convert(long param_1, long * param_2, uint param_3, long * param_4, int param_5)
// Body     : 0038b670 - 0038b7df


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::ycck_cmyk_convert(juce::jpeglibNamespace::jpeg_decompress_struct*,
   unsigned char***, unsigned int, unsigned char**, int) */

void __cdecl
juce::jpeglibNamespace::ycck_cmyk_convert
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
  long lVar10;
  long lVar11;
  bool bVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  
  if ((0 < param_5) && (uVar1 = *(uint *)(param_1 + 0x74), (ulong)uVar1 != 0)) {
    lVar2 = *(long *)(param_1 + 0x268);
    lVar3 = *(long *)(param_1 + 0x198);
    lVar4 = *(long *)(lVar2 + 0x10);
    lVar5 = *(long *)(lVar2 + 0x18);
    lVar6 = *(long *)(lVar2 + 0x20);
    lVar2 = *(long *)(lVar2 + 0x28);
    do {
      uVar16 = (ulong)param_3;
      lVar7 = *(long *)(*param_2 + uVar16 * 8);
      lVar8 = *(long *)(param_2[1] + uVar16 * 8);
      lVar9 = *(long *)(param_2[2] + uVar16 * 8);
      lVar10 = *(long *)(param_2[3] + uVar16 * 8);
      lVar11 = *param_4;
      uVar16 = 0;
      do {
        uVar15 = (ulong)*(byte *)(lVar8 + uVar16);
        uVar13 = (ulong)*(byte *)(lVar9 + uVar16);
        uVar14 = *(byte *)(lVar7 + uVar16) ^ 0xff;
        *(undefined1 *)(lVar11 + uVar16 * 4) =
             *(undefined1 *)(lVar3 + (int)(uVar14 - *(int *)(lVar4 + uVar13 * 4)));
        *(undefined1 *)(lVar11 + 1 + uVar16 * 4) =
             *(undefined1 *)
              (lVar3 + (int)(uVar14 - (int)((ulong)(*(long *)(lVar6 + uVar13 * 8) +
                                                   *(long *)(lVar2 + uVar15 * 8)) >> 0x10)));
        *(undefined1 *)(lVar11 + 2 + uVar16 * 4) =
             *(undefined1 *)(lVar3 + (int)(uVar14 - *(int *)(lVar5 + uVar15 * 4)));
        *(undefined1 *)(lVar11 + 3 + uVar16 * 4) = *(undefined1 *)(lVar10 + uVar16);
        uVar16 = uVar16 + 1;
      } while (uVar1 != uVar16);
      param_3 = param_3 + 1;
      param_4 = param_4 + 1;
      bVar12 = 1 < param_5;
      param_5 = param_5 + -1;
    } while (bVar12);
  }
  return;
}


