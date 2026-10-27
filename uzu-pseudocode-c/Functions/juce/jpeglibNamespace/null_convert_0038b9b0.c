// Function : null_convert
// Namespace: juce:jpeglibNamespace
// Entry    : 0038b9b0
// Prototype: undefined null_convert(long param_1, long param_2, uint param_3, undefined8 * param_4, int param_5)
// Body     : 0038b9b0 - 0038bb5f


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::null_convert(juce::jpeglibNamespace::jpeg_decompress_struct*, unsigned
   char***, unsigned int, unsigned char**, int) */

void __cdecl
juce::jpeglibNamespace::null_convert
          (long param_1,long param_2,uint param_3,undefined8 *param_4,int param_5)

{
  undefined1 uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  int iVar12;
  long lVar13;
  
  if ((0 < param_5) && (iVar12 = *(int *)(param_1 + 0x38), 0 < iVar12)) {
    uVar2 = *(uint *)(param_1 + 0x74);
    lVar10 = (long)*(int *)(param_1 + 0x7c);
    do {
      if ((0 < iVar12) && (uVar2 != 0)) {
        puVar11 = (undefined1 *)*param_4;
        lVar9 = *(long *)(param_1 + 0x120);
        lVar13 = 0;
        do {
          if (*(char *)(lVar9 + 0x34) != '\0') {
            puVar6 = *(undefined1 **)(*(long *)(param_2 + lVar13 * 8) + (ulong)param_3 * 8);
            uVar4 = uVar2;
            puVar7 = puVar11;
            if ((uVar2 & 7) != 0) {
              uVar5 = uVar2 & 7;
              do {
                uVar1 = *puVar6;
                puVar6 = puVar6 + 1;
                *puVar7 = uVar1;
                puVar7 = puVar7 + lVar10;
                uVar5 = uVar5 - 1;
                uVar4 = uVar2 & 0xfffffff8;
              } while (uVar5 != 0);
            }
            if (6 < uVar2 - 1) {
              lVar8 = 0;
              do {
                *puVar7 = puVar6[lVar8];
                puVar7[lVar10] = puVar6[lVar8 + 1];
                puVar7[lVar10 * 2] = puVar6[lVar8 + 2];
                puVar7[lVar10 * 3] = puVar6[lVar8 + 3];
                puVar7[lVar10 * 4] = puVar6[lVar8 + 4];
                puVar7[lVar10 * 5] = puVar6[lVar8 + 5];
                puVar7[lVar10 * 6] = puVar6[lVar8 + 6];
                puVar7[lVar10 * 7] = puVar6[lVar8 + 7];
                puVar7 = puVar7 + lVar10 * 8;
                lVar8 = lVar8 + 8;
              } while (uVar4 != (uint)lVar8);
            }
            puVar11 = puVar11 + 1;
            iVar12 = *(int *)(param_1 + 0x38);
          }
          lVar13 = lVar13 + 1;
          lVar9 = lVar9 + 0x60;
        } while (lVar13 < iVar12);
      }
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
      bVar3 = 1 < param_5;
      param_5 = param_5 + -1;
    } while (bVar3);
  }
  return;
}


