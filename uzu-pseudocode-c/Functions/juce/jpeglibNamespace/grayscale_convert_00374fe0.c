// Function : grayscale_convert
// Namespace: juce:jpeglibNamespace
// Entry    : 00374fe0
// Prototype: undefined grayscale_convert(long param_1, undefined8 * param_2, long * param_3, uint param_4, int param_5)
// Body     : 00374fe0 - 003750f3


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::grayscale_convert(juce::jpeglibNamespace::jpeg_compress_struct*, unsigned
   char**, unsigned char***, unsigned int, int) */

void __cdecl
juce::jpeglibNamespace::grayscale_convert
          (long param_1,undefined8 *param_2,long *param_3,uint param_4,int param_5)

{
  undefined1 *puVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  
  if ((0 < param_5) && (uVar2 = *(uint *)(param_1 + 0x30), uVar2 != 0)) {
    lVar9 = (long)*(int *)(param_1 + 0x38);
    do {
      puVar5 = (undefined1 *)*param_2;
      puVar8 = *(undefined1 **)(*param_3 + (ulong)param_4 * 8);
      uVar4 = uVar2;
      if ((uVar2 & 7) != 0) {
        uVar6 = uVar2 & 7;
        do {
          *puVar8 = *puVar5;
          puVar8 = puVar8 + 1;
          puVar5 = puVar5 + lVar9;
          uVar6 = uVar6 - 1;
          uVar4 = uVar2 & 0xfffffff8;
        } while (uVar6 != 0);
      }
      if (6 < uVar2 - 1) {
        lVar7 = 0;
        do {
          puVar8[lVar7] = *puVar5;
          puVar8[lVar7 + 1] = puVar5[lVar9];
          puVar8[lVar7 + 2] = puVar5[lVar9 * 2];
          puVar8[lVar7 + 3] = puVar5[lVar9 * 3];
          puVar8[lVar7 + 4] = puVar5[lVar9 * 4];
          puVar8[lVar7 + 5] = puVar5[lVar9 * 5];
          puVar8[lVar7 + 6] = puVar5[lVar9 * 6];
          puVar1 = puVar5 + lVar9 * 7;
          puVar5 = puVar5 + lVar9 * 8;
          puVar8[lVar7 + 7] = *puVar1;
          lVar7 = lVar7 + 8;
        } while (uVar4 != (uint)lVar7);
      }
      param_2 = param_2 + 1;
      param_4 = param_4 + 1;
      bVar3 = 1 < param_5;
      param_5 = param_5 + -1;
    } while (bVar3);
  }
  return;
}


