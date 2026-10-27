// Function : null_convert
// Namespace: juce:jpeglibNamespace
// Entry    : 003754a0
// Prototype: undefined null_convert(long param_1, long * param_2, long param_3, uint param_4, int param_5)
// Body     : 003754a0 - 003755e7


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::null_convert(juce::jpeglibNamespace::jpeg_compress_struct*, unsigned
   char**, unsigned char***, unsigned int, int) */

void __cdecl
juce::jpeglibNamespace::null_convert
          (long param_1,long *param_2,long param_3,uint param_4,int param_5)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long lVar10;
  ulong uVar11;
  
  if (0 < param_5) {
    uVar2 = *(uint *)(param_1 + 0x5c);
    lVar10 = (long)(int)uVar2;
    if ((0 < (int)uVar2) && (uVar3 = *(uint *)(param_1 + 0x30), uVar3 != 0)) {
      do {
        uVar11 = 0;
        do {
          puVar8 = (undefined1 *)(*param_2 + uVar11);
          puVar9 = *(undefined1 **)(*(long *)(param_3 + uVar11 * 8) + (ulong)param_4 * 8);
          uVar5 = uVar3;
          if ((uVar3 & 7) != 0) {
            uVar6 = uVar3 & 7;
            do {
              *puVar9 = *puVar8;
              puVar9 = puVar9 + 1;
              puVar8 = puVar8 + lVar10;
              uVar6 = uVar6 - 1;
              uVar5 = uVar3 & 0xfffffff8;
            } while (uVar6 != 0);
          }
          if (6 < uVar3 - 1) {
            lVar7 = 0;
            do {
              puVar9[lVar7] = *puVar8;
              puVar9[lVar7 + 1] = puVar8[lVar10];
              puVar9[lVar7 + 2] = puVar8[lVar10 * 2];
              puVar9[lVar7 + 3] = puVar8[lVar10 * 3];
              puVar9[lVar7 + 4] = puVar8[lVar10 * 4];
              puVar9[lVar7 + 5] = puVar8[lVar10 * 5];
              puVar9[lVar7 + 6] = puVar8[lVar10 * 6];
              puVar1 = puVar8 + lVar10 * 7;
              puVar8 = puVar8 + lVar10 * 8;
              puVar9[lVar7 + 7] = *puVar1;
              lVar7 = lVar7 + 8;
            } while (uVar5 != (uint)lVar7);
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 != uVar2);
        param_2 = param_2 + 1;
        param_4 = param_4 + 1;
        bVar4 = 1 < param_5;
        param_5 = param_5 + -1;
      } while (bVar4);
    }
  }
  return;
}


