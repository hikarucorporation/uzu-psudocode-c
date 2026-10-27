// Function : rgb_gray_convert
// Namespace: juce:jpeglibNamespace
// Entry    : 003751c0
// Prototype: undefined rgb_gray_convert(long param_1, undefined8 * param_2, long * param_3, uint param_4, int param_5)
// Body     : 003751c0 - 0037523d


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::rgb_gray_convert(juce::jpeglibNamespace::jpeg_compress_struct*, unsigned
   char**, unsigned char***, unsigned int, int) */

void __cdecl
juce::jpeglibNamespace::rgb_gray_convert
          (long param_1,undefined8 *param_2,long *param_3,uint param_4,int param_5)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  byte *pbVar5;
  ulong uVar6;
  
  if ((0 < param_5) && (uVar1 = *(uint *)(param_1 + 0x30), uVar1 != 0)) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x208) + 0x10);
    do {
      pbVar5 = (byte *)*param_2;
      lVar3 = *(long *)(*param_3 + (ulong)param_4 * 8);
      uVar6 = 0;
      do {
        *(char *)(lVar3 + uVar6) =
             (char)((uint)(*(int *)(lVar2 + 0x800 + (ulong)pbVar5[1] * 8) +
                           *(int *)(lVar2 + (ulong)*pbVar5 * 8) +
                          *(int *)(lVar2 + 0x1000 + (ulong)pbVar5[2] * 8)) >> 0x10);
        uVar6 = uVar6 + 1;
        pbVar5 = pbVar5 + 3;
      } while (uVar1 != uVar6);
      param_2 = param_2 + 1;
      param_4 = param_4 + 1;
      bVar4 = 1 < param_5;
      param_5 = param_5 + -1;
    } while (bVar4);
  }
  return;
}


