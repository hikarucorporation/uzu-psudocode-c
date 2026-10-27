// Function : rgb_ycc_convert
// Namespace: juce:jpeglibNamespace
// Entry    : 003753b0
// Prototype: undefined rgb_ycc_convert(long param_1, undefined8 * param_2, long * param_3, uint param_4, int param_5)
// Body     : 003753b0 - 00375496


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::rgb_ycc_convert(juce::jpeglibNamespace::jpeg_compress_struct*, unsigned
   char**, unsigned char***, unsigned int, int) */

void __cdecl
juce::jpeglibNamespace::rgb_ycc_convert
          (long param_1,undefined8 *param_2,long *param_3,uint param_4,int param_5)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  if ((0 < param_5) && (uVar1 = *(uint *)(param_1 + 0x30), (ulong)uVar1 != 0)) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x208) + 0x10);
    do {
      pbVar7 = (byte *)*param_2;
      uVar8 = (ulong)param_4;
      lVar3 = *(long *)(*param_3 + uVar8 * 8);
      lVar4 = *(long *)(param_3[1] + uVar8 * 8);
      lVar5 = *(long *)(param_3[2] + uVar8 * 8);
      uVar8 = 0;
      do {
        uVar11 = (ulong)*pbVar7;
        uVar10 = (ulong)pbVar7[1];
        uVar9 = (ulong)pbVar7[2];
        *(char *)(lVar3 + uVar8) =
             (char)((uint)(*(int *)(lVar2 + 0x800 + uVar10 * 8) + *(int *)(lVar2 + uVar11 * 8) +
                          *(int *)(lVar2 + 0x1000 + uVar9 * 8)) >> 0x10);
        *(char *)(lVar4 + uVar8) =
             (char)((uint)(*(int *)(lVar2 + 0x2000 + uVar10 * 8) +
                           *(int *)(lVar2 + 0x1800 + uVar11 * 8) +
                          *(int *)(lVar2 + 0x2800 + uVar9 * 8)) >> 0x10);
        *(char *)(lVar5 + uVar8) =
             (char)((uint)(*(int *)(lVar2 + 0x3000 + uVar10 * 8) +
                           *(int *)(lVar2 + 0x2800 + uVar11 * 8) +
                          *(int *)(lVar2 + 0x3800 + uVar9 * 8)) >> 0x10);
        uVar8 = uVar8 + 1;
        pbVar7 = pbVar7 + 3;
      } while (uVar1 != uVar8);
      param_2 = param_2 + 1;
      param_4 = param_4 + 1;
      bVar6 = 1 < param_5;
      param_5 = param_5 + -1;
    } while (bVar6);
  }
  return;
}


