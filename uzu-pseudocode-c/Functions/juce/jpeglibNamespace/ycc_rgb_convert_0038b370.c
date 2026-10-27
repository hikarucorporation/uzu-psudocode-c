// Function : ycc_rgb_convert
// Namespace: juce:jpeglibNamespace
// Entry    : 0038b370
// Prototype: undefined ycc_rgb_convert(long param_1, long * param_2, uint param_3, undefined8 * param_4, int param_5)
// Body     : 0038b370 - 0038b47f


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::ycc_rgb_convert(juce::jpeglibNamespace::jpeg_decompress_struct*, unsigned
   char***, unsigned int, unsigned char**, int) */

void __cdecl
juce::jpeglibNamespace::ycc_rgb_convert
          (long param_1,long *param_2,uint param_3,undefined8 *param_4,int param_5)

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
  undefined1 *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  
  if ((0 < param_5) && (uVar1 = *(uint *)(param_1 + 0x74), (ulong)uVar1 != 0)) {
    lVar2 = *(long *)(param_1 + 0x268);
    lVar3 = *(long *)(param_1 + 0x198);
    lVar4 = *(long *)(lVar2 + 0x10);
    lVar5 = *(long *)(lVar2 + 0x18);
    lVar6 = *(long *)(lVar2 + 0x20);
    lVar2 = *(long *)(lVar2 + 0x28);
    do {
      uVar12 = (ulong)param_3;
      lVar7 = *(long *)(*param_2 + uVar12 * 8);
      lVar8 = *(long *)(param_2[1] + uVar12 * 8);
      lVar9 = *(long *)(param_2[2] + uVar12 * 8);
      puVar11 = (undefined1 *)*param_4;
      uVar12 = 0;
      do {
        uVar15 = (ulong)*(byte *)(lVar7 + uVar12);
        uVar13 = (ulong)*(byte *)(lVar8 + uVar12);
        uVar14 = (ulong)*(byte *)(lVar9 + uVar12);
        *puVar11 = *(undefined1 *)(lVar3 + (long)*(int *)(lVar4 + uVar14 * 4) + uVar15);
        puVar11[1] = *(undefined1 *)
                      (lVar3 + (long)(int)((ulong)(*(long *)(lVar6 + uVar14 * 8) +
                                                  *(long *)(lVar2 + uVar13 * 8)) >> 0x10) + uVar15);
        puVar11[2] = *(undefined1 *)(lVar3 + (long)*(int *)(lVar5 + uVar13 * 4) + uVar15);
        uVar12 = uVar12 + 1;
        puVar11 = puVar11 + 3;
      } while (uVar1 != uVar12);
      param_3 = param_3 + 1;
      param_4 = param_4 + 1;
      bVar10 = 1 < param_5;
      param_5 = param_5 + -1;
    } while (bVar10);
  }
  return;
}


